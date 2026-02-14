
uint FUN_1401003e0(uint param_1,ulonglong *param_2,ulonglong param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong *puVar6;
  ulonglong uVar7;
  
  uVar4 = ~param_1;
  uVar5 = (ulonglong)uVar4;
  puVar6 = param_2;
  uVar7 = param_3;
  if ((param_3 != 0) && (((ulonglong)param_2 & 7) != 0)) {
    puVar6 = (ulonglong *)((longlong)param_2 + 1);
    uVar4 = uVar4 >> 8 ^
            *(uint *)(&DAT_14010b560 + (ulonglong)(byte)((byte)*param_2 ^ (byte)uVar4) * 4);
    uVar5 = (ulonglong)uVar4;
    uVar7 = param_3 - 1;
    if ((uVar7 != 0) && (((ulonglong)puVar6 & 7) != 0)) {
      puVar6 = (ulonglong *)((longlong)param_2 + 2);
      uVar4 = uVar4 >> 8 ^
              *(uint *)(&DAT_14010b560 +
                       (ulonglong)(byte)(*(byte *)((longlong)param_2 + 1) ^ (byte)uVar4) * 4);
      uVar5 = (ulonglong)uVar4;
      uVar7 = param_3 - 2;
      if ((uVar7 != 0) && (((ulonglong)puVar6 & 7) != 0)) {
        puVar6 = (ulonglong *)((longlong)param_2 + 3);
        uVar4 = uVar4 >> 8 ^
                *(uint *)(&DAT_14010b560 +
                         (ulonglong)(byte)(*(byte *)((longlong)param_2 + 2) ^ (byte)uVar4) * 4);
        uVar5 = (ulonglong)uVar4;
        uVar7 = param_3 - 3;
        if ((uVar7 != 0) && (((ulonglong)puVar6 & 7) != 0)) {
          puVar6 = (ulonglong *)((longlong)param_2 + 4);
          uVar4 = uVar4 >> 8 ^
                  *(uint *)(&DAT_14010b560 +
                           (ulonglong)(byte)(*(byte *)((longlong)param_2 + 3) ^ (byte)uVar4) * 4);
          uVar5 = (ulonglong)uVar4;
          uVar7 = param_3 - 4;
          if ((uVar7 != 0) && (((ulonglong)puVar6 & 7) != 0)) {
            puVar6 = (ulonglong *)((longlong)param_2 + 5);
            uVar4 = uVar4 >> 8 ^
                    *(uint *)(&DAT_14010b560 +
                             (ulonglong)(byte)(*(byte *)((longlong)param_2 + 4) ^ (byte)uVar4) * 4);
            uVar5 = (ulonglong)uVar4;
            uVar7 = param_3 - 5;
            if ((uVar7 != 0) && (((ulonglong)puVar6 & 7) != 0)) {
              puVar6 = (ulonglong *)((longlong)param_2 + 6);
              uVar4 = uVar4 >> 8 ^
                      *(uint *)(&DAT_14010b560 +
                               (ulonglong)(byte)(*(byte *)((longlong)param_2 + 5) ^ (byte)uVar4) * 4
                               );
              uVar5 = (ulonglong)uVar4;
              uVar7 = param_3 - 6;
              if ((uVar7 != 0) && (((ulonglong)puVar6 & 7) != 0)) {
                puVar6 = (ulonglong *)((longlong)param_2 + 7);
                uVar4 = uVar4 >> 8 ^
                        *(uint *)(&DAT_14010b560 +
                                 (ulonglong)(byte)(*(byte *)((longlong)param_2 + 6) ^ (byte)uVar4) *
                                 4);
                uVar5 = (ulonglong)uVar4;
                uVar7 = param_3 - 7;
                if ((uVar7 != 0) && (((ulonglong)puVar6 & 7) != 0)) {
                  puVar6 = param_2 + 1;
                  uVar5 = (ulonglong)
                          (uVar4 >> 8 ^
                          *(uint *)(&DAT_14010b560 +
                                   (ulonglong)(byte)(*(byte *)((longlong)param_2 + 7) ^ (byte)uVar4)
                                   * 4));
                  uVar7 = param_3 - 8;
                }
              }
            }
          }
        }
      }
    }
  }
  for (; 0xf < uVar7; uVar7 = uVar7 - 0x10) {
    uVar1 = *puVar6;
    uVar5 = uVar5 ^ uVar1;
    uVar4 = (uint)(uVar1 >> 0x20);
    uVar2 = puVar6[1];
    uVar3 = (uint)(uVar2 >> 0x20);
    uVar5 = (ulonglong)
            (*(uint *)(&DAT_14010ed60 + (uVar5 >> 8 & 0xff) * 4) ^
             *(uint *)(&DAT_14010f160 + (uVar5 & 0xff) * 4) ^
             *(uint *)(&DAT_14010e960 + ((uint)(uVar5 >> 0xe) & 0x3fc)) ^
             *(uint *)(&DAT_14010e560 + ((uint)(uVar5 >> 0x16) & 0x3fc)) ^
             *(uint *)(&DAT_14010e160 + ((uint)(uVar5 >> 0x1e) & 0x3fc)) ^
             *(uint *)(&DAT_14010dd60 + (uVar4 >> 6 & 0x3fc)) ^
             *(uint *)(&DAT_14010d960 + (uVar4 >> 0xe & 0x3fc)) ^
             *(uint *)(&DAT_14010d560 + (uVar1 >> 0x38) * 4) ^
             *(uint *)(&DAT_14010d160 + (uVar2 & 0xff) * 4) ^
             *(uint *)(&DAT_14010cd60 + (uVar2 >> 8 & 0xff) * 4) ^
             *(uint *)(&DAT_14010c960 + ((uint)(uVar2 >> 0xe) & 0x3fc)) ^
             *(uint *)(&DAT_14010c560 + ((uint)(uVar2 >> 0x16) & 0x3fc)) ^
             *(uint *)(&DAT_14010c160 + ((uint)(uVar2 >> 0x1e) & 0x3fc)) ^
             *(uint *)(&DAT_14010bd60 + (uVar3 >> 6 & 0x3fc)) ^
             *(uint *)(&DAT_14010b960 + (uVar3 >> 0xe & 0x3fc)) ^
            *(uint *)(&DAT_14010b560 + (uVar2 >> 0x38) * 4));
    puVar6 = puVar6 + 2;
  }
  if (uVar7 != 0) {
    uVar1 = uVar7;
    if ((uVar7 & 1) != 0) {
      uVar1 = *puVar6;
      puVar6 = (ulonglong *)((longlong)puVar6 + 1);
      uVar5 = uVar5 >> 8 ^
              (ulonglong)
              *(uint *)(&DAT_14010b560 + (ulonglong)(byte)((byte)uVar1 ^ (byte)uVar5) * 4);
      uVar1 = uVar7 - 1;
    }
    if (uVar7 != 1) {
      uVar7 = 0;
      do {
        uVar5 = uVar5 >> 8 ^
                (ulonglong)
                *(uint *)(&DAT_14010b560 +
                         (ulonglong)(byte)(*(byte *)((longlong)puVar6 + uVar7) ^ (byte)uVar5) * 4);
        uVar5 = uVar5 >> 8 ^
                (ulonglong)
                *(uint *)(&DAT_14010b560 +
                         (ulonglong)(byte)(*(byte *)((longlong)puVar6 + uVar7 + 1) ^ (byte)uVar5) *
                         4);
        uVar7 = uVar7 + 2;
      } while (uVar1 != uVar7);
    }
  }
  return ~(uint)uVar5;
}

