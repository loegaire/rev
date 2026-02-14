
void FUN_1400d9200(longlong param_1,undefined1 (*param_2) [32],longlong *param_3)

{
  undefined1 (*pauVar1) [32];
  longlong *plVar2;
  void *pvVar3;
  undefined8 *puVar4;
  short *psVar5;
  undefined1 (*pauVar6) [32];
  void *pvVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  void *pvVar10;
  undefined8 *puVar11;
  undefined1 (*pauVar12) [32];
  longlong lVar13;
  short *psVar14;
  undefined1 (*pauVar15) [32];
  short *psVar16;
  size_t _Size;
  __uint64 _Var17;
  undefined8 *puVar18;
  longlong lVar19;
  ulonglong uVar20;
  undefined8 *puVar21;
  undefined1 (*pauVar22) [32];
  ulonglong uVar23;
  longlong lVar24;
  ulonglong uVar25;
  short *psVar26;
  ulonglong uVar27;
  longlong *plVar28;
  longlong lVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [32];
  undefined1 auVar32 [32];
  undefined1 auVar33 [32];
  undefined1 auVar34 [32];
  float fVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [12];
  undefined1 in_register_000012c4 [12];
  undefined8 uVar38;
  undefined1 auVar39 [16];
  undefined8 uVar41;
  undefined1 auVar40 [64];
  undefined1 auVar42 [64];
  undefined1 local_268 [32];
  undefined4 local_248;
  undefined8 *local_240;
  undefined8 uStack_238;
  undefined1 auStack_230 [16];
  undefined8 *local_220;
  undefined1 local_218 [16];
  undefined1 local_208 [16];
  longlong local_1f8;
  undefined2 local_1f0;
  undefined6 uStack_1ee;
  undefined8 uStack_1e8;
  longlong lStack_1e0;
  ulonglong uStack_1d8;
  undefined1 local_1d0 [16];
  longlong local_1c0;
  undefined1 (*local_1b8) [32];
  undefined1 (*local_1b0) [32];
  void *local_1a8;
  longlong lStack_1a0;
  ulonglong uStack_198;
  ulonglong uStack_190;
  undefined1 *local_180;
  longlong *local_178;
  longlong *local_170;
  undefined1 local_168 [32];
  undefined4 local_148;
  undefined1 local_140 [16];
  undefined1 auStack_130 [16];
  undefined8 *local_120;
  ulonglong local_118;
  ulonglong uStack_110;
  undefined1 local_108 [16];
  longlong lStack_f8;
  void *pvStack_f0;
  undefined8 uStack_e8;
  longlong lStack_e0;
  ulonglong local_d8;
  undefined1 local_d0 [16];
  longlong local_c0;
  undefined8 *local_b8;
  undefined8 *local_b0;
  short *local_a8;
  undefined1 (*local_a0) [32];
  undefined1 (*local_98) [32];
  undefined1 (*local_90) [32];
  undefined8 *local_88;
  undefined1 (*local_80) [32];
  undefined1 (*local_78) [32];
  undefined8 local_70;
  
  local_70 = 0xfffffffffffffffe;
  local_148 = 0;
  local_140._0_12_ = ZEXT812(0);
  local_140._12_4_ = 0;
  auVar40 = ZEXT1664(local_140);
  local_178 = param_3;
  pvVar3 = operator_new(0x50);
  *(void **)pvVar3 = pvVar3;
  *(void **)((longlong)pvVar3 + 8) = pvVar3;
  local_140._0_8_ = pvVar3;
  auStack_130 = auVar40._0_16_;
  local_120 = (undefined8 *)0x0;
  local_118 = 7;
  uStack_110 = 8;
  local_148 = 0x3f800000;
  puVar4 = operator_new(0x80);
  if (local_120 != (undefined8 *)auStack_130._0_8_) {
    puVar8 = (undefined8 *)auStack_130._0_8_;
    if ((0xfff < (ulonglong)((longlong)local_120 - auStack_130._0_8_)) &&
       (puVar8 = *(undefined8 **)(auStack_130._0_8_ + -8),
       uVar9 = auStack_130._0_8_ + (-8 - (longlong)puVar8), 0x1f < uVar9)) goto LAB_1400db3a2;
    free(puVar8);
  }
  local_120 = puVar4 + 0x10;
  auStack_130._8_8_ = local_120;
  auStack_130._0_8_ = puVar4;
  *puVar4 = pvVar3;
  puVar4[1] = pvVar3;
  puVar4[2] = pvVar3;
  puVar4[3] = pvVar3;
  puVar4[4] = pvVar3;
  puVar4[5] = pvVar3;
  puVar4[6] = pvVar3;
  puVar4[7] = pvVar3;
  puVar4[8] = pvVar3;
  puVar4[9] = pvVar3;
  puVar4[10] = pvVar3;
  puVar4[0xb] = pvVar3;
  puVar4[0xc] = pvVar3;
  puVar4[0xd] = pvVar3;
  puVar4[0xe] = pvVar3;
  puVar4[0xf] = pvVar3;
  uStack_e8 = 0;
  lStack_e0 = 0;
  local_108 = ZEXT816(0);
  lStack_f8 = 0;
  pvStack_f0 = (void *)0x0;
  local_d8 = 7;
  local_d0 = auVar40._0_16_;
  local_c0 = 0;
  pauVar22 = *(undefined1 (**) [32])(param_1 + 0x98);
  local_a0 = *(undefined1 (**) [32])(param_1 + 0xa0);
  local_78 = param_2;
LAB_1400d93af:
  auVar36 = auVar40._0_16_;
  if ((pauVar22 == local_a0) || (lStack_e0 != 0)) goto LAB_1400da0d6;
  plVar28 = local_178;
  if (7 < (ulonglong)local_178[3]) {
    plVar28 = (longlong *)*local_178;
  }
  local_a8 = (short *)((longlong)pauVar22[3] + 0x18);
  psVar5 = local_a8;
  if (7 < *(ulonglong *)((longlong)pauVar22[4] + 0x10)) {
    psVar5 = *(short **)((longlong)pauVar22[3] + 0x18);
  }
  uVar9 = local_178[2];
  lVar13 = *(ulonglong *)((longlong)pauVar22[4] + 8) - uVar9;
  local_98 = pauVar22;
  if (*(ulonglong *)((longlong)pauVar22[4] + 8) < uVar9) {
LAB_1400d94b0:
    local_1a8 = (void *)0x0;
    lStack_1a0 = 0;
    uStack_198 = 0;
    uStack_190 = 0;
    if (0x7ffffffffffffffe < uVar9) {
                    /* WARNING: Subroutine does not return */
      FUN_140086cb0();
    }
    if (uVar9 < 8) {
      uStack_190 = 7;
      local_1a8 = (void *)*plVar28;
      lStack_1a0 = plVar28[1];
      uStack_198 = uVar9;
    }
    else {
      uVar25 = uVar9 | 7;
      if (0x7ffffffffffffffe < uVar25) {
LAB_1400db5df:
                    /* WARNING: Subroutine does not return */
        FUN_1400bb790();
      }
      if (uVar25 < 0xb) {
        uVar25 = 10;
      }
      if (uVar25 < 0x7ff) {
        auVar40 = ZEXT1664(auVar36);
        local_1a8 = operator_new(uVar25 * 2 + 2);
      }
      else {
        if (0x7fffffffffffffeb < uVar25) goto LAB_1400db5df;
        auVar40 = ZEXT1664(auVar36);
        pvVar3 = operator_new(uVar25 * 2 + 0x29);
        local_1a8 = (void *)((longlong)pvVar3 + 0x27U & 0xffffffffffffffe0);
        *(void **)((longlong)local_1a8 - 8) = pvVar3;
      }
      uStack_198 = uVar9;
      uStack_190 = uVar25;
      memcpy(local_1a8,plVar28,uVar9 * 2 + 2);
      auVar36 = auVar40._0_16_;
    }
    auVar40 = ZEXT1664(auVar36);
    FUN_1400d9200((longlong)pauVar22,&local_268,(longlong *)&local_1a8);
    uVar38 = local_140._0_8_;
    local_168 = local_268;
    auVar36 = auStack_130;
    if (local_140._8_8_ != 0) {
      if ((ulonglong)local_140._8_8_ < uStack_110 >> 3) {
        pauVar12 = (undefined1 (*) [32])*(undefined8 *)local_140._0_8_;
        if (pauVar12 != (undefined1 (*) [32])local_140._0_8_) {
          if (*(ulonglong *)((longlong)pauVar12[1] + 8) < 8) {
            puVar4 = (undefined8 *)((longlong)*pauVar12 + 0x10);
          }
          else {
            puVar4 = *(undefined8 **)((longlong)*pauVar12 + 0x10);
          }
          uVar25 = 0xcbf29ce484222325;
          uVar9 = *(longlong *)pauVar12[1] * 2;
          if (uVar9 != 0) {
            uVar27 = (ulonglong)((uint)uVar9 & 2);
            if (uVar9 < 4) {
              uVar20 = 0;
              uVar25 = 0xcbf29ce484222325;
            }
            else {
              uVar20 = 0;
              uVar25 = 0xcbf29ce484222325;
              do {
                uVar25 = ((ulonglong)*(byte *)((longlong)puVar4 + uVar20 + 3) ^
                         ((ulonglong)*(byte *)((longlong)puVar4 + uVar20 + 2) ^
                         ((ulonglong)*(byte *)((longlong)puVar4 + uVar20 + 1) ^
                         (*(byte *)((longlong)puVar4 + uVar20) ^ uVar25) * 0x100000001b3) *
                         0x100000001b3) * 0x100000001b3) * 0x100000001b3;
                uVar20 = uVar20 + 4;
              } while ((uVar9 & 0xfffffffffffffffc) != uVar20);
            }
            if (uVar27 != 0) {
              uVar9 = 0;
              do {
                uVar25 = (*(byte *)((longlong)puVar4 + uVar9 + uVar20) ^ uVar25) * 0x100000001b3;
                uVar9 = uVar9 + 1;
              } while (uVar27 != uVar9);
            }
          }
          local_90 = *(undefined1 (**) [32])((longlong)*pauVar12 + 8);
          uVar25 = uVar25 & local_118;
          local_a8 = (short *)(auStack_130._0_8_ + uVar25 * 2 * 8);
          local_b0 = (undefined8 *)(uVar25 * 2 + 1);
          local_80 = *(undefined1 (**) [32])(auStack_130._0_8_ + uVar25 * 2 * 8);
          local_88 = (undefined8 *)auStack_130._0_8_;
          pauVar6 = *(undefined1 (**) [32])(auStack_130._0_8_ + (uVar25 * 2 + 1) * 8);
          pauVar15 = pauVar12;
LAB_1400d98bc:
          auVar36 = auVar40._0_16_;
          pauVar1 = *(undefined1 (**) [32])*pauVar15;
          pvVar3 = *(void **)((longlong)pauVar15[1] + 0x18);
          if (pvVar3 != (void *)0x0) {
            pvVar7 = pvVar3;
            if ((0xfff < (ulonglong)(*(longlong *)((longlong)pauVar15[2] + 8) - (longlong)pvVar3))
               && (pvVar7 = *(void **)((longlong)pvVar3 + -8),
                  0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)pvVar7))))
            goto LAB_1400db3a2;
            auVar40 = ZEXT1664(auVar36);
            free(pvVar7);
            auVar36 = auVar40._0_16_;
            *(undefined1 (*) [16])((longlong)pauVar15[1] + 0x18) = auVar36;
            *(undefined8 *)((longlong)pauVar15[2] + 8) = 0;
            pauVar22 = local_98;
          }
          if (7 < *(ulonglong *)((longlong)pauVar15[1] + 8)) {
            pvVar3 = *(void **)((longlong)*pauVar15 + 0x10);
            pvVar7 = pvVar3;
            if ((0xfff < *(ulonglong *)((longlong)pauVar15[1] + 8) * 2 + 2) &&
               (pvVar7 = *(void **)((longlong)pvVar3 + -8),
               0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)pvVar7)))) goto LAB_1400db3a2;
            auVar40 = ZEXT1664(auVar36);
            free(pvVar7);
            auVar36 = auVar40._0_16_;
          }
          auVar40 = ZEXT1664(auVar36);
          free(pauVar15);
          local_140._8_8_ = local_140._8_8_ + -1;
          if (pauVar15 == pauVar6) {
            pauVar6 = local_90;
            if (local_80 == pauVar12) {
              *(undefined8 *)local_a8 = uVar38;
              pauVar6 = (undefined1 (*) [32])uVar38;
            }
            local_88[(longlong)local_b0] = pauVar6;
            while (pauVar1 != (undefined1 (*) [32])uVar38) {
              if (*(ulonglong *)((longlong)pauVar1[1] + 8) < 8) {
                puVar4 = (undefined8 *)((longlong)*pauVar1 + 0x10);
              }
              else {
                puVar4 = *(undefined8 **)((longlong)*pauVar1 + 0x10);
              }
              uVar25 = 0xcbf29ce484222325;
              uVar9 = *(longlong *)pauVar1[1] * 2;
              if (uVar9 != 0) {
                uVar27 = (ulonglong)((uint)uVar9 & 2);
                if (uVar9 < 4) {
                  uVar20 = 0;
                  uVar25 = 0xcbf29ce484222325;
                }
                else {
                  uVar20 = 0;
                  uVar25 = 0xcbf29ce484222325;
                  do {
                    uVar25 = ((ulonglong)*(byte *)((longlong)puVar4 + uVar20 + 3) ^
                             ((ulonglong)*(byte *)((longlong)puVar4 + uVar20 + 2) ^
                             ((ulonglong)*(byte *)((longlong)puVar4 + uVar20 + 1) ^
                             (*(byte *)((longlong)puVar4 + uVar20) ^ uVar25) * 0x100000001b3) *
                             0x100000001b3) * 0x100000001b3) * 0x100000001b3;
                    uVar20 = uVar20 + 4;
                  } while ((uVar9 & 0xfffffffffffffffc) != uVar20);
                }
                if (uVar27 != 0) {
                  uVar9 = 0;
                  do {
                    uVar25 = (*(byte *)((longlong)puVar4 + uVar9 + uVar20) ^ uVar25) * 0x100000001b3
                    ;
                    uVar9 = uVar9 + 1;
                  } while (uVar27 != uVar9);
                }
              }
              uVar25 = uVar25 & local_118;
              local_a8 = (short *)(local_88 + uVar25 * 2);
              pauVar12 = (undefined1 (*) [32])local_88[uVar25 * 2 + 1];
              pauVar6 = pauVar1;
              while( true ) {
                pauVar1 = *(undefined1 (**) [32])*pauVar6;
                pvVar3 = *(void **)((longlong)pauVar6[1] + 0x18);
                if (pvVar3 != (void *)0x0) {
                  pvVar7 = pvVar3;
                  if ((0xfff < (ulonglong)
                               (*(longlong *)((longlong)pauVar6[2] + 8) - (longlong)pvVar3)) &&
                     (pvVar7 = *(void **)((longlong)pvVar3 + -8),
                     0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)pvVar7))))
                  goto LAB_1400db3a2;
                  free(pvVar7);
                  *(undefined1 (*) [16])((longlong)pauVar6[1] + 0x18) = auVar40._0_16_;
                  *(undefined8 *)((longlong)pauVar6[2] + 8) = 0;
                  pauVar22 = local_98;
                }
                if (7 < *(ulonglong *)((longlong)pauVar6[1] + 8)) {
                  pvVar3 = *(void **)((longlong)*pauVar6 + 0x10);
                  pvVar7 = pvVar3;
                  if ((0xfff < *(ulonglong *)((longlong)pauVar6[1] + 8) * 2 + 2) &&
                     (pvVar7 = *(void **)((longlong)pvVar3 + -8),
                     0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)pvVar7))))
                  goto LAB_1400db3a2;
                  free(pvVar7);
                }
                free(pauVar6);
                local_140._8_8_ = local_140._8_8_ + -1;
                if (pauVar6 == pauVar12) break;
                pauVar6 = pauVar1;
                if (pauVar1 == (undefined1 (*) [32])uVar38) goto LAB_1400d9994;
              }
              *(undefined8 *)local_a8 = uVar38;
              local_88[uVar25 * 2 + 1] = uVar38;
            }
          }
          else {
            if ((pauVar1 != (undefined1 (*) [32])uVar38) || (local_80 != pauVar12))
            goto LAB_1400d98b0;
LAB_1400d9994:
            *(undefined8 *)local_a8 = uVar38;
          }
          goto LAB_1400d999e;
        }
      }
      else {
        *(undefined8 *)((undefined8 *)local_140._0_8_)[1] = 0;
        puVar4 = (undefined8 *)*(undefined8 *)local_140._0_8_;
        while (puVar4 != (undefined8 *)0x0) {
          auVar39 = auVar40._0_16_;
          puVar8 = (undefined8 *)*puVar4;
          pvVar3 = (void *)puVar4[7];
          auStack_130 = auVar36;
          if (pvVar3 != (void *)0x0) {
            pvVar7 = pvVar3;
            if ((0xfff < (ulonglong)(puVar4[9] - (longlong)pvVar3)) &&
               (pvVar7 = *(void **)((longlong)pvVar3 + -8),
               0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)pvVar7)))) goto LAB_1400db3a2;
            auVar40 = ZEXT1664(auVar39);
            free(pvVar7);
            auVar39 = auVar40._0_16_;
            *(undefined1 (*) [16])(puVar4 + 7) = auVar39;
            puVar4[9] = 0;
          }
          if (7 < (ulonglong)puVar4[5]) {
            pvVar3 = (void *)puVar4[2];
            pvVar7 = pvVar3;
            if ((0xfff < puVar4[5] * 2 + 2U) &&
               (pvVar7 = *(void **)((longlong)pvVar3 + -8),
               0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)pvVar7)))) goto LAB_1400db3a2;
            auVar40 = ZEXT1664(auVar39);
            free(pvVar7);
            auVar39 = auVar40._0_16_;
          }
          auVar40 = ZEXT1664(auVar39);
          free(puVar4);
          puVar4 = puVar8;
          auVar36 = auStack_130;
        }
        *(undefined8 *)*(undefined1 (*) [32])local_140._0_8_ = local_140._0_8_;
        *(undefined8 *)((longlong)*(undefined1 (*) [32])local_140._0_8_ + 8) = local_140._0_8_;
        local_140._8_8_ = 0;
        auStack_130._0_8_ = auVar36._0_8_;
        auStack_130._8_8_ = auVar36._8_8_;
        if (auStack_130._0_8_ != auStack_130._8_8_) {
          uVar9 = auStack_130._8_8_ + (-8 - auStack_130._0_8_);
          if (0x77 < uVar9) {
            uVar9 = (uVar9 >> 3) + 1;
            uVar25 = uVar9 & 0xfffffffffffffff0;
            auVar31._8_8_ = local_140._0_8_;
            auVar31._0_8_ = local_140._0_8_;
            auVar31._16_8_ = local_140._0_8_;
            auVar31._24_8_ = local_140._0_8_;
            uVar27 = 0;
            do {
              *(undefined1 (*) [32])(auStack_130._0_8_ + uVar27 * 8) = auVar31;
              *(undefined1 (*) [32])(auStack_130._0_8_ + (uVar27 + 4) * 8) = auVar31;
              *(undefined1 (*) [32])(auStack_130._0_8_ + (uVar27 + 8) * 8) = auVar31;
              *(undefined1 (*) [32])(auStack_130._0_8_ + (uVar27 + 0xc) * 8) = auVar31;
              uVar27 = uVar27 + 0x10;
            } while (uVar25 != uVar27);
            if (uVar9 == uVar25) goto LAB_1400d99b0;
            auStack_130._0_8_ = auStack_130._0_8_ + uVar25 * 8;
          }
          do {
            *(undefined8 *)auStack_130._0_8_ = local_140._0_8_;
            auStack_130._0_8_ = auStack_130._0_8_ + 8;
          } while (auStack_130._0_8_ != auStack_130._8_8_);
        }
      }
    }
    goto LAB_1400d99b0;
  }
  if (uVar9 != 0) {
    if (psVar5 + lVar13 + 1 != psVar5) {
      psVar14 = psVar5;
      do {
        lVar19 = 0;
        lVar24 = 0;
        while (psVar14[lVar19] != (short)*plVar28) {
          lVar24 = lVar24 + -2;
          lVar19 = lVar19 + 1;
          if ((longlong)(psVar5 + lVar13 + 1) - (longlong)psVar14 >> 1 == lVar19)
          goto LAB_1400d94b0;
        }
        psVar26 = (short *)((longlong)psVar14 - lVar24);
        uVar25 = 0;
        psVar16 = psVar26;
        while (*psVar16 == *(short *)((longlong)plVar28 + uVar25 * 2)) {
          psVar16 = psVar16 + 1;
          uVar25 = uVar25 + 1;
          if (uVar9 == uVar25) {
            if ((longlong)psVar14 + (2 - (longlong)psVar5) == lVar24) goto LAB_1400d94b0;
            goto LAB_1400da2ae;
          }
        }
        psVar14 = psVar26 + 1;
      } while (psVar26 != psVar5 + lVar13);
    }
    goto LAB_1400d94b0;
  }
