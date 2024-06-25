#define STRINGIZER_(exp) #exp
#define STRINGIZER(exp) STRINGIZER_(exp)
char *zz_reg_offsets_string[]={
   [REG_ZZ_MODE           ] = STRINGIZER(REG_ZZ_MODE           ),// 0x100,
   [REG_ZZ_CONFIG         ] = STRINGIZER(REG_ZZ_CONFIG         ),// 0x104,
   [REG_ZZ_SPRITE_X       ] = STRINGIZER(REG_ZZ_SPRITE_X       ),// 0x108,
   [REG_ZZ_SPRITE_Y       ] = STRINGIZER(REG_ZZ_SPRITE_Y       ),// 0x10C,

   [REG_ZZ_X1             ] = STRINGIZER(REG_ZZ_X1             ),// 0x110,
   [REG_ZZ_Y1             ] = STRINGIZER(REG_ZZ_Y1             ),// 0x114,
   [REG_ZZ_X2             ] = STRINGIZER(REG_ZZ_X2             ),// 0x118,
   [REG_ZZ_Y2             ] = STRINGIZER(REG_ZZ_Y2             ),// 0x11C,

   [REG_ZZ_PAN            ] = STRINGIZER(REG_ZZ_PAN            ),// 0x120,
   [REG_ZZ_ROW_PITCH      ] = STRINGIZER(REG_ZZ_ROW_PITCH      ),// 0x124,
   [REG_ZZ_X3             ] = STRINGIZER(REG_ZZ_X3             ),// 0x128,
   [REG_ZZ_Y3             ] = STRINGIZER(REG_ZZ_Y3             ),// 0x12C,

   [REG_ZZ_RGB            ] = STRINGIZER(REG_ZZ_RGB            ),// 0x130,
   [REG_ZZ_FILLRECT       ] = STRINGIZER(REG_ZZ_FILLRECT       ),// 0x134,
   [REG_ZZ_COPYRECT       ] = STRINGIZER(REG_ZZ_COPYRECT       ),// 0x138,
   [REG_ZZ_FILLTEMPLATE   ] = STRINGIZER(REG_ZZ_FILLTEMPLATE   ),// 0x13C,

   [REG_ZZ_BLIT_SRC       ] = STRINGIZER(REG_ZZ_BLIT_SRC       ),// 0x140,
   [REG_ZZ_BLIT_DST       ] = STRINGIZER(REG_ZZ_BLIT_DST       ),// 0x144,
   [REG_ZZ_COLORMODE      ] = STRINGIZER(REG_ZZ_COLORMODE      ),// 0x148,
   [REG_ZZ_SRC_PITCH      ] = STRINGIZER(REG_ZZ_SRC_PITCH      ),// 0x14C,

   [REG_ZZ_RGB2           ] = STRINGIZER(REG_ZZ_RGB2           ),// 0x150,
   [REG_ZZ_P2C            ] = STRINGIZER(REG_ZZ_P2C            ),// 0x154,
   [REG_ZZ_DRAWLINE       ] = STRINGIZER(REG_ZZ_DRAWLINE       ),// 0x158,
   [REG_ZZ_P2D            ] = STRINGIZER(REG_ZZ_P2D            ),// 0x15C,

   [REG_ZZ_USER1          ] = STRINGIZER(REG_ZZ_USER1          ),// 0x160,
   [REG_ZZ_USER2          ] = STRINGIZER(REG_ZZ_USER2          ),// 0x164,
   [REG_ZZ_USER3          ] = STRINGIZER(REG_ZZ_USER3          ),// 0x168,
   [REG_ZZ_USER4          ] = STRINGIZER(REG_ZZ_USER4          ),// 0x16C,

   [REG_ZZ_INVERTRECT     ] = STRINGIZER(REG_ZZ_INVERTRECT     ),// 0x170,
   [REG_ZZ_SPRITE_BITMAP  ] = STRINGIZER(REG_ZZ_SPRITE_BITMAP  ),// 0x174,
   [REG_ZZ_SPRITE_COLORS  ] = STRINGIZER(REG_ZZ_SPRITE_COLORS  ),// 0x178,
   [REG_ZZ_VBLANK_STATUS  ] = STRINGIZER(REG_ZZ_VBLANK_STATUS  ),// 0x17C,

   [REG_ZZ_BLITTER_DMA_OP ] = STRINGIZER(REG_ZZ_BLITTER_DMA_OP ),// 0x180,
   [REG_ZZ_ACC_OP         ] = STRINGIZER(REG_ZZ_ACC_OP         ),// 0x184,
   [REG_ZZ_SET_SPLIT_POS  ] = STRINGIZER(REG_ZZ_SET_SPLIT_POS  ),// 0x188,
   [REG_ZZ_ORIG_RES       ] = STRINGIZER(REG_ZZ_ORIG_RES       ),// 0x18C,

   [REG_ZZ_ETH_TX         ] = STRINGIZER(REG_ZZ_ETH_TX         ),// 0x190,
   [REG_ZZ_ETH_RX         ] = STRINGIZER(REG_ZZ_ETH_RX         ),// 0x194,
   [REG_ZZ_ETH_MAC_HI     ] = STRINGIZER(REG_ZZ_ETH_MAC_HI     ),// 0x198,
   [REG_ZZ_ETH_MAC_LO     ] = STRINGIZER(REG_ZZ_ETH_MAC_LO     ),// 0x19C,

   [REG_ZZ_FW_VERSION     ] = STRINGIZER(REG_ZZ_FW_VERSION     ),// 0x1A0,
   [REG_ZZ_ETH_RX_ADDRESS ] = STRINGIZER(REG_ZZ_ETH_RX_ADDRESS ),// 0x1A4,
   [REG_ZZ_INT_STATUS     ] = STRINGIZER(REG_ZZ_INT_STATUS     ),// 0x1A8,
   [REG_ZZ_USB_CAPACITY   ] = STRINGIZER(REG_ZZ_USB_CAPACITY   ),// 0x1AC,

   [REG_ZZ_USBBLK_TX      ] = STRINGIZER(REG_ZZ_USBBLK_TX      ),// 0x1B0,
   [REG_ZZ_USBBLK_RX      ] = STRINGIZER(REG_ZZ_USBBLK_RX      ),// 0x1B4,
   [REG_ZZ_USB_STATUS     ] = STRINGIZER(REG_ZZ_USB_STATUS     ),// 0x1B8,
   [REG_ZZ_USB_BUFSEL     ] = STRINGIZER(REG_ZZ_USB_BUFSEL     ),// 0x1BC,

   [REG_ZZ_DECODER_PARAM  ] = STRINGIZER(REG_ZZ_DECODER_PARAM  ),// 0x1C0,
   [REG_ZZ_DECODER_VAL    ] = STRINGIZER(REG_ZZ_DECODER_VAL    ),// 0x1C4,
   [REG_ZZ_DECODE         ] = STRINGIZER(REG_ZZ_DECODE         ),// 0x1C8,
   [REG_ZZ_DECODER_FIFOTX ] = STRINGIZER(REG_ZZ_DECODER_FIFOTX ),// 0x1CC,

   [REG_ZZ_DECODER_FIFORX ] = STRINGIZER(REG_ZZ_DECODER_FIFORX ),// 0x1D0,
   [REG_ZZ_TEMPERATURE    ] = STRINGIZER(REG_ZZ_TEMPERATURE    ),// 0x1D4,
   [REG_ZZ_VOLTAGE_AUX    ] = STRINGIZER(REG_ZZ_VOLTAGE_AUX    ),// 0x1D8,
   [REG_ZZ_VOLTAGE_INT    ] = STRINGIZER(REG_ZZ_VOLTAGE_INT    ),// 0x1DC,

   [REG_ZZ_SET_FEATURE    ] = STRINGIZER(REG_ZZ_SET_FEATURE    ),// 0x1E0,
   [REG_ZZ_AUDIO_SWAB     ] = STRINGIZER(REG_ZZ_AUDIO_SWAB     ),// 0x1E4,
   [REG_ZZ_AUDIO_SCALE    ] = STRINGIZER(REG_ZZ_AUDIO_SCALE    ),// 0x1E8,
   [REG_ZZ_AUDIO_PARAM    ] = STRINGIZER(REG_ZZ_AUDIO_PARAM    ),// 0x1EC,

   [REG_ZZ_AUDIO_VAL      ] = STRINGIZER(REG_ZZ_AUDIO_VAL      ),// 0x1F0,
   [REG_ZZ_AUDIO_CONFIG   ] = STRINGIZER(REG_ZZ_AUDIO_CONFIG   ),// 0x1F4,
   [REG_ZZ_CPU_FREQ       ] = STRINGIZER(REG_ZZ_CPU_FREQ       ),// 0x1F8,
   [REG_ZZ_DEBUG          ] = STRINGIZER(REG_ZZ_DEBUG          ),// 0x1FC,

   [ZZ_CUSTOM_VIDMODE     ] = STRINGIZER(ZZ_CUSTOM_VIDMODE     ),// 0x200,
   [ZZ_CUSTOM_VIDMODE_DATA] = STRINGIZER(ZZ_CUSTOM_VIDMODE_DATA),// 0x204,
   [REG_ZZ_EMULATION_USED ] = STRINGIZER(REG_ZZ_EMULATION_USED ),// 0x208,
   [REG_ZZ_JIT_ENABLE     ] = STRINGIZER(REG_ZZ_JIT_ENABLE     ),// 0x20C,

   [REG_ZZ_BOOTMODE       ] = STRINGIZER(REG_ZZ_BOOTMODE       ),// 0x210,
   [REG_ZZ_APPLY_BOOTMODE ] = STRINGIZER(REG_ZZ_APPLY_BOOTMODE ),// 0x214,
   [REG_ZZ_SCSIBOOT_EN    ] = STRINGIZER(REG_ZZ_SCSIBOOT_EN    ),// 0x218,
   [REG_ZZ_AUTOC_RAM_EN   ] = STRINGIZER(REG_ZZ_AUTOC_RAM_EN   ),// 0x21C,

   [REG_ZZ_LTC_TEMP       ] = STRINGIZER(REG_ZZ_LTC_TEMP       ),// 0x220,
   [REG_ZZ_LTC_V1         ] = STRINGIZER(REG_ZZ_LTC_V1         ),// 0x224,
   [REG_ZZ_LTC_V2         ] = STRINGIZER(REG_ZZ_LTC_V2         ),// 0x228,
   [REG_ZZ_LTC_060_TEMP   ] = STRINGIZER(REG_ZZ_LTC_060_TEMP   ),// 0x22C,

   [REG_ZZ_LTC_VCC        ] = STRINGIZER(REG_ZZ_LTC_VCC        ),// 0x230,
   [REG_ZZ_CPU_RAM_EN     ] = STRINGIZER(REG_ZZ_CPU_RAM_EN     ),// 0x234,
   [REG_ZZ_KS_SEL         ] = STRINGIZER(REG_ZZ_KS_SEL         ),// 0x238,
   [REG_ZZ_EXT_KS_SEL     ] = STRINGIZER(REG_ZZ_EXT_KS_SEL     ),// 0x23C,

   [REG_ZZ_KS_SEL_TXT     ] = STRINGIZER(REG_ZZ_KS_SEL_TXT     ),// 0x240,
   [REG_ZZ_EXT_KS_SEL_TXT ] = STRINGIZER(REG_ZZ_EXT_KS_SEL_TXT ),// 0x244,
   [REG_ZZ_SCSI_SEL_0     ] = STRINGIZER(REG_ZZ_SCSI_SEL_0     ),// 0x248,
   [REG_ZZ_SCSI_SEL_1     ] = STRINGIZER(REG_ZZ_SCSI_SEL_1     ),// 0x24C,

   [REG_ZZ_SCSI_SEL_2     ] = STRINGIZER(REG_ZZ_SCSI_SEL_2     ),// 0x250,
   [REG_ZZ_SCSI_SEL_3     ] = STRINGIZER(REG_ZZ_SCSI_SEL_3     ),// 0x254,
   [REG_ZZ_SCSI_SEL_4     ] = STRINGIZER(REG_ZZ_SCSI_SEL_4     ),// 0x258,
   [REG_ZZ_SCSI_SEL_5     ] = STRINGIZER(REG_ZZ_SCSI_SEL_5     ),// 0x25C,

   [REG_ZZ_SCSI_SEL_6     ] = STRINGIZER(REG_ZZ_SCSI_SEL_6     ),// 0x260,
   [REG_ZZ_SCSI_SEL_TXT   ] = STRINGIZER(REG_ZZ_SCSI_SEL_TXT   ),// 0x264,
   [REG_ZZ_APPLY_SCSI     ] = STRINGIZER(REG_ZZ_APPLY_SCSI     ),// 0x268,
   [REG_ZZ_APPLY_ALL      ] = STRINGIZER(REG_ZZ_APPLY_ALL      ),// 0x26C,

   [REG_ZZ_SOFT3D_OP      ] = STRINGIZER(REG_ZZ_SOFT3D_OP      ),// 0x270,
   [REG_ZZ_TEST_ENABLE    ] = STRINGIZER(REG_ZZ_TEST_ENABLE    ),// 0x274,

   [REG_ZZ_FW_BETA        ] = STRINGIZER(REG_ZZ_FW_BETA        ),// 0x280,
   [REG_ZZ_FW_ALFA        ] = STRINGIZER(REG_ZZ_FW_ALFA        ),// 0x284,

   //NOT USED 0x240 - 0x2FC

   [REG_ZZ_OP_DATA        ] = STRINGIZER(REG_ZZ_OP_DATA        ),// 0x300,
   [REG_ZZ_OP             ] = STRINGIZER(REG_ZZ_OP             ),// 0x304,
   [REG_ZZ_OP_NOP         ] = STRINGIZER(REG_ZZ_OP_NOP         ),// 0x308,
   [REG_ZZ_OP_CAPTUREMODE ] = STRINGIZER(REG_ZZ_OP_CAPTUREMODE ),// 0x30C,

   [REG_ZZ_SEL_KS_TXT+0x00] = STRINGIZER(REG_ZZ_SEL_KS_TXT     ) " 0x500",
   [REG_ZZ_SEL_KS_TXT+0x04] = STRINGIZER(REG_ZZ_SEL_KS_TXT     ) " 0x504",
   [REG_ZZ_SEL_KS_TXT+0x08] = STRINGIZER(REG_ZZ_SEL_KS_TXT     ) " 0x508",
   [REG_ZZ_SEL_KS_TXT+0x0C] = STRINGIZER(REG_ZZ_SEL_KS_TXT     ) " 0x50C",
   [REG_ZZ_SEL_KS_TXT+0x10] = STRINGIZER(REG_ZZ_SEL_KS_TXT     ) " 0x510",
   [REG_ZZ_SEL_KS_TXT+0x14] = STRINGIZER(REG_ZZ_SEL_KS_TXT     ) " 0x514",
   [REG_ZZ_SEL_KS_TXT+0x18] = STRINGIZER(REG_ZZ_SEL_KS_TXT     ) " 0x518",
   [REG_ZZ_SEL_KS_TXT+0x1C] = STRINGIZER(REG_ZZ_SEL_KS_TXT     ) " 0x51C",
   [REG_ZZ_SEL_KS_TXT+0x20] = STRINGIZER(REG_ZZ_SEL_KS_TXT     ) " 0x520",
   [REG_ZZ_SEL_KS_TXT+0x24] = STRINGIZER(REG_ZZ_SEL_KS_TXT     ) " 0x524",
   [REG_ZZ_SEL_KS_TXT+0x28] = STRINGIZER(REG_ZZ_SEL_KS_TXT     ) " 0x528",
   [REG_ZZ_SEL_KS_TXT+0x2C] = STRINGIZER(REG_ZZ_SEL_KS_TXT     ) " 0x52C",
   [REG_ZZ_SEL_KS_TXT+0x30] = STRINGIZER(REG_ZZ_SEL_KS_TXT     ) " 0x530",
   [REG_ZZ_SEL_KS_TXT+0x34] = STRINGIZER(REG_ZZ_SEL_KS_TXT     ) " 0x534",
   [REG_ZZ_SEL_KS_TXT+0x38] = STRINGIZER(REG_ZZ_SEL_KS_TXT     ) " 0x538",
   [REG_ZZ_SEL_KS_TXT+0x3C] = STRINGIZER(REG_ZZ_SEL_KS_TXT     ) " 0x53C",
   [REG_ZZ_SEL_KS_TXT+0x40] = STRINGIZER(REG_ZZ_SEL_KS_TXT     ) " 0x540",
   [REG_ZZ_SEL_KS_TXT+0x44] = STRINGIZER(REG_ZZ_SEL_KS_TXT     ) " 0x544",
   [REG_ZZ_SEL_KS_TXT+0x48] = STRINGIZER(REG_ZZ_SEL_KS_TXT     ) " 0x548",
   [REG_ZZ_SEL_KS_TXT+0x4C] = STRINGIZER(REG_ZZ_SEL_KS_TXT     ) " 0x54C",
   [REG_ZZ_SEL_KS_TXT+0x50] = STRINGIZER(REG_ZZ_SEL_KS_TXT     ) " 0x550",
   [REG_ZZ_SEL_KS_TXT+0x54] = STRINGIZER(REG_ZZ_SEL_KS_TXT     ) " 0x554",
   [REG_ZZ_SEL_KS_TXT+0x58] = STRINGIZER(REG_ZZ_SEL_KS_TXT     ) " 0x558",
   [REG_ZZ_SEL_KS_TXT+0x5C] = STRINGIZER(REG_ZZ_SEL_KS_TXT     ) " 0x55C",
   [REG_ZZ_SEL_KS_TXT+0x60] = STRINGIZER(REG_ZZ_SEL_KS_TXT     ) " 0x560",
   [REG_ZZ_SEL_KS_TXT+0x64] = STRINGIZER(REG_ZZ_SEL_KS_TXT     ) " 0x564",
   [REG_ZZ_SEL_KS_TXT+0x68] = STRINGIZER(REG_ZZ_SEL_KS_TXT     ) " 0x568",
   [REG_ZZ_SEL_KS_TXT+0x6C] = STRINGIZER(REG_ZZ_SEL_KS_TXT     ) " 0x56C",
   [REG_ZZ_SEL_KS_TXT+0x70] = STRINGIZER(REG_ZZ_SEL_KS_TXT     ) " 0x570",
   [REG_ZZ_SEL_KS_TXT+0x74] = STRINGIZER(REG_ZZ_SEL_KS_TXT     ) " 0x574",
   [REG_ZZ_SEL_KS_TXT+0x78] = STRINGIZER(REG_ZZ_SEL_KS_TXT     ) " 0x578",
   [REG_ZZ_SEL_KS_TXT+0x7C] = STRINGIZER(REG_ZZ_SEL_KS_TXT     ) " 0x57C",
   [REG_ZZ_SEL_KS_TXT+0x80] = STRINGIZER(REG_ZZ_SEL_KS_TXT     ) " 0x580",
   [REG_ZZ_SEL_KS_TXT+0x84] = STRINGIZER(REG_ZZ_SEL_KS_TXT     ) " 0x584",
   [REG_ZZ_SEL_KS_TXT+0x88] = STRINGIZER(REG_ZZ_SEL_KS_TXT     ) " 0x588",
   [REG_ZZ_SEL_KS_TXT+0x8C] = STRINGIZER(REG_ZZ_SEL_KS_TXT     ) " 0x58C",
   [REG_ZZ_SEL_KS_TXT+0x90] = STRINGIZER(REG_ZZ_SEL_KS_TXT     ) " 0x590",
   [REG_ZZ_SEL_KS_TXT+0x94] = STRINGIZER(REG_ZZ_SEL_KS_TXT     ) " 0x594",
   [REG_ZZ_SEL_KS_TXT+0x98] = STRINGIZER(REG_ZZ_SEL_KS_TXT     ) " 0x598",
   [REG_ZZ_SEL_KS_TXT+0x9C] = STRINGIZER(REG_ZZ_SEL_KS_TXT     ) " 0x59C",

   [REG_ZZ_SEL_SCSI_TXT+0x00] = STRINGIZER(REG_ZZ_SEL_SCSI_TXT ) " 0x600",
   [REG_ZZ_SEL_SCSI_TXT+0x04] = STRINGIZER(REG_ZZ_SEL_SCSI_TXT ) " 0x604",
   [REG_ZZ_SEL_SCSI_TXT+0x08] = STRINGIZER(REG_ZZ_SEL_SCSI_TXT ) " 0x608",
   [REG_ZZ_SEL_SCSI_TXT+0x0C] = STRINGIZER(REG_ZZ_SEL_SCSI_TXT ) " 0x60C",
   [REG_ZZ_SEL_SCSI_TXT+0x10] = STRINGIZER(REG_ZZ_SEL_SCSI_TXT ) " 0x610",
   [REG_ZZ_SEL_SCSI_TXT+0x14] = STRINGIZER(REG_ZZ_SEL_SCSI_TXT ) " 0x614",
   [REG_ZZ_SEL_SCSI_TXT+0x18] = STRINGIZER(REG_ZZ_SEL_SCSI_TXT ) " 0x618",
   [REG_ZZ_SEL_SCSI_TXT+0x1C] = STRINGIZER(REG_ZZ_SEL_SCSI_TXT ) " 0x61C",
   [REG_ZZ_SEL_SCSI_TXT+0x20] = STRINGIZER(REG_ZZ_SEL_SCSI_TXT ) " 0x620",
   [REG_ZZ_SEL_SCSI_TXT+0x24] = STRINGIZER(REG_ZZ_SEL_SCSI_TXT ) " 0x624",
   [REG_ZZ_SEL_SCSI_TXT+0x28] = STRINGIZER(REG_ZZ_SEL_SCSI_TXT ) " 0x628",
   [REG_ZZ_SEL_SCSI_TXT+0x2C] = STRINGIZER(REG_ZZ_SEL_SCSI_TXT ) " 0x62C",
   [REG_ZZ_SEL_SCSI_TXT+0x30] = STRINGIZER(REG_ZZ_SEL_SCSI_TXT ) " 0x630",
   [REG_ZZ_SEL_SCSI_TXT+0x34] = STRINGIZER(REG_ZZ_SEL_SCSI_TXT ) " 0x634",
   [REG_ZZ_SEL_SCSI_TXT+0x38] = STRINGIZER(REG_ZZ_SEL_SCSI_TXT ) " 0x638",
   [REG_ZZ_SEL_SCSI_TXT+0x3C] = STRINGIZER(REG_ZZ_SEL_SCSI_TXT ) " 0x63C",
   [REG_ZZ_SEL_SCSI_TXT+0x40] = STRINGIZER(REG_ZZ_SEL_SCSI_TXT ) " 0x640",
   [REG_ZZ_SEL_SCSI_TXT+0x44] = STRINGIZER(REG_ZZ_SEL_SCSI_TXT ) " 0x644",
   [REG_ZZ_SEL_SCSI_TXT+0x48] = STRINGIZER(REG_ZZ_SEL_SCSI_TXT ) " 0x648",
   [REG_ZZ_SEL_SCSI_TXT+0x4C] = STRINGIZER(REG_ZZ_SEL_SCSI_TXT ) " 0x64C",
   [REG_ZZ_SEL_SCSI_TXT+0x50] = STRINGIZER(REG_ZZ_SEL_SCSI_TXT ) " 0x650",
   [REG_ZZ_SEL_SCSI_TXT+0x54] = STRINGIZER(REG_ZZ_SEL_SCSI_TXT ) " 0x654",
   [REG_ZZ_SEL_SCSI_TXT+0x58] = STRINGIZER(REG_ZZ_SEL_SCSI_TXT ) " 0x658",
   [REG_ZZ_SEL_SCSI_TXT+0x5C] = STRINGIZER(REG_ZZ_SEL_SCSI_TXT ) " 0x65C",
   [REG_ZZ_SEL_SCSI_TXT+0x60] = STRINGIZER(REG_ZZ_SEL_SCSI_TXT ) " 0x660",
   [REG_ZZ_SEL_SCSI_TXT+0x64] = STRINGIZER(REG_ZZ_SEL_SCSI_TXT ) " 0x664",
   [REG_ZZ_SEL_SCSI_TXT+0x68] = STRINGIZER(REG_ZZ_SEL_SCSI_TXT ) " 0x668",
   [REG_ZZ_SEL_SCSI_TXT+0x6C] = STRINGIZER(REG_ZZ_SEL_SCSI_TXT ) " 0x66C",
   [REG_ZZ_SEL_SCSI_TXT+0x70] = STRINGIZER(REG_ZZ_SEL_SCSI_TXT ) " 0x670",
   [REG_ZZ_SEL_SCSI_TXT+0x74] = STRINGIZER(REG_ZZ_SEL_SCSI_TXT ) " 0x674",
   [REG_ZZ_SEL_SCSI_TXT+0x78] = STRINGIZER(REG_ZZ_SEL_SCSI_TXT ) " 0x678",
   [REG_ZZ_SEL_SCSI_TXT+0x7C] = STRINGIZER(REG_ZZ_SEL_SCSI_TXT ) " 0x67C",
   [REG_ZZ_SEL_SCSI_TXT+0x80] = STRINGIZER(REG_ZZ_SEL_SCSI_TXT ) " 0x680",
   [REG_ZZ_SEL_SCSI_TXT+0x84] = STRINGIZER(REG_ZZ_SEL_SCSI_TXT ) " 0x684",
   [REG_ZZ_SEL_SCSI_TXT+0x88] = STRINGIZER(REG_ZZ_SEL_SCSI_TXT ) " 0x688",
   [REG_ZZ_SEL_SCSI_TXT+0x8C] = STRINGIZER(REG_ZZ_SEL_SCSI_TXT ) " 0x68C",
   [REG_ZZ_SEL_SCSI_TXT+0x90] = STRINGIZER(REG_ZZ_SEL_SCSI_TXT ) " 0x690",
   [REG_ZZ_SEL_SCSI_TXT+0x94] = STRINGIZER(REG_ZZ_SEL_SCSI_TXT ) " 0x694",
   [REG_ZZ_SEL_SCSI_TXT+0x98] = STRINGIZER(REG_ZZ_SEL_SCSI_TXT ) " 0x698",
   [REG_ZZ_SEL_SCSI_TXT+0x9C] = STRINGIZER(REG_ZZ_SEL_SCSI_TXT ) " 0x69C",

//   [REG_ZZ_RX_BUFF        ] = STRINGIZER(REG_ZZ_RX_BUFF        ),// 0x2000,
//   [REG_ZZ_TX_BUFF        ] = STRINGIZER(REG_ZZ_TX_BUFF        ),// 0x8000
/*
   [REG_ZZ_ARM_RUN_HI     ] = STRINGIZER(REG_ZZ_ARM_RUN_HI     ),// 0x90,
   [REG_ZZ_ARM_RUN_LO     ] = STRINGIZER(REG_ZZ_ARM_RUN_LO     ),// 0x92,
   [REG_ZZ_ARM_ARGC       ] = STRINGIZER(REG_ZZ_ARM_ARGC       ),// 0x94,
   [REG_ZZ_ARM_ARGV0      ] = STRINGIZER(REG_ZZ_ARM_ARGV0      ),// 0x96,
   [REG_ZZ_ARM_ARGV1      ] = STRINGIZER(REG_ZZ_ARM_ARGV1      ),// 0x98,
   [REG_ZZ_ARM_ARGV2      ] = STRINGIZER(REG_ZZ_ARM_ARGV2      ),// 0x9A,
   [REG_ZZ_ARM_ARGV3      ] = STRINGIZER(REG_ZZ_ARM_ARGV3      ),// 0x9C,
   [REG_ZZ_ARM_ARGV4      ] = STRINGIZER(REG_ZZ_ARM_ARGV4      ),// 0x9E,

   [REG_ZZ_ARM_ARGV5      ] = STRINGIZER(REG_ZZ_ARM_ARGV5      ),// 0xA0,
   [REG_ZZ_ARM_ARGV6      ] = STRINGIZER(REG_ZZ_ARM_ARGV6      ),// 0xA2,
   [REG_ZZ_ARM_ARGV7      ] = STRINGIZER(REG_ZZ_ARM_ARGV7      ),// 0xA4,
   [REG_ZZ_UNUSED_REGA6   ] = STRINGIZER(REG_ZZ_UNUSED_REGA6   ),// 0xA6,
   [REG_ZZ_UNUSED_REGA8   ] = STRINGIZER(REG_ZZ_UNUSED_REGA8   ),// 0xA8,
   [REG_ZZ_UNUSED_REGAA   ] = STRINGIZER(REG_ZZ_UNUSED_REGAA   ),// 0xAA,
   [REG_ZZ_UNUSED_REGAC   ] = STRINGIZER(REG_ZZ_UNUSED_REGAC   ),// 0xAC,
   [REG_ZZ_UNUSED_REGAE   ] = STRINGIZER(REG_ZZ_UNUSED_REGAE   ),// 0xAE,

   [REG_ZZ_ARM_EV_SERIAL  ] = STRINGIZER(REG_ZZ_ARM_EV_SERIAL  ),// 0xB0,
   [REG_ZZ_ARM_EV_CODE    ] = STRINGIZER(REG_ZZ_ARM_EV_CODE    ),// 0xB2,
   [REG_ZZ_UNUSED_REGB4   ] = STRINGIZER(REG_ZZ_UNUSED_REGB4   ),// 0xB4,
   [REG_ZZ_UNUSED_REGB6   ] = STRINGIZER(REG_ZZ_UNUSED_REGB6   ),// 0xB6,
   [REG_ZZ_UNUSED_REGB8   ] = STRINGIZER(REG_ZZ_UNUSED_REGB8   ),// 0xB8,
   [REG_ZZ_UNUSED_REGBA   ] = STRINGIZER(REG_ZZ_UNUSED_REGBA   ),// 0xBA,
   [REG_ZZ_UNUSED_REGBC   ] = STRINGIZER(REG_ZZ_UNUSED_REGBC   ),// 0xBC,
   [REG_ZZ_UNUSED_REGBE   ] = STRINGIZER(REG_ZZ_UNUSED_REGBE   ),// 0xBE,

*/
};