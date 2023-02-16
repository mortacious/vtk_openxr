/*=========================================================================

  Program:   Visualization Toolkit
  Module:    vtk_zfp.h

  Copyright (c) Ken Martin, Will Schroeder, Bill Lorensen
  All rights reserved.
  See Copyright.txt or http://www.kitware.com/Copyright.htm for details.

     This software is distributed WITHOUT ANY WARRANTY; without even
     the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
     PURPOSE.  See the above copyright notice for more information.

=========================================================================*/
#ifndef vtk_zfp_h
#define vtk_zfp_h

/* Use the zfp library configured for VTK.  */
#define VTK_MODULE_USE_EXTERNAL_vtkzfp 0

#if VTK_MODULE_USE_EXTERNAL_vtkzfp
# include <zfp.h>
#else
# include <vtkzfp/inc/zfp.h>
#endif

#endif