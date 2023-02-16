from typing import overload, Any, Callable, TypeVar, Union
from typing import Tuple, List, Sequence, MutableSequence

Callback = Union[Callable[..., None], None]
Buffer = TypeVar('Buffer')
Pointer = TypeVar('Pointer')
Template = TypeVar('Template')

import vtkmodules.vtkCommonCore
import vtkmodules.vtkCommonExecutionModel

class vtkIOSSReader(vtkmodules.vtkCommonExecutionModel.vtkReaderAlgorithm):
    class EntityType(int): ...
    BLOCK_END:'EntityType'
    BLOCK_START:'EntityType'
    EDGEBLOCK:'EntityType'
    EDGESET:'EntityType'
    ELEMENTBLOCK:'EntityType'
    ELEMENTSET:'EntityType'
    ENTITY_END:'EntityType'
    ENTITY_START:'EntityType'
    FACEBLOCK:'EntityType'
    FACESET:'EntityType'
    NODEBLOCK:'EntityType'
    NODESET:'EntityType'
    NUMBER_OF_ENTITY_TYPES:'EntityType'
    SET_END:'EntityType'
    SET_START:'EntityType'
    SIDESET:'EntityType'
    STRUCTUREDBLOCK:'EntityType'
    def AddFileName(self, fname:str) -> None: ...
    @overload
    def AddProperty(self, name:str, value:int) -> None: ...
    @overload
    def AddProperty(self, name:str, value:float) -> None: ...
    @overload
    def AddProperty(self, name:str, value:Pointer) -> None: ...
    @overload
    def AddProperty(self, name:str, value:str) -> None: ...
    def AddSelector(self, selector:str) -> bool: ...
    def ApplyDisplacementsOff(self) -> None: ...
    def ApplyDisplacementsOn(self) -> None: ...
    def ClearFileNames(self) -> None: ...
    def ClearProperties(self) -> None: ...
    def ClearSelectors(self) -> None: ...
    @staticmethod
    def DoTestFilePatternMatching() -> bool: ...
    def GenerateFileIdOff(self) -> None: ...
    def GenerateFileIdOn(self) -> None: ...
    def GetApplyDisplacements(self) -> bool: ...
    def GetAssembly(self) -> 'vtkDataAssembly': ...
    def GetAssemblyTag(self) -> int: ...
    def GetController(self) -> 'vtkMultiProcessController': ...
    @staticmethod
    def GetDataAssemblyNodeNameForEntityType(type:int) -> str: ...
    def GetDatabaseTypeOverride(self) -> str: ...
    def GetDisplacementMagnitude(self) -> float: ...
    def GetEdgeBlockFieldSelection(self) -> 'vtkDataArraySelection': ...
    def GetEdgeBlockIdMapAsString(self) -> 'vtkStringArray': ...
    def GetEdgeBlockSelection(self) -> 'vtkDataArraySelection': ...
    def GetEdgeSetFieldSelection(self) -> 'vtkDataArraySelection': ...
    def GetEdgeSetIdMapAsString(self) -> 'vtkStringArray': ...
    def GetEdgeSetSelection(self) -> 'vtkDataArraySelection': ...
    def GetElementBlockFieldSelection(self) -> 'vtkDataArraySelection': ...
    def GetElementBlockIdMapAsString(self) -> 'vtkStringArray': ...
    def GetElementBlockSelection(self) -> 'vtkDataArraySelection': ...
    def GetElementSetFieldSelection(self) -> 'vtkDataArraySelection': ...
    def GetElementSetIdMapAsString(self) -> 'vtkStringArray': ...
    def GetElementSetSelection(self) -> 'vtkDataArraySelection': ...
    def GetEntityIdMapAsString(self, type:int) -> 'vtkStringArray': ...
    def GetEntitySelection(self, type:int) -> 'vtkDataArraySelection': ...
    @staticmethod
    def GetEntityTypeIsBlock(type:int) -> bool: ...
    @staticmethod
    def GetEntityTypeIsSet(type:int) -> bool: ...
    def GetFaceBlockFieldSelection(self) -> 'vtkDataArraySelection': ...
    def GetFaceBlockIdMapAsString(self) -> 'vtkStringArray': ...
    def GetFaceBlockSelection(self) -> 'vtkDataArraySelection': ...
    def GetFaceSetFieldSelection(self) -> 'vtkDataArraySelection': ...
    def GetFaceSetIdMapAsString(self) -> 'vtkStringArray': ...
    def GetFaceSetSelection(self) -> 'vtkDataArraySelection': ...
    def GetFieldSelection(self, type:int) -> 'vtkDataArraySelection': ...
    def GetFileName(self, index:int) -> str: ...
    def GetFileRange(self) -> Tuple[int, int]: ...
    def GetFileStride(self) -> int: ...
    def GetFileStrideMaxValue(self) -> int: ...
    def GetFileStrideMinValue(self) -> int: ...
    def GetGenerateFileId(self) -> bool: ...
    def GetMTime(self) -> int: ...
    def GetNodeBlockFieldSelection(self) -> 'vtkDataArraySelection': ...
    def GetNodeBlockIdMapAsString(self) -> 'vtkStringArray': ...
    def GetNodeBlockSelection(self) -> 'vtkDataArraySelection': ...
    def GetNodeSetFieldSelection(self) -> 'vtkDataArraySelection': ...
    def GetNodeSetIdMapAsString(self) -> 'vtkStringArray': ...
    def GetNodeSetSelection(self) -> 'vtkDataArraySelection': ...
    def GetNumberOfFileNames(self) -> int: ...
    def GetNumberOfGenerationsFromBase(self, type:str) -> int: ...
    @staticmethod
    def GetNumberOfGenerationsFromBaseType(type:str) -> int: ...
    def GetNumberOfSelectors(self) -> int: ...
    def GetReadGlobalFields(self) -> bool: ...
    def GetReadIds(self) -> bool: ...
    def GetReadQAAndInformationRecords(self) -> bool: ...
    def GetRemoveUnusedPoints(self) -> bool: ...
    def GetScanForRelatedFiles(self) -> bool: ...
    def GetSelector(self, index:int) -> str: ...
    def GetSideSetFieldSelection(self) -> 'vtkDataArraySelection': ...
    def GetSideSetIdMapAsString(self) -> 'vtkStringArray': ...
    def GetSideSetSelection(self) -> 'vtkDataArraySelection': ...
    def GetStructuredBlockFieldSelection(self) -> 'vtkDataArraySelection': ...
    def GetStructuredBlockIdMapAsString(self) -> 'vtkStringArray': ...
    def GetStructuredBlockSelection(self) -> 'vtkDataArraySelection': ...
    def IsA(self, type:str) -> int: ...
    @staticmethod
    def IsTypeOf(type:str) -> int: ...
    def NewInstance(self) -> 'vtkIOSSReader': ...
    def ReadArrays(self, __a:int, __b:int, __c:int, __d:int, __e:'vtkDataObject') -> int: ...
    def ReadGlobalFieldsOff(self) -> None: ...
    def ReadGlobalFieldsOn(self) -> None: ...
    def ReadIdsOff(self) -> None: ...
    def ReadIdsOn(self) -> None: ...
    def ReadMesh(self, piece:int, npieces:int, nghosts:int, timestep:int, output:'vtkDataObject') -> int: ...
    def ReadMetaData(self, metadata:'vtkInformation') -> int: ...
    def ReadPoints(self, __a:int, __b:int, __c:int, __d:int, __e:'vtkDataObject') -> int: ...
    def ReadQAAndInformationRecordsOff(self) -> None: ...
    def ReadQAAndInformationRecordsOn(self) -> None: ...
    def RemoveAllEntitySelections(self) -> None: ...
    def RemoveAllFieldSelections(self) -> None: ...
    def RemoveAllSelections(self) -> None: ...
    def RemoveProperty(self, name:str) -> None: ...
    def RemoveUnusedPointsOff(self) -> None: ...
    def RemoveUnusedPointsOn(self) -> None: ...
    @staticmethod
    def SafeDownCast(o:'vtkObjectBase') -> 'vtkIOSSReader': ...
    def ScanForRelatedFilesOff(self) -> None: ...
    def ScanForRelatedFilesOn(self) -> None: ...
    def SetApplyDisplacements(self, _arg:bool) -> None: ...
    def SetController(self, controller:'vtkMultiProcessController') -> None: ...
    def SetDatabaseTypeOverride(self, _arg:str) -> None: ...
    def SetDisplacementMagnitude(self, magnitude:float) -> None: ...
    def SetFileName(self, fname:str) -> None: ...
    @overload
    def SetFileRange(self, _arg1:int, _arg2:int) -> None: ...
    @overload
    def SetFileRange(self, _arg:Sequence[int]) -> None: ...
    def SetFileStride(self, _arg:int) -> None: ...
    def SetGenerateFileId(self, _arg:bool) -> None: ...
    def SetReadGlobalFields(self, _arg:bool) -> None: ...
    def SetReadIds(self, _arg:bool) -> None: ...
    def SetReadQAAndInformationRecords(self, _arg:bool) -> None: ...
    def SetRemoveUnusedPoints(self, __a:bool) -> None: ...
    def SetScanForRelatedFiles(self, value:bool) -> None: ...
    def SetSelector(self, selector:str) -> None: ...

