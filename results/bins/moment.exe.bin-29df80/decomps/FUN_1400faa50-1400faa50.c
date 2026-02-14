
/* WARNING: Type propagation algorithm not settling */

void FUN_1400faa50(void)

{
  code *pcVar1;
  ulonglong *puVar2;
  longlong lVar3;
  undefined8 _Size;
  uint uVar4;
  int iVar5;
  uint uVar6;
  size_t _Size_00;
  ulonglong uVar7;
  uint *puVar8;
  longlong *plVar9;
  void *pvVar10;
  void *pvVar11;
  uint uVar12;
  ulonglong uVar13;
  uint *puVar14;
  longlong *plVar15;
  code cVar16;
  longlong *plVar17;
  uint *puVar18;
  longlong *plVar19;
  longlong lVar20;
  ulonglong uVar21;
  undefined8 *puVar22;
  ulonglong uVar23;
  uint uVar24;
  ulonglong uVar25;
  code *pcVar26;
  longlong *plVar27;
  uint uVar28;
  uint *puVar29;
  char cVar30;
  undefined1 *_Dst;
  char *pcVar31;
  bool bVar32;
  ulonglong local_198;
  ulonglong uStack_190;
  ulonglong uStack_188;
  ulonglong uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  longlong *local_90;
  undefined1 local_88 [24];
  ulonglong uStack_70;
  uint local_5c;
  uint *local_58;
  uint *local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  local_198 = local_198 & 0xffffffff00000000;
  local_58 = (uint *)0x0;
  uVar6 = 0;
LAB_1400faa8d:
  local_50 = local_58;
LAB_1400faaa0:
  uVar4 = 0;
  lVar20 = readgsbase();
  plVar17 = (longlong *)(*(longlong *)(*(longlong *)(lVar20 + 0x60) + 0x18) + 0x10);
  uVar12 = 0x94da9b9e;
LAB_1400faad5:
  plVar17 = (longlong *)*plVar17;
  if (uVar4 != 0) goto code_r0x0001400faadc;
  goto LAB_1400fab2d;
code_r0x0001400faadc:
  uVar24 = 0x46f966e9;
  if (1 < (ushort)(*(int *)(plVar17 + 0xb) - 8U)) {
    lVar20 = 0;
    do {
      uVar24 = ((int)*(char *)(plVar17[0xc] + lVar20) ^ uVar24) * 0x1000193;
      lVar20 = lVar20 + 2;
    } while ((ulonglong)((*(int *)(plVar17 + 0xb) - 8U & 0xffff) >> 1) * 2 != lVar20);
  }
  if (uVar24 == uVar4) {
LAB_1400fab2d:
    lVar3 = plVar17[6];
    uVar24 = *(uint *)(lVar3 + 0x88 + (longlong)*(int *)(lVar3 + 0x3c));
    lVar20 = lVar3 + (ulonglong)uVar24;
    if ((ulonglong)uVar24 != 0) {
      uVar25 = (ulonglong)*(uint *)(lVar20 + 0x18);
      do {
        bVar32 = uVar25 == 0;
        uVar25 = uVar25 - 1;
        if (bVar32) goto LAB_1400faad5;
        uVar21 = (ulonglong)*(uint *)((ulonglong)*(uint *)(lVar20 + 0x20) + lVar3 + uVar25 * 4);
        cVar30 = *(char *)(lVar3 + uVar21);
        if (cVar30 == '\0') {
          uVar28 = 0x46f966e9;
        }
        else {
          pcVar31 = (char *)(uVar21 + lVar3 + 1);
          uVar28 = 0x46f966e9;
          do {
            uVar28 = ((int)cVar30 ^ uVar28) * 0x1000193;
            cVar30 = *pcVar31;
            pcVar31 = pcVar31 + 1;
          } while (cVar30 != '\0');
        }
      } while (uVar28 != uVar12);
      uVar4 = *(uint *)((ulonglong)*(uint *)(lVar20 + 0x1c) + lVar3 +
                       (ulonglong)
                       *(ushort *)
                        ((ulonglong)*(uint *)(lVar20 + 0x24) + lVar3 + (uVar25 & 0xffffffff) * 2) *
                       4);
      pcVar26 = (code *)((ulonglong)uVar4 + lVar3);
      if ((uVar4 <= uVar24) ||
         ((code *)(lVar20 + (ulonglong)*(uint *)(lVar3 + 0x8c + (longlong)*(int *)(lVar3 + 0x3c)))
          <= pcVar26)) goto LAB_1400fac50;
      uVar12 = 0x46f966e9;
      uVar4 = 0x46f966e9;
      cVar16 = *pcVar26;
      while (cVar16 != (code)0x2e) {
        uVar4 = ((int)(char)cVar16 ^ uVar4) * 0x1000193;
        pcVar1 = pcVar26 + 1;
        pcVar26 = pcVar26 + 1;
        cVar16 = *pcVar1;
      }
      cVar16 = pcVar26[1];
      if (cVar16 != (code)0x0) {
        pcVar26 = pcVar26 + 2;
        uVar12 = 0x46f966e9;
        do {
          uVar12 = ((int)(char)cVar16 ^ uVar12) * 0x1000193;
          cVar16 = *pcVar26;
          pcVar26 = pcVar26 + 1;
        } while (cVar16 != (code)0x0);
      }
      lVar20 = readgsbase();
      plVar17 = *(longlong **)(*(longlong *)(*(longlong *)(lVar20 + 0x60) + 0x18) + 0x10);
    }
  }
  goto LAB_1400faad5;
LAB_1400fac50:
  iVar5 = (*pcVar26)(0xb,local_50,uVar6);
  if (-1 < iVar5) {
    if (local_50 == (uint *)0x0) {
      return;
    }
    uVar6 = 0;
    goto LAB_1400fb07c;
  }
  uVar4 = (uint)local_198;
  if (uVar6 < (uint)local_198) goto code_r0x0001400fac79;
  goto LAB_1400faaa0;
LAB_1400fb07c:
  if (*local_50 <= uVar6) goto LAB_1400fb7c8;
  lVar20 = (ulonglong)uVar6 * 0x128;
  uVar25 = (ulonglong)*(ushort *)((longlong)local_50 + lVar20 + 0x2e);
  puVar22 = (undefined8 *)((longlong)local_50 + uVar25 + 0x110 + lVar20);
  local_b8 = *puVar22;
  uStack_b0 = puVar22[1];
  uStack_a8 = puVar22[2];
  uStack_a0 = puVar22[3];
  puVar22 = (undefined8 *)((longlong)local_50 + uVar25 + 0xf0 + lVar20);
  local_d8 = *puVar22;
  uStack_d0 = puVar22[1];
  uStack_c8 = puVar22[2];
  uStack_c0 = puVar22[3];
  puVar22 = (undefined8 *)((longlong)local_50 + uVar25 + 0xd0 + lVar20);
  local_f8 = *puVar22;
  uStack_f0 = puVar22[1];
  uStack_e8 = puVar22[2];
  uStack_e0 = puVar22[3];
  puVar22 = (undefined8 *)((longlong)local_50 + uVar25 + 0xb0 + lVar20);
  local_118 = *puVar22;
  uStack_110 = puVar22[1];
  uStack_108 = puVar22[2];
  uStack_100 = puVar22[3];
  puVar2 = (ulonglong *)((longlong)local_50 + uVar25 + 0x30 + lVar20);
  local_198 = *puVar2;
  uStack_190 = puVar2[1];
  uStack_188 = puVar2[2];
  uStack_180 = puVar2[3];
  puVar22 = (undefined8 *)((longlong)local_50 + uVar25 + 0x50 + lVar20);
  local_178 = *puVar22;
  uStack_170 = puVar22[1];
  uStack_168 = puVar22[2];
  uStack_160 = puVar22[3];
  puVar22 = (undefined8 *)((longlong)local_50 + uVar25 + 0x70 + lVar20);
  local_158 = *puVar22;
  uStack_150 = puVar22[1];
  uStack_148 = puVar22[2];
  uStack_140 = puVar22[3];
  puVar22 = (undefined8 *)((longlong)local_50 + uVar25 + 0x90 + lVar20);
  local_138 = *puVar22;
  uStack_130 = puVar22[1];
  uStack_128 = puVar22[2];
  uStack_120 = puVar22[3];
  _local_88 = ZEXT832(0) << 0x20;
  _Size_00 = strlen((char *)&local_198);
  if ((longlong)_Size_00 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140086cb0();
  }
  if (_Size_00 < 0x10) {
    local_88._16_8_ = _Size_00;
    uStack_70 = 0xf;
    memcpy(local_88,&local_198,_Size_00);
    _Dst = local_88;
  }
  else {
    uVar25 = _Size_00 | 0xf;
    if (uVar25 < 0x17) {
      uVar25 = 0x16;
    }
    if (uVar25 < 0xfff) {
      _Dst = operator_new(uVar25 + 1);
    }
    else {
      pvVar11 = operator_new(uVar25 + 0x28);
      _Dst = (undefined1 *)((longlong)pvVar11 + 0x27U & 0xffffffffffffffe0);
      *(void **)(_Dst + -8) = pvVar11;
    }
    local_88._0_8_ = _Dst;
    local_88._16_8_ = _Size_00;
    uStack_70 = uVar25;
    memcpy(_Dst,&local_198,_Size_00);
  }
  _Dst[_Size_00] = 0;
  _Size = local_88._16_8_;
  uVar25 = uStack_70;
  plVar17 = (longlong *)local_88;
  if (0xf < uStack_70) {
    plVar17 = (longlong *)local_88._0_8_;
  }
  uVar21 = 0xcbf29ce484222325;
  if ((longlong *)local_88._16_8_ != (longlong *)0x0) {
    uVar7 = (ulonglong)(local_88._16_4_ & 3);
    if ((ulonglong)local_88._16_8_ < (longlong *)0x4) {
      uVar13 = 0;
      uVar21 = 0xcbf29ce484222325;
    }
    else {
      uVar13 = 0;
      uVar21 = 0xcbf29ce484222325;
      do {
        uVar21 = ((ulonglong)*(byte *)((longlong)plVar17 + uVar13 + 3) ^
                 ((ulonglong)*(byte *)((longlong)plVar17 + uVar13 + 2) ^
                 ((ulonglong)*(byte *)((longlong)plVar17 + uVar13 + 1) ^
                 (*(byte *)((longlong)plVar17 + uVar13) ^ uVar21) * 0x100000001b3) * 0x100000001b3)
                 * 0x100000001b3) * 0x100000001b3;
        uVar13 = uVar13 + 4;
      } while ((local_88._16_8_ & 0xfffffffffffffffc) != uVar13);
    }
    if (uVar7 != 0) {
      uVar23 = 0;
      do {
        uVar21 = (*(byte *)((longlong)plVar17 + uVar23 + uVar13) ^ uVar21) * 0x100000001b3;
        uVar23 = uVar23 + 1;
      } while (uVar7 != uVar23);
    }
  }
  plVar9 = *(longlong **)(DAT_14012afe0 + 8 + (uVar21 & DAT_14012aff8) * 0x10);
  if (plVar9 != DAT_14012afd0) {
    plVar19 = *(longlong **)(DAT_14012afe0 + (uVar21 & DAT_14012aff8) * 0x10);
    plVar15 = (longlong *)plVar9[4];
joined_r0x0001400fb2e9:
    if ((longlong *)_Size == plVar15) {
      if ((ulonglong)plVar9[5] < 0x10) {
        plVar15 = plVar9 + 2;
      }
      else {
        plVar15 = (longlong *)plVar9[2];
      }
      iVar5 = memcmp(plVar17,plVar15,_Size);
      if (iVar5 != 0) goto LAB_1400fb313;
      puVar18 = *(uint **)(DAT_14012b298 + 2);
      local_58 = DAT_14012b298;
      puVar14 = puVar18;
      puVar29 = DAT_14012b298;
      if (*(char *)((longlong)puVar18 + 0x19) == '\0') {
        do {
          puVar18 = puVar14;
          if (*(ulonglong *)(puVar18 + 0xe) < 0x10) {
            puVar14 = puVar18 + 8;
          }
          else {
            puVar14 = *(uint **)(puVar18 + 8);
          }
          plVar9 = *(longlong **)(puVar18 + 0xc);
          plVar19 = (longlong *)_Size;
          if (plVar9 <= (ulonglong)_Size) {
            plVar19 = plVar9;
          }
          iVar5 = memcmp(puVar14,plVar17,(size_t)plVar19);
          bVar32 = plVar9 < (ulonglong)_Size;
          if (iVar5 != 0) {
            bVar32 = iVar5 < 0;
          }
          puVar8 = puVar18 + 4;
          if (bVar32 == false) {
            puVar8 = puVar18;
            puVar29 = puVar18;
          }
          puVar14 = *(uint **)puVar8;
        } while (*(char *)((longlong)*(uint **)puVar8 + 0x19) == '\0');
        local_5c = (uint)(bVar32 ^ 1);
        cVar30 = *(char *)((longlong)puVar29 + 0x19);
      }
      else {
        local_5c = 0;
        cVar30 = *(char *)((longlong)DAT_14012b298 + 0x19);
      }
      if (cVar30 == '\0') {
        if (*(ulonglong *)(puVar29 + 0xe) < 0x10) {
          puVar14 = puVar29 + 8;
        }
        else {
          puVar14 = *(uint **)(puVar29 + 8);
        }
        plVar9 = *(longlong **)(puVar29 + 0xc);
        plVar19 = (longlong *)_Size;
        if (plVar9 < (ulonglong)_Size) {
          plVar19 = plVar9;
        }
        iVar5 = memcmp(plVar17,puVar14,(size_t)plVar19);
        bVar32 = plVar9 <= (ulonglong)_Size;
        if (iVar5 != 0) {
          bVar32 = -1 < iVar5;
        }
        if (!bVar32) goto LAB_1400fb42e;
      }
      else {
LAB_1400fb42e:
        if (DAT_14012b2a0 == 0x3ffffffffffffff) {
          FUN_1400c0930();
LAB_1400fb9b8:
          local_90 = plVar9;
                    /* WARNING: Subroutine does not return */
          FUN_140086cb0();
        }
        plVar9 = operator_new(0x40);
        *(undefined1 (*) [32])(plVar9 + 4) = ZEXT1232(ZEXT812(0));
        if ((longlong)_Size < 0) goto LAB_1400fb9b8;
        if ((ulonglong)_Size < (longlong *)0x10) {
          plVar9[6] = _Size;
          plVar9[7] = 0xf;
          lVar20 = plVar17[1];
          plVar9[4] = *plVar17;
          plVar9[5] = lVar20;
        }
        else {
          plVar9[7] = 0xf;
          uVar25 = _Size | 0xf;
          if (uVar25 < 0x17) {
            uVar25 = 0x16;
          }
          local_90 = plVar9;
          if (uVar25 < 0xfff) {
            pvVar11 = operator_new(uVar25 + 1);
          }
          else {
            pvVar10 = operator_new(uVar25 + 0x28);
            pvVar11 = (void *)((longlong)pvVar10 + 0x27U & 0xffffffffffffffe0);
            *(void **)((longlong)pvVar11 - 8) = pvVar10;
          }
          plVar9 = local_90;
          local_90[4] = (longlong)pvVar11;
          local_90[6] = _Size;
          local_90[7] = uVar25;
          memcpy(pvVar11,plVar17,_Size + 1);
        }
        *plVar9 = (longlong)local_58;
        plVar9[2] = (longlong)local_58;
        DAT_14012b2a0 = DAT_14012b2a0 + 1;
        *(undefined2 *)(plVar9 + 3) = 0;
        puVar29 = DAT_14012b298;
        plVar9[1] = (longlong)puVar18;
        if (puVar18 == puVar29) {
          *(longlong **)puVar18 = plVar9;
          *(longlong **)(puVar18 + 2) = plVar9;
          *(longlong **)(puVar18 + 4) = plVar9;
        }
        else {
          plVar17 = plVar9 + 1;
          if (local_5c == 0) {
            *(longlong **)(puVar18 + 4) = plVar9;
            if (puVar18 == *(uint **)(puVar29 + 4)) {
              puVar14 = puVar29 + 4;
              goto LAB_1400fb56d;
            }
          }
          else {
            *(longlong **)puVar18 = plVar9;
            puVar14 = puVar29;
            if (puVar18 == *(uint **)puVar29) {
LAB_1400fb56d:
              *(longlong **)puVar14 = plVar9;
            }
          }
          plVar19 = (longlong *)*plVar17;
          cVar30 = (char)plVar19[3];
          while (cVar30 == '\0') {
            puVar22 = (undefined8 *)plVar19[1];
            plVar27 = (longlong *)*puVar22;
            plVar15 = plVar9;
            if (plVar19 == plVar27) {
              plVar27 = (longlong *)puVar22[2];
              if ((char)plVar27[3] == '\0') goto LAB_1400fb5e0;
              if (plVar9 == (longlong *)plVar19[2]) {
                plVar19[2] = *plVar9;
                if (*(char *)(*plVar9 + 0x19) == '\0') {
                  *(longlong **)(*plVar9 + 8) = plVar19;
                  puVar22 = (undefined8 *)plVar19[1];
                }
                plVar9[1] = (longlong)puVar22;
                if (*(longlong **)(DAT_14012b298 + 2) == plVar19) {
                  puVar18 = DAT_14012b298 + 2;
                }
                else {
                  puVar14 = (uint *)plVar19[1];
                  puVar18 = puVar14 + 4;
                  if (*(longlong **)puVar14 == plVar19) {
                    puVar18 = puVar14;
                  }
                }
                *(longlong **)puVar18 = plVar9;
                *plVar9 = (longlong)plVar19;
                plVar19[1] = (longlong)plVar9;
                plVar15 = plVar19;
                plVar19 = plVar9;
              }
              *(undefined1 *)(plVar19 + 3) = 1;
              *(undefined1 *)(*(longlong *)(plVar15[1] + 8) + 0x18) = 0;
              plVar17 = *(longlong **)(plVar15[1] + 8);
              plVar9 = (longlong *)*plVar17;
              *plVar17 = plVar9[2];
              if (*(char *)(plVar9[2] + 0x19) == '\0') {
                *(longlong **)(plVar9[2] + 8) = plVar17;
              }
              plVar9[1] = plVar17[1];
              if (*(longlong **)(DAT_14012b298 + 2) == plVar17) {
                puVar18 = DAT_14012b298 + 2;
              }
              else {
                puVar14 = (uint *)plVar17[1];
                puVar18 = puVar14 + 4;
                if (*(longlong **)(puVar14 + 4) != plVar17) {
                  puVar18 = puVar14;
                }
              }
              *(longlong **)puVar18 = plVar9;
              plVar9[2] = (longlong)plVar17;
LAB_1400fb7bf:
              plVar17[1] = (longlong)plVar9;
            }
            else {
              if ((char)plVar27[3] != '\0') {
                if (plVar9 == (longlong *)*plVar19) {
                  *plVar19 = plVar9[2];
                  if (*(char *)(plVar9[2] + 0x19) == '\0') {
                    *(longlong **)(plVar9[2] + 8) = plVar19;
                    puVar22 = (undefined8 *)plVar19[1];
                  }
                  plVar9[1] = (longlong)puVar22;
                  if (*(longlong **)(DAT_14012b298 + 2) == plVar19) {
                    puVar18 = DAT_14012b298 + 2;
                  }
                  else {
                    puVar14 = (uint *)plVar19[1];
                    puVar18 = puVar14 + 4;
                    if (*(longlong **)(puVar14 + 4) != plVar19) {
                      puVar18 = puVar14;
                    }
                  }
                  *(longlong **)puVar18 = plVar9;
                  plVar9[2] = (longlong)plVar19;
                  plVar19[1] = (longlong)plVar9;
                  plVar15 = plVar19;
                  plVar19 = plVar9;
                }
                *(undefined1 *)(plVar19 + 3) = 1;
                *(undefined1 *)(*(longlong *)(plVar15[1] + 8) + 0x18) = 0;
                plVar17 = *(longlong **)(plVar15[1] + 8);
                plVar9 = (longlong *)plVar17[2];
                plVar17[2] = *plVar9;
                if (*(char *)(*plVar9 + 0x19) == '\0') {
                  *(longlong **)(*plVar9 + 8) = plVar17;
                }
                plVar9[1] = plVar17[1];
                if ((longlong *)*(longlong *)(DAT_14012b298 + 2) == plVar17) {
                  puVar18 = DAT_14012b298 + 2;
                }
                else {
                  puVar14 = (uint *)plVar17[1];
                  puVar18 = puVar14 + 4;
                  if ((longlong *)*(longlong *)puVar14 == plVar17) {
                    puVar18 = puVar14;
                  }
                }
                *(longlong **)puVar18 = plVar9;
                *plVar9 = (longlong)plVar17;
                goto LAB_1400fb7bf;
              }
LAB_1400fb5e0:
              *(undefined1 *)(plVar19 + 3) = 1;
              *(undefined1 *)(plVar27 + 3) = 1;
              *(undefined1 *)(*(longlong *)(*plVar17 + 8) + 0x18) = 0;
              plVar15 = *(longlong **)(*plVar17 + 8);
            }
            plVar17 = plVar15 + 1;
            plVar19 = (longlong *)plVar15[1];
            plVar9 = plVar15;
            cVar30 = (char)plVar19[3];
          }
          plVar9 = *(longlong **)(puVar29 + 2);
        }
        *(undefined1 *)(plVar9 + 3) = 1;
      }
      LOCK();
      DAT_14012b250 = 1;
      UNLOCK();
      uVar25 = uStack_70;
    }
    else {
LAB_1400fb313:
      if (plVar9 != plVar19) goto code_r0x0001400fb31c;
    }
  }
  if (0xf < uVar25) {
    pvVar11 = (void *)local_88._0_8_;
    if ((0xfff < uVar25 + 1) &&
       (pvVar11 = *(void **)(local_88._0_8_ + -8),
       0x1f < (ulonglong)(local_88._0_8_ + (-8 - (longlong)pvVar11)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(pvVar11);
  }
  uVar6 = uVar6 + 1;
  goto LAB_1400fb07c;
LAB_1400fb7c8:
  uVar6 = 0;
  lVar20 = readgsbase();
  plVar17 = (longlong *)(*(longlong *)(*(longlong *)(lVar20 + 0x60) + 0x18) + 0x10);
  uVar4 = 0x28188289;
LAB_1400fb805:
  plVar17 = (longlong *)*plVar17;
  if (uVar6 != 0) goto code_r0x0001400fb80c;
  goto LAB_1400fb85d;
code_r0x0001400fb80c:
  uVar12 = 0xf7e491c8;
  if (1 < (ushort)(*(int *)(plVar17 + 0xb) - 8U)) {
    lVar20 = 0;
    do {
      uVar12 = ((int)*(char *)(plVar17[0xc] + lVar20) ^ uVar12) * 0x1000193;
      lVar20 = lVar20 + 2;
    } while ((ulonglong)((*(int *)(plVar17 + 0xb) - 8U & 0xffff) >> 1) * 2 != lVar20);
  }
  if (uVar12 == uVar6) {
LAB_1400fb85d:
    lVar3 = plVar17[6];
    uVar12 = *(uint *)(lVar3 + 0x88 + (longlong)*(int *)(lVar3 + 0x3c));
    lVar20 = lVar3 + (ulonglong)uVar12;
    if ((ulonglong)uVar12 != 0) {
      uVar25 = (ulonglong)*(uint *)(lVar20 + 0x18);
      do {
        bVar32 = uVar25 == 0;
        uVar25 = uVar25 - 1;
        if (bVar32) goto LAB_1400fb805;
        uVar21 = (ulonglong)*(uint *)((ulonglong)*(uint *)(lVar20 + 0x20) + lVar3 + uVar25 * 4);
        cVar30 = *(char *)(lVar3 + uVar21);
        if (cVar30 == '\0') {
          uVar24 = 0xf7e491c8;
        }
        else {
          pcVar31 = (char *)(uVar21 + lVar3 + 1);
          uVar24 = 0xf7e491c8;
          do {
            uVar24 = ((int)cVar30 ^ uVar24) * 0x1000193;
            cVar30 = *pcVar31;
            pcVar31 = pcVar31 + 1;
          } while (cVar30 != '\0');
        }
      } while (uVar24 != uVar4);
      uVar6 = *(uint *)((ulonglong)*(uint *)(lVar20 + 0x1c) + lVar3 +
                       (ulonglong)
                       *(ushort *)
                        ((ulonglong)*(uint *)(lVar20 + 0x24) + lVar3 + (uVar25 & 0xffffffff) * 2) *
                       4);
      pcVar26 = (code *)((ulonglong)uVar6 + lVar3);
      if ((uVar6 <= uVar12) ||
         ((code *)(lVar20 + (ulonglong)*(uint *)(lVar3 + 0x8c + (longlong)*(int *)(lVar3 + 0x3c)))
          <= pcVar26)) {
        (*pcVar26)(local_50,0,0x8000);
        return;
      }
      uVar4 = 0xf7e491c8;
      uVar6 = 0xf7e491c8;
      cVar16 = *pcVar26;
      while (cVar16 != (code)0x2e) {
        uVar6 = ((int)(char)cVar16 ^ uVar6) * 0x1000193;
        pcVar1 = pcVar26 + 1;
        pcVar26 = pcVar26 + 1;
        cVar16 = *pcVar1;
      }
      cVar16 = pcVar26[1];
      if (cVar16 != (code)0x0) {
        pcVar26 = pcVar26 + 2;
        uVar4 = 0xf7e491c8;
        do {
          uVar4 = ((int)(char)cVar16 ^ uVar4) * 0x1000193;
          cVar16 = *pcVar26;
          pcVar26 = pcVar26 + 1;
        } while (cVar16 != (code)0x0);
      }
      lVar20 = readgsbase();
      plVar17 = *(longlong **)(*(longlong *)(*(longlong *)(lVar20 + 0x60) + 0x18) + 0x10);
    }
  }
  goto LAB_1400fb805;
code_r0x0001400fb31c:
  plVar9 = (longlong *)plVar9[1];
  plVar15 = (longlong *)plVar9[4];
  goto joined_r0x0001400fb2e9;
code_r0x0001400fac79:
  uVar6 = 0;
  lVar20 = readgsbase();
  plVar17 = (longlong *)(*(longlong *)(*(longlong *)(lVar20 + 0x60) + 0x18) + 0x10);
  uVar12 = 0xba9d8b4f;
LAB_1400facb5:
  plVar17 = (longlong *)*plVar17;
  if (uVar6 != 0) goto code_r0x0001400facbc;
  goto LAB_1400fad0d;
code_r0x0001400facbc:
  uVar24 = 0x2292570b;
  if (1 < (ushort)(*(int *)(plVar17 + 0xb) - 8U)) {
    lVar20 = 0;
    do {
      uVar24 = ((int)*(char *)(plVar17[0xc] + lVar20) ^ uVar24) * 0x1000193;
      lVar20 = lVar20 + 2;
    } while ((ulonglong)((*(int *)(plVar17 + 0xb) - 8U & 0xffff) >> 1) * 2 != lVar20);
  }
  if (uVar24 == uVar6) {
LAB_1400fad0d:
    lVar3 = plVar17[6];
    uVar24 = *(uint *)(lVar3 + 0x88 + (longlong)*(int *)(lVar3 + 0x3c));
    lVar20 = lVar3 + (ulonglong)uVar24;
    if ((ulonglong)uVar24 != 0) {
      uVar25 = (ulonglong)*(uint *)(lVar20 + 0x18);
      do {
        bVar32 = uVar25 == 0;
        uVar25 = uVar25 - 1;
        if (bVar32) goto LAB_1400facb5;
        uVar21 = (ulonglong)*(uint *)((ulonglong)*(uint *)(lVar20 + 0x20) + lVar3 + uVar25 * 4);
        cVar30 = *(char *)(lVar3 + uVar21);
        if (cVar30 == '\0') {
          uVar28 = 0x2292570b;
        }
        else {
          pcVar31 = (char *)(uVar21 + lVar3 + 1);
          uVar28 = 0x2292570b;
          do {
            uVar28 = ((int)cVar30 ^ uVar28) * 0x1000193;
            cVar30 = *pcVar31;
            pcVar31 = pcVar31 + 1;
          } while (cVar30 != '\0');
        }
      } while (uVar28 != uVar12);
      uVar6 = *(uint *)((ulonglong)*(uint *)(lVar20 + 0x1c) + lVar3 +
                       (ulonglong)
                       *(ushort *)
                        ((ulonglong)*(uint *)(lVar20 + 0x24) + lVar3 + (uVar25 & 0xffffffff) * 2) *
                       4);
      pcVar26 = (code *)((ulonglong)uVar6 + lVar3);
      if ((uVar6 <= uVar24) ||
         ((code *)(lVar20 + (ulonglong)*(uint *)(lVar3 + 0x8c + (longlong)*(int *)(lVar3 + 0x3c)))
          <= pcVar26)) goto LAB_1400fae30;
      uVar12 = 0x2292570b;
      uVar6 = 0x2292570b;
      cVar16 = *pcVar26;
      while (cVar16 != (code)0x2e) {
        uVar6 = ((int)(char)cVar16 ^ uVar6) * 0x1000193;
        pcVar1 = pcVar26 + 1;
        pcVar26 = pcVar26 + 1;
        cVar16 = *pcVar1;
      }
      cVar16 = pcVar26[1];
      if (cVar16 != (code)0x0) {
        pcVar26 = pcVar26 + 2;
        uVar12 = 0x2292570b;
        do {
          uVar12 = ((int)(char)cVar16 ^ uVar12) * 0x1000193;
          cVar16 = *pcVar26;
          pcVar26 = pcVar26 + 1;
        } while (cVar16 != (code)0x0);
      }
      lVar20 = readgsbase();
      plVar17 = *(longlong **)(*(longlong *)(*(longlong *)(lVar20 + 0x60) + 0x18) + 0x10);
    }
  }
  goto LAB_1400facb5;
LAB_1400fae30:
  local_58 = (uint *)(*pcVar26)(0,local_198 & 0xffffffff,0x3000,4);
  uVar6 = uVar4;
  if (local_50 != (uint *)0x0) {
    uVar4 = 0;
    lVar20 = readgsbase();
    plVar17 = (longlong *)(*(longlong *)(*(longlong *)(lVar20 + 0x60) + 0x18) + 0x10);
    uVar12 = 0x28188289;
LAB_1400fae95:
    plVar17 = (longlong *)*plVar17;
    if (uVar4 != 0) goto code_r0x0001400fae9c;
    goto LAB_1400faeed;
  }
  goto LAB_1400faa8d;
code_r0x0001400fae9c:
  uVar24 = 0xf7e491c8;
  if (1 < (ushort)(*(int *)(plVar17 + 0xb) - 8U)) {
    lVar20 = 0;
    do {
      uVar24 = ((int)*(char *)(plVar17[0xc] + lVar20) ^ uVar24) * 0x1000193;
      lVar20 = lVar20 + 2;
    } while ((ulonglong)((*(int *)(plVar17 + 0xb) - 8U & 0xffff) >> 1) * 2 != lVar20);
  }
  if (uVar24 == uVar4) {
LAB_1400faeed:
    lVar3 = plVar17[6];
    uVar24 = *(uint *)(lVar3 + 0x88 + (longlong)*(int *)(lVar3 + 0x3c));
    lVar20 = lVar3 + (ulonglong)uVar24;
    if ((ulonglong)uVar24 != 0) {
      uVar25 = (ulonglong)*(uint *)(lVar20 + 0x18);
      do {
        bVar32 = uVar25 == 0;
        uVar25 = uVar25 - 1;
        if (bVar32) goto LAB_1400fae95;
        uVar21 = (ulonglong)*(uint *)((ulonglong)*(uint *)(lVar20 + 0x20) + lVar3 + uVar25 * 4);
        cVar30 = *(char *)(lVar3 + uVar21);
        if (cVar30 == '\0') {
          uVar28 = 0xf7e491c8;
        }
        else {
          pcVar31 = (char *)(uVar21 + lVar3 + 1);
          uVar28 = 0xf7e491c8;
          do {
            uVar28 = ((int)cVar30 ^ uVar28) * 0x1000193;
            cVar30 = *pcVar31;
            pcVar31 = pcVar31 + 1;
          } while (cVar30 != '\0');
        }
      } while (uVar28 != uVar12);
      uVar4 = *(uint *)((ulonglong)*(uint *)(lVar20 + 0x1c) + lVar3 +
                       (ulonglong)
                       *(ushort *)
                        ((ulonglong)*(uint *)(lVar20 + 0x24) + lVar3 + (uVar25 & 0xffffffff) * 2) *
                       4);
      pcVar26 = (code *)((ulonglong)uVar4 + lVar3);
      if ((uVar4 <= uVar24) ||
         ((code *)(lVar20 + (ulonglong)*(uint *)(lVar3 + 0x8c + (longlong)*(int *)(lVar3 + 0x3c)))
          <= pcVar26)) goto LAB_1400fb010;
      uVar12 = 0xf7e491c8;
      uVar4 = 0xf7e491c8;
      cVar16 = *pcVar26;
      while (cVar16 != (code)0x2e) {
        uVar4 = ((int)(char)cVar16 ^ uVar4) * 0x1000193;
        pcVar1 = pcVar26 + 1;
        pcVar26 = pcVar26 + 1;
        cVar16 = *pcVar1;
      }
      cVar16 = pcVar26[1];
      if (cVar16 != (code)0x0) {
        pcVar26 = pcVar26 + 2;
        uVar12 = 0xf7e491c8;
        do {
          uVar12 = ((int)(char)cVar16 ^ uVar12) * 0x1000193;
          cVar16 = *pcVar26;
          pcVar26 = pcVar26 + 1;
        } while (cVar16 != (code)0x0);
      }
      lVar20 = readgsbase();
      plVar17 = *(longlong **)(*(longlong *)(*(longlong *)(lVar20 + 0x60) + 0x18) + 0x10);
    }
  }
  goto LAB_1400fae95;
LAB_1400fb010:
  (*pcVar26)(local_50,0,0x8000);
  goto LAB_1400faa8d;
}

