#pragma once

#include "RE/ActivateHandler.h"
#include "RE/ActiveEffect.h"
#include "RE/ActiveEffectReferenceEffectController.h"
#include "RE/Actor.h"
#include "RE/ActorKnowledge.h"
#include "RE/ActorMover.h"
#include "RE/ActorProcessManager.h"
#include "RE/ActorSpeedChannel.h"
#include "RE/ActorState.h"
#include "RE/ActorValueOwner.h"
#include "RE/ActorValues.h"
#include "RE/ahkpCharacterProxy.h"
#include "RE/ahkpWorld.h"
#include "RE/AlchemyItem.h"
#include "RE/AlchemyMenu.h"
#include "RE/AnimationVariableData.h"
#include "RE/ArrowProjectile.h"
#include "RE/Atmosphere.h"
#include "RE/AttackAnimationArrayMap.h"
#include "RE/AttackBlockHandler.h"
#include "RE/AutoMoveHandler.h"
#include "RE/AutoRegisterCreator.h"
#include "RE/AutoRegisterFactory.h"
#include "RE/BarrierProjectile.h"
#include "RE/BaseExtraList.h"
#include "RE/BaseFormComponent.h"
#include "RE/BeamProjectile.h"
#include "RE/BGSAbilityPerkEntry.h"
#include "RE/BGSAcousticSpace.h"
#include "RE/BGSAction.h"
#include "RE/BGSActorCellEvent.h"
#include "RE/BGSActorDeathEvent.h"
#include "RE/BGSAddonNode.h"
#include "RE/BGSApparatus.h"
#include "RE/BGSAttackData.h"
#include "RE/BGSAttackDataForm.h"
#include "RE/BGSAttackDataMap.h"
#include "RE/BGSBaseAlias.h"
#include "RE/BGSBehaviorGraphModel.h"
#include "RE/BGSBipedObjectForm.h"
#include "RE/BGSBlockBashData.h"
#include "RE/BGSBodyPartData.h"
#include "RE/BGSConstructibleObject.h"
#include "RE/BGSDebris.h"
#include "RE/BGSDestructibleObjectForm.h"
#include "RE/BGSDialogueBranch.h"
#include "RE/BGSDistantTreeBlock.h"
#include "RE/BGSEntryPointFunctionData.h"
#include "RE/BGSEntryPointFunctionDataActivateChoice.h"
#include "RE/BGSEntryPointFunctionDataOneValue.h"
#include "RE/BGSEntryPointFunctionDataText.h"
#include "RE/BGSEntryPointPerkEntry.h"
#include "RE/BGSEquipSlot.h"
#include "RE/BGSEquipType.h"
#include "RE/BGSExplosion.h"
#include "RE/BGSHazard.h"
#include "RE/BGSHeadPart.h"
#include "RE/BGSIdleCollection.h"
#include "RE/BGSIdleMarker.h"
#include "RE/BGSKeyword.h"
#include "RE/BGSKeywordForm.h"
#include "RE/BGSListForm.h"
#include "RE/BGSLocationRefType.h"
#include "RE/BGSMenuDisplayObject.h"
#include "RE/BGSMenuIcon.h"
#include "RE/BGSMessageIcon.h"
#include "RE/BGSMovableStatic.h"
#include "RE/BGSMoviePlayer.h"
#include "RE/BGSNamedPackageData.h"
#include "RE/BGSNote.h"
#include "RE/BGSOpenCloseForm.h"
#include "RE/BGSOverridePackCollection.h"
#include "RE/BGSPackageDataBool.h"
#include "RE/BGSPerk.h"
#include "RE/BGSPerkEntry.h"
#include "RE/BGSPerkRankArray.h"
#include "RE/BGSPickupPutdownSounds.h"
#include "RE/BGSPreloadable.h"
#include "RE/BGSProcedureTreeBranch.h"
#include "RE/BGSProcedureTreeConditionalItem.h"
#include "RE/BGSProcedureTreeProcedure.h"
#include "RE/BGSProcedureTreeSequence.h"
#include "RE/BGSProjectile.h"
#include "RE/BGSRefAlias.h"
#include "RE/BGSReferenceEffect.h"
#include "RE/BGSShaderParticleGeometryData.h"
#include "RE/BGSSkinForm.h"
#include "RE/BGSSoundCategory.h"
#include "RE/BGSSoundDescriptor.h"
#include "RE/BGSSoundDescriptorForm.h"
#include "RE/BGSStandardSoundDef.h"
#include "RE/BGSStaticCollection.h"
#include "RE/BGSStoryManagerTreeForm.h"
#include "RE/BGSTalkingActivator.h"
#include "RE/BGSTextureModel.h"
#include "RE/BGSTextureSet.h"
#include "RE/BGSTypedItem.h"
#include "RE/bhkCachingShapePhantom.h"
#include "RE/bhkCharacterController.h"
#include "RE/bhkCharacterMoveFinishEvent.h"
#include "RE/bhkCharacterPointCollector.h"
#include "RE/bhkCharacterProxy.h"
#include "RE/bhkCharacterState.h"
#include "RE/bhkCharacterStateClimbing.h"
#include "RE/bhkCharacterStateFlying.h"
#include "RE/bhkCharacterStateInAir.h"
#include "RE/bhkCharacterStateJumping.h"
#include "RE/bhkCharacterStateOnGround.h"
#include "RE/bhkCharacterStateSwimming.h"
#include "RE/bhkCharProxyController.h"
#include "RE/bhkListShape.h"
#include "RE/bhkPhantom.h"
#include "RE/bhkRefObject.h"
#include "RE/bhkSerializable.h"
#include "RE/bhkShape.h"
#include "RE/bhkShapeCollection.h"
#include "RE/bhkShapePhantom.h"
#include "RE/bhkWorldObject.h"
#include "RE/BSAnimationGraphChannel.h"
#include "RE/BSAnimationGraphEvent.h"
#include "RE/BSAnimationGraphManager.h"
#include "RE/BSAudioManager.h"
#include "RE/BSAudioManagerThread.h"
#include "RE/BSBound.h"
#include "RE/BSCoreTypes.h"
#include "RE/BSExtraData.h"
#include "RE/BSFadeNode.h"
#include "RE/BSFixedString.h"
#include "RE/BSGamepadDevice.h"
#include "RE/BSGameSound.h"
#include "RE/BSGlobalStringTable.h"
#include "RE/BSHandleRefObject.h"
#include "RE/BShkbAnimationGraph.h"
#include "RE/BSIInputDevice.h"
#include "RE/BSImagespaceShader.h"
#include "RE/BSImagespaceShaderBlur3.h"
#include "RE/BSInputDevice.h"
#include "RE/BSIntrusiveRefCounted.h"
#include "RE/BSIRagdollDriver.h"
#include "RE/BSISoundCategory.h"
#include "RE/BSISoundDescriptor.h"
#include "RE/BSKeyboardDevice.h"
#include "RE/BSMouseDevice.h"
#include "RE/BSMusicEvent.h"
#include "RE/BSNavmesh.h"
#include "RE/BSNavmeshInfoMap.h"
#include "RE/BSPCGamepadDeviceDelegate.h"
#include "RE/BSPCGamepadDeviceHandler.h"
#include "RE/BSPrecomputedNavmeshInfoPathMap.h"
#include "RE/BSReadWriteLock.h"
#include "RE/BSReloadShaderI.h"
#include "RE/BSResourceNiBinaryStream.h"
#include "RE/BSSaveDataSystemUtility.h"
#include "RE/BSScaleformTranslator.h"
#include "RE/BSScriptArray.h"
#include "RE/BSScriptArrayTypeTraits.h"
#include "RE/BSScriptClass.h"
#include "RE/BSScriptCommonTypeTraits.h"
#include "RE/BSScriptObject.h"
#include "RE/BSScriptObjectBindPolicy.h"
#include "RE/BSScriptObjectTypeTraits.h"
#include "RE/BSScriptPackUnpack.h"
#include "RE/BSScriptStack.h"
#include "RE/BSScriptType.h"
#include "RE/BSScriptTypeTraits.h"
#include "RE/BSScriptVariable.h"
#include "RE/BSShader.h"
#include "RE/BSSpinLock.h"
#include "RE/BSStorage.h"
#include "RE/BSString.h"
#include "RE/BSSystemFileStorage.h"
#include "RE/BSTAnimationGraphDataChannel.h"
#include "RE/BSTArray.h"
#include "RE/BSTCreateFactoryManager.h"
#include "RE/BSTDerivedCreator.h"
#include "RE/BSTEvent.h"
#include "RE/BSTextureSet.h"
#include "RE/BSTFreeList.h"
#include "RE/BSTHashMap.h"
#include "RE/BSThread.h"
#include "RE/BSTList.h"
#include "RE/BSTMessageQueue.h"
#include "RE/BSTransformDeltaEvent.h"
#include "RE/BSTScatterTable.h"
#include "RE/BSTSingleton.h"
#include "RE/BSTSmartPointer.h"
#include "RE/BSUIMessageData.h"
#include "RE/BSVirtualKeyboardDevice.h"
#include "RE/BSWin32GamepadDevice.h"
#include "RE/BSWin32KeyboardDevice.h"
#include "RE/BSWin32MouseDevice.h"
#include "RE/BSWin32SaveDataSystemUtility.h"
#include "RE/BSXAudio2GameSound.h"
#include "RE/ButtonEvent.h"
#include "RE/Character.h"
#include "RE/ChestsLooted.h"
#include "RE/Clouds.h"
#include "RE/Color.h"
#include "RE/CommandTable.h"
#include "RE/CompiledScriptLoader.h"
#include "RE/ConcreteFormFactory.h"
#include "RE/ConcreteObjectFormFactory.h"
#include "RE/Condition.h"
#include "RE/ConeProjectile.h"
#include "RE/Console.h"
#include "RE/ConsoleData.h"
#include "RE/ConsoleManager.h"
#include "RE/ConstructibleObjectMenu.h"
#include "RE/CraftingMenu.h"
#include "RE/CraftingSubMenu.h"
#include "RE/CRC.h"
#include "RE/DeviceTypes.h"
#include "RE/DialogueData.h"
#include "RE/DirectionalAmbientLightingColor.h"
#include "RE/Effect.h"
#include "RE/EffectSetting.h"
#include "RE/EnchantConstructMenu.h"
#include "RE/EnchantmentItem.h"
#include "RE/EquipManager.h"
#include "RE/ErrorLogger.h"
#include "RE/ExtraAliasInstanceArray.h"
#include "RE/ExtraAshPileRef.h"
#include "RE/ExtraContainerChanges.h"
#include "RE/ExtraCount.h"
#include "RE/ExtraDataTypes.h"
#include "RE/ExtraDismemberedLimbs.h"
#include "RE/ExtraDroppedItemList.h"
#include "RE/ExtraEnchantment.h"
#include "RE/ExtraEncounterZone.h"
#include "RE/ExtraFactionChanges.h"
#include "RE/ExtraFlags.h"
#include "RE/ExtraFollowerSwimBreadcrumbs.h"
#include "RE/ExtraGhost.h"
#include "RE/ExtraHealth.h"
#include "RE/ExtraHotkey.h"
#include "RE/ExtraItemDropper.h"
#include "RE/ExtraLastFinishedSequence.h"
#include "RE/ExtraLeveledCreature.h"
#include "RE/ExtraLocationRefType.h"
#include "RE/ExtraLock.h"
#include "RE/ExtraMapMarker.h"
#include "RE/ExtraMissingLinkedRefIDs.h"
#include "RE/ExtraMultiBoundRef.h"
#include "RE/ExtraObjectHealth.h"
#include "RE/ExtraOutfitItem.h"
#include "RE/ExtraOwnership.h"
#include "RE/ExtraPoison.h"
#include "RE/ExtraPromotedRef.h"
#include "RE/ExtraRaceData.h"
#include "RE/ExtraReferenceHandle.h"
#include "RE/ExtraStartingPosition.h"
#include "RE/ExtraTerminalState.h"
#include "RE/ExtraTextDisplayData.h"
#include "RE/ExtraUniqueID.h"
#include "RE/FavoritesHandler.h"
#include "RE/FlameProjectile.h"
#include "RE/FormTypes.h"
#include "RE/FunctionArguments.h"
#include "RE/FunctionMessage.h"
#include "RE/FxDelegate.h"
#include "RE/FxDelegateArgs.h"
#include "RE/FxDelegateHandler.h"
#include "RE/GAtomic.h"
#include "RE/GColor.h"
#include "RE/GFxEvent.h"
#include "RE/GFxExternalInterface.h"
#include "RE/GFxFileConstants.h"
#include "RE/GFxFunctionHandler.h"
#include "RE/GFxKey.h"
#include "RE/GFxKeyboardState.h"
#include "RE/GFxLoader.h"
#include "RE/GFxMovie.h"
#include "RE/GFxMovieDef.h"
#include "RE/GFxMovieRoot.h"
#include "RE/GFxMovieView.h"
#include "RE/GFxPlayerStats.h"
#include "RE/GFxResource.h"
#include "RE/GFxResourceID.h"
#include "RE/GFxResourceKey.h"
#include "RE/GFxSpecialKeysState.h"
#include "RE/GFxState.h"
#include "RE/GFxStateBag.h"
#include "RE/GFxTranslator.h"
#include "RE/GFxValue.h"
#include "RE/GList.h"
#include "RE/GMatrix2D.h"
#include "RE/GMemory.h"
#include "RE/GMemoryHeap.h"
#include "RE/GNewOverrideBase.h"
#include "RE/GPtr.h"
#include "RE/GRect.h"
#include "RE/GRefCountBase.h"
#include "RE/GRefCountBaseNTS.h"
#include "RE/GRefCountBaseStatImpl.h"
#include "RE/GRefCountImpl.h"
#include "RE/GRefCountImplCore.h"
#include "RE/GRefCountNTSImpl.h"
#include "RE/GrenadeProjectile.h"
#include "RE/GStats.h"
#include "RE/GString.h"
#include "RE/GViewport.h"
#include "RE/HandlePolicy.h"
#include "RE/Hazard.h"
#include "RE/HeldStateHandler.h"
#include "RE/hkArray.h"
#include "RE/hkBaseObject.h"
#include "RE/hkbBehaviorGraph.h"
#include "RE/hkbBindable.h"
#include "RE/hkbCharacter.h"
#include "RE/hkbEvent.h"
#include "RE/hkbEventBase.h"
#include "RE/hkbGenerator.h"
#include "RE/hkbNode.h"
#include "RE/hkbRagdollDriver.h"
#include "RE/hkbStateMachine.h"
#include "RE/hkpAllCdPointCollector.h"
#include "RE/hkpCachingShapePhantom.h"
#include "RE/hkpCdPointCollector.h"
#include "RE/hkpCharacterContext.h"
#include "RE/hkpCharacterProxy.h"
#include "RE/hkpCharacterProxyListener.h"
#include "RE/hkpCharacterState.h"
#include "RE/hkpCharacterStateManager.h"
#include "RE/hkpConstraintOwner.h"
#include "RE/hkpEntity.h"
#include "RE/hkpEntityListener.h"
#include "RE/hkpFixedRigidMotion.h"
#include "RE/hkpKeyframedRigidMotion.h"
#include "RE/hkpListShape.h"
#include "RE/hkpMotion.h"
#include "RE/hkpPhantom.h"
#include "RE/hkpPhantomListener.h"
#include "RE/hkpRigidBody.h"
#include "RE/hkpShape.h"
#include "RE/hkpShapeCollection.h"
#include "RE/hkpShapeContainer.h"
#include "RE/hkpShapePhantom.h"
#include "RE/hkpSimulationIsland.h"
#include "RE/hkpWorld.h"
#include "RE/hkpWorldObject.h"
#include "RE/hkReferencedObject.h"
#include "RE/hkRefPtr.h"
#include "RE/hkRefVariant.h"
#include "RE/hkStringPtr.h"
#include "RE/IAIWorldLocationHandle.h"
#include "RE/IAnimationGraphManagerHolder.h"
#include "RE/IAnimationSetCallbackFunctor.h"
#include "RE/IBSTCreator.h"
#include "RE/IDEvent.h"
#include "RE/IFormFactory.h"
#include "RE/IFunction.h"
#include "RE/IFunctionArguments.h"
#include "RE/ILoader.h"
#include "RE/ImageSpaceEffect.h"
#include "RE/ImageSpaceEffectParam.h"
#include "RE/ImageSpaceShaderParam.h"
#include "RE/IMapCameraCallbacks.h"
#include "RE/IMemoryPagePolicy.h"
#include "RE/IMenu.h"
#include "RE/IMessageBoxCallback.h"
#include "RE/IMovementControllerRegisterInterface.h"
#include "RE/IMovementDirectControl.h"
#include "RE/IMovementInterface.h"
#include "RE/IMovementMessageInterface.h"
#include "RE/IMovementMotionDrivenControl.h"
#include "RE/IMovementPlannerDirectControl.h"
#include "RE/IMovementSelectIdle.h"
#include "RE/IMovementState.h"
#include "RE/IngredientItem.h"
#include "RE/InputEvent.h"
#include "RE/InputManager.h"
#include "RE/InputMappingManager.h"
#include "RE/InputStringHolder.h"
#include "RE/Inventory.h"
#include "RE/InventoryChanges.h"
#include "RE/InventoryEntryData.h"
#include "RE/InventoryMenu.h"
#include "RE/IObjectHandlePolicy.h"
#include "RE/IObjectProcessor.h"
#include "RE/IPackageData.h"
#include "RE/IPostAnimationChannelUpdateFunctor.h"
#include "RE/IProcedureTreeItem.h"
#include "RE/ISavePatcherInterface.h"
#include "RE/IStackCallbackFunctor.h"
#include "RE/IStore.h"
#include "RE/ItemCrafted.h"
#include "RE/ItemsPickpocketed.h"
#include "RE/IUIMessageData.h"
#include "RE/IVirtualMachine.h"
#include "RE/IVMDebugInterface.h"
#include "RE/IVMObjectBindInterface.h"
#include "RE/IVMSaveLoadInterface.h"
#include "RE/IXAudio2VoiceCallback.h"
#include "RE/JumpHandler.h"
#include "RE/LinkerProcessor.h"
#include "RE/LocalMapCamera.h"
#include "RE/LocalMapMenu.h"
#include "RE/LogEvent.h"
#include "RE/Logger.h"
#include "RE/LookHandler.h"
#include "RE/MagicItem.h"
#include "RE/MagicTarget.h"
#include "RE/MapCamera.h"
#include "RE/MapInputHandler.h"
#include "RE/MapLookHandler.h"
#include "RE/MapMenu.h"
#include "RE/MapMoveHandler.h"
#include "RE/MapZoomHandler.h"
#include "RE/Memory.h"
#include "RE/MenuControls.h"
#include "RE/MenuEventHandler.h"
#include "RE/MenuManager.h"
#include "RE/MenuOpenCloseEvent.h"
#include "RE/MenuOpenHandler.h"
#include "RE/MessageBoxData.h"
#include "RE/MessageBoxMenu.h"
#include "RE/MiddleProcess.h"
#include "RE/Misc.h"
#include "RE/MissileProjectile.h"
#include "RE/Moon.h"
#include "RE/MovementControllerAI.h"
#include "RE/MovementControllerNPC.h"
#include "RE/MovementHandler.h"
#include "RE/MoviePlayer.h"
#include "RE/NativeFunction.h"
#include "RE/NativeFunctionBase.h"
#include "RE/NavMesh.h"
#include "RE/NavMeshInfoMap.h"
#include "RE/NiAnimationKey.h"
#include "RE/NiAVObject.h"
#include "RE/NiBinaryStream.h"
#include "RE/NiBoneMatrixSetterI.h"
#include "RE/NiCamera.h"
#include "RE/NiColor.h"
#include "RE/NiColorData.h"
#include "RE/NiColorInterpolator.h"
#include "RE/NiColorKey.h"
#include "RE/NiControllerManager.h"
#include "RE/NiControllerSequence.h"
#include "RE/NiExtraData.h"
#include "RE/NiFloatData.h"
#include "RE/NiFloatInterpolator.h"
#include "RE/NiFloatKey.h"
#include "RE/NiInterpolator.h"
#include "RE/NiKeyBasedInterpolator.h"
#include "RE/NiNode.h"
#include "RE/NiObject.h"
#include "RE/NiObjectNET.h"
#include "RE/NiPoint3.h"
#include "RE/NiRect.h"
#include "RE/NiRefObject.h"
#include "RE/NiSmartPointer.h"
#include "RE/NiTArray.h"
#include "RE/NiTCollection.h"
#include "RE/NiTDefaultAllocator.h"
#include "RE/NiTexture.h"
#include "RE/NiTimeController.h"
#include "RE/NiTMap.h"
#include "RE/NiTMapBase.h"
#include "RE/NiTPointerAllocator.h"
#include "RE/NiTPointerMap.h"
#include "RE/Offsets.h"
#include "RE/OldMessageBoxCallback.h"
#include "RE/PackageLocation.h"
#include "RE/PerkEntryVisitor.h"
#include "RE/PerkRankVisitor.h"
#include "RE/PlayerCamera.h"
#include "RE/PlayerCharacter.h"
#include "RE/PlayerControls.h"
#include "RE/PlayerInputHandler.h"
#include "RE/PoisonedWeapon.h"
#include "RE/PositionPlayerEvent.h"
#include "RE/Precipitation.h"
#include "RE/PrecomputedNavmeshInfoPathMap.h"
#include "RE/Projectile.h"
#include "RE/QuestEvents.h"
#include "RE/ReadyWeaponHandler.h"
#include "RE/ReferenceEffectController.h"
#include "RE/RunHandler.h"
#include "RE/SavePatcher.h"
#include "RE/Script.h"
#include "RE/ScriptEventSourceHolder.h"
#include "RE/ScrollItem.h"
#include "RE/SetEventData.h"
#include "RE/SFTypes.h"
#include "RE/ShoutHandler.h"
#include "RE/SimpleAllocMemoryPagePolicy.h"
#include "RE/Sky.h"
#include "RE/SkyEffectController.h"
#include "RE/SkyObject.h"
#include "RE/SkyrimScriptObjectBindPolicy.h"
#include "RE/SkyrimScriptStore.h"
#include "RE/SmithingMenu.h"
#include "RE/SneakHandler.h"
#include "RE/SoulLevels.h"
#include "RE/SoundData.h"
#include "RE/SoundLevels.h"
#include "RE/SpellItem.h"
#include "RE/SprintHandler.h"
#include "RE/StackFrame.h"
#include "RE/StandardItemData.h"
#include "RE/Stars.h"
#include "RE/StatsEvent.h"
#include "RE/Sun.h"
#include "RE/SuspendedStack.h"
#include "RE/TESActorBase.h"
#include "RE/TESActorBaseData.h"
#include "RE/TESAIForm.h"
#include "RE/TESAmmo.h"
#include "RE/TESAttackDamageForm.h"
#include "RE/TESBipedModelForm.h"
#include "RE/TESBoundAnimObject.h"
#include "RE/TESBoundObject.h"
#include "RE/TESCamera.h"
#include "RE/TESCameraState.h"
#include "RE/TESCellFullyLoadedEvent.h"
#include "RE/TESChildCell.h"
#include "RE/TESClass.h"
#include "RE/TESClimate.h"
#include "RE/TESCombatEvent.h"
#include "RE/TESCombatStyle.h"
#include "RE/TESContainer.h"
#include "RE/TESContainerChangedEvent.h"
#include "RE/TESCustomPackageData.h"
#include "RE/TESDataHandler.h"
#include "RE/TESDescription.h"
#include "RE/TESEffectShader.h"
#include "RE/TESEnchantableForm.h"
#include "RE/TESEquipEvent.h"
#include "RE/TESEyes.h"
#include "RE/TESFaction.h"
#include "RE/TESFile.h"
#include "RE/TESFlora.h"
#include "RE/TESForm.h"
#include "RE/TESFullName.h"
#include "RE/TESFurniture.h"
#include "RE/TESGlobal.h"
#include "RE/TESGrass.h"
#include "RE/TESIcon.h"
#include "RE/TESIdleForm.h"
#include "RE/TESImageSpace.h"
#include "RE/TESImageSpaceModifiableForm.h"
#include "RE/TESImageSpaceModifier.h"
#include "RE/TESKey.h"
#include "RE/TESLandTexture.h"
#include "RE/TESLevCharacter.h"
#include "RE/TESLeveledList.h"
#include "RE/TESLevItem.h"
#include "RE/TESLevSpell.h"
#include "RE/TESLoadGameEvent.h"
#include "RE/TESLoadScreen.h"
#include "RE/TESMagicEffectApplyEvent.h"
#include "RE/TESMagicTargetForm.h"
#include "RE/TESModel.h"
#include "RE/TESModelPSA.h"
#include "RE/TESModelRDT.h"
#include "RE/TESModelTextureSwap.h"
#include "RE/TESModelTri.h"
#include "RE/TESNPC.h"
#include "RE/TESObject.h"
#include "RE/TESObjectACTI.h"
#include "RE/TESObjectANIO.h"
#include "RE/TESObjectARMA.h"
#include "RE/TESObjectARMO.h"
#include "RE/TESObjectBOOK.h"
#include "RE/TESObjectCELL.h"
#include "RE/TESObjectCONT.h"
#include "RE/TESObjectDOOR.h"
#include "RE/TESObjectLAND.h"
#include "RE/TESObjectLIGH.h"
#include "RE/TESObjectLoadedEvent.h"
#include "RE/TESObjectMISC.h"
#include "RE/TESObjectREFR.h"
#include "RE/TESObjectSTAT.h"
#include "RE/TESObjectTREE.h"
#include "RE/TESObjectWEAP.h"
#include "RE/TESPackage.h"
#include "RE/TESPackageData.h"
#include "RE/TESProduceForm.h"
#include "RE/TESQualityForm.h"
#include "RE/TESQuest.h"
#include "RE/TESRace.h"
#include "RE/TESRaceForm.h"
#include "RE/TESReactionForm.h"
#include "RE/TESRegion.h"
#include "RE/TESRegionData.h"
#include "RE/TESRegionDataLandscape.h"
#include "RE/TESRegionDataManager.h"
#include "RE/TESRegionDataMap.h"
#include "RE/TESRegionDataSound.h"
#include "RE/TESRegionDataWeather.h"
#include "RE/TESRegionList.h"
#include "RE/TESShout.h"
#include "RE/TESSoulGem.h"
#include "RE/TESSound.h"
#include "RE/TESSpellList.h"
#include "RE/TESTexture.h"
#include "RE/TESTexture1024.h"
#include "RE/TESTopic.h"
#include "RE/TESTopicInfo.h"
#include "RE/TESTrackedStatsEvent.h"
#include "RE/TESUniqueIDChangeEvent.h"
#include "RE/TESValueForm.h"
#include "RE/TESWaterForm.h"
#include "RE/TESWeather.h"
#include "RE/TESWeightForm.h"
#include "RE/TESWorldSpace.h"
#include "RE/ThumbstickEvent.h"
#include "RE/TogglePOVHandler.h"
#include "RE/ToggleRunHandler.h"
#include "RE/UIManager.h"
#include "RE/UIMessage.h"
#include "RE/UISaveLoadManager.h"
#include "RE/UIStringHolder.h"
#include "RE/UserEventEnabledEvent.h"
#include "RE/VirtualMachine.h"
#include "RE/VMArray.h"
#include "RE/WeatherType.h"
#include "RE/ZeroFunctionArguments.h"