class vtkIOSSWriter(vtkmodules.vtkCommonExecutionModel.vtkDataObjectAlgorithm):
    def GetController(self) -> 'vtkMultiProcessController': ...
    def GetDisplacementMagnitude(self) -> float: ...
    def GetDisplacementMagnitudeMaxValue(self) -> float: ...
    def GetDisplacementMagnitudeMinValue(self) -> float: ...
    def GetFileName(self) -> str: ...
    def GetMaximumTimeStepsPerFile(self) -> int: ...
    def GetMaximumTimeStepsPerFileMaxValue(self) -> int: ...
    def GetMaximumTimeStepsPerFileMinValue(self) -> int: ...
    def GetNumberOfGenerationsFromBase(self, type:str) -> int: ...
    @staticmethod
    def GetNumberOfGenerationsFromBaseType(type:str) -> int: ...
    def GetOffsetGlobalIds(self) -> bool: ...
    def GetPreserveInputEntityGroups(self) -> bool: ...
    def IsA(self, type:str) -> int: ...
    @staticmethod
    def IsTypeOf(type:str) -> int: ...
    def NewInstance(self) -> 'vtkIOSSWriter': ...
    def OffsetGlobalIdsOff(self) -> None: ...
    def OffsetGlobalIdsOn(self) -> None: ...
    def PreserveInputEntityGroupsOff(self) -> None: ...
    def PreserveInputEntityGroupsOn(self) -> None: ...
    @staticmethod
    def SafeDownCast(o:'vtkObjectBase') -> 'vtkIOSSWriter': ...
    def SetController(self, controller:'vtkMultiProcessController') -> None: ...
    def SetDisplacementMagnitude(self, _arg:float) -> None: ...
    def SetFileName(self, _arg:str) -> None: ...
    def SetMaximumTimeStepsPerFile(self, _arg:int) -> None: ...
    def SetOffsetGlobalIds(self, _arg:bool) -> None: ...
    def SetPreserveInputEntityGroups(self, _arg:bool) -> None: ...
    def Write(self) -> bool: ...