LAB_1400da2ae:
  *local_78 = *pauVar22;
  *(undefined4 *)local_78[1] = *(undefined4 *)pauVar22[1];
  *(undefined8 *)(local_78[1] + 8) = 0;
  *(undefined8 *)(local_78[1] + 0x10) = 0;
  uVar38 = 0;
  uVar41 = 0;
  pvVar3 = operator_new(0x50);
  local_180 = local_78[1] + 8;
  *(void **)pvVar3 = pvVar3;
  *(void **)((longlong)pvVar3 + 8) = pvVar3;
  *(void **)(local_78[1] + 8) = pvVar3;
  local_170 = (longlong *)(local_78[1] + 0x18);
  *(undefined8 *)(local_78[1] + 0x18) = uVar38;
  *(undefined8 *)local_78[2] = uVar41;
  *(undefined8 *)(local_78[2] + 8) = 0;
  *(undefined8 *)(local_78[2] + 0x10) = *(undefined8 *)((longlong)pauVar22[2] + 0x10);
  *(undefined8 *)(local_78[2] + 0x18) = *(undefined8 *)((longlong)pauVar22[2] + 0x18);
  lVar13 = *(longlong *)pauVar22[2];
  lVar19 = *(longlong *)((longlong)pauVar22[1] + 0x18);
  uVar9 = lVar13 - lVar19;
  if (uVar9 == 0) goto LAB_1400da43c;
  if ((longlong)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1400bb790();
  }
  if (uVar9 < 0xff9) {
    puVar4 = operator_new(uVar9);
  }
  else {
    pvVar7 = operator_new(uVar9 + 0x27);
    puVar4 = (undefined8 *)((longlong)pvVar7 + 0x27U & 0xffffffffffffffe0);
    puVar4[-1] = pvVar7;
  }
  pvVar7 = *(void **)(local_78[1] + 0x18);
  if (*(void **)(local_78[2] + 8) != pvVar7) {
    pvVar10 = pvVar7;
    if ((0xfff < (ulonglong)((longlong)*(void **)(local_78[2] + 8) - (longlong)pvVar7)) &&
       (pvVar10 = *(void **)((longlong)pvVar7 + -8),
       0x1f < (ulonglong)((longlong)pvVar7 + (-8 - (longlong)pvVar10)))) goto LAB_1400db3a2;
    free(pvVar10);
  }
  *(undefined8 **)(local_78[1] + 0x18) = puVar4;
  puVar8 = puVar4 + (lVar13 - lVar19 >> 3);
  *(undefined8 **)local_78[2] = puVar8;
  *(undefined8 **)(local_78[2] + 8) = puVar8;
  if (uVar9 - 8 < 0x78) goto LAB_1400da430;
  uVar27 = (uVar9 - 8 >> 3) + 1;
  uVar9 = uVar27 & 0xfffffffffffffff0;
  auVar32._8_8_ = pvVar3;
  auVar32._0_8_ = pvVar3;
  auVar32._16_8_ = pvVar3;
  auVar32._24_8_ = pvVar3;
  uVar25 = 0;
  do {
    *(undefined1 (*) [32])(puVar4 + uVar25) = auVar32;
    *(undefined1 (*) [32])(puVar4 + uVar25 + 4) = auVar32;
    *(undefined1 (*) [32])(puVar4 + uVar25 + 8) = auVar32;
    *(undefined1 (*) [32])(puVar4 + uVar25 + 0xc) = auVar32;
    uVar25 = uVar25 + 0x10;
  } while (uVar9 != uVar25);
  if (uVar27 != uVar9) {
    puVar4 = puVar4 + uVar9;
LAB_1400da430:
    do {
      *puVar4 = pvVar3;
      puVar4 = puVar4 + 1;
    } while (puVar4 != puVar8);
  }
