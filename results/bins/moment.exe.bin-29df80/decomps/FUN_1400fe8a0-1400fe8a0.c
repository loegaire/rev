
void FUN_1400fe8a0(void)

{
  code *pcVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 auVar4 [32];
  undefined1 auVar5 [32];
  undefined8 uVar6;
  undefined4 uVar7;
  int iVar8;
  size_t sVar9;
  void *pvVar10;
  undefined2 *puVar11;
  wchar_t *pwVar12;
  void *pvVar13;
  uint uVar14;
  undefined1 auVar15 [8];
  code cVar16;
  longlong *plVar17;
  longlong lVar18;
  longlong lVar19;
  undefined1 *puVar20;
  uint uVar21;
  ulonglong uVar22;
  undefined8 *puVar23;
  code *pcVar24;
  uint uVar25;
  ulonglong uVar26;
  char *pcVar27;
  ulonglong uVar28;
  code *pcVar29;
  char cVar30;
  uint uVar31;
  uint uVar32;
  bool bVar33;
  undefined1 *local_f0;
  undefined1 local_e8 [32];
  undefined1 local_c8 [32];
  undefined1 local_a8 [32];
  longlong local_88;
  char *local_80;
  undefined1 local_78 [8];
  undefined1 auStack_70 [24];
  longlong local_58;
  longlong local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  lVar19 = 0;
LAB_1400fe8e5:
  auVar4._24_8_ = 0;
  auVar4._0_24_ = auStack_70;
  _local_78 = auVar4 << 0x40;
  lVar18 = readgsbase();
  lVar18 = *(longlong *)
            (**(longlong **)(*(longlong *)(*(longlong *)(lVar18 + 0x60) + 0x18) + 0x10) + 0x30);
  uVar28 = (ulonglong)*(uint *)(lVar18 + 0x88 + (longlong)*(int *)(lVar18 + 0x3c));
  uVar22 = 0;
  do {
    uVar26 = (ulonglong)
             *(uint *)((ulonglong)*(uint *)(lVar18 + 0x20 + uVar28) + lVar18 + uVar22 * 4);
    cVar30 = *(char *)(lVar18 + uVar26);
    if (cVar30 != '\0') {
      pcVar27 = (char *)(uVar26 + lVar18 + 1);
      uVar21 = 0x396716f2;
      do {
        uVar21 = ((int)cVar30 ^ uVar21) * 0x1000193;
        cVar30 = *pcVar27;
        pcVar27 = pcVar27 + 1;
      } while (cVar30 != '\0');
      if (uVar21 == 0x8dbcc24a) break;
    }
    uVar22 = uVar22 + 1;
  } while( true );
  local_88 = lVar19;
  iVar8 = (*(code *)((ulonglong)
                     *(uint *)((ulonglong)*(uint *)(lVar18 + 0x1c + uVar28) + lVar18 +
                              (ulonglong)
                              *(ushort *)
                               ((ulonglong)*(uint *)(lVar18 + 0x24 + uVar28) + lVar18 +
                               (uVar22 & 0xffffffff) * 2) * 4) + lVar18))
                    (lVar19,0x1000,0,0,local_78);
  if (iVar8 == 0) {
    local_50 = (longlong)local_78;
  }
  else {
    local_50 = 0;
  }
  if (0 < lVar19) {
    NtClose(lVar19);
  }
  if (local_50 == 0) {
    return;
  }
  auVar5._28_4_ = 0;
  auVar5._0_28_ = stack0xffffffffffffff8c;
  _local_78 = auVar5 << 0x20;
  uVar21 = 0;
  lVar19 = readgsbase();
  plVar17 = (longlong *)(*(longlong *)(*(longlong *)(lVar19 + 0x60) + 0x18) + 0x10);
  uVar14 = 0xba9d8b4f;
LAB_1400fea25:
  plVar17 = (longlong *)*plVar17;
  if (uVar21 != 0) goto code_r0x0001400fea2c;
  goto LAB_1400fea7d;
code_r0x0001400fea2c:
  uVar25 = 0x2292570b;
  if (1 < (ushort)(*(int *)(plVar17 + 0xb) - 8U)) {
    lVar19 = 0;
    do {
      uVar25 = ((int)*(char *)(plVar17[0xc] + lVar19) ^ uVar25) * 0x1000193;
      lVar19 = lVar19 + 2;
    } while ((ulonglong)((*(int *)(plVar17 + 0xb) - 8U & 0xffff) >> 1) * 2 != lVar19);
  }
  if (uVar25 == uVar21) {
LAB_1400fea7d:
    lVar18 = plVar17[6];
    uVar25 = *(uint *)(lVar18 + 0x88 + (longlong)*(int *)(lVar18 + 0x3c));
    lVar19 = lVar18 + (ulonglong)uVar25;
    if ((ulonglong)uVar25 != 0) {
      uVar28 = (ulonglong)*(uint *)(lVar19 + 0x18);
      do {
        bVar33 = uVar28 == 0;
        uVar28 = uVar28 - 1;
        if (bVar33) goto LAB_1400fea25;
        uVar22 = (ulonglong)*(uint *)((ulonglong)*(uint *)(lVar19 + 0x20) + lVar18 + uVar28 * 4);
        cVar30 = *(char *)(lVar18 + uVar22);
        if (cVar30 == '\0') {
          uVar31 = 0x2292570b;
        }
        else {
          pcVar27 = (char *)(uVar22 + lVar18 + 1);
          uVar31 = 0x2292570b;
          do {
            uVar31 = ((int)cVar30 ^ uVar31) * 0x1000193;
            cVar30 = *pcVar27;
            pcVar27 = pcVar27 + 1;
          } while (cVar30 != '\0');
        }
      } while (uVar31 != uVar14);
      uVar21 = *(uint *)((ulonglong)*(uint *)(lVar19 + 0x1c) + lVar18 +
                        (ulonglong)
                        *(ushort *)
                         ((ulonglong)*(uint *)(lVar19 + 0x24) + lVar18 + (uVar28 & 0xffffffff) * 2)
                        * 4);
      pcVar29 = (code *)((ulonglong)uVar21 + lVar18);
      if ((uVar21 <= uVar25) ||
         ((code *)(lVar19 + (ulonglong)*(uint *)(lVar18 + 0x8c + (longlong)*(int *)(lVar18 + 0x3c)))
          <= pcVar29)) goto LAB_1400feba0;
      uVar14 = 0x2292570b;
      uVar21 = 0x2292570b;
      cVar16 = *pcVar29;
      while (cVar16 != (code)0x2e) {
        uVar21 = ((int)(char)cVar16 ^ uVar21) * 0x1000193;
        pcVar24 = pcVar29 + 1;
        pcVar29 = pcVar29 + 1;
        cVar16 = *pcVar24;
      }
      cVar16 = pcVar29[1];
      if (cVar16 != (code)0x0) {
        pcVar29 = pcVar29 + 2;
        uVar14 = 0x2292570b;
        do {
          uVar14 = ((int)(char)cVar16 ^ uVar14) * 0x1000193;
          cVar16 = *pcVar29;
          pcVar29 = pcVar29 + 1;
        } while (cVar16 != (code)0x0);
      }
      lVar19 = readgsbase();
      plVar17 = *(longlong **)(*(longlong *)(*(longlong *)(lVar19 + 0x60) + 0x18) + 0x10);
    }
  }
  goto LAB_1400fea25;
LAB_1400feba0:
  local_88 = local_50;
  lVar19 = (*pcVar29)(0,8,0x3000,4);
  uVar21 = 8;
LAB_1400febe5:
  lVar18 = readgsbase();
  lVar18 = *(longlong *)
            (**(longlong **)(*(longlong *)(*(longlong *)(lVar18 + 0x60) + 0x18) + 0x10) + 0x30);
  uVar28 = (ulonglong)*(uint *)(lVar18 + 0x88 + (longlong)*(int *)(lVar18 + 0x3c));
  uVar22 = 0;
  do {
    uVar26 = (ulonglong)
             *(uint *)((ulonglong)*(uint *)(lVar18 + 0x20 + uVar28) + lVar18 + uVar22 * 4);
    cVar30 = *(char *)(lVar18 + uVar26);
    if (cVar30 != '\0') {
      pcVar27 = (char *)(uVar26 + lVar18 + 1);
      uVar14 = 0x61b3279c;
      do {
        uVar14 = ((int)cVar30 ^ uVar14) * 0x1000193;
        cVar30 = *pcVar27;
        pcVar27 = pcVar27 + 1;
      } while (cVar30 != '\0');
      if (uVar14 == 0xbf5693b1) break;
    }
    uVar22 = uVar22 + 1;
  } while( true );
  local_58 = lVar19;
  iVar8 = (*(code *)((ulonglong)
                     *(uint *)((ulonglong)*(uint *)(lVar18 + 0x1c + uVar28) + lVar18 +
                              (ulonglong)
                              *(ushort *)
                               ((ulonglong)*(uint *)(lVar18 + 0x24 + uVar28) + lVar18 +
                               (uVar22 & 0xffffffff) * 2) * 4) + lVar18))
                    (local_50,0x32,lVar19,uVar21,local_78);
  lVar18 = local_58;
  if ((iVar8 < 0) && (uVar7 = local_78._0_4_, uVar21 < (uint)local_78._0_4_)) {
    uVar21 = 0;
    lVar19 = readgsbase();
    plVar17 = (longlong *)(*(longlong *)(*(longlong *)(lVar19 + 0x60) + 0x18) + 0x10);
    uVar14 = 0xba9d8b4f;
LAB_1400fecf5:
    plVar17 = (longlong *)*plVar17;
    if (uVar21 != 0) goto code_r0x0001400fecfc;
    goto LAB_1400fed4d;
  }
  lVar19 = local_50;
  if (local_58 == 0) goto LAB_1400fe8e5;
  if (*(short *)(local_58 + 4) == 0) goto LAB_1400ffde3;
  pwVar12 = (wchar_t *)(local_58 + 6);
  _local_78 = ZEXT1232(ZEXT812(0));
  sVar9 = wcslen(pwVar12);
  if (0x7ffffffffffffffe < sVar9) {
                    /* WARNING: Subroutine does not return */
    FUN_140086cb0();
  }
  if (sVar9 < 8) {
    auStack_70._8_8_ = sVar9;
    auStack_70._16_8_ = 7;
    memcpy(local_78,pwVar12,sVar9 * 2);
    puVar11 = (undefined2 *)(local_78 + sVar9 * 2);
  }
  else {
    auStack_70._16_8_ = 7;
    uVar28 = sVar9 | 7;
    if (0x7ffffffffffffffe < uVar28) {
LAB_1400fffb4:
                    /* WARNING: Subroutine does not return */
      FUN_1400bb790();
    }
    if (uVar28 < 0xb) {
      uVar28 = 10;
    }
    if (uVar28 < 0x7ff) {
      pvVar13 = operator_new(uVar28 * 2 + 2);
    }
    else {
      if (0x7fffffffffffffeb < uVar28) goto LAB_1400fffb4;
      pvVar10 = operator_new(uVar28 * 2 + 0x29);
      pvVar13 = (void *)((longlong)pvVar10 + 0x27U & 0xffffffffffffffe0);
      *(void **)((longlong)pvVar13 - 8) = pvVar10;
    }
    local_78 = (undefined1  [8])pvVar13;
    auStack_70._8_8_ = sVar9;
    auStack_70._16_8_ = uVar28;
    memcpy(pvVar13,pwVar12,sVar9 * 2);
    puVar11 = (undefined2 *)(sVar9 * 2 + (longlong)pvVar13);
    lVar18 = local_58;
  }
  *puVar11 = 0;
  if ((DAT_14012b250 & 1) == 0) {
    FUN_1400bbda0((longlong *)local_c8);
    uVar6 = local_c8._0_8_;
    local_e8 = ZEXT1232(ZEXT812(0));
    sVar9 = wcslen((wchar_t *)local_c8._0_8_);
    if (0x7ffffffffffffffe < sVar9) {
                    /* WARNING: Subroutine does not return */
      FUN_140086cb0();
    }
    if (sVar9 < 8) {
      local_e8._16_8_ = sVar9;
      local_e8._24_8_ = 7;
      memcpy(local_e8,(void *)uVar6,sVar9 * 2);
      puVar11 = (undefined2 *)(local_e8 + sVar9 * 2);
    }
    else {
      uVar28 = sVar9 | 7;
      if (0x7ffffffffffffffe < uVar28) {
LAB_1400fffc4:
                    /* WARNING: Subroutine does not return */
        FUN_1400bb790();
      }
      if (uVar28 < 0xb) {
        uVar28 = 10;
      }
      if (uVar28 < 0x7ff) {
        pvVar13 = operator_new(uVar28 * 2 + 2);
      }
      else {
        if (0x7fffffffffffffeb < uVar28) goto LAB_1400fffc4;
        pvVar10 = operator_new(uVar28 * 2 + 0x29);
        pvVar13 = (void *)((longlong)pvVar10 + 0x27U & 0xffffffffffffffe0);
        *(void **)((longlong)pvVar13 - 8) = pvVar10;
      }
      local_e8._0_8_ = pvVar13;
      local_e8._16_8_ = sVar9;
      local_e8._24_8_ = uVar28;
      memcpy(pvVar13,(void *)uVar6,sVar9 * 2);
      puVar11 = (undefined2 *)(sVar9 * 2 + (longlong)pvVar13);
    }
    *puVar11 = 0;
    lVar18 = local_58;
    if (local_c8._0_8_ != 0) {
      uVar21 = 0;
      lVar19 = readgsbase();
      puVar3 = (undefined8 *)
               **(undefined8 **)(*(longlong *)(*(longlong *)(lVar19 + 0x60) + 0x18) + 0x10);
      uVar14 = 0xe2398719;
      puVar23 = puVar3;
      do {
        if (uVar21 == 0) {
LAB_1400ff38d:
          lVar2 = puVar23[6];
          uVar25 = *(uint *)(lVar2 + 0x88 + (longlong)*(int *)(lVar2 + 0x3c));
          lVar19 = lVar2 + (ulonglong)uVar25;
          if ((ulonglong)uVar25 != 0) {
            uVar28 = (ulonglong)*(uint *)(lVar19 + 0x18);
            do {
              bVar33 = uVar28 == 0;
              uVar28 = uVar28 - 1;
              if (bVar33) goto LAB_1400ff343;
              uVar22 = (ulonglong)
                       *(uint *)((ulonglong)*(uint *)(lVar19 + 0x20) + lVar2 + uVar28 * 4);
              cVar30 = *(char *)(lVar2 + uVar22);
              if (cVar30 == '\0') {
                uVar31 = 0x1cba1898;
              }
              else {
                pcVar27 = (char *)(uVar22 + lVar2 + 1);
                uVar31 = 0x1cba1898;
                do {
                  uVar31 = ((int)cVar30 ^ uVar31) * 0x1000193;
                  cVar30 = *pcVar27;
                  pcVar27 = pcVar27 + 1;
                } while (cVar30 != '\0');
              }
            } while (uVar31 != uVar14);
            uVar21 = *(uint *)((ulonglong)*(uint *)(lVar19 + 0x1c) + lVar2 +
                              (ulonglong)
                              *(ushort *)
                               ((ulonglong)*(uint *)(lVar19 + 0x24) + lVar2 +
                               (uVar28 & 0xffffffff) * 2) * 4);
            pcVar29 = (code *)(lVar2 + (ulonglong)uVar21);
            if ((uVar21 <= uVar25) ||
               ((code *)(lVar19 + (ulonglong)
                                  *(uint *)(lVar2 + 0x8c + (longlong)*(int *)(lVar2 + 0x3c))) <=
                pcVar29)) goto LAB_1400ff4bf;
            uVar14 = 0x1cba1898;
            uVar21 = 0x1cba1898;
            cVar16 = *pcVar29;
            while (cVar16 != (code)0x2e) {
              uVar21 = ((int)(char)cVar16 ^ uVar21) * 0x1000193;
              pcVar24 = pcVar29 + 1;
              pcVar29 = pcVar29 + 1;
              cVar16 = *pcVar24;
            }
            cVar16 = pcVar29[1];
            if (cVar16 != (code)0x0) {
              pcVar29 = pcVar29 + 2;
              uVar14 = 0x1cba1898;
              do {
                uVar14 = ((int)(char)cVar16 ^ uVar14) * 0x1000193;
                cVar16 = *pcVar29;
                pcVar29 = pcVar29 + 1;
              } while (cVar16 != (code)0x0);
            }
            puVar23 = (undefined8 *)*puVar3;
          }
        }
        else {
          uVar25 = 0x1cba1898;
          if (1 < (ushort)(*(int *)(puVar23 + 0xb) - 8U)) {
            lVar19 = 0;
            do {
              uVar25 = ((int)*(char *)(puVar23[0xc] + lVar19) ^ uVar25) * 0x1000193;
              lVar19 = lVar19 + 2;
            } while ((ulonglong)((*(int *)(puVar23 + 0xb) - 8U & 0xffff) >> 1) * 2 != lVar19);
          }
          if (uVar25 == uVar21) goto LAB_1400ff38d;
        }
LAB_1400ff343:
        puVar23 = (undefined8 *)*puVar23;
      } while( true );
    }
    goto LAB_1400ff4ce;
  }
  goto LAB_1400ffd97;
code_r0x0001400fecfc:
  uVar25 = 0x2292570b;
  if (1 < (ushort)(*(int *)(plVar17 + 0xb) - 8U)) {
    lVar19 = 0;
    do {
      uVar25 = ((int)*(char *)(plVar17[0xc] + lVar19) ^ uVar25) * 0x1000193;
      lVar19 = lVar19 + 2;
    } while ((ulonglong)((*(int *)(plVar17 + 0xb) - 8U & 0xffff) >> 1) * 2 != lVar19);
  }
  if (uVar25 == uVar21) {
LAB_1400fed4d:
    lVar18 = plVar17[6];
    uVar25 = *(uint *)(lVar18 + 0x88 + (longlong)*(int *)(lVar18 + 0x3c));
    lVar19 = lVar18 + (ulonglong)uVar25;
    if ((ulonglong)uVar25 != 0) {
      uVar28 = (ulonglong)*(uint *)(lVar19 + 0x18);
      do {
        bVar33 = uVar28 == 0;
        uVar28 = uVar28 - 1;
        if (bVar33) goto LAB_1400fecf5;
        uVar22 = (ulonglong)*(uint *)((ulonglong)*(uint *)(lVar19 + 0x20) + lVar18 + uVar28 * 4);
        cVar30 = *(char *)(lVar18 + uVar22);
        if (cVar30 == '\0') {
          uVar31 = 0x2292570b;
        }
        else {
          pcVar27 = (char *)(uVar22 + lVar18 + 1);
          uVar31 = 0x2292570b;
          do {
            uVar31 = ((int)cVar30 ^ uVar31) * 0x1000193;
            cVar30 = *pcVar27;
            pcVar27 = pcVar27 + 1;
          } while (cVar30 != '\0');
        }
      } while (uVar31 != uVar14);
      uVar21 = *(uint *)((ulonglong)*(uint *)(lVar19 + 0x1c) + lVar18 +
                        (ulonglong)
                        *(ushort *)
                         ((ulonglong)*(uint *)(lVar19 + 0x24) + lVar18 + (uVar28 & 0xffffffff) * 2)
                        * 4);
      pcVar29 = (code *)((ulonglong)uVar21 + lVar18);
      if ((uVar21 <= uVar25) ||
         ((code *)(lVar19 + (ulonglong)*(uint *)(lVar18 + 0x8c + (longlong)*(int *)(lVar18 + 0x3c)))
          <= pcVar29)) goto LAB_1400fee70;
      uVar14 = 0x2292570b;
      uVar21 = 0x2292570b;
      cVar16 = *pcVar29;
      while (cVar16 != (code)0x2e) {
        uVar21 = ((int)(char)cVar16 ^ uVar21) * 0x1000193;
        pcVar24 = pcVar29 + 1;
        pcVar29 = pcVar29 + 1;
        cVar16 = *pcVar24;
      }
      cVar16 = pcVar29[1];
      if (cVar16 != (code)0x0) {
        pcVar29 = pcVar29 + 2;
        uVar14 = 0x2292570b;
        do {
          uVar14 = ((int)(char)cVar16 ^ uVar14) * 0x1000193;
          cVar16 = *pcVar29;
          pcVar29 = pcVar29 + 1;
        } while (cVar16 != (code)0x0);
      }
      lVar19 = readgsbase();
      plVar17 = *(longlong **)(*(longlong *)(*(longlong *)(lVar19 + 0x60) + 0x18) + 0x10);
    }
  }
  goto LAB_1400fecf5;
LAB_1400fee70:
  lVar19 = (*pcVar29)(0,local_78._0_4_,0x3000,4);
  uVar21 = uVar7;
  if (local_58 != 0) {
    uVar14 = 0;
    lVar18 = readgsbase();
    plVar17 = (longlong *)(*(longlong *)(*(longlong *)(lVar18 + 0x60) + 0x18) + 0x10);
    uVar25 = 0x28188289;
LAB_1400feed5:
    plVar17 = (longlong *)*plVar17;
    if (uVar14 != 0) goto code_r0x0001400feedc;
    goto LAB_1400fef2d;
  }
  goto LAB_1400febe5;
code_r0x0001400feedc:
  uVar31 = 0xf7e491c8;
  if (1 < (ushort)(*(int *)(plVar17 + 0xb) - 8U)) {
    lVar18 = 0;
    do {
      uVar31 = ((int)*(char *)(plVar17[0xc] + lVar18) ^ uVar31) * 0x1000193;
      lVar18 = lVar18 + 2;
    } while ((ulonglong)((*(int *)(plVar17 + 0xb) - 8U & 0xffff) >> 1) * 2 != lVar18);
  }
  if (uVar31 == uVar14) {
LAB_1400fef2d:
    lVar2 = plVar17[6];
    uVar31 = *(uint *)(lVar2 + 0x88 + (longlong)*(int *)(lVar2 + 0x3c));
    lVar18 = lVar2 + (ulonglong)uVar31;
    if ((ulonglong)uVar31 != 0) {
      uVar28 = (ulonglong)*(uint *)(lVar18 + 0x18);
      do {
        bVar33 = uVar28 == 0;
        uVar28 = uVar28 - 1;
        if (bVar33) goto LAB_1400feed5;
        uVar22 = (ulonglong)*(uint *)((ulonglong)*(uint *)(lVar18 + 0x20) + lVar2 + uVar28 * 4);
        cVar30 = *(char *)(lVar2 + uVar22);
        if (cVar30 == '\0') {
          uVar32 = 0xf7e491c8;
        }
        else {
          pcVar27 = (char *)(uVar22 + lVar2 + 1);
          uVar32 = 0xf7e491c8;
          do {
            uVar32 = ((int)cVar30 ^ uVar32) * 0x1000193;
            cVar30 = *pcVar27;
            pcVar27 = pcVar27 + 1;
          } while (cVar30 != '\0');
        }
      } while (uVar32 != uVar25);
      uVar14 = *(uint *)((ulonglong)*(uint *)(lVar18 + 0x1c) + lVar2 +
                        (ulonglong)
                        *(ushort *)
                         ((ulonglong)*(uint *)(lVar18 + 0x24) + lVar2 + (uVar28 & 0xffffffff) * 2) *
                        4);
      pcVar29 = (code *)((ulonglong)uVar14 + lVar2);
      if ((uVar14 <= uVar31) ||
         ((code *)(lVar18 + (ulonglong)*(uint *)(lVar2 + 0x8c + (longlong)*(int *)(lVar2 + 0x3c)))
          <= pcVar29)) goto LAB_1400febd0;
      uVar25 = 0xf7e491c8;
      uVar14 = 0xf7e491c8;
      cVar16 = *pcVar29;
      while (cVar16 != (code)0x2e) {
        uVar14 = ((int)(char)cVar16 ^ uVar14) * 0x1000193;
        pcVar24 = pcVar29 + 1;
        pcVar29 = pcVar29 + 1;
        cVar16 = *pcVar24;
      }
      cVar16 = pcVar29[1];
      if (cVar16 != (code)0x0) {
        pcVar29 = pcVar29 + 2;
        uVar25 = 0xf7e491c8;
        do {
          uVar25 = ((int)(char)cVar16 ^ uVar25) * 0x1000193;
          cVar16 = *pcVar29;
          pcVar29 = pcVar29 + 1;
        } while (cVar16 != (code)0x0);
      }
      lVar18 = readgsbase();
      plVar17 = *(longlong **)(*(longlong *)(*(longlong *)(lVar18 + 0x60) + 0x18) + 0x10);
    }
  }
  goto LAB_1400feed5;
LAB_1400febd0:
  (*pcVar29)(local_58,0);
  goto LAB_1400febe5;
LAB_1400ff4bf:
  (*pcVar29)(local_c8._0_8_,0,0x8000);
LAB_1400ff4ce:
  pwVar12 = (wchar_t *)local_e8;
  if (7 < (ulonglong)local_e8._24_8_) {
    pwVar12 = (wchar_t *)local_e8._0_8_;
  }
  auVar15 = (undefined1  [8])local_78;
  if (7 < (ulonglong)auStack_70._16_8_) {
    auVar15 = local_78;
  }
  pwVar12 = wcsstr((wchar_t *)auVar15,pwVar12);
  if (pwVar12 != (wchar_t *)0x0) {
    uVar21 = 0;
    lVar19 = readgsbase();
    puVar3 = (undefined8 *)
             **(longlong **)(*(longlong *)(*(longlong *)(lVar19 + 0x60) + 0x18) + 0x10);
    uVar14 = 0x92b63de9;
    puVar23 = puVar3;
    do {
      if (uVar21 == 0) {
LAB_1400ff581:
        lVar19 = puVar23[6];
        uVar25 = *(uint *)(lVar19 + 0x88 + (longlong)*(int *)(lVar19 + 0x3c));
        if ((ulonglong)uVar25 != 0) {
          lVar18 = (ulonglong)uVar25 + lVar19;
          uVar28 = (ulonglong)*(uint *)(lVar18 + 0x18);
          do {
            bVar33 = uVar28 == 0;
            uVar28 = uVar28 - 1;
            if (bVar33) goto LAB_1400ff6ad;
            uVar22 = (ulonglong)*(uint *)((ulonglong)*(uint *)(lVar18 + 0x20) + lVar19 + uVar28 * 4)
            ;
            cVar30 = *(char *)(lVar19 + uVar22);
            if (cVar30 == '\0') {
              uVar31 = 0x512b8e46;
            }
            else {
              pcVar27 = (char *)(uVar22 + lVar19 + 1);
              uVar31 = 0x512b8e46;
              do {
                uVar31 = ((int)cVar30 ^ uVar31) * 0x1000193;
                cVar30 = *pcVar27;
                pcVar27 = pcVar27 + 1;
              } while (cVar30 != '\0');
            }
          } while (uVar31 != uVar14);
          uVar21 = *(uint *)((ulonglong)*(uint *)(lVar18 + 0x1c) + lVar19 +
                            (ulonglong)
                            *(ushort *)
                             ((ulonglong)*(uint *)(lVar18 + 0x24) + lVar19 +
                             (uVar28 & 0xffffffff) * 2) * 4);
          pcVar29 = (code *)(lVar19 + (ulonglong)uVar21);
          if ((uVar21 <= uVar25) ||
             ((code *)(lVar18 + (ulonglong)
                                *(uint *)(lVar19 + 0x8c + (longlong)*(int *)(lVar19 + 0x3c))) <=
              pcVar29)) goto LAB_1400ff6c3;
          uVar14 = 0x512b8e46;
          uVar21 = 0x512b8e46;
          cVar16 = *pcVar29;
          while (cVar16 != (code)0x2e) {
            uVar21 = ((int)(char)cVar16 ^ uVar21) * 0x1000193;
            pcVar24 = pcVar29 + 1;
            pcVar29 = pcVar29 + 1;
            cVar16 = *pcVar24;
          }
          cVar16 = pcVar29[1];
          if (cVar16 != (code)0x0) {
            pcVar29 = pcVar29 + 2;
            uVar14 = 0x512b8e46;
            do {
              uVar14 = ((int)(char)cVar16 ^ uVar14) * 0x1000193;
              cVar16 = *pcVar29;
              pcVar29 = pcVar29 + 1;
            } while (cVar16 != (code)0x0);
          }
          puVar23 = (undefined8 *)*puVar3;
        }
      }
      else {
        uVar25 = 0x512b8e46;
        if (1 < (ushort)(*(int *)(puVar23 + 0xb) - 8U)) {
          lVar19 = 0;
          do {
            uVar25 = ((int)*(char *)(puVar23[0xc] + lVar19) ^ uVar25) * 0x1000193;
            lVar19 = lVar19 + 2;
          } while ((ulonglong)((*(int *)(puVar23 + 0xb) - 8U & 0xffff) >> 1) * 2 != lVar19);
        }
        if (uVar25 == uVar21) goto LAB_1400ff581;
      }
LAB_1400ff6ad:
      puVar23 = (undefined8 *)*puVar23;
    } while ((puVar23 != puVar3) && (puVar23[6] != 0));
    pcVar29 = (code *)0x0;
LAB_1400ff6c3:
    FUN_1400bdac0((longlong *)local_a8);
    uVar6 = local_a8._0_8_;
    local_c8 = ZEXT1232(ZEXT812(0));
    sVar9 = strlen((char *)local_a8._0_8_);
    if ((longlong)sVar9 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_140086cb0();
    }
    if (sVar9 < 0x10) {
      local_c8._16_8_ = sVar9;
      local_c8._24_8_ = 0xf;
      memcpy(local_c8,(void *)uVar6,sVar9);
      puVar20 = local_c8;
    }
    else {
      uVar28 = sVar9 | 0xf;
      if (uVar28 < 0x17) {
        uVar28 = 0x16;
      }
      if (uVar28 < 0xfff) {
        puVar20 = operator_new(uVar28 + 1);
      }
      else {
        pvVar13 = operator_new(uVar28 + 0x28);
        puVar20 = (undefined1 *)((longlong)pvVar13 + 0x27U & 0xffffffffffffffe0);
        *(void **)(puVar20 + -8) = pvVar13;
      }
      local_c8._0_8_ = puVar20;
      local_c8._16_8_ = sVar9;
      local_c8._24_8_ = uVar28;
      memcpy(puVar20,(void *)uVar6,sVar9);
    }
    puVar20[sVar9] = 0;
    if (local_a8._0_8_ != 0) {
      uVar21 = 0;
      lVar19 = readgsbase();
      puVar3 = (undefined8 *)
               **(undefined8 **)(*(longlong *)(*(longlong *)(lVar19 + 0x60) + 0x18) + 0x10);
      uVar14 = 0xe2398719;
      puVar23 = puVar3;
      do {
        if (uVar21 == 0) {
LAB_1400ff87d:
          lVar18 = puVar23[6];
          uVar25 = *(uint *)(lVar18 + 0x88 + (longlong)*(int *)(lVar18 + 0x3c));
          lVar19 = lVar18 + (ulonglong)uVar25;
          if ((ulonglong)uVar25 != 0) {
            uVar28 = (ulonglong)*(uint *)(lVar19 + 0x18);
            do {
              bVar33 = uVar28 == 0;
              uVar28 = uVar28 - 1;
              if (bVar33) goto LAB_1400ff833;
              uVar22 = (ulonglong)
                       *(uint *)((ulonglong)*(uint *)(lVar19 + 0x20) + lVar18 + uVar28 * 4);
              cVar30 = *(char *)(lVar18 + uVar22);
              if (cVar30 == '\0') {
                uVar31 = 0x1cba1898;
              }
              else {
                pcVar27 = (char *)(uVar22 + lVar18 + 1);
                uVar31 = 0x1cba1898;
                do {
                  uVar31 = ((int)cVar30 ^ uVar31) * 0x1000193;
                  cVar30 = *pcVar27;
                  pcVar27 = pcVar27 + 1;
                } while (cVar30 != '\0');
              }
            } while (uVar31 != uVar14);
            uVar21 = *(uint *)((ulonglong)*(uint *)(lVar19 + 0x1c) + lVar18 +
                              (ulonglong)
                              *(ushort *)
                               ((ulonglong)*(uint *)(lVar19 + 0x24) + lVar18 +
                               (uVar28 & 0xffffffff) * 2) * 4);
            pcVar24 = (code *)(lVar18 + (ulonglong)uVar21);
            if ((uVar21 <= uVar25) ||
               ((code *)(lVar19 + (ulonglong)
                                  *(uint *)(lVar18 + 0x8c + (longlong)*(int *)(lVar18 + 0x3c))) <=
                pcVar24)) goto LAB_1400ff9af;
            uVar14 = 0x1cba1898;
            uVar21 = 0x1cba1898;
            cVar16 = *pcVar24;
            while (cVar16 != (code)0x2e) {
              uVar21 = ((int)(char)cVar16 ^ uVar21) * 0x1000193;
              pcVar1 = pcVar24 + 1;
              pcVar24 = pcVar24 + 1;
              cVar16 = *pcVar1;
            }
            cVar16 = pcVar24[1];
            if (cVar16 != (code)0x0) {
              pcVar24 = pcVar24 + 2;
              uVar14 = 0x1cba1898;
              do {
                uVar14 = ((int)(char)cVar16 ^ uVar14) * 0x1000193;
                cVar16 = *pcVar24;
                pcVar24 = pcVar24 + 1;
              } while (cVar16 != (code)0x0);
            }
            puVar23 = (undefined8 *)*puVar3;
          }
        }
        else {
          uVar25 = 0x1cba1898;
          if (1 < (ushort)(*(int *)(puVar23 + 0xb) - 8U)) {
            lVar19 = 0;
            do {
              uVar25 = ((int)*(char *)(puVar23[0xc] + lVar19) ^ uVar25) * 0x1000193;
              lVar19 = lVar19 + 2;
            } while ((ulonglong)((*(int *)(puVar23 + 0xb) - 8U & 0xffff) >> 1) * 2 != lVar19);
          }
          if (uVar25 == uVar21) goto LAB_1400ff87d;
        }
LAB_1400ff833:
        puVar23 = (undefined8 *)*puVar23;
      } while( true );
    }
    goto LAB_1400ff9be;
  }
  goto LAB_1400ffd51;
LAB_1400ff9af:
  (*pcVar24)(local_a8._0_8_,0,0x8000);
LAB_1400ff9be:
  local_f0 = local_c8;
  if (0xf < (ulonglong)local_c8._24_8_) {
    local_f0 = (undefined1 *)local_c8._0_8_;
  }
  FUN_1400bc4f0((longlong *)&local_80);
  pcVar27 = local_80;
  local_a8 = ZEXT1232(ZEXT812(0));
  sVar9 = strlen(local_80);
  if ((longlong)sVar9 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140086cb0();
  }
  if (sVar9 < 0x10) {
    local_a8._16_8_ = sVar9;
    local_a8._24_8_ = 0xf;
    memcpy(local_a8,pcVar27,sVar9);
    puVar20 = local_a8;
  }
  else {
    uVar28 = sVar9 | 0xf;
    if (uVar28 < 0x17) {
      uVar28 = 0x16;
    }
    if (uVar28 < 0xfff) {
      puVar20 = operator_new(uVar28 + 1);
    }
    else {
      pvVar13 = operator_new(uVar28 + 0x28);
      puVar20 = (undefined1 *)((longlong)pvVar13 + 0x27U & 0xffffffffffffffe0);
      *(void **)(puVar20 + -8) = pvVar13;
    }
    local_a8._0_8_ = puVar20;
    local_a8._16_8_ = sVar9;
    local_a8._24_8_ = uVar28;
    memcpy(puVar20,pcVar27,sVar9);
  }
  puVar20[sVar9] = 0;
  if (local_80 != (char *)0x0) {
    uVar21 = 0;
    lVar19 = readgsbase();
    puVar3 = (undefined8 *)
             **(undefined8 **)(*(longlong *)(*(longlong *)(lVar19 + 0x60) + 0x18) + 0x10);
    uVar14 = 0xe2398719;
    puVar23 = puVar3;
    do {
      if (uVar21 == 0) {
LAB_1400ffb6d:
        lVar18 = puVar23[6];
        uVar25 = *(uint *)(lVar18 + 0x88 + (longlong)*(int *)(lVar18 + 0x3c));
        lVar19 = lVar18 + (ulonglong)uVar25;
        if ((ulonglong)uVar25 != 0) {
          uVar28 = (ulonglong)*(uint *)(lVar19 + 0x18);
          do {
            bVar33 = uVar28 == 0;
            uVar28 = uVar28 - 1;
            if (bVar33) goto LAB_1400ffb23;
            uVar22 = (ulonglong)*(uint *)((ulonglong)*(uint *)(lVar19 + 0x20) + lVar18 + uVar28 * 4)
            ;
            cVar30 = *(char *)(lVar18 + uVar22);
            if (cVar30 == '\0') {
              uVar31 = 0x1cba1898;
            }
            else {
              pcVar27 = (char *)(uVar22 + lVar18 + 1);
              uVar31 = 0x1cba1898;
              do {
                uVar31 = ((int)cVar30 ^ uVar31) * 0x1000193;
                cVar30 = *pcVar27;
                pcVar27 = pcVar27 + 1;
              } while (cVar30 != '\0');
            }
          } while (uVar31 != uVar14);
          uVar21 = *(uint *)((ulonglong)*(uint *)(lVar19 + 0x1c) + lVar18 +
                            (ulonglong)
                            *(ushort *)
                             ((ulonglong)*(uint *)(lVar19 + 0x24) + lVar18 +
                             (uVar28 & 0xffffffff) * 2) * 4);
          pcVar24 = (code *)(lVar18 + (ulonglong)uVar21);
          if ((uVar21 <= uVar25) ||
             ((code *)(lVar19 + (ulonglong)
                                *(uint *)(lVar18 + 0x8c + (longlong)*(int *)(lVar18 + 0x3c))) <=
              pcVar24)) goto LAB_1400ffc9f;
          uVar14 = 0x1cba1898;
          uVar21 = 0x1cba1898;
          cVar16 = *pcVar24;
          while (cVar16 != (code)0x2e) {
            uVar21 = ((int)(char)cVar16 ^ uVar21) * 0x1000193;
            pcVar1 = pcVar24 + 1;
            pcVar24 = pcVar24 + 1;
            cVar16 = *pcVar1;
          }
          cVar16 = pcVar24[1];
          if (cVar16 != (code)0x0) {
            pcVar24 = pcVar24 + 2;
            uVar14 = 0x1cba1898;
            do {
              uVar14 = ((int)(char)cVar16 ^ uVar14) * 0x1000193;
              cVar16 = *pcVar24;
              pcVar24 = pcVar24 + 1;
            } while (cVar16 != (code)0x0);
          }
          puVar23 = (undefined8 *)*puVar3;
        }
      }
      else {
        uVar25 = 0x1cba1898;
        if (1 < (ushort)(*(int *)(puVar23 + 0xb) - 8U)) {
          lVar19 = 0;
          do {
            uVar25 = ((int)*(char *)(puVar23[0xc] + lVar19) ^ uVar25) * 0x1000193;
            lVar19 = lVar19 + 2;
          } while ((ulonglong)((*(int *)(puVar23 + 0xb) - 8U & 0xffff) >> 1) * 2 != lVar19);
        }
        if (uVar25 == uVar21) goto LAB_1400ffb6d;
      }
LAB_1400ffb23:
      puVar23 = (undefined8 *)*puVar23;
    } while( true );
  }
  goto LAB_1400ffcae;
LAB_1400ffc9f:
  (*pcVar24)(local_80,0,0x8000);
LAB_1400ffcae:
  puVar20 = local_a8;
  if (0xf < (ulonglong)local_a8._24_8_) {
    puVar20 = (undefined1 *)local_a8._0_8_;
  }
  (*pcVar29)(0,puVar20,local_f0,0x40);
  lVar18 = local_58;
  if (0xf < (ulonglong)local_a8._24_8_) {
    pvVar13 = (void *)local_a8._0_8_;
    if ((0xfff < local_a8._24_8_ + 1) &&
       (pvVar13 = *(void **)(local_a8._0_8_ + -8),
       0x1f < (ulonglong)(local_a8._0_8_ + (-8 - (longlong)pvVar13)))) {
LAB_1400fffb9:
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(pvVar13);
  }
  if (0xf < (ulonglong)local_c8._24_8_) {
    pvVar13 = (void *)local_c8._0_8_;
    if ((0xfff < local_c8._24_8_ + 1) &&
       (pvVar13 = *(void **)(local_c8._0_8_ + -8),
       0x1f < (ulonglong)(local_c8._0_8_ + (-8 - (longlong)pvVar13)))) goto LAB_1400fffb9;
    free(pvVar13);
  }
LAB_1400ffd51:
  if (7 < (ulonglong)local_e8._24_8_) {
    pvVar13 = (void *)local_e8._0_8_;
    if ((0xfff < local_e8._24_8_ * 2 + 2U) &&
       (pvVar13 = *(void **)(local_e8._0_8_ + -8),
       0x1f < (ulonglong)(local_e8._0_8_ + (-8 - (longlong)pvVar13)))) goto LAB_1400fffb9;
    free(pvVar13);
  }
LAB_1400ffd97:
  if (7 < (ulonglong)auStack_70._16_8_) {
    auVar15 = local_78;
    if ((0xfff < auStack_70._16_8_ * 2 + 2U) &&
       (auVar15 = *(undefined1 (*) [8])((longlong)local_78 + -8),
       0x1f < (ulonglong)((longlong)local_78 + (-8 - (longlong)auVar15)))) goto LAB_1400fffb9;
    free((void *)auVar15);
  }
LAB_1400ffde3:
  uVar21 = 0;
  lVar19 = readgsbase();
  plVar17 = (longlong *)(*(longlong *)(*(longlong *)(lVar19 + 0x60) + 0x18) + 0x10);
  uVar14 = 0x28188289;
LAB_1400ffe25:
  plVar17 = (longlong *)*plVar17;
  if (uVar21 != 0) goto code_r0x0001400ffe2c;
  goto LAB_1400ffe7d;
code_r0x0001400ffe2c:
  uVar25 = 0xf7e491c8;
  if (1 < (ushort)(*(int *)(plVar17 + 0xb) - 8U)) {
    lVar19 = 0;
    do {
      uVar25 = ((int)*(char *)(plVar17[0xc] + lVar19) ^ uVar25) * 0x1000193;
      lVar19 = lVar19 + 2;
    } while ((ulonglong)((*(int *)(plVar17 + 0xb) - 8U & 0xffff) >> 1) * 2 != lVar19);
  }
  if (uVar25 == uVar21) {
LAB_1400ffe7d:
    lVar2 = plVar17[6];
    uVar25 = *(uint *)(lVar2 + 0x88 + (longlong)*(int *)(lVar2 + 0x3c));
    lVar19 = lVar2 + (ulonglong)uVar25;
    if ((ulonglong)uVar25 != 0) {
      uVar28 = (ulonglong)*(uint *)(lVar19 + 0x18);
      do {
        bVar33 = uVar28 == 0;
        uVar28 = uVar28 - 1;
        if (bVar33) goto LAB_1400ffe25;
        uVar22 = (ulonglong)*(uint *)((ulonglong)*(uint *)(lVar19 + 0x20) + lVar2 + uVar28 * 4);
        cVar30 = *(char *)(lVar2 + uVar22);
        if (cVar30 == '\0') {
          uVar31 = 0xf7e491c8;
        }
        else {
          pcVar27 = (char *)(uVar22 + lVar2 + 1);
          uVar31 = 0xf7e491c8;
          do {
            uVar31 = ((int)cVar30 ^ uVar31) * 0x1000193;
            cVar30 = *pcVar27;
            pcVar27 = pcVar27 + 1;
          } while (cVar30 != '\0');
        }
      } while (uVar31 != uVar14);
      uVar21 = *(uint *)((ulonglong)*(uint *)(lVar19 + 0x1c) + lVar2 +
                        (ulonglong)
                        *(ushort *)
                         ((ulonglong)*(uint *)(lVar19 + 0x24) + lVar2 + (uVar28 & 0xffffffff) * 2) *
                        4);
      pcVar29 = (code *)((ulonglong)uVar21 + lVar2);
      if ((uVar21 <= uVar25) ||
         ((code *)(lVar19 + (ulonglong)*(uint *)(lVar2 + 0x8c + (longlong)*(int *)(lVar2 + 0x3c)))
          <= pcVar29)) goto LAB_1400fe8d0;
      uVar14 = 0xf7e491c8;
      uVar21 = 0xf7e491c8;
      cVar16 = *pcVar29;
      while (cVar16 != (code)0x2e) {
        uVar21 = ((int)(char)cVar16 ^ uVar21) * 0x1000193;
        pcVar24 = pcVar29 + 1;
        pcVar29 = pcVar29 + 1;
        cVar16 = *pcVar24;
      }
      cVar16 = pcVar29[1];
      if (cVar16 != (code)0x0) {
        pcVar29 = pcVar29 + 2;
        uVar14 = 0xf7e491c8;
        do {
          uVar14 = ((int)(char)cVar16 ^ uVar14) * 0x1000193;
          cVar16 = *pcVar29;
          pcVar29 = pcVar29 + 1;
        } while (cVar16 != (code)0x0);
      }
      lVar19 = readgsbase();
      plVar17 = *(longlong **)(*(longlong *)(*(longlong *)(lVar19 + 0x60) + 0x18) + 0x10);
    }
  }
  goto LAB_1400ffe25;
LAB_1400fe8d0:
  (*pcVar29)(lVar18,0);
  lVar19 = local_50;
  goto LAB_1400fe8e5;
}

