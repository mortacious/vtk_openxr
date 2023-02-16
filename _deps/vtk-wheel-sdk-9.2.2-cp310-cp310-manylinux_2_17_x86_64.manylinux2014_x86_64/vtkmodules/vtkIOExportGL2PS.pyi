from typing import overload, Any, Callable, TypeVar, Union
from typing import Tuple, List, Sequence, MutableSequence

Callback = Union[Callable[..., None], None]
Buffer = TypeVar('Buffer')
Pointer = TypeVar('Pointer')
Template = TypeVar('Template')

import vtkmodules.vtkCommonCore
import vtkmodules.vtkIOExport

class vtkGL2PSExporter(vtkmodules.vtkIOExport.vtkExporter):
    class SortScheme(int): ...
    class OutputFormat(int): ...
    BSP_SORT:'SortScheme'
    EPS_FILE:'OutputFormat'
    NO_SORT:'SortScheme'
    PDF_FILE:'OutputFormat'
    PS_FILE:'OutputFormat'
    SIMPLE_SORT:'SortScheme'
    SVG_FILE:'OutputFormat'
    TEX_FILE:'OutputFormat'
    def BestRootOff(self) -> None: ...
    def BestRootOn(self) -> None: ...
    def CompressOff(self) -> None: ...
    def CompressOn(self) -> None: ...
    def DrawBackgroundOff(self) -> None: ...
    def DrawBackgroundOn(self) -> None: ...
    def GetBestRoot(self) -> int: ...
    def GetBufferSize(self) -> int: ...
    def GetCompress(self) -> int: ...
    def GetDrawBackground(self) -> int: ...
    def GetFileFormat(self) -> int: ...
    def GetFileFormatAsString(self) -> str: ...
    def GetFileFormatMaxValue(self) -> int: ...
    def GetFileFormatMinValue(self) -> int: ...
    def GetFilePrefix(self) -> str: ...
    def GetLandscape(self) -> int: ...
    def GetLineWidthFactor(self) -> float: ...
    def GetNumberOfGenerationsFromBase(self, type:str) -> int: ...
    @staticmethod
    def GetNumberOfGenerationsFromBaseType(type:str) -> int: ...
    def GetOcclusionCull(self) -> int: ...
    def GetPS3Shading(self) -> int: ...
    def GetPointSizeFactor(self) -> float: ...
    def GetRasterExclusions(self) -> 'vtkPropCollection': ...
    def GetSilent(self) -> int: ...
    def GetSimpleLineOffset(self) -> int: ...
    def GetSort(self) -> int: ...
    def GetSortAsString(self) -> str: ...
    def GetSortMaxValue(self) -> int: ...
    def GetSortMinValue(self) -> int: ...
    def GetText(self) -> int: ...
    def GetTextAsPath(self) -> bool: ...
    def GetTitle(self) -> str: ...
    def GetWrite3DPropsAsRasterImage(self) -> int: ...
    def IsA(self, type:str) -> int: ...
    @staticmethod
    def IsTypeOf(type:str) -> int: ...
    def LandscapeOff(self) -> None: ...
    def LandscapeOn(self) -> None: ...
    def NewInstance(self) -> 'vtkGL2PSExporter': ...
    def OcclusionCullOff(self) -> None: ...
    def OcclusionCullOn(self) -> None: ...
    def PS3ShadingOff(self) -> None: ...
    def PS3ShadingOn(self) -> None: ...
    @staticmethod
    def SafeDownCast(o:'vtkObjectBase') -> 'vtkGL2PSExporter': ...
    def SetBestRoot(self, _arg:int) -> None: ...
    def SetBufferSize(self, _arg:int) -> None: ...
    def SetCompress(self, _arg:int) -> None: ...
    def SetDrawBackground(self, _arg:int) -> None: ...
    def SetFileFormat(self, _arg:int) -> None: ...
    def SetFileFormatToEPS(self) -> None: ...
    def SetFileFormatToPDF(self) -> None: ...
    def SetFileFormatToPS(self) -> None: ...
    def SetFileFormatToSVG(self) -> None: ...
    def SetFileFormatToTeX(self) -> None: ...
    def SetFilePrefix(self, _arg:str) -> None: ...
    def SetLandscape(self, _arg:int) -> None: ...
    def SetLineWidthFactor(self, _arg:float) -> None: ...
    def SetOcclusionCull(self, _arg:int) -> None: ...
    def SetPS3Shading(self, _arg:int) -> None: ...
    def SetPointSizeFactor(self, _arg:float) -> None: ...
    def SetRasterExclusions(self, __a:'vtkPropCollection') -> None: ...
    def SetSilent(self, _arg:int) -> None: ...
    def SetSimpleLineOffset(self, _arg:int) -> None: ...
    def SetSort(self, _arg:int) -> None: ...
    def SetSortToBSP(self) -> None: ...
    def SetSortToOff(self) -> None: ...
    def SetSortToSimple(self) -> None: ...
    def SetText(self, _arg:int) -> None: ...
    def SetTextAsPath(self, _arg:bool) -> None: ...
    def SetTitle(self, _arg:str) -> None: ...
    def SetWrite3DPropsAsRasterImage(self, _arg:int) -> None: ...
    def SilentOff(self) -> None: ...
    def SilentOn(self) -> None: ...
    def SimpleLineOffsetOff(self) -> None: ...
    def SimpleLineOffsetOn(self) -> None: ...
    def TextAsPathOff(self) -> None: ...
    def TextAsPathOn(self) -> None: ...
    def TextOff(self) -> None: ...
    def TextOn(self) -> None: ...
    def UsePainterSettings(self) -> None: ...
    def Write3DPropsAsRasterImageOff(self) -> None: ...
    def Write3DPropsAsRasterImageOn(self) -> None: ...

class vtkOpenGLGL2PSExporter(vtkGL2PSExporter):
    def GetNumberOfGenerationsFromBase(self, type:str) -> int: ...
    @staticmethod
    def GetNumberOfGenerationsFromBaseType(type:str) -> int: ...
    def IsA(self, type:str) -> int: ...
    @staticmethod
    def IsTypeOf(type:str) -> int: ...
    def NewInstance(self) -> 'vtkOpenGLGL2PSExporter': ...
    @staticmethod
    def SafeDownCast(o:'vtkObjectBase') -> 'vtkOpenGLGL2PSExporter': ...