LAB_1400da43c:
  local_1b0 = local_78 + 1;
  local_1b8 = *(undefined1 (**) [32])((longlong)pauVar22[1] + 8);
  auVar40 = ZEXT1264(ZEXT812(0));
  auVar42 = ZEXT464(0x5f000000);
  pauVar12 = local_1b8;
  pauVar6 = local_78;
LAB_1400da47e:
  pauVar12 = *(undefined1 (**) [32])*pauVar12;
  if (pauVar12 == local_1b8) {
    local_a0 = pauVar6 + 3;
    *(undefined1 (*) [16])pauVar6[3] = (undefined1  [16])0x0;
    *(undefined8 *)(pauVar6[3] + 0x10) = 0;
    _Var17 = *(longlong *)((longlong)pauVar22[3] + 8) - *(longlong *)pauVar22[3];
    if (_Var17 != 0) {
      lVar13 = *(longlong *)((longlong)pauVar22[3] + 8) - *(longlong *)pauVar22[3] >> 3;
      uVar9 = lVar13 * -0x3333333333333333;
      if (0x666666666666666 < uVar9) {
                    /* WARNING: Subroutine does not return */
        FUN_1400bf760();
      }
      if (uVar9 < 0x67) {
        pauVar12 = operator_new(_Var17);
      }
      else {
        pvVar3 = operator_new(_Var17 + 0x27);
        pauVar12 = (undefined1 (*) [32])((longlong)pvVar3 + 0x27U & 0xffffffffffffffe0);
        *(void **)((longlong)pauVar12[-1] + 0x18) = pvVar3;
      }
      *(undefined1 (**) [32])pauVar6[3] = pauVar12;
      *(undefined1 (**) [32])(pauVar6[3] + 8) = pauVar12;
      *(undefined8 **)(pauVar6[3] + 0x10) = (undefined8 *)((longlong)*pauVar12 + lVar13 * 8);
      puVar8 = *(undefined8 **)((longlong)pauVar22[3] + 8);
      pauVar15 = (undefined1 (*) [32])0x0;
      auVar40 = ZEXT1264(ZEXT812(0));
      local_90 = pauVar12;
      for (puVar4 = *(undefined8 **)pauVar22[3]; puVar4 != puVar8; puVar4 = puVar4 + 5) {
        *pauVar12 = auVar40._0_32_;
        puVar11 = puVar4;
        if (7 < (ulonglong)puVar4[3]) {
          puVar11 = (undefined8 *)*puVar4;
        }
        uVar9 = puVar4[2];
        if (0x7ffffffffffffffe < uVar9) {
          local_98 = pauVar12;
          local_80 = pauVar15;
                    /* WARNING: Subroutine does not return */
          FUN_140086cb0();
        }
        if (uVar9 < 8) {
          *(ulonglong *)((longlong)*pauVar12 + 0x10) = uVar9;
          *(undefined8 *)((longlong)*pauVar12 + 0x18) = 7;
          uVar38 = puVar11[1];
          *(undefined8 *)*pauVar12 = *puVar11;
          *(undefined8 *)((longlong)*pauVar12 + 8) = uVar38;
        }
        else {
          *(undefined8 *)((longlong)*pauVar12 + 0x18) = 7;
          uVar25 = uVar9 | 7;
          if (0x7ffffffffffffffe < uVar25) {
LAB_1400db5fd:
            local_98 = pauVar12;
            local_80 = pauVar15;
                    /* WARNING: Subroutine does not return */
            FUN_1400bb790();
          }
          if (uVar25 < 0xb) {
            uVar25 = 10;
          }
          if (uVar25 < 0x7ff) {
            local_98 = pauVar12;
            local_80 = pauVar15;
            pvVar3 = operator_new(uVar25 * 2 + 2);
          }
          else {
            if (0x7fffffffffffffeb < uVar25) goto LAB_1400db5fd;
            local_98 = pauVar12;
            local_80 = pauVar15;
            pvVar7 = operator_new(uVar25 * 2 + 0x29);
            pvVar3 = (void *)((longlong)pvVar7 + 0x27U & 0xffffffffffffffe0);
            *(void **)((longlong)pvVar3 - 8) = pvVar7;
          }
          pauVar12 = local_98;
          *(void **)*local_98 = pvVar3;
          *(ulonglong *)((longlong)*local_98 + 0x10) = uVar9;
          *(ulonglong *)((longlong)*local_98 + 0x18) = uVar25;
          memcpy(pvVar3,puVar11,uVar9 * 2 + 2);
          auVar40 = ZEXT1264(ZEXT812(0));
          pauVar15 = local_80;
        }
        *(undefined8 *)pauVar12[1] = puVar4[4];
        pauVar12 = (undefined1 (*) [32])((longlong)pauVar12[1] + 8);
        pauVar15 = (undefined1 (*) [32])((longlong)pauVar15[1] + 8);
        pauVar6 = local_78;
      }
      *(undefined1 (**) [32])(pauVar6[3] + 8) = pauVar12;
    }
    *(undefined8 *)(pauVar6[3] + 0x18) = 0;
    *(undefined8 *)pauVar6[4] = 0;
    *(undefined8 *)(pauVar6[4] + 8) = 0;
    *(undefined8 *)(pauVar6[4] + 0x10) = 0;
    uVar9 = *(ulonglong *)((longlong)pauVar22[4] + 8);
    if (7 < *(ulonglong *)((longlong)pauVar22[4] + 0x10)) {
      local_a8 = *(short **)((longlong)pauVar22[3] + 0x18);
    }
    if (0x7ffffffffffffffe < uVar9) {
                    /* WARNING: Subroutine does not return */
      FUN_140086cb0();
    }
    local_80 = (undefined1 (*) [32])(pauVar6[3] + 0x18);
    if (uVar9 < 8) {
      *(ulonglong *)(pauVar6[4] + 8) = uVar9;
      *(undefined8 *)(pauVar6[4] + 0x10) = 7;
      uVar38 = *(undefined8 *)(local_a8 + 4);
      *(undefined8 *)*local_80 = *(undefined8 *)local_a8;
      *(undefined8 *)pauVar6[4] = uVar38;
    }
    else {
      *(undefined8 *)(pauVar6[4] + 0x10) = 7;
      uVar25 = uVar9 | 7;
      if (0x7ffffffffffffffe < uVar25) {
LAB_1400db661:
                    /* WARNING: Subroutine does not return */
        FUN_1400bb790();
      }
      uVar27 = 10;
      if (10 < uVar25) {
        uVar27 = uVar25;
      }
      if (uVar27 < 0x7ff) {
        pvVar3 = operator_new(uVar27 * 2 + 2);
      }
      else {
        if (0x7fffffffffffffeb < uVar27) goto LAB_1400db661;
        pvVar7 = operator_new(uVar27 * 2 + 0x29);
        pvVar3 = (void *)((longlong)pvVar7 + 0x27U & 0xffffffffffffffe0);
        *(void **)((longlong)pvVar3 - 8) = pvVar7;
      }
      *(void **)(pauVar6[3] + 0x18) = pvVar3;
      *(ulonglong *)(pauVar6[4] + 8) = uVar9;
      *(ulonglong *)(pauVar6[4] + 0x10) = uVar27;
      memcpy(pvVar3,local_a8,uVar9 * 2 + 2);
    }
    *(undefined1 (*) [16])(pauVar6[4] + 0x18) = (undefined1  [16])0x0;
    *(undefined8 *)(pauVar6[5] + 8) = 0;
    FUN_1400dc7a0((undefined8 *)(pauVar6[4] + 0x18),
                  (*(longlong *)pauVar22[5] - *(longlong *)((longlong)pauVar22[4] + 0x18) >> 4) *
                  0x2e8ba2e8ba2e8ba3,(undefined8 *)((longlong)pauVar22[4] + 0x18),
                  (undefined8 *)(pauVar22 + 5));
    auVar36 = local_d0;
    if ((void *)local_d0._0_8_ != (void *)0x0) {
      uVar38 = local_d0._8_8_;
      pvVar3 = (void *)local_d0._0_8_;
      if (local_d0._0_8_ != local_d0._8_8_) {
        do {
          FUN_1400dc310((longlong)pvVar3);
          pvVar3 = (void *)((longlong)pvVar3 + 0xb0);
        } while (pvVar3 != (void *)uVar38);
      }
      pvVar3 = (void *)local_d0._0_8_;
      if ((0xfff < (ulonglong)(local_c0 - local_d0._0_8_)) &&
         (pvVar3 = *(void **)(local_d0._0_8_ + -8),
         0x1f < (ulonglong)(local_d0._0_8_ + (-8 - (longlong)pvVar3)))) goto LAB_1400db3a2;
      free(pvVar3);
      local_d0 = (undefined1  [16])0x0;
      local_c0 = 0;
      auVar36 = local_d0;
    }
    goto LAB_1400db2aa;
  }
  puVar4 = (undefined8 *)((longlong)*pauVar12 + 0x10);
  puVar8 = puVar4;
  if (7 < *(ulonglong *)((longlong)pauVar12[1] + 8)) {
    puVar8 = *(undefined8 **)((longlong)*pauVar12 + 0x10);
  }
  lVar13 = *(longlong *)pauVar12[1];
  uVar25 = 0xcbf29ce484222325;
  uVar9 = lVar13 * 2;
  if (uVar9 != 0) {
    uVar27 = (ulonglong)((uint)uVar9 & 2);
    if (uVar9 < 4) {
      uVar20 = 0;
      uVar25 = 0xcbf29ce484222325;
    }
    else {
      uVar20 = 0;
      uVar25 = 0xcbf29ce484222325;
      do {
        uVar25 = ((ulonglong)*(byte *)((longlong)puVar8 + uVar20 + 3) ^
                 ((ulonglong)*(byte *)((longlong)puVar8 + uVar20 + 2) ^
                 ((ulonglong)*(byte *)((longlong)puVar8 + uVar20 + 1) ^
                 (*(byte *)((longlong)puVar8 + uVar20) ^ uVar25) * 0x100000001b3) * 0x100000001b3) *
                 0x100000001b3) * 0x100000001b3;
        uVar20 = uVar20 + 4;
      } while ((uVar9 & 0xfffffffffffffffc) != uVar20);
    }
    if (uVar27 != 0) {
      uVar9 = 0;
      do {
        uVar25 = (*(byte *)((longlong)puVar8 + uVar9 + uVar20) ^ uVar25) * 0x100000001b3;
        uVar9 = uVar9 + 1;
      } while (uVar27 != uVar9);
    }
  }
  uVar9 = *(ulonglong *)(pauVar6[2] + 0x10) & uVar25;
  puVar11 = *(undefined8 **)(*(longlong *)(pauVar6[1] + 0x18) + 8 + uVar9 * 0x10);
  puVar18 = puVar11;
  local_90 = pauVar12;
  if (puVar11 != *(undefined8 **)(pauVar6[1] + 8)) {
    puVar18 = *(undefined8 **)(*(longlong *)(pauVar6[1] + 0x18) + uVar9 * 0x10);
    lVar19 = puVar11[4];
    while( true ) {
      if (lVar13 == lVar19) {
        puVar21 = puVar11 + 2;
        pauVar22 = local_98;
        if (lVar13 == 0) goto LAB_1400da47e;
        if (7 < (ulonglong)puVar11[5]) {
          puVar21 = (undefined8 *)puVar11[2];
        }
        lVar19 = 0;
        while (*(short *)((longlong)puVar8 + lVar19 * 2) ==
               *(short *)((longlong)puVar21 + lVar19 * 2)) {
          lVar19 = lVar19 + 1;
          if (lVar13 == lVar19) goto LAB_1400da47e;
        }
      }
      if (puVar11 == puVar18) break;
      puVar11 = (undefined8 *)puVar11[1];
      lVar19 = puVar11[4];
    }
  }
  if (*(longlong *)(pauVar6[1] + 0x10) == 0x333333333333333) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("unordered_map/set too long");
  }
  local_b8 = (undefined8 *)0x0;
  auVar40 = ZEXT1664(auVar40._0_16_);
  auVar42 = ZEXT1664(auVar42._0_16_);
  puVar8 = operator_new(0x50);
  puVar8[2] = 0;
  puVar8[3] = 0;
  puVar8[4] = 0;
  puVar8[5] = 0;
  if (7 < *(ulonglong *)((longlong)local_90[1] + 8)) {
    puVar4 = *(undefined8 **)((longlong)*local_90 + 0x10);
  }
  uVar9 = *(ulonglong *)local_90[1];
  local_b0 = puVar8;
  if (0x7ffffffffffffffe < uVar9) {
    local_b8 = puVar8;
                    /* WARNING: Subroutine does not return */
    FUN_140086cb0();
  }
  local_a0 = (undefined1 (*) [32])(puVar8 + 2);
  if (uVar9 < 8) {
    puVar8[4] = uVar9;
    puVar8[5] = 7;
    uVar38 = puVar4[1];
    *(undefined8 *)*local_a0 = *puVar4;
    puVar8[3] = uVar38;
  }
  else {
    puVar8[5] = 7;
    uVar27 = uVar9 | 7;
    if (0x7ffffffffffffffe < uVar27) {
LAB_1400db623:
      local_b8 = puVar8;
                    /* WARNING: Subroutine does not return */
      FUN_1400bb790();
    }
    if (uVar27 < 0xb) {
      uVar27 = 10;
    }
    if (uVar27 < 0x7ff) {
      auVar40 = ZEXT1664(auVar40._0_16_);
      auVar42 = ZEXT1664(auVar42._0_16_);
      local_b8 = puVar8;
      pvVar3 = operator_new(uVar27 * 2 + 2);
    }
    else {
      if (0x7fffffffffffffeb < uVar27) goto LAB_1400db623;
      auVar40 = ZEXT1664(auVar40._0_16_);
      auVar42 = ZEXT1664(auVar42._0_16_);
      local_b8 = puVar8;
      pvVar7 = operator_new(uVar27 * 2 + 0x29);
      pvVar3 = (void *)((longlong)pvVar7 + 0x27U & 0xffffffffffffffe0);
      *(void **)((longlong)pvVar3 - 8) = pvVar7;
    }
    puVar8[2] = pvVar3;
    puVar8[4] = uVar9;
    puVar8[5] = uVar27;
    memcpy(pvVar3,puVar4,uVar9 * 2 + 2);
  }
  *(undefined4 *)(puVar8 + 6) = *(undefined4 *)((longlong)local_90[1] + 0x10);
  auVar36 = auVar40._0_16_;
  *(undefined1 (*) [16])(puVar8 + 7) = auVar36;
  puVar8[9] = 0;
  uVar9 = *(longlong *)local_90[2] - *(longlong *)((longlong)local_90[1] + 0x18);
  local_88 = puVar8;
  if (uVar9 != 0) {
    if ((longlong)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1400bf760();
    }
    if (uVar9 < 0x1000) {
      auVar40 = ZEXT1664(auVar36);
      auVar42 = ZEXT1664(auVar42._0_16_);
      pvVar3 = operator_new(uVar9);
    }
    else {
      auVar40 = ZEXT1664(auVar36);
      auVar42 = ZEXT1664(auVar42._0_16_);
      pvVar7 = operator_new(uVar9 + 0x27);
      pvVar3 = (void *)((longlong)pvVar7 + 0x27U & 0xffffffffffffffe0);
      *(void **)((longlong)pvVar3 - 8) = pvVar7;
    }
    puVar4 = local_88;
    local_88[7] = pvVar3;
    local_88[8] = pvVar3;
    local_88[9] = uVar9 + (longlong)pvVar3;
    _Size = *(longlong *)local_90[2] - (longlong)*(void **)((longlong)local_90[1] + 0x18);
    memmove(pvVar3,*(void **)((longlong)local_90[1] + 0x18),_Size);
    puVar4[8] = _Size + (longlong)pvVar3;
  }
  uVar9 = *(longlong *)(local_78[1] + 0x10) + 1;
  auVar37 = in_register_000012c4;
  if ((longlong)uVar9 < 0) {
    auVar37 = (undefined1  [12])0x0;
  }
  fVar35 = (float)uVar9;
  uVar9 = *(ulonglong *)(local_78[2] + 0x18);
  pauVar6 = local_78;
  if (*(float *)local_78[1] < fVar35 / (float)uVar9) {
    auVar30._0_4_ = fVar35 / *(float *)local_78[1];
    auVar30._4_12_ = auVar37;
    auVar36 = vroundss_avx(auVar30,auVar30,10);
    uVar27 = (ulonglong)auVar36._0_4_;
    uVar27 = (longlong)(auVar36._0_4_ - auVar42._0_4_) & (longlong)uVar27 >> 0x3f | uVar27;
    if (uVar27 < 9) {
      uVar27 = 8;
    }
    uVar20 = uVar9;
    if (uVar9 < uVar27) {
      uVar20 = uVar9 * 8;
      if (uVar9 * 8 < uVar27) {
        uVar20 = uVar27;
      }
      if (0x1ff < uVar9) {
        uVar20 = uVar27;
      }
    }
    local_b0 = local_b0 + 7;
    if (0x800000000000000 < uVar20) {
                    /* WARNING: Subroutine does not return */
      std::_Xlength_error("invalid hash bucket count");
    }
    lVar13 = LZCOUNT(uVar20 - 1 | 1);
    uVar27 = -lVar13;
    local_80 = *(undefined1 (**) [32])(local_78[1] + 8);
    plVar28 = *(longlong **)(local_78[1] + 0x18);
    uVar9 = 2L << (uVar27 & 0x3f);
    plVar2 = *(longlong **)local_78[2];
    if ((ulonglong)((longlong)plVar2 - (longlong)plVar28 >> 3) < uVar9) {
      if (uVar9 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1400bb790();
      }
      _Var17 = 0x10L << (0x40U - lVar13 & 0x3f);
      if (uVar9 < 0x200) {
        auVar40 = ZEXT1664(auVar40._0_16_);
        auVar42 = ZEXT1664(auVar42._0_16_);
        plVar28 = operator_new(_Var17);
      }
      else {
        if (0x1ffffffffffffffb < uVar9) {
                    /* WARNING: Subroutine does not return */
          FUN_1400bb790();
        }
        auVar40 = ZEXT1664(auVar40._0_16_);
        auVar42 = ZEXT1664(auVar42._0_16_);
        pvVar3 = operator_new(_Var17 + 0x27);
        plVar28 = (longlong *)((longlong)pvVar3 + 0x27U & 0xffffffffffffffe0);
        plVar28[-1] = (longlong)pvVar3;
      }
      pauVar6 = local_78;
      pvVar3 = *(void **)(local_78[1] + 0x18);
      if (*(void **)(local_78[2] + 8) != pvVar3) {
        pvVar7 = pvVar3;
        if ((0xfff < (ulonglong)((longlong)*(void **)(local_78[2] + 8) - (longlong)pvVar3)) &&
           (pvVar7 = *(void **)((longlong)pvVar3 + -8),
           0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)pvVar7)))) goto LAB_1400db3a2;
        free(pvVar7);
      }
      *(longlong **)(pauVar6[1] + 0x18) = plVar28;
      plVar2 = plVar28 + uVar9;
      *(longlong **)pauVar6[2] = plVar2;
      *(longlong **)(pauVar6[2] + 8) = plVar2;
      if (0x77 < _Var17 - 8) {
        uVar20 = (_Var17 - 8 >> 3) + 1;
        uVar9 = uVar20 & 0xfffffffffffffff0;
        auVar34._8_8_ = local_80;
        auVar34._0_8_ = local_80;
        auVar34._16_8_ = local_80;
        auVar34._24_8_ = local_80;
        uVar23 = 0;
        do {
          *(undefined1 (*) [32])(plVar28 + uVar23) = auVar34;
          *(undefined1 (*) [32])(plVar28 + uVar23 + 4) = auVar34;
          *(undefined1 (*) [32])(plVar28 + uVar23 + 8) = auVar34;
          *(undefined1 (*) [32])(plVar28 + uVar23 + 0xc) = auVar34;
          uVar23 = uVar23 + 0x10;
        } while (uVar9 != uVar23);
        if (uVar20 == uVar9) goto LAB_1400daacc;
        plVar28 = plVar28 + uVar9;
      }
      do {
        *plVar28 = (longlong)local_80;
        plVar28 = plVar28 + 1;
      } while (plVar28 != plVar2);
    }
    else if (plVar28 != plVar2) {
      uVar9 = ((longlong)plVar2 - (longlong)plVar28) - 8;
      if (0x77 < uVar9) {
        uVar9 = (uVar9 >> 3) + 1;
        uVar20 = uVar9 & 0xfffffffffffffff0;
        auVar33._8_8_ = local_80;
        auVar33._0_8_ = local_80;
        auVar33._16_8_ = local_80;
        auVar33._24_8_ = local_80;
        uVar23 = 0;
        do {
          *(undefined1 (*) [32])(plVar28 + uVar23) = auVar33;
          *(undefined1 (*) [32])(plVar28 + uVar23 + 4) = auVar33;
          *(undefined1 (*) [32])(plVar28 + uVar23 + 8) = auVar33;
          *(undefined1 (*) [32])(plVar28 + uVar23 + 0xc) = auVar33;
          uVar23 = uVar23 + 0x10;
        } while (uVar20 != uVar23);
        if (uVar9 == uVar20) goto LAB_1400daacc;
        plVar28 = plVar28 + uVar20;
      }
      do {
        *plVar28 = (longlong)local_80;
        plVar28 = plVar28 + 1;
      } while (plVar28 != plVar2);
    }
