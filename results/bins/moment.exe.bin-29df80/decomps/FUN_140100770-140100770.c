
uint FUN_140100770(uint param_1,undefined8 *param_2,ulonglong param_3)

{
  uint uVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  
  uVar8 = (ulonglong)~param_1;
  puVar6 = param_2;
  uVar10 = param_3;
  if ((param_3 != 0) && (((ulonglong)param_2 & 7) != 0)) {
    uVar3 = crc32(~param_1,*(undefined1 *)param_2);
    uVar8 = (ulonglong)uVar3;
    puVar6 = (undefined8 *)((longlong)param_2 + 1);
    uVar10 = param_3 - 1;
    if ((uVar10 != 0) && (((ulonglong)puVar6 & 7) != 0)) {
      uVar3 = crc32(uVar3,*(undefined1 *)((longlong)param_2 + 1));
      uVar8 = (ulonglong)uVar3;
      puVar6 = (undefined8 *)((longlong)param_2 + 2);
      uVar10 = param_3 - 2;
      if ((uVar10 != 0) && (((ulonglong)puVar6 & 7) != 0)) {
        uVar3 = crc32(uVar3,*(undefined1 *)((longlong)param_2 + 2));
        uVar8 = (ulonglong)uVar3;
        puVar6 = (undefined8 *)((longlong)param_2 + 3);
        uVar10 = param_3 - 3;
        if ((uVar10 != 0) && (((ulonglong)puVar6 & 7) != 0)) {
          uVar3 = crc32(uVar3,*(undefined1 *)((longlong)param_2 + 3));
          uVar8 = (ulonglong)uVar3;
          puVar6 = (undefined8 *)((longlong)param_2 + 4);
          uVar10 = param_3 - 4;
          if ((uVar10 != 0) && (((ulonglong)puVar6 & 7) != 0)) {
            uVar3 = crc32(uVar3,*(undefined1 *)((longlong)param_2 + 4));
            uVar8 = (ulonglong)uVar3;
            puVar6 = (undefined8 *)((longlong)param_2 + 5);
            uVar10 = param_3 - 5;
            if ((uVar10 != 0) && (((ulonglong)puVar6 & 7) != 0)) {
              uVar3 = crc32(uVar3,*(undefined1 *)((longlong)param_2 + 5));
              uVar8 = (ulonglong)uVar3;
              puVar6 = (undefined8 *)((longlong)param_2 + 6);
              uVar10 = param_3 - 6;
              if ((uVar10 != 0) && (((ulonglong)puVar6 & 7) != 0)) {
                uVar3 = crc32(uVar3,*(undefined1 *)((longlong)param_2 + 6));
                uVar8 = (ulonglong)uVar3;
                puVar6 = (undefined8 *)((longlong)param_2 + 7);
                uVar10 = param_3 - 7;
                if ((uVar10 != 0) && (((ulonglong)puVar6 & 7) != 0)) {
                  uVar3 = crc32(uVar3,*(undefined1 *)((longlong)param_2 + 7));
                  uVar8 = (ulonglong)uVar3;
                  puVar6 = param_2 + 1;
                  uVar10 = param_3 - 8;
                }
              }
            }
          }
        }
      }
    }
  }
  for (; 0x5fff < uVar10; uVar10 = uVar10 - 0x6000) {
    uVar11 = 0xfffffffffffffff8;
    uVar2 = 0;
    uVar5 = 0;
    do {
      uVar7 = crc32(uVar8,*(undefined8 *)((longlong)puVar6 + uVar11 + 8));
      uVar2 = crc32(uVar2,*(undefined8 *)((longlong)puVar6 + uVar11 + 0x2008));
      uVar4 = crc32(uVar5,*(undefined8 *)((longlong)puVar6 + uVar11 + 0x4008));
      uVar8 = crc32(uVar7,*(undefined8 *)((longlong)puVar6 + uVar11 + 0x10));
      uVar2 = crc32(uVar2,*(undefined8 *)((longlong)puVar6 + uVar11 + 0x2010));
      uVar5 = crc32(uVar4,*(undefined8 *)((longlong)puVar6 + uVar11 + 0x4010));
      uVar11 = uVar11 + 0x10;
    } while (uVar11 < 0x1ff8);
    uVar3 = (uint)uVar2 ^ *(uint *)(&DAT_14010f560 + (uVar8 & 0xff) * 4) ^
            *(uint *)(&DAT_14010f960 + (uVar8 >> 8 & 0xff) * 4) ^
            *(uint *)(&DAT_14010fd60 + ((uint)(uVar8 >> 0xe) & 0x3fc)) ^
            *(uint *)(&DAT_140110160 + (uVar8 >> 0x18) * 4);
    uVar8 = uVar5 ^ (*(uint *)(&DAT_14010f960 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) ^
                     *(uint *)(&DAT_14010f560 + (ulonglong)(uVar3 & 0xff) * 4) ^
                     *(uint *)(&DAT_14010fd60 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) ^
                    *(uint *)(&DAT_140110160 + (ulonglong)(uVar3 >> 0x18) * 4));
    puVar6 = puVar6 + 0xc00;
  }
  for (; 0x2ff < uVar10; uVar10 = uVar10 - 0x300) {
    uVar11 = 0xfffffffffffffff8;
    uVar2 = 0;
    uVar5 = 0;
    do {
      uVar7 = crc32(uVar8,*(undefined8 *)((longlong)puVar6 + uVar11 + 8));
      uVar2 = crc32(uVar2,*(undefined8 *)((longlong)puVar6 + uVar11 + 0x108));
      uVar4 = crc32(uVar5,*(undefined8 *)((longlong)puVar6 + uVar11 + 0x208));
      uVar8 = crc32(uVar7,*(undefined8 *)((longlong)puVar6 + uVar11 + 0x10));
      uVar2 = crc32(uVar2,*(undefined8 *)((longlong)puVar6 + uVar11 + 0x110));
      uVar5 = crc32(uVar4,*(undefined8 *)((longlong)puVar6 + uVar11 + 0x210));
      uVar11 = uVar11 + 0x10;
    } while (uVar11 < 0xf8);
    uVar3 = (uint)uVar2 ^ *(uint *)(&DAT_140110560 + (uVar8 & 0xff) * 4) ^
            *(uint *)(&DAT_140110960 + (uVar8 >> 8 & 0xff) * 4) ^
            *(uint *)(&DAT_140110d60 + ((uint)(uVar8 >> 0xe) & 0x3fc)) ^
            *(uint *)(&DAT_140111160 + (uVar8 >> 0x18) * 4);
    uVar8 = uVar5 ^ (*(uint *)(&DAT_140110960 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) ^
                     *(uint *)(&DAT_140110560 + (ulonglong)(uVar3 & 0xff) * 4) ^
                     *(uint *)(&DAT_140110d60 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) ^
                    *(uint *)(&DAT_140111160 + (ulonglong)(uVar3 >> 0x18) * 4));
    puVar6 = puVar6 + 0x60;
  }
  uVar3 = (uint)uVar10 & 7;
  if ((uVar10 & 0x3f8) != 0) {
    puVar9 = (undefined8 *)((ulonglong)((uint)uVar10 & 0x3f8) + (longlong)puVar6);
    do {
      uVar8 = crc32(uVar8,*puVar6);
      puVar6 = puVar6 + 1;
    } while (puVar6 < puVar9);
  }
  uVar1 = (uint)uVar8;
  if (((((uVar10 & 7) != 0) && (uVar1 = crc32(uVar1,*(undefined1 *)puVar6), uVar3 != 1)) &&
      (uVar1 = crc32(uVar1,*(undefined1 *)((longlong)puVar6 + 1)), uVar3 != 2)) &&
     (((uVar1 = crc32(uVar1,*(undefined1 *)((longlong)puVar6 + 2)), uVar3 != 3 &&
       (uVar1 = crc32(uVar1,*(undefined1 *)((longlong)puVar6 + 3)), uVar3 != 4)) &&
      ((uVar1 = crc32(uVar1,*(undefined1 *)((longlong)puVar6 + 4)), uVar3 != 5 &&
       (uVar1 = crc32(uVar1,*(undefined1 *)((longlong)puVar6 + 5)), uVar3 != 6)))))) {
    uVar1 = crc32(uVar1,*(undefined1 *)((longlong)puVar6 + 6));
  }
  return ~uVar1;
}

