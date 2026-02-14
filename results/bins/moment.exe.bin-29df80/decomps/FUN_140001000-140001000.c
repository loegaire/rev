
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140001000(void)

{
  code *pcVar1;
  longlong lVar2;
  wchar_t *pwVar3;
  char *pcVar4;
  size_t sVar5;
  undefined2 *puVar6;
  void *pvVar7;
  void *pvVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  undefined8 *puVar12;
  ulonglong uVar13;
  code cVar14;
  undefined8 *puVar15;
  code *pcVar16;
  uint uVar17;
  char cVar18;
  ulonglong uVar19;
  uint uVar20;
  bool bVar21;
  undefined1 auVar22 [64];
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  undefined4 uVar45;
  undefined4 uVar46;
  undefined4 uVar47;
  undefined4 uVar48;
  undefined4 uVar49;
  undefined4 uVar50;
  undefined4 uVar51;
  wchar_t *local_68;
  undefined8 local_60;
  
  local_60 = 0xfffffffffffffffe;
  _DAT_14012b080 = ZEXT812(0);
  register0x0000120c = 0;
  _DAT_14012b090 = 0;
  DAT_14012b098 = 0xf;
  _DAT_14012b0b0 = 0;
  DAT_14012b0b8 = 0xf;
  _DAT_14012b0d0 = 0;
  DAT_14012b0d8 = 7;
  _DAT_14012b0f0 = 0;
  DAT_14012b0f8 = 7;
  _DAT_14012b110 = 0;
  DAT_14012b118 = 7;
  _DAT_14012b130 = 0;
  DAT_14012b138 = 0xf;
  _DAT_14012b0a0 = _DAT_14012b080;
  _DAT_14012b0c0 = _DAT_14012b080;
  _DAT_14012b0e0 = _DAT_14012b080;
  _DAT_14012b100 = _DAT_14012b080;
  _DAT_14012b120 = _DAT_14012b080;
  pcVar4 = operator_new(0x50);
  DAT_14012b120 = pcVar4;
  _DAT_14012b130 = 0x4e;
  DAT_14012b138 = 0x4f;
  builtin_strncpy(pcVar4,
                  "Mozilla/5.0 (Windows NT 10.0; Win64; x64; rv:91.E) Gecko/20100101 Firefox/85.0",
                  0x4f);
  uVar31 = 0x1d;
  uVar30 = 0x1e;
  uVar29 = 0x2c;
  uVar28 = 0x28;
  uVar27 = 0x25;
  uVar26 = 0x1c;
  uVar25 = 0x2c;
  uVar24 = 0x22;
  uVar23 = 0x1d;
  FUN_1400bd6c0((longlong *)&local_68);
  pwVar3 = local_68;
  _DAT_14012b140 = ZEXT1232(ZEXT812(0));
  sVar5 = strlen((char *)local_68);
  if ((longlong)sVar5 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140086cb0();
  }
  if (sVar5 < 0x10) {
    _DAT_14012b150 = sVar5;
    DAT_14012b158 = 0xf;
    memcpy(&DAT_14012b140,pwVar3,sVar5);
    puVar12 = &DAT_14012b140;
  }
  else {
    DAT_14012b158 = 0xf;
    uVar13 = 0x16;
    if (0x16 < (sVar5 | 0xf)) {
      uVar13 = sVar5 | 0xf;
    }
    if (uVar13 < 0xfff) {
      puVar12 = operator_new(uVar13 + 1);
    }
    else {
      pvVar8 = operator_new(uVar13 + 0x28);
      puVar12 = (undefined8 *)((longlong)pvVar8 + 0x27U & 0xffffffffffffffe0);
      puVar12[-1] = pvVar8;
    }
    DAT_14012b140 = puVar12;
    _DAT_14012b150 = sVar5;
    DAT_14012b158 = uVar13;
    memcpy(puVar12,pwVar3,sVar5);
  }
  *(undefined1 *)((longlong)puVar12 + sVar5) = 0;
  if (local_68 != (wchar_t *)0x0) {
    uVar9 = 0;
    lVar11 = readgsbase();
    puVar12 = (undefined8 *)
              **(undefined8 **)(*(longlong *)(*(longlong *)(lVar11 + 0x60) + 0x18) + 0x10);
    uVar10 = 0xe2398719;
    puVar15 = puVar12;
    do {
      if (uVar9 == 0) {
LAB_1400012fd:
        lVar2 = puVar15[6];
        uVar17 = *(uint *)(lVar2 + 0x88 + (longlong)*(int *)(lVar2 + 0x3c));
        lVar11 = lVar2 + (ulonglong)uVar17;
        if ((ulonglong)uVar17 != 0) {
          uVar13 = (ulonglong)*(uint *)(lVar11 + 0x18);
          do {
            bVar21 = uVar13 == 0;
            uVar13 = uVar13 - 1;
            if (bVar21) goto LAB_1400012b3;
            uVar19 = (ulonglong)*(uint *)((ulonglong)*(uint *)(lVar11 + 0x20) + lVar2 + uVar13 * 4);
            cVar18 = *(char *)(lVar2 + uVar19);
            if (cVar18 == '\0') {
              uVar20 = 0x1cba1898;
            }
            else {
              pcVar4 = (char *)(uVar19 + lVar2 + 1);
              uVar20 = 0x1cba1898;
              do {
                uVar20 = ((int)cVar18 ^ uVar20) * 0x1000193;
                cVar18 = *pcVar4;
                pcVar4 = pcVar4 + 1;
              } while (cVar18 != '\0');
            }
          } while (uVar20 != uVar10);
          uVar9 = *(uint *)((ulonglong)*(uint *)(lVar11 + 0x1c) + lVar2 +
                           (ulonglong)
                           *(ushort *)
                            ((ulonglong)*(uint *)(lVar11 + 0x24) + lVar2 + (uVar13 & 0xffffffff) * 2
                            ) * 4);
          pcVar16 = (code *)(lVar2 + (ulonglong)uVar9);
          if ((uVar9 <= uVar17) ||
             ((code *)(lVar11 + (ulonglong)
                                *(uint *)(lVar2 + 0x8c + (longlong)*(int *)(lVar2 + 0x3c))) <=
              pcVar16)) goto LAB_14000142f;
          uVar10 = 0x1cba1898;
          uVar9 = 0x1cba1898;
          cVar14 = *pcVar16;
          while (cVar14 != (code)0x2e) {
            uVar9 = ((int)(char)cVar14 ^ uVar9) * 0x1000193;
            pcVar1 = pcVar16 + 1;
            pcVar16 = pcVar16 + 1;
            cVar14 = *pcVar1;
          }
          cVar14 = pcVar16[1];
          if (cVar14 != (code)0x0) {
            pcVar16 = pcVar16 + 2;
            uVar10 = 0x1cba1898;
            do {
              uVar10 = ((int)(char)cVar14 ^ uVar10) * 0x1000193;
              cVar14 = *pcVar16;
              pcVar16 = pcVar16 + 1;
            } while (cVar14 != (code)0x0);
          }
          puVar15 = (undefined8 *)*puVar12;
        }
      }
      else {
        uVar17 = 0x1cba1898;
        if (1 < (ushort)(*(int *)(puVar15 + 0xb) - 8U)) {
          lVar11 = 0;
          do {
            uVar17 = ((int)*(char *)(puVar15[0xc] + lVar11) ^ uVar17) * 0x1000193;
            lVar11 = lVar11 + 2;
          } while ((ulonglong)((*(int *)(puVar15 + 0xb) - 8U & 0xffff) >> 1) * 2 != lVar11);
        }
        if (uVar17 == uVar9) goto LAB_1400012fd;
      }
LAB_1400012b3:
      puVar15 = (undefined8 *)*puVar15;
    } while( true );
  }
LAB_140001441:
  uVar24 = 8;
  uVar23 = 0xf;
  FUN_1400bb6a0((longlong *)&local_68);
  pwVar3 = local_68;
  _DAT_14012b160 = ZEXT1232(ZEXT812(0));
  sVar5 = strlen((char *)local_68);
  if ((longlong)sVar5 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140086cb0();
  }
  if (sVar5 < 0x10) {
    _DAT_14012b170 = sVar5;
    DAT_14012b178 = 0xf;
    memcpy(&DAT_14012b160,pwVar3,sVar5);
    puVar12 = &DAT_14012b160;
  }
  else {
    DAT_14012b178 = 0xf;
    uVar13 = 0x16;
    if (0x16 < (sVar5 | 0xf)) {
      uVar13 = sVar5 | 0xf;
    }
    if (uVar13 < 0xfff) {
      puVar12 = operator_new(uVar13 + 1);
    }
    else {
      pvVar8 = operator_new(uVar13 + 0x28);
      puVar12 = (undefined8 *)((longlong)pvVar8 + 0x27U & 0xffffffffffffffe0);
      puVar12[-1] = pvVar8;
    }
    DAT_14012b160 = puVar12;
    _DAT_14012b170 = sVar5;
    DAT_14012b178 = uVar13;
    memcpy(puVar12,pwVar3,sVar5);
  }
  *(undefined1 *)((longlong)puVar12 + sVar5) = 0;
  if (local_68 != (wchar_t *)0x0) {
    uVar9 = 0;
    lVar11 = readgsbase();
    puVar12 = (undefined8 *)
              **(undefined8 **)(*(longlong *)(*(longlong *)(lVar11 + 0x60) + 0x18) + 0x10);
    uVar10 = 0xe2398719;
    puVar15 = puVar12;
    do {
      if (uVar9 == 0) {
LAB_1400015cd:
        lVar2 = puVar15[6];
        uVar17 = *(uint *)(lVar2 + 0x88 + (longlong)*(int *)(lVar2 + 0x3c));
        lVar11 = lVar2 + (ulonglong)uVar17;
        if ((ulonglong)uVar17 != 0) {
          uVar13 = (ulonglong)*(uint *)(lVar11 + 0x18);
          do {
            bVar21 = uVar13 == 0;
            uVar13 = uVar13 - 1;
            if (bVar21) goto LAB_140001583;
            uVar19 = (ulonglong)*(uint *)((ulonglong)*(uint *)(lVar11 + 0x20) + lVar2 + uVar13 * 4);
            cVar18 = *(char *)(lVar2 + uVar19);
            if (cVar18 == '\0') {
              uVar20 = 0x1cba1898;
            }
            else {
              pcVar4 = (char *)(uVar19 + lVar2 + 1);
              uVar20 = 0x1cba1898;
              do {
                uVar20 = ((int)cVar18 ^ uVar20) * 0x1000193;
                cVar18 = *pcVar4;
                pcVar4 = pcVar4 + 1;
              } while (cVar18 != '\0');
            }
          } while (uVar20 != uVar10);
          uVar9 = *(uint *)((ulonglong)*(uint *)(lVar11 + 0x1c) + lVar2 +
                           (ulonglong)
                           *(ushort *)
                            ((ulonglong)*(uint *)(lVar11 + 0x24) + lVar2 + (uVar13 & 0xffffffff) * 2
                            ) * 4);
          pcVar16 = (code *)(lVar2 + (ulonglong)uVar9);
          if ((uVar9 <= uVar17) ||
             ((code *)(lVar11 + (ulonglong)
                                *(uint *)(lVar2 + 0x8c + (longlong)*(int *)(lVar2 + 0x3c))) <=
              pcVar16)) goto LAB_1400016ff;
          uVar10 = 0x1cba1898;
          uVar9 = 0x1cba1898;
          cVar14 = *pcVar16;
          while (cVar14 != (code)0x2e) {
            uVar9 = ((int)(char)cVar14 ^ uVar9) * 0x1000193;
            pcVar1 = pcVar16 + 1;
            pcVar16 = pcVar16 + 1;
            cVar14 = *pcVar1;
          }
          cVar14 = pcVar16[1];
          if (cVar14 != (code)0x0) {
            pcVar16 = pcVar16 + 2;
            uVar10 = 0x1cba1898;
            do {
              uVar10 = ((int)(char)cVar14 ^ uVar10) * 0x1000193;
              cVar14 = *pcVar16;
              pcVar16 = pcVar16 + 1;
            } while (cVar14 != (code)0x0);
          }
          puVar15 = (undefined8 *)*puVar12;
        }
      }
      else {
        uVar17 = 0x1cba1898;
        if (1 < (ushort)(*(int *)(puVar15 + 0xb) - 8U)) {
          lVar11 = 0;
          do {
            uVar17 = ((int)*(char *)(puVar15[0xc] + lVar11) ^ uVar17) * 0x1000193;
            lVar11 = lVar11 + 2;
          } while ((ulonglong)((*(int *)(puVar15 + 0xb) - 8U & 0xffff) >> 1) * 2 != lVar11);
        }
        if (uVar17 == uVar9) goto LAB_1400015cd;
      }
LAB_140001583:
      puVar15 = (undefined8 *)*puVar15;
    } while( true );
  }
LAB_140001711:
  uVar27 = 4;
  uVar26 = 0xc;
  uVar25 = 2;
  uVar24 = 2;
  uVar23 = 0;
  FUN_1400bd5c0((longlong *)&local_68);
  pwVar3 = local_68;
  _DAT_14012b180 = ZEXT1232(ZEXT812(0));
  sVar5 = strlen((char *)local_68);
  if ((longlong)sVar5 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140086cb0();
  }
  if (sVar5 < 0x10) {
    _DAT_14012b190 = sVar5;
    DAT_14012b198 = 0xf;
    memcpy(&DAT_14012b180,pwVar3,sVar5);
    puVar12 = &DAT_14012b180;
  }
  else {
    DAT_14012b198 = 0xf;
    uVar13 = 0x16;
    if (0x16 < (sVar5 | 0xf)) {
      uVar13 = sVar5 | 0xf;
    }
    if (uVar13 < 0xfff) {
      puVar12 = operator_new(uVar13 + 1);
    }
    else {
      pvVar8 = operator_new(uVar13 + 0x28);
      puVar12 = (undefined8 *)((longlong)pvVar8 + 0x27U & 0xffffffffffffffe0);
      puVar12[-1] = pvVar8;
    }
    DAT_14012b180 = puVar12;
    _DAT_14012b190 = sVar5;
    DAT_14012b198 = uVar13;
    memcpy(puVar12,pwVar3,sVar5);
  }
  *(undefined1 *)((longlong)puVar12 + sVar5) = 0;
  if (local_68 != (wchar_t *)0x0) {
    uVar9 = 0;
    lVar11 = readgsbase();
    puVar12 = (undefined8 *)
              **(undefined8 **)(*(longlong *)(*(longlong *)(lVar11 + 0x60) + 0x18) + 0x10);
    uVar10 = 0xe2398719;
    puVar15 = puVar12;
    do {
      if (uVar9 == 0) {
LAB_1400018bd:
        lVar2 = puVar15[6];
        uVar17 = *(uint *)(lVar2 + 0x88 + (longlong)*(int *)(lVar2 + 0x3c));
        lVar11 = lVar2 + (ulonglong)uVar17;
        if ((ulonglong)uVar17 != 0) {
          uVar13 = (ulonglong)*(uint *)(lVar11 + 0x18);
          do {
            bVar21 = uVar13 == 0;
            uVar13 = uVar13 - 1;
            if (bVar21) goto LAB_140001873;
            uVar19 = (ulonglong)*(uint *)((ulonglong)*(uint *)(lVar11 + 0x20) + lVar2 + uVar13 * 4);
            cVar18 = *(char *)(lVar2 + uVar19);
            if (cVar18 == '\0') {
              uVar20 = 0x1cba1898;
            }
            else {
              pcVar4 = (char *)(uVar19 + lVar2 + 1);
              uVar20 = 0x1cba1898;
              do {
                uVar20 = ((int)cVar18 ^ uVar20) * 0x1000193;
                cVar18 = *pcVar4;
                pcVar4 = pcVar4 + 1;
              } while (cVar18 != '\0');
            }
          } while (uVar20 != uVar10);
          uVar9 = *(uint *)((ulonglong)*(uint *)(lVar11 + 0x1c) + lVar2 +
                           (ulonglong)
                           *(ushort *)
                            ((ulonglong)*(uint *)(lVar11 + 0x24) + lVar2 + (uVar13 & 0xffffffff) * 2
                            ) * 4);
          pcVar16 = (code *)(lVar2 + (ulonglong)uVar9);
          if ((uVar9 <= uVar17) ||
             ((code *)(lVar11 + (ulonglong)
                                *(uint *)(lVar2 + 0x8c + (longlong)*(int *)(lVar2 + 0x3c))) <=
              pcVar16)) goto LAB_1400019ef;
          uVar10 = 0x1cba1898;
          uVar9 = 0x1cba1898;
          cVar14 = *pcVar16;
          while (cVar14 != (code)0x2e) {
            uVar9 = ((int)(char)cVar14 ^ uVar9) * 0x1000193;
            pcVar1 = pcVar16 + 1;
            pcVar16 = pcVar16 + 1;
            cVar14 = *pcVar1;
          }
          cVar14 = pcVar16[1];
          if (cVar14 != (code)0x0) {
            pcVar16 = pcVar16 + 2;
            uVar10 = 0x1cba1898;
            do {
              uVar10 = ((int)(char)cVar14 ^ uVar10) * 0x1000193;
              cVar14 = *pcVar16;
              pcVar16 = pcVar16 + 1;
            } while (cVar14 != (code)0x0);
          }
          puVar15 = (undefined8 *)*puVar12;
        }
      }
      else {
        uVar17 = 0x1cba1898;
        if (1 < (ushort)(*(int *)(puVar15 + 0xb) - 8U)) {
          lVar11 = 0;
          do {
            uVar17 = ((int)*(char *)(puVar15[0xc] + lVar11) ^ uVar17) * 0x1000193;
            lVar11 = lVar11 + 2;
          } while ((ulonglong)((*(int *)(puVar15 + 0xb) - 8U & 0xffff) >> 1) * 2 != lVar11);
        }
        if (uVar17 == uVar9) goto LAB_1400018bd;
      }
LAB_140001873:
      puVar15 = (undefined8 *)*puVar15;
    } while( true );
  }
LAB_140001a01:
  uVar51 = 0x40;
  uVar50 = 6;
  uVar49 = 0xe;
  uVar48 = 0xb;
  uVar47 = 5;
  uVar46 = 0x17;
  uVar45 = 0x13;
  uVar44 = 0x48;
  uVar43 = 0x40;
  uVar42 = 0;
  uVar41 = 0x13;
  uVar40 = 0;
  uVar39 = 3;
  uVar38 = 0;
  uVar37 = 0x13;
  uVar36 = 4;
  uVar35 = 0xc;
  uVar34 = 0xc;
  uVar33 = 0x11;
  uVar32 = 0x48;
  uVar31 = 0x40;
  uVar30 = 3;
  uVar29 = 0xd;
  uVar28 = 4;
  uVar27 = 0x13;
  uVar26 = 0x17;
  uVar25 = 4;
  uVar24 = 0x48;
  uVar23 = 0x40;
  FUN_1400c0a10((longlong *)&local_68);
  pwVar3 = local_68;
  _DAT_14012b1a0 = ZEXT1232(ZEXT812(0));
  sVar5 = wcslen(local_68);
  if (0x7ffffffffffffffe < sVar5) {
                    /* WARNING: Subroutine does not return */
    FUN_140086cb0();
  }
  if (sVar5 < 8) {
    _DAT_14012b1b0 = sVar5;
    DAT_14012b1b8 = 7;
    memcpy(&DAT_14012b1a0,pwVar3,sVar5 * 2);
    puVar6 = (undefined2 *)((longlong)&DAT_14012b1a0 + sVar5 * 2);
  }
  else {
    DAT_14012b1b8 = 7;
    uVar13 = sVar5 | 7;
    if (0x7ffffffffffffffe < uVar13) {
LAB_140002588:
                    /* WARNING: Subroutine does not return */
      FUN_1400bb790();
    }
    uVar19 = 10;
    if (10 < uVar13) {
      uVar19 = uVar13;
    }
    if (uVar19 < 0x7ff) {
      pvVar8 = operator_new(uVar19 * 2 + 2);
    }
    else {
      if (0x7fffffffffffffeb < uVar19) goto LAB_140002588;
      pvVar7 = operator_new(uVar19 * 2 + 0x29);
      pvVar8 = (void *)((longlong)pvVar7 + 0x27U & 0xffffffffffffffe0);
      *(void **)((longlong)pvVar8 - 8) = pvVar7;
    }
    DAT_14012b1a0 = pvVar8;
    _DAT_14012b1b0 = sVar5;
    DAT_14012b1b8 = uVar19;
    memcpy(pvVar8,pwVar3,sVar5 * 2);
    puVar6 = (undefined2 *)((longlong)pvVar8 + sVar5 * 2);
  }
  *puVar6 = 0;
  if (local_68 != (wchar_t *)0x0) {
    uVar9 = 0;
    lVar11 = readgsbase();
    puVar12 = (undefined8 *)
              **(undefined8 **)(*(longlong *)(*(longlong *)(lVar11 + 0x60) + 0x18) + 0x10);
    uVar10 = 0xe2398719;
    puVar15 = puVar12;
    do {
      if (uVar9 == 0) {
LAB_140001cdd:
        lVar2 = puVar15[6];
        uVar17 = *(uint *)(lVar2 + 0x88 + (longlong)*(int *)(lVar2 + 0x3c));
        lVar11 = lVar2 + (ulonglong)uVar17;
        if ((ulonglong)uVar17 != 0) {
          uVar13 = (ulonglong)*(uint *)(lVar11 + 0x18);
          do {
            bVar21 = uVar13 == 0;
            uVar13 = uVar13 - 1;
            if (bVar21) goto LAB_140001c93;
            uVar19 = (ulonglong)*(uint *)((ulonglong)*(uint *)(lVar11 + 0x20) + lVar2 + uVar13 * 4);
            cVar18 = *(char *)(lVar2 + uVar19);
            if (cVar18 == '\0') {
              uVar20 = 0x1cba1898;
            }
            else {
              pcVar4 = (char *)(uVar19 + lVar2 + 1);
              uVar20 = 0x1cba1898;
              do {
                uVar20 = ((int)cVar18 ^ uVar20) * 0x1000193;
                cVar18 = *pcVar4;
                pcVar4 = pcVar4 + 1;
              } while (cVar18 != '\0');
            }
          } while (uVar20 != uVar10);
          uVar9 = *(uint *)((ulonglong)*(uint *)(lVar11 + 0x1c) + lVar2 +
                           (ulonglong)
                           *(ushort *)
                            ((ulonglong)*(uint *)(lVar11 + 0x24) + lVar2 + (uVar13 & 0xffffffff) * 2
                            ) * 4);
          pcVar16 = (code *)(lVar2 + (ulonglong)uVar9);
          if ((uVar9 <= uVar17) ||
             ((code *)(lVar11 + (ulonglong)
                                *(uint *)(lVar2 + 0x8c + (longlong)*(int *)(lVar2 + 0x3c))) <=
              pcVar16)) goto LAB_140001e0f;
          uVar10 = 0x1cba1898;
          uVar9 = 0x1cba1898;
          cVar14 = *pcVar16;
          while (cVar14 != (code)0x2e) {
            uVar9 = ((int)(char)cVar14 ^ uVar9) * 0x1000193;
            pcVar1 = pcVar16 + 1;
            pcVar16 = pcVar16 + 1;
            cVar14 = *pcVar1;
          }
          cVar14 = pcVar16[1];
          if (cVar14 != (code)0x0) {
            pcVar16 = pcVar16 + 2;
            uVar10 = 0x1cba1898;
            do {
              uVar10 = ((int)(char)cVar14 ^ uVar10) * 0x1000193;
              cVar14 = *pcVar16;
              pcVar16 = pcVar16 + 1;
            } while (cVar14 != (code)0x0);
          }
          puVar15 = (undefined8 *)*puVar12;
        }
      }
      else {
        uVar17 = 0x1cba1898;
        if (1 < (ushort)(*(int *)(puVar15 + 0xb) - 8U)) {
          lVar11 = 0;
          do {
            uVar17 = ((int)*(char *)(puVar15[0xc] + lVar11) ^ uVar17) * 0x1000193;
            lVar11 = lVar11 + 2;
          } while ((ulonglong)((*(int *)(puVar15 + 0xb) - 8U & 0xffff) >> 1) * 2 != lVar11);
        }
        if (uVar17 == uVar9) goto LAB_140001cdd;
      }
LAB_140001c93:
      puVar15 = (undefined8 *)*puVar15;
    } while( true );
  }
LAB_140001e21:
  uVar30 = 0x12;
  uVar29 = 5;
  uVar28 = 0x13;
  uVar27 = 0x27;
  uVar26 = 6;
  uVar25 = 0xe;
  uVar24 = 0x25;
  uVar23 = 0x17;
  FUN_1400bc720((longlong *)&local_68);
  pwVar3 = local_68;
  _DAT_14012b1c0 = ZEXT1232(ZEXT812(0));
  sVar5 = wcslen(local_68);
  if (0x7ffffffffffffffe < sVar5) {
                    /* WARNING: Subroutine does not return */
    FUN_140086cb0();
  }
  if (sVar5 < 8) {
    _DAT_14012b1d0 = sVar5;
    DAT_14012b1d8 = 7;
    memcpy(&DAT_14012b1c0,pwVar3,sVar5 * 2);
    puVar6 = (undefined2 *)((longlong)&DAT_14012b1c0 + sVar5 * 2);
  }
  else {
    DAT_14012b1d8 = 7;
    uVar13 = sVar5 | 7;
    if (0x7ffffffffffffffe < uVar13) {
LAB_14000258d:
                    /* WARNING: Subroutine does not return */
      FUN_1400bb790();
    }
    uVar19 = 10;
    if (10 < uVar13) {
      uVar19 = uVar13;
    }
    if (uVar19 < 0x7ff) {
      pvVar8 = operator_new(uVar19 * 2 + 2);
    }
    else {
      if (0x7fffffffffffffeb < uVar19) goto LAB_14000258d;
      pvVar7 = operator_new(uVar19 * 2 + 0x29);
      pvVar8 = (void *)((longlong)pvVar7 + 0x27U & 0xffffffffffffffe0);
      *(void **)((longlong)pvVar8 - 8) = pvVar7;
    }
    DAT_14012b1c0 = pvVar8;
    _DAT_14012b1d0 = sVar5;
    DAT_14012b1d8 = uVar19;
    memcpy(pvVar8,pwVar3,sVar5 * 2);
    puVar6 = (undefined2 *)((longlong)pvVar8 + sVar5 * 2);
  }
  *puVar6 = 0;
  if (local_68 != (wchar_t *)0x0) {
    uVar9 = 0;
    lVar11 = readgsbase();
    puVar12 = (undefined8 *)
              **(undefined8 **)(*(longlong *)(*(longlong *)(lVar11 + 0x60) + 0x18) + 0x10);
    uVar10 = 0xe2398719;
    puVar15 = puVar12;
    do {
      if (uVar9 == 0) {
LAB_14000200d:
        lVar2 = puVar15[6];
        uVar17 = *(uint *)(lVar2 + 0x88 + (longlong)*(int *)(lVar2 + 0x3c));
        lVar11 = lVar2 + (ulonglong)uVar17;
        if ((ulonglong)uVar17 != 0) {
          uVar13 = (ulonglong)*(uint *)(lVar11 + 0x18);
          do {
            bVar21 = uVar13 == 0;
            uVar13 = uVar13 - 1;
            if (bVar21) goto LAB_140001fc3;
            uVar19 = (ulonglong)*(uint *)((ulonglong)*(uint *)(lVar11 + 0x20) + lVar2 + uVar13 * 4);
            cVar18 = *(char *)(lVar2 + uVar19);
            if (cVar18 == '\0') {
              uVar20 = 0x1cba1898;
            }
            else {
              pcVar4 = (char *)(uVar19 + lVar2 + 1);
              uVar20 = 0x1cba1898;
              do {
                uVar20 = ((int)cVar18 ^ uVar20) * 0x1000193;
                cVar18 = *pcVar4;
                pcVar4 = pcVar4 + 1;
              } while (cVar18 != '\0');
            }
          } while (uVar20 != uVar10);
          uVar9 = *(uint *)((ulonglong)*(uint *)(lVar11 + 0x1c) + lVar2 +
                           (ulonglong)
                           *(ushort *)
                            ((ulonglong)*(uint *)(lVar11 + 0x24) + lVar2 + (uVar13 & 0xffffffff) * 2
                            ) * 4);
          pcVar16 = (code *)(lVar2 + (ulonglong)uVar9);
          if ((uVar9 <= uVar17) ||
             ((code *)(lVar11 + (ulonglong)
                                *(uint *)(lVar2 + 0x8c + (longlong)*(int *)(lVar2 + 0x3c))) <=
              pcVar16)) goto LAB_14000213f;
          uVar10 = 0x1cba1898;
          uVar9 = 0x1cba1898;
          cVar14 = *pcVar16;
          while (cVar14 != (code)0x2e) {
            uVar9 = ((int)(char)cVar14 ^ uVar9) * 0x1000193;
            pcVar1 = pcVar16 + 1;
            pcVar16 = pcVar16 + 1;
            cVar14 = *pcVar1;
          }
          cVar14 = pcVar16[1];
          if (cVar14 != (code)0x0) {
            pcVar16 = pcVar16 + 2;
            uVar10 = 0x1cba1898;
            do {
              uVar10 = ((int)(char)cVar14 ^ uVar10) * 0x1000193;
              cVar14 = *pcVar16;
              pcVar16 = pcVar16 + 1;
            } while (cVar14 != (code)0x0);
          }
          puVar15 = (undefined8 *)*puVar12;
        }
      }
      else {
        uVar17 = 0x1cba1898;
        if (1 < (ushort)(*(int *)(puVar15 + 0xb) - 8U)) {
          lVar11 = 0;
          do {
            uVar17 = ((int)*(char *)(puVar15[0xc] + lVar11) ^ uVar17) * 0x1000193;
            lVar11 = lVar11 + 2;
          } while ((ulonglong)((*(int *)(puVar15 + 0xb) - 8U & 0xffff) >> 1) * 2 != lVar11);
        }
        if (uVar17 == uVar9) goto LAB_14000200d;
      }
LAB_140001fc3:
      puVar15 = (undefined8 *)*puVar15;
    } while( true );
  }
LAB_140002151:
  uVar30 = 0x13;
  uVar29 = 0;
  uVar28 = 3;
  uVar27 = 0x3e;
  uVar26 = 0x11;
  uVar25 = 4;
  uVar24 = 0x12;
  uVar23 = 0x14;
  FUN_1400bc720((longlong *)&local_68);
  pwVar3 = local_68;
  _DAT_14012b1e0 = ZEXT1232(ZEXT812(0));
  sVar5 = wcslen(local_68);
  if (0x7ffffffffffffffe < sVar5) {
                    /* WARNING: Subroutine does not return */
    FUN_140086cb0();
  }
  if (sVar5 < 8) {
    _DAT_14012b1f0 = sVar5;
    DAT_14012b1f8 = 7;
    memcpy(&DAT_14012b1e0,pwVar3,sVar5 * 2);
    puVar6 = (undefined2 *)((longlong)&DAT_14012b1e0 + sVar5 * 2);
  }
  else {
    DAT_14012b1f8 = 7;
    uVar13 = sVar5 | 7;
    if (0x7ffffffffffffffe < uVar13) {
LAB_140002592:
                    /* WARNING: Subroutine does not return */
      FUN_1400bb790();
    }
    uVar19 = 10;
    if (10 < uVar13) {
      uVar19 = uVar13;
    }
    if (uVar19 < 0x7ff) {
      pvVar8 = operator_new(uVar19 * 2 + 2);
    }
    else {
      if (0x7fffffffffffffeb < uVar19) goto LAB_140002592;
      pvVar7 = operator_new(uVar19 * 2 + 0x29);
      pvVar8 = (void *)((longlong)pvVar7 + 0x27U & 0xffffffffffffffe0);
      *(void **)((longlong)pvVar8 - 8) = pvVar7;
    }
    DAT_14012b1e0 = pvVar8;
    _DAT_14012b1f0 = sVar5;
    DAT_14012b1f8 = uVar19;
    memcpy(pvVar8,pwVar3,sVar5 * 2);
    puVar6 = (undefined2 *)((longlong)pvVar8 + sVar5 * 2);
  }
  *puVar6 = 0;
  if (local_68 != (wchar_t *)0x0) {
    uVar9 = 0;
    lVar11 = readgsbase();
    puVar12 = (undefined8 *)
              **(undefined8 **)(*(longlong *)(*(longlong *)(lVar11 + 0x60) + 0x18) + 0x10);
    uVar10 = 0xe2398719;
    puVar15 = puVar12;
    do {
      if (uVar9 == 0) {
LAB_14000233d:
        lVar2 = puVar15[6];
        uVar17 = *(uint *)(lVar2 + 0x88 + (longlong)*(int *)(lVar2 + 0x3c));
        lVar11 = lVar2 + (ulonglong)uVar17;
        if ((ulonglong)uVar17 != 0) {
          uVar13 = (ulonglong)*(uint *)(lVar11 + 0x18);
          do {
            bVar21 = uVar13 == 0;
            uVar13 = uVar13 - 1;
            if (bVar21) goto LAB_1400022f3;
            uVar19 = (ulonglong)*(uint *)((ulonglong)*(uint *)(lVar11 + 0x20) + lVar2 + uVar13 * 4);
            cVar18 = *(char *)(lVar2 + uVar19);
            if (cVar18 == '\0') {
              uVar20 = 0x1cba1898;
            }
            else {
              pcVar4 = (char *)(uVar19 + lVar2 + 1);
              uVar20 = 0x1cba1898;
              do {
                uVar20 = ((int)cVar18 ^ uVar20) * 0x1000193;
                cVar18 = *pcVar4;
                pcVar4 = pcVar4 + 1;
              } while (cVar18 != '\0');
            }
          } while (uVar20 != uVar10);
          uVar9 = *(uint *)((ulonglong)*(uint *)(lVar11 + 0x1c) + lVar2 +
                           (ulonglong)
                           *(ushort *)
                            ((ulonglong)*(uint *)(lVar11 + 0x24) + lVar2 + (uVar13 & 0xffffffff) * 2
                            ) * 4);
          pcVar16 = (code *)(lVar2 + (ulonglong)uVar9);
          if ((uVar9 <= uVar17) ||
             ((code *)(lVar11 + (ulonglong)
                                *(uint *)(lVar2 + 0x8c + (longlong)*(int *)(lVar2 + 0x3c))) <=
              pcVar16)) goto LAB_14000246f;
          uVar10 = 0x1cba1898;
          uVar9 = 0x1cba1898;
          cVar14 = *pcVar16;
          while (cVar14 != (code)0x2e) {
            uVar9 = ((int)(char)cVar14 ^ uVar9) * 0x1000193;
            pcVar1 = pcVar16 + 1;
            pcVar16 = pcVar16 + 1;
            cVar14 = *pcVar1;
          }
          cVar14 = pcVar16[1];
          if (cVar14 != (code)0x0) {
            pcVar16 = pcVar16 + 2;
            uVar10 = 0x1cba1898;
            do {
              uVar10 = ((int)(char)cVar14 ^ uVar10) * 0x1000193;
              cVar14 = *pcVar16;
              pcVar16 = pcVar16 + 1;
            } while (cVar14 != (code)0x0);
          }
          puVar15 = (undefined8 *)*puVar12;
        }
      }
      else {
        uVar17 = 0x1cba1898;
        if (1 < (ushort)(*(int *)(puVar15 + 0xb) - 8U)) {
          lVar11 = 0;
          do {
            uVar17 = ((int)*(char *)(puVar15[0xc] + lVar11) ^ uVar17) * 0x1000193;
            lVar11 = lVar11 + 2;
          } while ((ulonglong)((*(int *)(puVar15 + 0xb) - 8U & 0xffff) >> 1) * 2 != lVar11);
        }
        if (uVar17 == uVar9) goto LAB_14000233d;
      }
LAB_1400022f3:
      puVar15 = (undefined8 *)*puVar15;
    } while( true );
  }
LAB_140002481:
  _DAT_14012b200 = 0;
  DAT_14012b204 = 0;
  _Cnd_init_in_situ(&DAT_14012b208);
  DAT_14012b250 = 0;
  _DAT_14012b258 = ZEXT1232(ZEXT812(0));
  _DAT_14012b278 = _DAT_14012b258;
  pvVar8 = operator_new(0x40);
  *(void **)pvVar8 = pvVar8;
  *(void **)((longlong)pvVar8 + 8) = pvVar8;
  *(void **)((longlong)pvVar8 + 0x10) = pvVar8;
  *(undefined2 *)((longlong)pvVar8 + 0x18) = 0x101;
  DAT_14012b288 = pvVar8;
  _DAT_14012b298 = ZEXT812(0);
  register0x0000138c = 0;
  auVar22 = ZEXT1664(_DAT_14012b298);
  pvVar8 = operator_new(0x40);
  *(void **)pvVar8 = pvVar8;
  *(void **)((longlong)pvVar8 + 8) = pvVar8;
  *(void **)((longlong)pvVar8 + 0x10) = pvVar8;
  *(undefined2 *)((longlong)pvVar8 + 0x18) = 0x101;
  DAT_14012b298 = pvVar8;
  _DAT_14012b2a8 = auVar22._0_16_;
  pvVar8 = operator_new(0x40);
  *(void **)pvVar8 = pvVar8;
  *(void **)((longlong)pvVar8 + 8) = pvVar8;
  *(void **)((longlong)pvVar8 + 0x10) = pvVar8;
  *(undefined2 *)((longlong)pvVar8 + 0x18) = 0x101;
  DAT_14012b2a8 = pvVar8;
  _DAT_14012b2b8 = ZEXT812(0);
  register0x0000120c = 0;
  atexit(FUN_1400c0c40);
  return;
LAB_14000142f:
  (*pcVar16)(local_68,0,0x8000,pcVar16,uVar23,uVar24,uVar25,uVar26,uVar27,uVar28,uVar29,uVar30,
             uVar31);
  goto LAB_140001441;
LAB_1400016ff:
  (*pcVar16)(local_68,0,0x8000,pcVar16,uVar23,uVar24);
  goto LAB_140001711;
LAB_1400019ef:
  (*pcVar16)(local_68,0,0x8000,pcVar16,uVar23,uVar24,uVar25,uVar26,uVar27);
  goto LAB_140001a01;
LAB_140001e0f:
  (*pcVar16)(local_68,0,0x8000,pcVar16,uVar23,uVar24,uVar25,uVar26,uVar27,uVar28,uVar29,uVar30,
             uVar31,uVar32,uVar33,uVar34,uVar35,uVar36,uVar37,uVar38,uVar39,uVar40,uVar41,uVar42,
             uVar43,uVar44,uVar45,uVar46,uVar47,uVar48,uVar49,uVar50,uVar51);
  goto LAB_140001e21;
LAB_14000213f:
  (*pcVar16)(local_68,0,0x8000,pcVar16,uVar23,uVar24,uVar25,uVar26,uVar27,uVar28,uVar29,uVar30);
  goto LAB_140002151;
LAB_14000246f:
  (*pcVar16)(local_68,0,0x8000,pcVar16,uVar23,uVar24,uVar25,uVar26,uVar27,uVar28,uVar29,uVar30);
  goto LAB_140002481;
}