LAB_1400daacc:
    lVar13 = 1L << (uVar27 & 0x3f);
    uVar9 = lVar13 - 1;
    *(ulonglong *)(pauVar6[2] + 0x10) = uVar9;
    *(longlong *)(pauVar6[2] + 0x18) = lVar13;
    puVar18 = *(undefined8 **)(pauVar6[1] + 8);
    pauVar22 = (undefined1 (*) [32])*puVar18;
    if ((undefined1 (*) [32])*puVar18 != local_80) {
      do {
        while( true ) {
          if (*(ulonglong *)((longlong)pauVar22[1] + 8) < 8) {
            puVar4 = (undefined8 *)((longlong)*pauVar22 + 0x10);
          }
          else {
            puVar4 = *(undefined8 **)((longlong)*pauVar22 + 0x10);
          }
          lVar13 = *(longlong *)pauVar22[1];
          uVar27 = 0xcbf29ce484222325;
          uVar9 = lVar13 * 2;
          if (uVar9 != 0) {
            uVar20 = (ulonglong)((uint)uVar9 & 2);
            if (uVar9 < 4) {
              uVar23 = 0;
              uVar27 = 0xcbf29ce484222325;
            }
            else {
              uVar23 = 0;
              uVar27 = 0xcbf29ce484222325;
              do {
                uVar27 = ((ulonglong)*(byte *)((longlong)puVar4 + uVar23 + 3) ^
                         ((ulonglong)*(byte *)((longlong)puVar4 + uVar23 + 2) ^
                         ((ulonglong)*(byte *)((longlong)puVar4 + uVar23 + 1) ^
                         (*(byte *)((longlong)puVar4 + uVar23) ^ uVar27) * 0x100000001b3) *
                         0x100000001b3) * 0x100000001b3) * 0x100000001b3;
                uVar23 = uVar23 + 4;
              } while ((uVar9 & 0xfffffffffffffffc) != uVar23);
            }
            if (uVar20 != 0) {
              uVar9 = 0;
              do {
                uVar27 = (*(byte *)((longlong)puVar4 + uVar9 + uVar23) ^ uVar27) * 0x100000001b3;
                uVar9 = uVar9 + 1;
              } while (uVar20 != uVar9);
            }
          }
          uVar27 = uVar27 & *(ulonglong *)(pauVar6[2] + 0x10);
          pauVar12 = *(undefined1 (**) [32])*pauVar22;
          lVar19 = *(longlong *)(pauVar6[1] + 0x18);
          lVar24 = uVar27 * 2 + 1;
          pauVar15 = *(undefined1 (**) [32])(lVar19 + uVar27 * 0x10);
          if (pauVar15 == local_80) break;
          pauVar6 = *(undefined1 (**) [32])(lVar19 + lVar24 * 8);
          if (lVar13 == *(longlong *)pauVar6[1]) {
            if (lVar13 != 0) {
              if (*(ulonglong *)((longlong)pauVar6[1] + 8) < 8) {
                puVar8 = (undefined8 *)((longlong)*pauVar6 + 0x10);
              }
              else {
                puVar8 = *(undefined8 **)((longlong)*pauVar6 + 0x10);
              }
              lVar29 = 0;
              do {
                if (*(short *)((longlong)puVar4 + lVar29 * 2) !=
                    *(short *)((longlong)puVar8 + lVar29 * 2)) goto joined_r0x0001400dacca;
                lVar29 = lVar29 + 1;
              } while (lVar13 != lVar29);
            }
            pauVar6 = *(undefined1 (**) [32])*pauVar6;
            if (pauVar6 != pauVar22) {
              puVar4 = *(undefined8 **)((longlong)*pauVar22 + 8);
              *puVar4 = pauVar12;
              puVar8 = *(undefined8 **)((longlong)*pauVar12 + 8);
              *puVar8 = pauVar6;
              puVar11 = *(undefined8 **)((longlong)*pauVar6 + 8);
              *puVar11 = pauVar22;
              *(undefined8 **)((longlong)*pauVar6 + 8) = puVar8;
              *(undefined8 **)((longlong)*pauVar12 + 8) = puVar4;
              *(undefined8 **)((longlong)*pauVar22 + 8) = puVar11;
            }
            *(undefined1 (**) [32])(lVar19 + lVar24 * 8) = pauVar22;
          }
          else {
joined_r0x0001400dacca:
            if (pauVar15 != pauVar6) {
              pauVar6 = *(undefined1 (**) [32])((longlong)*pauVar6 + 8);
              if (lVar13 == *(longlong *)pauVar6[1]) {
                if (lVar13 == 0) {
LAB_1400dad54:
                  lVar13 = *(longlong *)*pauVar6;
                  puVar4 = *(undefined8 **)((longlong)*pauVar22 + 8);
                  *puVar4 = pauVar12;
                  plVar28 = *(longlong **)((longlong)*pauVar12 + 8);
                  *plVar28 = lVar13;
                  puVar8 = *(undefined8 **)(lVar13 + 8);
                  *puVar8 = pauVar22;
                  *(longlong **)(lVar13 + 8) = plVar28;
                  *(undefined8 **)((longlong)*pauVar12 + 8) = puVar4;
                  *(undefined8 **)((longlong)*pauVar22 + 8) = puVar8;
                  goto LAB_1400dab0b;
                }
                if (*(ulonglong *)((longlong)pauVar6[1] + 8) < 8) {
                  puVar8 = (undefined8 *)((longlong)*pauVar6 + 0x10);
                }
                else {
                  puVar8 = *(undefined8 **)((longlong)*pauVar6 + 0x10);
                }
                lVar24 = 0;
                while (*(short *)((longlong)puVar4 + lVar24 * 2) ==
                       *(short *)((longlong)puVar8 + lVar24 * 2)) {
                  lVar24 = lVar24 + 1;
                  if (lVar13 == lVar24) goto LAB_1400dad54;
                }
              }
              goto joined_r0x0001400dacca;
            }
            puVar4 = *(undefined8 **)((longlong)*pauVar22 + 8);
            *puVar4 = pauVar12;
            puVar8 = *(undefined8 **)((longlong)*pauVar12 + 8);
            *puVar8 = pauVar15;
            puVar11 = *(undefined8 **)((longlong)*pauVar15 + 8);
            *puVar11 = pauVar22;
            *(undefined8 **)((longlong)*pauVar15 + 8) = puVar8;
            *(undefined8 **)((longlong)*pauVar12 + 8) = puVar4;
            *(undefined8 **)((longlong)*pauVar22 + 8) = puVar11;
            *(undefined1 (**) [32])(lVar19 + uVar27 * 0x10) = pauVar22;
          }
LAB_1400dab0b:
          pauVar22 = pauVar12;
          pauVar6 = local_78;
          if (pauVar12 == local_80) goto LAB_1400dad7d;
        }
        *(undefined1 (**) [32])(lVar19 + uVar27 * 0x10) = pauVar22;
        *(undefined1 (**) [32])(lVar19 + lVar24 * 8) = pauVar22;
        pauVar22 = pauVar12;
      } while (pauVar12 != local_80);
LAB_1400dad7d:
      puVar18 = *(undefined8 **)(pauVar6[1] + 8);
      uVar9 = *(ulonglong *)(pauVar6[2] + 0x10);
    }
    puVar4 = *(undefined8 **)(*local_170 + 8 + (uVar9 & uVar25) * 0x10);
    if (puVar4 != puVar18) {
      if (7 < (ulonglong)local_88[5]) {
        local_a0 = (undefined1 (*) [32])local_88[2];
      }
      puVar18 = *(undefined8 **)(*local_170 + (uVar9 & uVar25) * 0x10);
      lVar13 = local_88[4];
      lVar19 = puVar4[4];
      do {
        if (lVar13 == lVar19) {
          if (lVar13 == 0) {
LAB_1400dae31:
            puVar18 = (undefined8 *)*puVar4;
            break;
          }
          if ((ulonglong)puVar4[5] < 8) {
            puVar8 = puVar4 + 2;
          }
          else {
            puVar8 = (undefined8 *)puVar4[2];
          }
          lVar19 = 0;
          while (*(short *)((longlong)*local_a0 + lVar19 * 2) ==
                 *(short *)((longlong)puVar8 + lVar19 * 2)) {
            lVar19 = lVar19 + 1;
            if (lVar13 == lVar19) goto LAB_1400dae31;
          }
        }
        if (puVar4 == puVar18) break;
        puVar4 = (undefined8 *)puVar4[1];
        lVar19 = puVar4[4];
      } while( true );
    }
  }
  puVar4 = (undefined8 *)puVar18[1];
  *(longlong *)(pauVar6[1] + 0x10) = *(longlong *)(pauVar6[1] + 0x10) + 1;
  *local_88 = puVar18;
  local_88[1] = puVar4;
  *puVar4 = local_88;
  puVar18[1] = local_88;
  lVar13 = *(longlong *)(pauVar6[1] + 0x18);
  lVar19 = (uVar25 & *(ulonglong *)(pauVar6[2] + 0x10)) * 0x10;
  puVar8 = (undefined8 *)(lVar13 + lVar19 + 8);
  pauVar12 = local_90;
  pauVar22 = local_98;
  if (*(undefined8 **)(lVar13 + lVar19) != *(undefined8 **)(pauVar6[1] + 8))
  goto code_r0x0001400dae73;
  *(undefined8 *)(lVar13 + lVar19) = local_88;
  puVar11 = puVar8;
  goto LAB_1400daea8;
