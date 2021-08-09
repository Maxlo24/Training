#!/usr/bin/env python
#Autor : Maxime GILLOT

import argparse as ap
import itk
import vtk

def itk_process():
    print(args.InputImg)
    print(args.OutputImg)
    print(args.rad)
    image = itk.imread(args.InputImg, itk.UC)
    median = itk.median_image_filter(image, radius=args.rad)
    itk.imwrite(median, args.OutputImg + ".jpeg")

def vtk_render():
        #VTK

    colors = vtk.vtkNamedColors()
    # Read the source file.
    reader = vtk.vtkJPEGReader()
    reader.SetFileName(args.InputImg)

    # Create the mapper that creates graphics elements
    mapper = vtk.vtkDataSetMapper()
    mapper.SetInputConnection(reader.GetOutputPort())
    

    # Create the Actor
    actorInit = vtk.vtkActor()
    actorInit.SetMapper(mapper)
    # show the edges of the image grid
    actorInit.GetProperty().SetRepresentationToWireframe()

    #2nd Image

    # Read the source file.
    reader = vtk.vtkJPEGReader()
    reader.SetFileName(args.OutputImg + ".jpeg")

    # Create the mapper that creates graphics elements
    mapper = vtk.vtkDataSetMapper()
    mapper.SetInputConnection(reader.GetOutputPort())

    # transform = vtk.vtkTransform()
    # transform.Translate(5,5,5)

    # Create the Actor
    actorOut = vtk.vtkActor()
    actorOut.SetMapper(mapper)
    # show the edges of the image grid
    actorOut.GetProperty().SetRepresentationToWireframe()
    # actorOut.SetScale(-1)
    actorOut.SetPosition(1000, 0, 0)

    # Create one text property for all.
    textProperty = vtk.vtkTextProperty()
    textProperty.SetFontSize(80)
    textProperty.SetJustificationToCentered()
    textProperty.SetColor(colors.GetColor3d('LightGoldenrodYellow'))

    txt = vtk.vtkTextSource()
    txt.SetText('Median filter, r = '+ str(args.rad))
    txt.BackingOff()

    textmappers=vtk.vtkTextMapper()
    textmappers.SetInput(txt.GetText())
    textmappers.SetTextProperty(textProperty)

    textactors=vtk.vtkActor2D()
    textactors.SetMapper(textmappers)
    textactors.SetPosition(400, 50)


    # Create the Renderer
    renderer = vtk.vtkRenderer()
    renderer.AddActor(actorInit)
    renderer.AddActor(actorOut)
    renderer.AddActor(textactors)
    renderer.ResetCamera()
    renderer.SetBackground(colors.GetColor3d('Silver'))

    # Create the RendererWindow
    renderer_window = vtk.vtkRenderWindow()
    renderer_window.AddRenderer(renderer)
    renderer_window.SetWindowName('ReadImageData')

    # Create the RendererWindowInteractor and display the vti file
    interactor = vtk.vtkRenderWindowInteractor()
    interactor.SetRenderWindow(renderer_window)
    interactor.Initialize()
    interactor.Start()

def main():
    print("Algo start")

    itk_process()
    vtk_render()

    print("Algo End")

if __name__ == '__main__':
    parser = ap.ArgumentParser(description="Aply a median filter to the input image and plot the result in a vtk render")
    parser.add_argument("InputImg", help="The path of your input image (.jpeg)", type=str)
    parser.add_argument("-o","--OutputImg", help="Name of your output image (Exit)", type=str, default="Exit")
    parser.add_argument("-r","--rad", help="Radius of the median filter",type=int, default=2)
    args = parser.parse_args()
    main()