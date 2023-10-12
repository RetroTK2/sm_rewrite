#pragma once

#define kMotherBrain_FakeDeathExplosionsXYPositions ((uint16*)RomFixedPtr(0xa98929))
#define kMotherBrainTubesFallingFuncPtrs ((uint16*)RomFixedPtr(0xa98b7b))
#define kMotherBrain_ExplosionsXYOffsets ((uint16*)RomFixedPtr(0xa9b099))
//#define g_word_A9B109 ((uint16*)RomFixedPtr(0xa9b109))
//#define g_word_A9B10F ((uint16*)RomFixedPtr(0xa9b10f))
#define kMotherBrain_AttackInstrListPtrs ((uint16*)RomFixedPtr(0xa9b6d4))
#define kMotherBrain_RainbowBeamPalettes ((uint16*)RomFixedPtr(0xade434))
#define kMotherBrain_WalkForwardsFuncPtrs ((uint16*)RomFixedPtr(0xa9c61e))
#define kMotherBrain_WalkBackwardsFuncPtrs ((uint16*)RomFixedPtr(0xa9c664))
#define kShitroid_FadingToBlack ((uint16*)RomFixedPtr(0xade8e2))
#define kShitroid_DeathExplosionsXYOffsets ((uint16*)RomFixedPtr(0xa9cdfc))
#define kShitroid_HealthBasedPalettes_Shell ((uint16*)RomFixedPtr(0xade7e2))
#define kShitroid_HealthBasedPalettes_Innards ((uint16*)RomFixedPtr(0xade882))
#define kMotherBrain_PaletteSetPtrs ((uint16*)RomFixedPtr(0xa9d260))
#define kDeadTorizo_VramWriteTableIndices_1 ((uint16*)RomFixedPtr(0xa9d583))
#define kDeadTorizo_VramWriteTableIndices_2 ((uint16*)RomFixedPtr(0xa9d549))
#define kDeadTorizo_SandHeapDestinationOffsets ((uint16*)RomFixedPtr(0xa9d67c))
#define kDeadTorizo_SandHeapSourceOffsets ((uint16*)RomFixedPtr(0xa9d69c))
#define kDeadTorizo_TileData ((uint16*)RomFixedPtr(0xb7a800))
#define kDeadZoomer_InstrListPtrs ((uint16*)RomFixedPtr(0xa9d86a))
#define kDeadZoomer_CorpseRottingDefinitionPtrs ((uint16*)RomFixedPtr(0xa9d870))
#define kDeadRipper_InstrListPtrs ((uint16*)RomFixedPtr(0xa9d897))
#define kDeadRipper_CorpseRottingDefinitionPtrs ((uint16*)RomFixedPtr(0xa9d89b))
#define kDeadSkree_InstrListPtrs ((uint16*)RomFixedPtr(0xa9d8c0))
#define kDeadSkree_CorpseRottingDefinitionPtrs ((uint16*)RomFixedPtr(0xa9d8c6))
#define kDeadMonsters_Tab0 ((uint16*)RomFixedPtr(0xa9d951))
#define kDeadMonsters_Tab1 ((uint16*)RomFixedPtr(0xa9d959))
#define TILEMAP_ADDR(x) &g_ram[0x2000 + x]
#define kDeadMonsters_TileData RomPtr_B7(addr_kDeadMonsters_TileData)