LAB_1400d98b0:
  pauVar15 = pauVar1;
  if (pauVar1 == (undefined1 (*) [32])uVar38) goto LAB_1400d999e;
  goto LAB_1400d98bc;
LAB_1400d999e:
  *(undefined8 *)*local_90 = uVar38;
  ((undefined8 *)uVar38)[1] = local_90;
  auVar36 = auStack_130;
LAB_1400d99b0:
  auStack_130 = auVar36;
  puVar4 = local_120;
  auVar36 = auStack_130;
  auVar30 = auVar40._0_16_;
  local_148 = local_248;
  uVar38 = local_140._0_8_;
  uVar41 = local_140._8_8_;
  local_140._8_8_ = uStack_238;
  local_140._0_8_ = local_240;
  auStack_130 = auStack_230;
  local_240 = (undefined8 *)uVar38;
  uStack_238 = uVar41;
  auStack_230 = auVar36;
  local_120 = local_220;
  local_220 = puVar4;
  auVar39._8_8_ = uStack_110;
  auVar39._0_8_ = local_118;
  local_118 = local_218._0_8_;
  uStack_110 = local_218._8_8_;
  local_218 = auVar39;
  if ((longlong *)local_108._0_8_ != (longlong *)0x0) {
    uVar38 = local_108._8_8_;
    plVar28 = (longlong *)local_108._0_8_;
    if (local_108._0_8_ != local_108._8_8_) {
      do {
        if (7 < (ulonglong)plVar28[3]) {
          pvVar3 = (void *)*plVar28;
          pvVar7 = pvVar3;
          if ((0xfff < plVar28[3] * 2 + 2U) &&
             (pvVar7 = *(void **)((longlong)pvVar3 + -8),
             0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)pvVar7)))) goto LAB_1400db3a2;
          auVar40 = ZEXT1664(auVar40._0_16_);
          free(pvVar7);
        }
        auVar30 = auVar40._0_16_;
        plVar28[2] = 0;
        plVar28[3] = 7;
        *(undefined2 *)plVar28 = 0;
        plVar28 = plVar28 + 5;
      } while (plVar28 != (longlong *)uVar38);
    }
    plVar28 = (longlong *)local_108._0_8_;
    if ((0xfff < (ulonglong)(lStack_f8 - local_108._0_8_)) &&
       (plVar28 = *(longlong **)(local_108._0_8_ + -8),
       0x1f < (ulonglong)(local_108._0_8_ + (-8 - (longlong)plVar28)))) goto LAB_1400db3a2;
    auVar40 = ZEXT1664(auVar30);
    free(plVar28);
  }
  param_2 = local_78;
  local_108 = local_208;
  lStack_f8 = local_1f8;
  local_208 = auVar40._0_16_;
  local_1f8 = 0;
  if (7 < local_d8) {
    pvVar3 = pvStack_f0;
    if ((0xfff < local_d8 * 2 + 2) &&
       (pvVar3 = *(void **)((longlong)pvStack_f0 + -8),
       0x1f < (ulonglong)((longlong)pvStack_f0 + (-8 - (longlong)pvVar3)))) goto LAB_1400db3a2;
    auVar40 = ZEXT1664(local_208);
    free(pvVar3);
  }
  auVar36 = auVar40._0_16_;
  pvStack_f0 = (void *)CONCAT62(uStack_1ee,local_1f0);
  uStack_e8 = uStack_1e8;
  lStack_e0 = lStack_1e0;
  local_d8 = uStack_1d8;
  lStack_1e0 = 0;
  uStack_1d8 = 7;
  local_1f0 = 0;
  if ((void *)local_d0._0_8_ != (void *)0x0) {
    uVar38 = local_d0._8_8_;
    pvVar3 = (void *)local_d0._0_8_;
    if (local_d0._0_8_ != local_d0._8_8_) {
      do {
        auVar40 = ZEXT1664(auVar40._0_16_);
        FUN_1400dc310((longlong)pvVar3);
        auVar36 = auVar40._0_16_;
        pvVar3 = (void *)((longlong)pvVar3 + 0xb0);
      } while (pvVar3 != (void *)uVar38);
    }
    pvVar3 = (void *)local_d0._0_8_;
    if ((0xfff < (ulonglong)(local_c0 - local_d0._0_8_)) &&
       (pvVar3 = *(void **)(local_d0._0_8_ + -8),
       0x1f < (ulonglong)(local_d0._0_8_ + (-8 - (longlong)pvVar3)))) goto LAB_1400db3a2;
    auVar40 = ZEXT1664(auVar36);
    free(pvVar3);
  }
  local_d0 = local_1d0;
  local_c0 = local_1c0;
  local_1d0 = auVar40._0_16_;
  local_1c0 = 0;
  if (7 < uStack_1d8) {
    pvVar7 = (void *)CONCAT62(uStack_1ee,local_1f0);
    pvVar3 = pvVar7;
    if ((0xfff < uStack_1d8 * 2 + 2) &&
       (pvVar3 = *(void **)((longlong)pvVar7 + -8),
       0x1f < (ulonglong)((longlong)pvVar7 + (-8 - (longlong)pvVar3)))) goto LAB_1400db3a2;
    auVar40 = ZEXT1664(local_1d0);
    free(pvVar3);
  }
  auVar36 = auVar40._0_16_;
  lStack_1e0 = 0;
  uStack_1d8 = 7;
  local_1f0 = 0;
  if ((longlong *)local_208._0_8_ != (longlong *)0x0) {
    uVar38 = local_208._8_8_;
    plVar28 = (longlong *)local_208._0_8_;
    if (local_208._0_8_ != local_208._8_8_) {
      do {
        if (7 < (ulonglong)plVar28[3]) {
          pvVar3 = (void *)*plVar28;
          pvVar7 = pvVar3;
          if ((0xfff < plVar28[3] * 2 + 2U) &&
             (pvVar7 = *(void **)((longlong)pvVar3 + -8),
             0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)pvVar7)))) goto LAB_1400db3a2;
          auVar40 = ZEXT1664(auVar40._0_16_);
          free(pvVar7);
        }
        auVar36 = auVar40._0_16_;
        plVar28[2] = 0;
        plVar28[3] = 7;
        *(undefined2 *)plVar28 = 0;
        plVar28 = plVar28 + 5;
      } while (plVar28 != (longlong *)uVar38);
    }
    plVar28 = (longlong *)local_208._0_8_;
    if ((0xfff < (ulonglong)(local_1f8 - local_208._0_8_)) &&
       (plVar28 = *(longlong **)(local_208._0_8_ + -8),
       0x1f < (ulonglong)(local_208._0_8_ + (-8 - (longlong)plVar28)))) goto LAB_1400db3a2;
    auVar40 = ZEXT1664(auVar36);
    free(plVar28);
    local_208 = auVar40._0_16_;
    local_1f8 = 0;
  }
  if ((void *)auStack_230._0_8_ != (void *)0x0) {
    pvVar3 = (void *)auStack_230._0_8_;
    if ((0xfff < (ulonglong)((longlong)local_220 - auStack_230._0_8_)) &&
       (pvVar3 = *(void **)(auStack_230._0_8_ + -8),
       0x1f < (ulonglong)(auStack_230._0_8_ + (-8 - (longlong)pvVar3)))) goto LAB_1400db3a2;
    auVar40 = ZEXT1664(auVar40._0_16_);
    free(pvVar3);
    auStack_230 = auVar40._0_16_;
    local_220 = (undefined8 *)0x0;
  }
  auVar36 = auVar40._0_16_;
  *(undefined8 *)local_240[1] = 0;
  puVar4 = (undefined8 *)*local_240;
  while (puVar4 != (undefined8 *)0x0) {
    auVar36 = auVar40._0_16_;
    puVar8 = (undefined8 *)*puVar4;
    pvVar3 = (void *)puVar4[7];
    if (pvVar3 != (void *)0x0) {
      pvVar7 = pvVar3;
      if ((0xfff < (ulonglong)(puVar4[9] - (longlong)pvVar3)) &&
         (pvVar7 = *(void **)((longlong)pvVar3 + -8),
         0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)pvVar7)))) goto LAB_1400db3a2;
      auVar40 = ZEXT1664(auVar36);
      free(pvVar7);
      auVar36 = auVar40._0_16_;
      *(undefined1 (*) [16])(puVar4 + 7) = auVar36;
      puVar4[9] = 0;
    }
    if (7 < (ulonglong)puVar4[5]) {
      pvVar3 = (void *)puVar4[2];
      pvVar7 = pvVar3;
      if ((0xfff < puVar4[5] * 2 + 2U) &&
         (pvVar7 = *(void **)((longlong)pvVar3 + -8),
         0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)pvVar7)))) goto LAB_1400db3a2;
      auVar40 = ZEXT1664(auVar36);
      free(pvVar7);
      auVar36 = auVar40._0_16_;
    }
    auVar40 = ZEXT1664(auVar36);
    free(puVar4);
    auVar36 = auVar40._0_16_;
    puVar4 = puVar8;
  }
  auVar40 = ZEXT1664(auVar36);
  free(local_240);
  pauVar22 = (undefined1 (*) [32])((longlong)pauVar22[5] + 0x10);
  goto LAB_1400d93af;
