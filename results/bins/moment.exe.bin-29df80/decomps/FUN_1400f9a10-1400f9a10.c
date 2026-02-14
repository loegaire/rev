
void FUN_1400f9a10(void)

{
  code *pcVar1;
  longlong lVar2;
  undefined1 auVar3 [32];
  bool bVar4;
  undefined1 auVar5 [32];
  longlong *plVar6;
  undefined1 auVar7 [4];
  undefined8 uVar8;
  undefined8 uVar9;
  uint uVar10;
  int iVar11;
  uint *puVar12;
  size_t sVar13;
  ulonglong uVar14;
  void *pvVar15;
  longlong *plVar16;
  longlong *plVar17;
  uint uVar18;
  ulonglong uVar19;
  longlong *plVar20;
  code cVar21;
  longlong *plVar22;
  uint *puVar23;
  longlong lVar24;
  char *pcVar25;
  undefined1 *puVar26;
  ulonglong uVar27;
  longlong *plVar28;
  uint uVar29;
  ulonglong uVar30;
  code *pcVar31;
  longlong *plVar32;
  char cVar33;
  undefined1 auVar34 [4];
  undefined1 *puVar35;
  uint uVar36;
  bool bVar37;
  uint local_70;
  undefined1 local_6c;
  undefined1 local_68 [4];
  undefined1 auStack_64 [28];
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  auVar3._28_4_ = 0;
  auVar3._0_28_ = auStack_64;
  _local_68 = auVar3 << 0x20;
  auVar34 = (undefined1  [4])0;
  puVar12 = (uint *)0x0;
LAB_1400f9a40:
  puVar23 = puVar12;
  uVar10 = 0;
  lVar24 = readgsbase();
  plVar22 = (longlong *)(*(longlong *)(*(longlong *)(lVar24 + 0x60) + 0x18) + 0x10);
  uVar18 = 0x94da9b9e;
LAB_1400f9a75:
  plVar22 = (longlong *)*plVar22;
  if (uVar10 != 0) goto code_r0x0001400f9a7c;
  goto LAB_1400f9acd;
code_r0x0001400f9a7c:
  uVar29 = 0x46f966e9;
  if (1 < (ushort)(*(int *)(plVar22 + 0xb) - 8U)) {
    lVar24 = 0;
    do {
      uVar29 = ((int)*(char *)(plVar22[0xc] + lVar24) ^ uVar29) * 0x1000193;
      lVar24 = lVar24 + 2;
    } while ((ulonglong)((*(int *)(plVar22 + 0xb) - 8U & 0xffff) >> 1) * 2 != lVar24);
  }
  if (uVar29 == uVar10) {
LAB_1400f9acd:
    lVar2 = plVar22[6];
    uVar29 = *(uint *)(lVar2 + 0x88 + (longlong)*(int *)(lVar2 + 0x3c));
    lVar24 = lVar2 + (ulonglong)uVar29;
    if ((ulonglong)uVar29 != 0) {
      uVar30 = (ulonglong)*(uint *)(lVar24 + 0x18);
      do {
        bVar37 = uVar30 == 0;
        uVar30 = uVar30 - 1;
        if (bVar37) goto LAB_1400f9a75;
        uVar14 = (ulonglong)*(uint *)((ulonglong)*(uint *)(lVar24 + 0x20) + lVar2 + uVar30 * 4);
        cVar33 = *(char *)(lVar2 + uVar14);
        if (cVar33 == '\0') {
          uVar36 = 0x46f966e9;
        }
        else {
          pcVar25 = (char *)(uVar14 + lVar2 + 1);
          uVar36 = 0x46f966e9;
          do {
            uVar36 = ((int)cVar33 ^ uVar36) * 0x1000193;
            cVar33 = *pcVar25;
            pcVar25 = pcVar25 + 1;
          } while (cVar33 != '\0');
        }
      } while (uVar36 != uVar18);
      uVar10 = *(uint *)((ulonglong)*(uint *)(lVar24 + 0x1c) + lVar2 +
                        (ulonglong)
                        *(ushort *)
                         ((ulonglong)*(uint *)(lVar24 + 0x24) + lVar2 + (uVar30 & 0xffffffff) * 2) *
                        4);
      pcVar31 = (code *)((ulonglong)uVar10 + lVar2);
      if ((uVar10 <= uVar29) ||
         ((code *)(lVar24 + (ulonglong)*(uint *)(lVar2 + 0x8c + (longlong)*(int *)(lVar2 + 0x3c)))
          <= pcVar31)) goto LAB_1400f9bf0;
      uVar18 = 0x46f966e9;
      uVar10 = 0x46f966e9;
      cVar21 = *pcVar31;
      while (cVar21 != (code)0x2e) {
        uVar10 = ((int)(char)cVar21 ^ uVar10) * 0x1000193;
        pcVar1 = pcVar31 + 1;
        pcVar31 = pcVar31 + 1;
        cVar21 = *pcVar1;
      }
      cVar21 = pcVar31[1];
      if (cVar21 != (code)0x0) {
        pcVar31 = pcVar31 + 2;
        uVar18 = 0x46f966e9;
        do {
          uVar18 = ((int)(char)cVar21 ^ uVar18) * 0x1000193;
          cVar21 = *pcVar31;
          pcVar31 = pcVar31 + 1;
        } while (cVar21 != (code)0x0);
      }
      lVar24 = readgsbase();
      plVar22 = *(longlong **)(*(longlong *)(*(longlong *)(lVar24 + 0x60) + 0x18) + 0x10);
    }
  }
  goto LAB_1400f9a75;
LAB_1400f9bf0:
  iVar11 = (*pcVar31)(0x16,puVar23,auVar34);
  if (-1 < iVar11) goto LAB_1400f9fc7;
  auVar7 = local_68;
  puVar12 = puVar23;
  if ((uint)auVar34 < (uint)local_68) {
    uVar10 = 0;
    lVar24 = readgsbase();
    plVar22 = (longlong *)(*(longlong *)(*(longlong *)(lVar24 + 0x60) + 0x18) + 0x10);
    uVar18 = 0xba9d8b4f;
LAB_1400f9c55:
    plVar22 = (longlong *)*plVar22;
    if (uVar10 != 0) goto code_r0x0001400f9c5c;
    goto LAB_1400f9cad;
  }
  goto LAB_1400f9a40;
LAB_1400f9fc7:
  if (puVar23 == (uint *)0x0) {
    return;
  }
  puVar12 = puVar23 + 2;
  uVar10 = 0;
  while( true ) {
    if (*puVar23 <= uVar10) break;
    local_6c = 0;
    local_70 = *puVar12;
    _local_68 = ZEXT1232(ZEXT812(0));
    sVar13 = strlen((char *)&local_70);
    if ((longlong)sVar13 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_140086cb0();
    }
    if (sVar13 < 0x10) {
      auStack_64._12_8_ = sVar13;
      auStack_64._20_8_ = 0xf;
      memcpy(local_68,&local_70,sVar13);
      puVar35 = local_68;
    }
    else {
      uVar30 = sVar13 | 0xf;
      if (uVar30 < 0x17) {
        uVar30 = 0x16;
      }
      if (uVar30 < 0xfff) {
        puVar35 = operator_new(uVar30 + 1);
      }
      else {
        pvVar15 = operator_new(uVar30 + 0x28);
        puVar35 = (undefined1 *)((longlong)pvVar15 + 0x27U & 0xffffffffffffffe0);
        *(void **)(puVar35 + -8) = pvVar15;
      }
      _local_68 = puVar35;
      auStack_64._12_8_ = sVar13;
      auStack_64._20_8_ = uVar30;
      memcpy(puVar35,&local_70,sVar13);
    }
    puVar35[sVar13] = 0;
    puVar35 = _local_68;
    uVar8 = auStack_64._12_8_;
    uVar9 = auStack_64._20_8_;
    puVar26 = local_68;
    if (0xf < (ulonglong)auStack_64._20_8_) {
      puVar26 = _local_68;
    }
    uVar30 = 0xcbf29ce484222325;
    if (auStack_64._12_8_ != 0) {
      uVar14 = (ulonglong)(local_68._16_4_ & 3);
      if ((ulonglong)auStack_64._12_8_ < 4) {
        uVar19 = 0;
        uVar30 = 0xcbf29ce484222325;
      }
      else {
        uVar19 = 0;
        uVar30 = 0xcbf29ce484222325;
        do {
          uVar30 = ((ulonglong)(byte)puVar26[uVar19 + 3] ^
                   ((ulonglong)(byte)puVar26[uVar19 + 2] ^
                   ((ulonglong)(byte)puVar26[uVar19 + 1] ^
                   ((byte)puVar26[uVar19] ^ uVar30) * 0x100000001b3) * 0x100000001b3) *
                   0x100000001b3) * 0x100000001b3;
          uVar19 = uVar19 + 4;
        } while ((auStack_64._12_8_ & 0xfffffffffffffffc) != uVar19);
      }
      if (uVar14 != 0) {
        uVar27 = 0;
        do {
          uVar30 = ((byte)puVar26[uVar27 + uVar19] ^ uVar30) * 0x100000001b3;
          uVar27 = uVar27 + 1;
        } while (uVar14 != uVar27);
      }
    }
    lVar24 = *(longlong *)(DAT_14012afa0 + 8 + (uVar30 & DAT_14012afb8) * 0x10);
    if (lVar24 != DAT_14012af90) {
      lVar2 = *(longlong *)(DAT_14012afa0 + (uVar30 & DAT_14012afb8) * 0x10);
      uVar30 = *(ulonglong *)(lVar24 + 0x20);
      while( true ) {
        if (uVar8 == uVar30) {
          if (*(ulonglong *)(lVar24 + 0x28) < 0x10) {
            pvVar15 = (void *)(lVar24 + 0x10);
          }
          else {
            pvVar15 = *(void **)(lVar24 + 0x10);
          }
          iVar11 = memcmp(puVar26,pvVar15,uVar8);
          if (iVar11 == 0) goto LAB_1400fa253;
        }
        if (lVar24 == lVar2) break;
        lVar24 = *(longlong *)(lVar24 + 8);
        uVar30 = *(ulonglong *)(lVar24 + 0x20);
      }
    }
    lVar24 = 0;
LAB_1400fa253:
    if (0xf < (ulonglong)uVar9) {
      puVar26 = puVar35;
      if ((0xfff < uVar9 + 1) &&
         (puVar26 = *(undefined1 **)(puVar35 + -8),
         (undefined1 *)0x1f < puVar35 + (-8 - (longlong)puVar26))) goto LAB_1400fa93e;
      free(puVar26);
    }
    if (lVar24 != 0) {
      _local_68 = ZEXT1232(ZEXT812(0));
      sVar13 = strlen((char *)&local_70);
      if ((longlong)sVar13 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_140086cb0();
      }
      if (sVar13 < 0x10) {
        auStack_64._12_8_ = sVar13;
        auStack_64._20_8_ = 0xf;
        memcpy(local_68,&local_70,sVar13);
        puVar35 = local_68;
      }
      else {
        uVar30 = sVar13 | 0xf;
        if (uVar30 < 0x17) {
          uVar30 = 0x16;
        }
        if (uVar30 < 0xfff) {
          puVar35 = operator_new(uVar30 + 1);
        }
        else {
          pvVar15 = operator_new(uVar30 + 0x28);
          puVar35 = (undefined1 *)((longlong)pvVar15 + 0x27U & 0xffffffffffffffe0);
          *(void **)(puVar35 + -8) = pvVar15;
        }
        _local_68 = puVar35;
        auStack_64._12_8_ = sVar13;
        auStack_64._20_8_ = uVar30;
        memcpy(puVar35,&local_70,sVar13);
      }
      plVar6 = DAT_14012b2a8;
      puVar35[sVar13] = 0;
      plVar22 = (longlong *)DAT_14012b2a8[1];
      bVar37 = false;
      plVar17 = DAT_14012b2a8;
      if (*(char *)((longlong)plVar22 + 0x19) == '\0') {
        puVar35 = local_68;
        if (0xf < (ulonglong)auStack_64._20_8_) {
          puVar35 = _local_68;
        }
        uVar8 = auStack_64._12_8_;
        plVar20 = plVar22;
        do {
          plVar22 = plVar20;
          if ((ulonglong)plVar22[7] < 0x10) {
            plVar20 = plVar22 + 4;
          }
          else {
            plVar20 = (longlong *)plVar22[4];
          }
          uVar30 = plVar22[6];
          uVar14 = uVar8;
          if (uVar30 <= (ulonglong)uVar8) {
            uVar14 = uVar30;
          }
          iVar11 = memcmp(plVar20,puVar35,uVar14);
          bVar37 = uVar30 < (ulonglong)uVar8;
          if (iVar11 != 0) {
            bVar37 = iVar11 < 0;
          }
          plVar16 = plVar22 + 2;
          if (!bVar37) {
            plVar16 = plVar22;
            plVar17 = plVar22;
          }
          plVar20 = (longlong *)*plVar16;
        } while (*(char *)(*plVar16 + 0x19) == '\0');
        bVar37 = (bool)(bVar37 ^ 1);
        if (*(char *)((longlong)plVar17 + 0x19) == '\0') goto LAB_1400fa41d;
LAB_1400fa471:
        if (DAT_14012b2b0 == 0x3ffffffffffffff) {
          FUN_1400c0930();
          goto LAB_1400fa93e;
        }
        plVar17 = operator_new(0x40);
        plVar17[4] = (longlong)_local_68;
        plVar17[5] = auStack_64._4_8_;
        plVar17[6] = auStack_64._12_8_;
        plVar17[7] = auStack_64._20_8_;
        auStack_64._12_8_ = 0;
        auStack_64._20_8_ = 0xf;
        auVar5[0x1f] = 0;
        auVar5._0_31_ = stack0xffffffffffffff99;
        _local_68 = auVar5 << 8;
        auVar3 = _local_68;
        *plVar17 = (longlong)plVar6;
        plVar17[2] = (longlong)plVar6;
        DAT_14012b2b0 = DAT_14012b2b0 + 1;
        *(undefined2 *)(plVar17 + 3) = 0;
        plVar6 = DAT_14012b2a8;
        plVar17[1] = (longlong)plVar22;
        if (plVar22 == plVar6) {
          *plVar22 = (longlong)plVar17;
          plVar22[1] = (longlong)plVar17;
          plVar22[2] = (longlong)plVar17;
        }
        else {
          plVar20 = plVar17 + 1;
          if (bVar37) {
            *plVar22 = (longlong)plVar17;
            plVar16 = plVar6;
            if (plVar22 == (longlong *)*plVar6) {
LAB_1400fa507:
              *plVar16 = (longlong)plVar17;
            }
          }
          else {
            plVar22[2] = (longlong)plVar17;
            if (plVar22 == (longlong *)plVar6[2]) {
              plVar16 = plVar6 + 2;
              goto LAB_1400fa507;
            }
          }
          plVar22 = (longlong *)*plVar20;
          cVar33 = (char)plVar22[3];
          while (cVar33 == '\0') {
            plVar28 = (longlong *)plVar22[1];
            plVar32 = (longlong *)*plVar28;
            plVar16 = plVar17;
            if (plVar22 == plVar32) {
              plVar32 = (longlong *)plVar28[2];
              if ((char)plVar32[3] != '\0') {
                if (plVar17 == (longlong *)plVar22[2]) {
                  plVar22[2] = *plVar17;
                  if (*(char *)(*plVar17 + 0x19) == '\0') {
                    *(longlong **)(*plVar17 + 8) = plVar22;
                    plVar28 = (longlong *)plVar22[1];
                  }
                  plVar17[1] = (longlong)plVar28;
                  if ((longlong *)DAT_14012b2a8[1] == plVar22) {
                    plVar20 = DAT_14012b2a8 + 1;
                  }
                  else {
                    plVar16 = (longlong *)plVar22[1];
                    plVar20 = plVar16 + 2;
                    if ((longlong *)*plVar16 == plVar22) {
                      plVar20 = plVar16;
                    }
                  }
                  *plVar20 = (longlong)plVar17;
                  *plVar17 = (longlong)plVar22;
                  plVar22[1] = (longlong)plVar17;
                  plVar16 = plVar22;
                  plVar22 = plVar17;
                }
                *(undefined1 *)(plVar22 + 3) = 1;
                *(undefined1 *)(*(longlong *)(plVar16[1] + 8) + 0x18) = 0;
                plVar22 = *(longlong **)(plVar16[1] + 8);
                plVar17 = (longlong *)*plVar22;
                *plVar22 = plVar17[2];
                if (*(char *)(plVar17[2] + 0x19) == '\0') {
                  *(longlong **)(plVar17[2] + 8) = plVar22;
                }
                plVar17[1] = plVar22[1];
                if ((longlong *)DAT_14012b2a8[1] == plVar22) {
                  plVar20 = DAT_14012b2a8 + 1;
                }
                else {
                  plVar28 = (longlong *)plVar22[1];
                  plVar20 = plVar28 + 2;
                  if ((longlong *)plVar28[2] != plVar22) {
                    plVar20 = plVar28;
                  }
                }
                *plVar20 = (longlong)plVar17;
                plVar17[2] = (longlong)plVar22;
                goto LAB_1400fa753;
              }
LAB_1400fa570:
              *(undefined1 *)(plVar22 + 3) = 1;
              *(undefined1 *)(plVar32 + 3) = 1;
              *(undefined1 *)(*(longlong *)(*plVar20 + 8) + 0x18) = 0;
              plVar16 = *(longlong **)(*plVar20 + 8);
            }
            else {
              if ((char)plVar32[3] == '\0') goto LAB_1400fa570;
              if (plVar17 == (longlong *)*plVar22) {
                *plVar22 = plVar17[2];
                if (*(char *)(plVar17[2] + 0x19) == '\0') {
                  *(longlong **)(plVar17[2] + 8) = plVar22;
                  plVar28 = (longlong *)plVar22[1];
                }
                plVar17[1] = (longlong)plVar28;
                if ((longlong *)DAT_14012b2a8[1] == plVar22) {
                  plVar20 = DAT_14012b2a8 + 1;
                }
                else {
                  plVar16 = (longlong *)plVar22[1];
                  plVar20 = plVar16 + 2;
                  if ((longlong *)plVar16[2] != plVar22) {
                    plVar20 = plVar16;
                  }
                }
                *plVar20 = (longlong)plVar17;
                plVar17[2] = (longlong)plVar22;
                plVar22[1] = (longlong)plVar17;
                plVar16 = plVar22;
                plVar22 = plVar17;
              }
              *(undefined1 *)(plVar22 + 3) = 1;
              *(undefined1 *)(*(longlong *)(plVar16[1] + 8) + 0x18) = 0;
              plVar22 = *(longlong **)(plVar16[1] + 8);
              plVar17 = (longlong *)plVar22[2];
              plVar22[2] = *plVar17;
              if (*(char *)(*plVar17 + 0x19) == '\0') {
                *(longlong **)(*plVar17 + 8) = plVar22;
              }
              plVar17[1] = plVar22[1];
              if ((longlong *)DAT_14012b2a8[1] == plVar22) {
                plVar20 = DAT_14012b2a8 + 1;
              }
              else {
                plVar28 = (longlong *)plVar22[1];
                plVar20 = plVar28 + 2;
                if ((longlong *)*plVar28 == plVar22) {
                  plVar20 = plVar28;
                }
              }
              *plVar20 = (longlong)plVar17;
              *plVar17 = (longlong)plVar22;
LAB_1400fa753:
              plVar22[1] = (longlong)plVar17;
            }
            plVar20 = plVar16 + 1;
            plVar22 = (longlong *)plVar16[1];
            plVar17 = plVar16;
            cVar33 = (char)plVar22[3];
          }
          plVar17 = (longlong *)plVar6[1];
        }
        *(undefined1 *)(plVar17 + 3) = 1;
        auStack_64._20_8_ = 0xf;
        uVar30 = auStack_64._20_8_;
        _local_68 = auVar3;
      }
      else {
        if (*(char *)((longlong)DAT_14012b2a8 + 0x19) != '\0') goto LAB_1400fa471;
LAB_1400fa41d:
        if ((ulonglong)plVar17[7] < 0x10) {
          plVar20 = plVar17 + 4;
        }
        else {
          plVar20 = (longlong *)plVar17[4];
        }
        uVar30 = auStack_64._20_8_;
        puVar35 = local_68;
        if (0xf < (ulonglong)auStack_64._20_8_) {
          puVar35 = _local_68;
        }
        uVar14 = plVar17[6];
        uVar8 = auStack_64._12_8_;
        uVar19 = auStack_64._12_8_;
        if (uVar14 < (ulonglong)auStack_64._12_8_) {
          uVar19 = uVar14;
        }
        iVar11 = memcmp(puVar35,plVar20,uVar19);
        bVar4 = uVar14 <= (ulonglong)uVar8;
        if (iVar11 != 0) {
          bVar4 = -1 < iVar11;
        }
        if (!bVar4) goto LAB_1400fa471;
      }
      if (0xf < uVar30) {
        pvVar15 = _local_68;
        if ((0xfff < uVar30 + 1) &&
           (pvVar15 = *(void **)((longlong)_local_68 + -8),
           0x1f < (ulonglong)((longlong)_local_68 + (-8 - (longlong)pvVar15)))) {
LAB_1400fa93e:
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
        free(pvVar15);
      }
      LOCK();
      DAT_14012b250 = 1;
      UNLOCK();
    }
    uVar10 = uVar10 + 1;
    puVar12 = puVar12 + 10;
  }
  uVar10 = 0;
  lVar24 = readgsbase();
  plVar22 = (longlong *)(*(longlong *)(*(longlong *)(lVar24 + 0x60) + 0x18) + 0x10);
  uVar18 = 0x28188289;
LAB_1400fa795:
  plVar22 = (longlong *)*plVar22;
  if (uVar10 != 0) goto code_r0x0001400fa79c;
  goto LAB_1400fa7ed;
code_r0x0001400fa79c:
  uVar29 = 0xf7e491c8;
  if (1 < (ushort)(*(int *)(plVar22 + 0xb) - 8U)) {
    lVar24 = 0;
    do {
      uVar29 = ((int)*(char *)(plVar22[0xc] + lVar24) ^ uVar29) * 0x1000193;
      lVar24 = lVar24 + 2;
    } while ((ulonglong)((*(int *)(plVar22 + 0xb) - 8U & 0xffff) >> 1) * 2 != lVar24);
  }
  if (uVar29 == uVar10) {
LAB_1400fa7ed:
    lVar2 = plVar22[6];
    uVar29 = *(uint *)(lVar2 + 0x88 + (longlong)*(int *)(lVar2 + 0x3c));
    lVar24 = lVar2 + (ulonglong)uVar29;
    if ((ulonglong)uVar29 != 0) {
      uVar30 = (ulonglong)*(uint *)(lVar24 + 0x18);
      do {
        bVar37 = uVar30 == 0;
        uVar30 = uVar30 - 1;
        if (bVar37) goto LAB_1400fa795;
        uVar14 = (ulonglong)*(uint *)((ulonglong)*(uint *)(lVar24 + 0x20) + lVar2 + uVar30 * 4);
        cVar33 = *(char *)(lVar2 + uVar14);
        if (cVar33 == '\0') {
          uVar36 = 0xf7e491c8;
        }
        else {
          pcVar25 = (char *)(uVar14 + lVar2 + 1);
          uVar36 = 0xf7e491c8;
          do {
            uVar36 = ((int)cVar33 ^ uVar36) * 0x1000193;
            cVar33 = *pcVar25;
            pcVar25 = pcVar25 + 1;
          } while (cVar33 != '\0');
        }
      } while (uVar36 != uVar18);
      uVar10 = *(uint *)((ulonglong)*(uint *)(lVar24 + 0x1c) + lVar2 +
                        (ulonglong)
                        *(ushort *)
                         ((ulonglong)*(uint *)(lVar24 + 0x24) + lVar2 + (uVar30 & 0xffffffff) * 2) *
                        4);
      pcVar31 = (code *)((ulonglong)uVar10 + lVar2);
      if ((uVar10 <= uVar29) ||
         ((code *)(lVar24 + (ulonglong)*(uint *)(lVar2 + 0x8c + (longlong)*(int *)(lVar2 + 0x3c)))
          <= pcVar31)) {
        (*pcVar31)(puVar23,0,0x8000);
        return;
      }
      uVar18 = 0xf7e491c8;
      uVar10 = 0xf7e491c8;
      cVar21 = *pcVar31;
      while (cVar21 != (code)0x2e) {
        uVar10 = ((int)(char)cVar21 ^ uVar10) * 0x1000193;
        pcVar1 = pcVar31 + 1;
        pcVar31 = pcVar31 + 1;
        cVar21 = *pcVar1;
      }
      cVar21 = pcVar31[1];
      if (cVar21 != (code)0x0) {
        pcVar31 = pcVar31 + 2;
        uVar18 = 0xf7e491c8;
        do {
          uVar18 = ((int)(char)cVar21 ^ uVar18) * 0x1000193;
          cVar21 = *pcVar31;
          pcVar31 = pcVar31 + 1;
        } while (cVar21 != (code)0x0);
      }
      lVar24 = readgsbase();
      plVar22 = *(longlong **)(*(longlong *)(*(longlong *)(lVar24 + 0x60) + 0x18) + 0x10);
    }
  }
  goto LAB_1400fa795;
code_r0x0001400f9c5c:
  uVar29 = 0x2292570b;
  if (1 < (ushort)(*(int *)(plVar22 + 0xb) - 8U)) {
    lVar24 = 0;
    do {
      uVar29 = ((int)*(char *)(plVar22[0xc] + lVar24) ^ uVar29) * 0x1000193;
      lVar24 = lVar24 + 2;
    } while ((ulonglong)((*(int *)(plVar22 + 0xb) - 8U & 0xffff) >> 1) * 2 != lVar24);
  }
  if (uVar29 == uVar10) {
LAB_1400f9cad:
    lVar2 = plVar22[6];
    uVar29 = *(uint *)(lVar2 + 0x88 + (longlong)*(int *)(lVar2 + 0x3c));
    lVar24 = lVar2 + (ulonglong)uVar29;
    if ((ulonglong)uVar29 != 0) {
      uVar30 = (ulonglong)*(uint *)(lVar24 + 0x18);
      do {
        bVar37 = uVar30 == 0;
        uVar30 = uVar30 - 1;
        if (bVar37) goto LAB_1400f9c55;
        uVar14 = (ulonglong)*(uint *)((ulonglong)*(uint *)(lVar24 + 0x20) + lVar2 + uVar30 * 4);
        cVar33 = *(char *)(lVar2 + uVar14);
        if (cVar33 == '\0') {
          uVar36 = 0x2292570b;
        }
        else {
          pcVar25 = (char *)(uVar14 + lVar2 + 1);
          uVar36 = 0x2292570b;
          do {
            uVar36 = ((int)cVar33 ^ uVar36) * 0x1000193;
            cVar33 = *pcVar25;
            pcVar25 = pcVar25 + 1;
          } while (cVar33 != '\0');
        }
      } while (uVar36 != uVar18);
      uVar10 = *(uint *)((ulonglong)*(uint *)(lVar24 + 0x1c) + lVar2 +
                        (ulonglong)
                        *(ushort *)
                         ((ulonglong)*(uint *)(lVar24 + 0x24) + lVar2 + (uVar30 & 0xffffffff) * 2) *
                        4);
      pcVar31 = (code *)((ulonglong)uVar10 + lVar2);
      if ((uVar10 <= uVar29) ||
         ((code *)(lVar24 + (ulonglong)*(uint *)(lVar2 + 0x8c + (longlong)*(int *)(lVar2 + 0x3c)))
          <= pcVar31)) goto LAB_1400f9dd0;
      uVar18 = 0x2292570b;
      uVar10 = 0x2292570b;
      cVar21 = *pcVar31;
      while (cVar21 != (code)0x2e) {
        uVar10 = ((int)(char)cVar21 ^ uVar10) * 0x1000193;
        pcVar1 = pcVar31 + 1;
        pcVar31 = pcVar31 + 1;
        cVar21 = *pcVar1;
      }
      cVar21 = pcVar31[1];
      if (cVar21 != (code)0x0) {
        pcVar31 = pcVar31 + 2;
        uVar18 = 0x2292570b;
        do {
          uVar18 = ((int)(char)cVar21 ^ uVar18) * 0x1000193;
          cVar21 = *pcVar31;
          pcVar31 = pcVar31 + 1;
        } while (cVar21 != (code)0x0);
      }
      lVar24 = readgsbase();
      plVar22 = *(longlong **)(*(longlong *)(*(longlong *)(lVar24 + 0x60) + 0x18) + 0x10);
    }
  }
  goto LAB_1400f9c55;
LAB_1400f9dd0:
  puVar12 = (uint *)(*pcVar31)(0,local_68,0x3000,4);
  auVar34 = auVar7;
  if (puVar23 != (uint *)0x0) {
    uVar10 = 0;
    lVar24 = readgsbase();
    plVar22 = (longlong *)(*(longlong *)(*(longlong *)(lVar24 + 0x60) + 0x18) + 0x10);
    uVar18 = 0x28188289;
LAB_1400f9e35:
    plVar22 = (longlong *)*plVar22;
    if (uVar10 != 0) goto code_r0x0001400f9e3c;
    goto LAB_1400f9e8d;
  }
  goto LAB_1400f9a40;
code_r0x0001400f9e3c:
  uVar29 = 0xf7e491c8;
  if (1 < (ushort)(*(int *)(plVar22 + 0xb) - 8U)) {
    lVar24 = 0;
    do {
      uVar29 = ((int)*(char *)(plVar22[0xc] + lVar24) ^ uVar29) * 0x1000193;
      lVar24 = lVar24 + 2;
    } while ((ulonglong)((*(int *)(plVar22 + 0xb) - 8U & 0xffff) >> 1) * 2 != lVar24);
  }
  if (uVar29 == uVar10) {
LAB_1400f9e8d:
    lVar2 = plVar22[6];
    uVar29 = *(uint *)(lVar2 + 0x88 + (longlong)*(int *)(lVar2 + 0x3c));
    lVar24 = lVar2 + (ulonglong)uVar29;
    if ((ulonglong)uVar29 != 0) {
      uVar30 = (ulonglong)*(uint *)(lVar24 + 0x18);
      do {
        bVar37 = uVar30 == 0;
        uVar30 = uVar30 - 1;
        if (bVar37) goto LAB_1400f9e35;
        uVar14 = (ulonglong)*(uint *)((ulonglong)*(uint *)(lVar24 + 0x20) + lVar2 + uVar30 * 4);
        cVar33 = *(char *)(lVar2 + uVar14);
        if (cVar33 == '\0') {
          uVar36 = 0xf7e491c8;
        }
        else {
          pcVar25 = (char *)(uVar14 + lVar2 + 1);
          uVar36 = 0xf7e491c8;
          do {
            uVar36 = ((int)cVar33 ^ uVar36) * 0x1000193;
            cVar33 = *pcVar25;
            pcVar25 = pcVar25 + 1;
          } while (cVar33 != '\0');
        }
      } while (uVar36 != uVar18);
      uVar10 = *(uint *)((ulonglong)*(uint *)(lVar24 + 0x1c) + lVar2 +
                        (ulonglong)
                        *(ushort *)
                         ((ulonglong)*(uint *)(lVar24 + 0x24) + lVar2 + (uVar30 & 0xffffffff) * 2) *
                        4);
      pcVar31 = (code *)((ulonglong)uVar10 + lVar2);
      if ((uVar10 <= uVar29) ||
         ((code *)(lVar24 + (ulonglong)*(uint *)(lVar2 + 0x8c + (longlong)*(int *)(lVar2 + 0x3c)))
          <= pcVar31)) goto LAB_1400f9fb0;
      uVar18 = 0xf7e491c8;
      uVar10 = 0xf7e491c8;
      cVar21 = *pcVar31;
      while (cVar21 != (code)0x2e) {
        uVar10 = ((int)(char)cVar21 ^ uVar10) * 0x1000193;
        pcVar1 = pcVar31 + 1;
        pcVar31 = pcVar31 + 1;
        cVar21 = *pcVar1;
      }
      cVar21 = pcVar31[1];
      if (cVar21 != (code)0x0) {
        pcVar31 = pcVar31 + 2;
        uVar18 = 0xf7e491c8;
        do {
          uVar18 = ((int)(char)cVar21 ^ uVar18) * 0x1000193;
          cVar21 = *pcVar31;
          pcVar31 = pcVar31 + 1;
        } while (cVar21 != (code)0x0);
      }
      lVar24 = readgsbase();
      plVar22 = *(longlong **)(*(longlong *)(*(longlong *)(lVar24 + 0x60) + 0x18) + 0x10);
    }
  }
  goto LAB_1400f9e35;
LAB_1400f9fb0:
  (*pcVar31)(puVar23,0,0x8000);
  goto LAB_1400f9a40;
}

