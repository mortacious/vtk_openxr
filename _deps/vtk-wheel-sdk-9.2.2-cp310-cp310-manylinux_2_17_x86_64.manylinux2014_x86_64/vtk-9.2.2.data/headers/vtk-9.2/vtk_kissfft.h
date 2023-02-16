/*=========================================================================

  Program:   Visualization Toolkit
  Module:    vtk_kissfft.h

  Copyright (c) Ken Martin, Will Schroeder, Bill Lorensen
  All rights reserved.
  See Copyright.txt or http://www.kitware.com/Copyright.htm for details.

     This software is distributed WITHOUT ANY WARRANTY; without even
     the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
     PURPOSE.  See the above copyright notice for more information.

=========================================================================*/
#ifndef vtk_kissfft_h
#define vtk_kissfft_h

/* Use the kissfft library configured for VTK.  */
#define VTK_MODULE_USE_EXTERNAL_vtkkissfft 0

#if VTK_MODULE_USE_EXTERNAL_vtkkissfft
# define VTK_KISSFFT_HEADER(header) <header>
#else
# define VTK_KISSFFT_HEADER(header) <vtkkissfft/header>
#endif

#endif