code_r0x0001400dae73:
  puVar11 = (undefined8 *)(lVar13 + lVar19);
  if ((*(undefined8 **)(lVar13 + lVar19) == puVar18) ||
     (puVar11 = puVar8, (undefined8 *)*puVar8 == puVar4)) {
LAB_1400daea8:
    *puVar11 = local_88;
  }
  goto LAB_1400da47e;
LAB_1400da0d6:
  *(undefined8 *)*param_2 = local_168._0_8_;
  *(undefined8 *)(*param_2 + 8) = local_168._8_8_;
  *(undefined8 *)(*param_2 + 0x10) = local_168._16_8_;
  *(undefined8 *)(*param_2 + 0x18) = local_168._24_8_;
  *(undefined4 *)param_2[1] = local_148;
  *(undefined1 (*) [16])(param_2[1] + 8) = ZEXT816(0);
  auVar40 = ZEXT1664(ZEXT816(0));
  pvVar7 = operator_new(0x50);
  pauVar22 = local_78;
  local_80 = (undefined1 (*) [32])(local_78[1] + 8);
  *(void **)pvVar7 = pvVar7;
  *(void **)((longlong)pvVar7 + 8) = pvVar7;
  *(void **)(local_78[1] + 8) = pvVar7;
  local_98 = (undefined1 (*) [32])(local_78[1] + 0x18);
  *(undefined1 (*) [16])(local_78[1] + 0x18) = auVar40._0_16_;
  *(undefined8 *)(local_78[2] + 8) = 0;
  puVar4 = operator_new(0x80);
  pvVar3 = *(void **)(pauVar22[1] + 0x18);
  if (*(void **)(pauVar22[2] + 8) != pvVar3) {
    pvVar10 = pvVar3;
    if ((0xfff < (ulonglong)((longlong)*(void **)(pauVar22[2] + 8) - (longlong)pvVar3)) &&
       (pvVar10 = *(void **)((longlong)pvVar3 + -8),
       0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)pvVar10)))) goto LAB_1400db3a2;
    free(pvVar10);
  }
  lVar19 = local_c0;
  lVar13 = lStack_f8;
  uVar25 = uStack_110;
  uVar9 = local_118;
  *puVar4 = pvVar7;
  puVar4[1] = pvVar7;
  puVar4[2] = pvVar7;
  puVar4[3] = pvVar7;
  puVar4[4] = pvVar7;
  puVar4[5] = pvVar7;
  puVar4[6] = pvVar7;
  puVar4[7] = pvVar7;
  puVar4[8] = pvVar7;
  puVar4[9] = pvVar7;
  puVar4[10] = pvVar7;
  puVar4[0xb] = pvVar7;
  puVar4[0xc] = pvVar7;
  puVar4[0xd] = pvVar7;
  puVar4[0xe] = pvVar7;
  puVar4[0xf] = pvVar7;
  uVar38 = *(undefined8 *)(pauVar22[1] + 8);
  *(undefined8 *)(pauVar22[1] + 8) = local_140._0_8_;
  uVar41 = *(undefined8 *)(pauVar22[1] + 0x10);
  *(undefined8 *)(pauVar22[1] + 0x10) = local_140._8_8_;
  local_140._8_8_ = uVar41;
  local_140._0_8_ = uVar38;
  *(undefined8 *)(pauVar22[1] + 0x18) = auStack_130._0_8_;
  *(undefined8 *)pauVar22[2] = auStack_130._8_8_;
  auStack_130._8_8_ = puVar4 + 0x10;
  auStack_130._0_8_ = puVar4;
  *(undefined8 **)(pauVar22[2] + 8) = local_120;
  local_118 = 7;
  uStack_110 = 8;
  *(ulonglong *)(pauVar22[2] + 0x10) = uVar9;
  *(ulonglong *)(pauVar22[2] + 0x18) = uVar25;
  lStack_f8 = 0;
  auVar36._0_12_ = ZEXT812(0);
  auVar36._12_4_ = 0;
  *(undefined8 *)pauVar22[3] = local_108._0_8_;
  *(undefined8 *)(pauVar22[3] + 8) = local_108._8_8_;
  *(longlong *)(pauVar22[3] + 0x10) = lVar13;
  *(void **)(pauVar22[3] + 0x18) = pvStack_f0;
  *(undefined8 *)pauVar22[4] = uStack_e8;
  *(longlong *)(pauVar22[4] + 8) = lStack_e0;
  *(ulonglong *)(pauVar22[4] + 0x10) = local_d8;
  lStack_e0 = 0;
  local_d8 = 7;
  pvStack_f0 = (void *)((ulonglong)pvStack_f0 & 0xffffffffffff0000);
  local_c0 = 0;
  *(undefined8 *)(pauVar22[4] + 0x18) = local_d0._0_8_;
  *(undefined8 *)pauVar22[5] = local_d0._8_8_;
  *(longlong *)(pauVar22[5] + 8) = lVar19;
  local_120 = puVar4 + 0x10;
  local_108 = auVar36;
LAB_1400db2aa:
  local_d0 = auVar36;
  if (7 < local_d8) {
    pvVar3 = pvStack_f0;
    if ((0xfff < local_d8 * 2 + 2) &&
       (pvVar3 = *(void **)((longlong)pvStack_f0 + -8),
       0x1f < (ulonglong)((longlong)pvStack_f0 + (-8 - (longlong)pvVar3)))) goto LAB_1400db3a2;
    free(pvVar3);
  }
  lStack_e0 = 0;
  local_d8 = 7;
  pvStack_f0 = (void *)((ulonglong)pvStack_f0 & 0xffffffffffff0000);
  if ((longlong *)local_108._0_8_ != (longlong *)0x0) {
    uVar38 = local_108._8_8_;
    plVar28 = (longlong *)local_108._0_8_;
    if (local_108._0_8_ != local_108._8_8_) {
      do {
        if (7 < (ulonglong)plVar28[3]) {
          pvVar3 = (void *)*plVar28;
          pvVar7 = pvVar3;
          if ((0xfff < plVar28[3] * 2 + 2U) &&
             (pvVar7 = *(void **)((longlong)pvVar3 + -8),
             0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)pvVar7)))) goto LAB_1400db3a2;
          free(pvVar7);
        }
        plVar28[2] = 0;
        plVar28[3] = 7;
        *(undefined2 *)plVar28 = 0;
        plVar28 = plVar28 + 5;
      } while (plVar28 != (longlong *)uVar38);
    }
    plVar28 = (longlong *)local_108._0_8_;
    if ((0xfff < (ulonglong)(lStack_f8 - local_108._0_8_)) &&
       (plVar28 = *(longlong **)(local_108._0_8_ + -8),
       0x1f < (ulonglong)(local_108._0_8_ + (-8 - (longlong)plVar28)))) goto LAB_1400db3a2;
    free(plVar28);
    local_108 = (undefined1  [16])0x0;
    lStack_f8 = 0;
  }
  if ((void *)auStack_130._0_8_ != (void *)0x0) {
    pvVar3 = (void *)auStack_130._0_8_;
    if ((0xfff < (ulonglong)((longlong)local_120 - auStack_130._0_8_)) &&
       (pvVar3 = *(void **)(auStack_130._0_8_ + -8),
       0x1f < (ulonglong)(auStack_130._0_8_ + (-8 - (longlong)pvVar3)))) goto LAB_1400db3a2;
    free(pvVar3);
    auStack_130 = (undefined1  [16])0x0;
    local_120 = (undefined8 *)0x0;
  }
  **(undefined8 **)(local_140._0_8_ + 8) = 0;
  if (*(longlong **)local_140._0_8_ != (longlong *)0x0) {
    auVar40 = ZEXT1264(ZEXT812(0));
    plVar28 = *(longlong **)local_140._0_8_;
    do {
      auVar36 = auVar40._0_16_;
      plVar2 = (longlong *)*plVar28;
      pvVar3 = (void *)plVar28[7];
      if (pvVar3 != (void *)0x0) {
        pvVar7 = pvVar3;
        if ((0xfff < (ulonglong)(plVar28[9] - (longlong)pvVar3)) &&
           (pvVar7 = *(void **)((longlong)pvVar3 + -8),
           0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)pvVar7)))) goto LAB_1400db3a2;
        auVar40 = ZEXT1664(auVar36);
        free(pvVar7);
        auVar36 = auVar40._0_16_;
        *(undefined1 (*) [16])(plVar28 + 7) = auVar36;
        plVar28[9] = 0;
      }
      if (7 < (ulonglong)plVar28[5]) {
        pvVar3 = (void *)plVar28[2];
        pvVar7 = pvVar3;
        if ((0xfff < plVar28[5] * 2 + 2U) &&
           (pvVar7 = *(void **)((longlong)pvVar3 + -8),
           0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)pvVar7)))) goto LAB_1400db3a2;
        auVar40 = ZEXT1664(auVar36);
        free(pvVar7);
        auVar36 = auVar40._0_16_;
      }
      auVar40 = ZEXT1664(auVar36);
      free(plVar28);
      plVar28 = plVar2;
    } while (plVar2 != (longlong *)0x0);
  }
  free((void *)local_140._0_8_);
  plVar28 = local_178;
  if (7 < (ulonglong)local_178[3]) {
    pvVar3 = (void *)*local_178;
    pvVar7 = pvVar3;
    if ((0xfff < local_178[3] * 2 + 2U) &&
       (pvVar7 = *(void **)((longlong)pvVar3 + -8),
       0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)pvVar7)))) {
LAB_1400db3a2:
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(pvVar7);
  }
  plVar28[2] = 0;
  plVar28[3] = 7;
  *(short *)plVar28 = 0;
  return;
}

