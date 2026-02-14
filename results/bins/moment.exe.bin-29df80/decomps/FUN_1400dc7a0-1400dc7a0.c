
void FUN_1400dc7a0(undefined8 *param_1,ulonglong param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined1 (*pauVar1) [32];
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined8 uVar6;
  void *pvVar7;
  void *pvVar8;
  undefined8 *puVar9;
  undefined1 (*pauVar10) [32];
  void *_Memory;
  undefined8 *puVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  __uint64 _Var14;
  undefined8 *puVar15;
  longlong lVar16;
  size_t _Size;
  ulonglong uVar17;
  longlong *plVar18;
  undefined1 (*pauVar19) [32];
  ulonglong uVar20;
  ulonglong uVar21;
  longlong *plVar22;
  longlong *plVar23;
  longlong lVar24;
  longlong *plVar25;
  ulonglong uVar26;
  longlong lVar27;
  longlong lVar28;
  ulonglong uVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [32];
  undefined1 auVar32 [32];
  undefined1 auVar33 [32];
  float fVar34;
  undefined1 auVar35 [12];
  undefined1 in_register_000012c4 [12];
  undefined1 auVar36 [64];
  undefined1 auVar37 [16];
  undefined1 auVar38 [64];
  undefined8 *local_98;
  
  if (param_2 != 0) {
    if (0x1745d1745d1745d < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_1400bf760();
    }
    _Var14 = param_2 * 0xb0;
    if (param_2 < 0x18) {
      pauVar10 = operator_new(_Var14);
    }
    else {
      pvVar7 = operator_new(_Var14 + 0x27);
      pauVar10 = (undefined1 (*) [32])((longlong)pvVar7 + 0x27U & 0xffffffffffffffe0);
      *(void **)(pauVar10[-1] + 0x18) = pvVar7;
    }
    *param_1 = pauVar10;
    param_1[1] = pauVar10;
    param_1[2] = _Var14 + (longlong)pauVar10;
    pauVar1 = (undefined1 (*) [32])*param_4;
    auVar36 = ZEXT1264(ZEXT812(0));
    auVar38 = ZEXT464(0x5f000000);
    for (pauVar19 = (undefined1 (*) [32])*param_3; pauVar19 != pauVar1;
        pauVar19 = (undefined1 (*) [32])(pauVar19[5] + 0x10)) {
      *pauVar10 = *pauVar19;
      *(undefined4 *)pauVar10[1] = *(undefined4 *)pauVar19[1];
      *(undefined1 (*) [16])(pauVar10[1] + 8) = auVar36._0_16_;
      auVar36 = ZEXT1664(auVar36._0_16_);
      auVar38 = ZEXT1664(auVar38._0_16_);
      pvVar7 = operator_new(0x50);
      *(void **)pvVar7 = pvVar7;
      *(void **)((longlong)pvVar7 + 8) = pvVar7;
      *(void **)(pauVar10[1] + 8) = pvVar7;
      *(undefined1 (*) [16])(pauVar10[1] + 0x18) = auVar36._0_16_;
      *(undefined8 *)(pauVar10[2] + 8) = 0;
      *(undefined8 *)(pauVar10[2] + 0x10) = *(undefined8 *)(pauVar19[2] + 0x10);
      *(undefined8 *)(pauVar10[2] + 0x18) = *(undefined8 *)(pauVar19[2] + 0x18);
      lVar27 = *(longlong *)pauVar19[2];
      lVar28 = *(longlong *)(pauVar19[1] + 0x18);
      uVar20 = lVar27 - lVar28;
      if (uVar20 != 0) {
        if ((longlong)uVar20 < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1400bb790();
        }
        if (uVar20 < 0xff9) {
          puVar15 = operator_new(uVar20);
        }
        else {
          pvVar8 = operator_new(uVar20 + 0x27);
          puVar15 = (undefined8 *)((longlong)pvVar8 + 0x27U & 0xffffffffffffffe0);
          puVar15[-1] = pvVar8;
        }
        pvVar8 = *(void **)(pauVar10[1] + 0x18);
        if (*(void **)(pauVar10[2] + 8) != pvVar8) {
          _Memory = pvVar8;
          if ((0xfff < (ulonglong)((longlong)*(void **)(pauVar10[2] + 8) - (longlong)pvVar8)) &&
             (_Memory = *(void **)((longlong)pvVar8 + -8),
             0x1f < (ulonglong)((longlong)pvVar8 + (-8 - (longlong)_Memory)))) {
LAB_1400dd7e4:
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
          free(_Memory);
        }
        *(undefined8 **)(pauVar10[1] + 0x18) = puVar15;
        puVar9 = puVar15 + (lVar27 - lVar28 >> 3);
        *(undefined8 **)pauVar10[2] = puVar9;
        *(undefined8 **)(pauVar10[2] + 8) = puVar9;
        if (0x77 < uVar20 - 8) {
          uVar21 = (uVar20 - 8 >> 3) + 1;
          uVar20 = uVar21 & 0xfffffffffffffff0;
          auVar31._8_8_ = pvVar7;
          auVar31._0_8_ = pvVar7;
          auVar31._16_8_ = pvVar7;
          auVar31._24_8_ = pvVar7;
          uVar26 = 0;
          do {
            *(undefined1 (*) [32])(puVar15 + uVar26) = auVar31;
            *(undefined1 (*) [32])(puVar15 + uVar26 + 4) = auVar31;
            *(undefined1 (*) [32])(puVar15 + uVar26 + 8) = auVar31;
            *(undefined1 (*) [32])(puVar15 + uVar26 + 0xc) = auVar31;
            uVar26 = uVar26 + 0x10;
          } while (uVar20 != uVar26);
          if (uVar21 == uVar20) goto LAB_1400dc9ec;
          puVar15 = puVar15 + uVar20;
        }
        do {
          *puVar15 = pvVar7;
          puVar15 = puVar15 + 1;
        } while (puVar15 != puVar9);
      }
LAB_1400dc9ec:
      plVar2 = *(longlong **)(pauVar19[1] + 8);
      plVar22 = plVar2;
LAB_1400dca14:
      plVar22 = (longlong *)*plVar22;
      auVar30 = auVar36._0_16_;
      auVar37 = auVar38._0_16_;
      if (plVar22 != plVar2) {
        puVar15 = plVar22 + 2;
        puVar9 = puVar15;
        if (7 < (ulonglong)plVar22[5]) {
          puVar9 = (undefined8 *)plVar22[2];
        }
        lVar27 = plVar22[4];
        uVar21 = 0xcbf29ce484222325;
        uVar20 = lVar27 * 2;
        if (uVar20 != 0) {
          uVar26 = (ulonglong)((uint)uVar20 & 2);
          if (uVar20 < 4) {
            uVar17 = 0;
            uVar21 = 0xcbf29ce484222325;
          }
          else {
            uVar17 = 0;
            uVar21 = 0xcbf29ce484222325;
            do {
              uVar21 = ((ulonglong)*(byte *)((longlong)puVar9 + uVar17 + 3) ^
                       ((ulonglong)*(byte *)((longlong)puVar9 + uVar17 + 2) ^
                       ((ulonglong)*(byte *)((longlong)puVar9 + uVar17 + 1) ^
                       (*(byte *)((longlong)puVar9 + uVar17) ^ uVar21) * 0x100000001b3) *
                       0x100000001b3) * 0x100000001b3) * 0x100000001b3;
              uVar17 = uVar17 + 4;
            } while ((uVar20 & 0xfffffffffffffffc) != uVar17);
          }
          if (uVar26 != 0) {
            uVar20 = 0;
            do {
              uVar21 = (*(byte *)((longlong)puVar9 + uVar20 + uVar17) ^ uVar21) * 0x100000001b3;
              uVar20 = uVar20 + 1;
            } while (uVar26 != uVar20);
          }
        }
        uVar20 = *(ulonglong *)(pauVar10[2] + 0x10) & uVar21;
        plVar3 = *(longlong **)(*(longlong *)(pauVar10[1] + 0x18) + 8 + uVar20 * 0x10);
        plVar23 = plVar3;
        if (plVar3 != *(longlong **)(pauVar10[1] + 8)) {
          plVar23 = *(longlong **)(*(longlong *)(pauVar10[1] + 0x18) + uVar20 * 0x10);
          lVar28 = plVar3[4];
          while( true ) {
            if (lVar27 == lVar28) {
              plVar12 = plVar3 + 2;
              if (lVar27 == 0) goto LAB_1400dca14;
              if (7 < (ulonglong)plVar3[5]) {
                plVar12 = (longlong *)plVar3[2];
              }
              lVar28 = 0;
              while (*(short *)((longlong)puVar9 + lVar28 * 2) ==
                     *(short *)((longlong)plVar12 + lVar28 * 2)) {
                lVar28 = lVar28 + 1;
                if (lVar27 == lVar28) goto LAB_1400dca14;
              }
            }
            if (plVar3 == plVar23) break;
            plVar3 = (longlong *)plVar3[1];
            lVar28 = plVar3[4];
          }
        }
        if (*(longlong *)(pauVar10[1] + 0x10) == 0x333333333333333) {
                    /* WARNING: Subroutine does not return */
          std::_Xlength_error("unordered_map/set too long");
        }
        auVar36 = ZEXT1664(auVar30);
        auVar38 = ZEXT1664(auVar37);
        puVar9 = operator_new(0x50);
        puVar9[2] = 0;
        puVar9[3] = 0;
        puVar9[4] = 0;
        puVar9[5] = 0;
        if (7 < (ulonglong)plVar22[5]) {
          puVar15 = (undefined8 *)plVar22[2];
        }
        uVar20 = plVar22[4];
        if (0x7ffffffffffffffe < uVar20) {
                    /* WARNING: Subroutine does not return */
          FUN_140086cb0();
        }
        local_98 = puVar9 + 2;
        if (uVar20 < 8) {
          puVar9[4] = uVar20;
          puVar9[5] = 7;
          uVar6 = puVar15[1];
          *local_98 = *puVar15;
          puVar9[3] = uVar6;
        }
        else {
          puVar9[5] = 7;
          uVar26 = uVar20 | 7;
          if (0x7ffffffffffffffe < uVar26) {
LAB_1400dd7ad:
                    /* WARNING: Subroutine does not return */
            FUN_1400bb790();
          }
          if (uVar26 < 0xb) {
            uVar26 = 10;
          }
          if (uVar26 < 0x7ff) {
            auVar36 = ZEXT1664(auVar36._0_16_);
            auVar38 = ZEXT1664(auVar38._0_16_);
            pvVar7 = operator_new(uVar26 * 2 + 2);
          }
          else {
            if (0x7fffffffffffffeb < uVar26) goto LAB_1400dd7ad;
            auVar36 = ZEXT1664(auVar36._0_16_);
            auVar38 = ZEXT1664(auVar38._0_16_);
            pvVar8 = operator_new(uVar26 * 2 + 0x29);
            pvVar7 = (void *)((longlong)pvVar8 + 0x27U & 0xffffffffffffffe0);
            *(void **)((longlong)pvVar7 - 8) = pvVar8;
          }
          puVar9[2] = pvVar7;
          puVar9[4] = uVar20;
          puVar9[5] = uVar26;
          memcpy(pvVar7,puVar15,uVar20 * 2 + 2);
        }
        *(undefined4 *)(puVar9 + 6) = *(undefined4 *)(plVar22 + 6);
        auVar30 = auVar36._0_16_;
        *(undefined1 (*) [16])(puVar9 + 7) = auVar30;
        puVar9[9] = 0;
        uVar20 = plVar22[8] - plVar22[7];
        if (uVar20 != 0) {
          if ((longlong)uVar20 < 0) {
                    /* WARNING: Subroutine does not return */
            FUN_1400bf760();
          }
          if (uVar20 < 0x1000) {
            auVar36 = ZEXT1664(auVar30);
            auVar38 = ZEXT1664(auVar38._0_16_);
            pvVar7 = operator_new(uVar20);
          }
          else {
            auVar36 = ZEXT1664(auVar30);
            auVar38 = ZEXT1664(auVar38._0_16_);
            pvVar8 = operator_new(uVar20 + 0x27);
            pvVar7 = (void *)((longlong)pvVar8 + 0x27U & 0xffffffffffffffe0);
            *(void **)((longlong)pvVar7 - 8) = pvVar8;
          }
          puVar9[7] = pvVar7;
          puVar9[8] = pvVar7;
          puVar9[9] = uVar20 + (longlong)pvVar7;
          _Size = plVar22[8] - plVar22[7];
          memmove(pvVar7,(void *)plVar22[7],_Size);
          puVar9[8] = _Size + (longlong)pvVar7;
        }
        uVar20 = *(longlong *)(pauVar10[1] + 0x10) + 1;
        auVar35 = in_register_000012c4;
        if ((longlong)uVar20 < 0) {
          auVar35 = (undefined1  [12])0x0;
        }
        fVar34 = (float)uVar20;
        uVar20 = *(ulonglong *)(pauVar10[2] + 0x18);
        if (*(float *)pauVar10[1] < fVar34 / (float)uVar20) {
          auVar30._0_4_ = fVar34 / *(float *)pauVar10[1];
          auVar30._4_12_ = auVar35;
          auVar30 = vroundss_avx(auVar30,auVar30,10);
          uVar26 = (ulonglong)auVar30._0_4_;
          uVar26 = (longlong)(auVar30._0_4_ - auVar38._0_4_) & (longlong)uVar26 >> 0x3f | uVar26;
          if (uVar26 < 9) {
            uVar26 = 8;
          }
          uVar17 = uVar20;
          if (uVar20 < uVar26) {
            uVar17 = uVar20 * 8;
            if (uVar20 * 8 < uVar26) {
              uVar17 = uVar26;
            }
            if (0x1ff < uVar20) {
              uVar17 = uVar26;
            }
          }
          if (0x800000000000000 < uVar17) {
                    /* WARNING: Subroutine does not return */
            std::_Xlength_error("invalid hash bucket count");
          }
          lVar27 = LZCOUNT(uVar17 - 1 | 1);
          uVar20 = -lVar27;
          plVar3 = *(longlong **)(pauVar10[1] + 8);
          plVar23 = *(longlong **)(pauVar10[1] + 0x18);
          uVar26 = 2L << (uVar20 & 0x3f);
          plVar12 = *(longlong **)pauVar10[2];
          if ((ulonglong)((longlong)plVar12 - (longlong)plVar23 >> 3) < uVar26) {
            if (uVar26 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
              FUN_1400bb790();
            }
            _Var14 = 0x10L << (0x40U - lVar27 & 0x3f);
            if (uVar26 < 0x200) {
              auVar36 = ZEXT1664(auVar36._0_16_);
              auVar38 = ZEXT1664(auVar38._0_16_);
              plVar23 = operator_new(_Var14);
            }
            else {
              if (0x1ffffffffffffffb < uVar26) {
                    /* WARNING: Subroutine does not return */
                FUN_1400bb790();
              }
              auVar36 = ZEXT1664(auVar36._0_16_);
              auVar38 = ZEXT1664(auVar38._0_16_);
              pvVar7 = operator_new(_Var14 + 0x27);
              plVar23 = (longlong *)((longlong)pvVar7 + 0x27U & 0xffffffffffffffe0);
              plVar23[-1] = (longlong)pvVar7;
            }
            pvVar7 = *(void **)(pauVar10[1] + 0x18);
            if (*(void **)(pauVar10[2] + 8) != pvVar7) {
              pvVar8 = pvVar7;
              if ((0xfff < (ulonglong)((longlong)*(void **)(pauVar10[2] + 8) - (longlong)pvVar7)) &&
                 (pvVar8 = *(void **)((longlong)pvVar7 + -8),
                 0x1f < (ulonglong)((longlong)pvVar7 + (-8 - (longlong)pvVar8))))
              goto LAB_1400dd7e4;
              free(pvVar8);
            }
            *(longlong **)(pauVar10[1] + 0x18) = plVar23;
            plVar12 = plVar23 + uVar26;
            *(longlong **)pauVar10[2] = plVar12;
            *(longlong **)(pauVar10[2] + 8) = plVar12;
            if (0x77 < _Var14 - 8) {
              uVar17 = (_Var14 - 8 >> 3) + 1;
              uVar26 = uVar17 & 0xfffffffffffffff0;
              auVar33._8_8_ = plVar3;
              auVar33._0_8_ = plVar3;
              auVar33._16_8_ = plVar3;
              auVar33._24_8_ = plVar3;
              uVar29 = 0;
              do {
                *(undefined1 (*) [32])(plVar23 + uVar29) = auVar33;
                *(undefined1 (*) [32])(plVar23 + uVar29 + 4) = auVar33;
                *(undefined1 (*) [32])(plVar23 + uVar29 + 8) = auVar33;
                *(undefined1 (*) [32])(plVar23 + uVar29 + 0xc) = auVar33;
                uVar29 = uVar29 + 0x10;
              } while (uVar26 != uVar29);
              if (uVar17 == uVar26) goto LAB_1400dd02c;
              plVar23 = plVar23 + uVar26;
            }
            do {
              *plVar23 = (longlong)plVar3;
              plVar23 = plVar23 + 1;
            } while (plVar23 != plVar12);
          }
          else if (plVar23 != plVar12) {
            uVar26 = ((longlong)plVar12 - (longlong)plVar23) - 8;
            if (0x77 < uVar26) {
              uVar26 = (uVar26 >> 3) + 1;
              uVar17 = uVar26 & 0xfffffffffffffff0;
              auVar32._8_8_ = plVar3;
              auVar32._0_8_ = plVar3;
              auVar32._16_8_ = plVar3;
              auVar32._24_8_ = plVar3;
              uVar29 = 0;
              do {
                *(undefined1 (*) [32])(plVar23 + uVar29) = auVar32;
                *(undefined1 (*) [32])(plVar23 + uVar29 + 4) = auVar32;
                *(undefined1 (*) [32])(plVar23 + uVar29 + 8) = auVar32;
                *(undefined1 (*) [32])(plVar23 + uVar29 + 0xc) = auVar32;
                uVar29 = uVar29 + 0x10;
              } while (uVar17 != uVar29);
              if (uVar26 == uVar17) goto LAB_1400dd02c;
              plVar23 = plVar23 + uVar17;
            }
            do {
              *plVar23 = (longlong)plVar3;
              plVar23 = plVar23 + 1;
            } while (plVar23 != plVar12);
          }
LAB_1400dd02c:
          lVar27 = 1L << (uVar20 & 0x3f);
          uVar20 = lVar27 - 1;
          *(ulonglong *)(pauVar10[2] + 0x10) = uVar20;
          *(longlong *)(pauVar10[2] + 0x18) = lVar27;
          plVar23 = *(longlong **)(pauVar10[1] + 8);
          plVar12 = (longlong *)*plVar23;
          if (plVar12 != plVar3) {
            do {
              if ((ulonglong)plVar12[5] < 8) {
                plVar23 = plVar12 + 2;
              }
              else {
                plVar23 = (longlong *)plVar12[2];
              }
              lVar27 = plVar12[4];
              uVar26 = 0xcbf29ce484222325;
              uVar20 = lVar27 * 2;
              if (uVar20 != 0) {
                uVar17 = (ulonglong)((uint)uVar20 & 2);
                if (uVar20 < 4) {
                  uVar29 = 0;
                  uVar26 = 0xcbf29ce484222325;
                }
                else {
                  uVar29 = 0;
                  uVar26 = 0xcbf29ce484222325;
                  do {
                    uVar26 = ((ulonglong)*(byte *)((longlong)plVar23 + uVar29 + 3) ^
                             ((ulonglong)*(byte *)((longlong)plVar23 + uVar29 + 2) ^
                             ((ulonglong)*(byte *)((longlong)plVar23 + uVar29 + 1) ^
                             (*(byte *)((longlong)plVar23 + uVar29) ^ uVar26) * 0x100000001b3) *
                             0x100000001b3) * 0x100000001b3) * 0x100000001b3;
                    uVar29 = uVar29 + 4;
                  } while ((uVar20 & 0xfffffffffffffffc) != uVar29);
                }
                if (uVar17 != 0) {
                  uVar20 = 0;
                  do {
                    uVar26 = (*(byte *)((longlong)plVar23 + uVar20 + uVar29) ^ uVar26) *
                             0x100000001b3;
                    uVar20 = uVar20 + 1;
                  } while (uVar17 != uVar20);
                }
              }
              uVar26 = uVar26 & *(ulonglong *)(pauVar10[2] + 0x10);
              plVar4 = (longlong *)*plVar12;
              lVar28 = *(longlong *)(pauVar10[1] + 0x18);
              lVar24 = uVar26 * 2 + 1;
              plVar5 = *(longlong **)(lVar28 + uVar26 * 0x10);
              if (plVar5 == plVar3) {
                *(longlong **)(lVar28 + uVar26 * 0x10) = plVar12;
                *(longlong **)(lVar28 + lVar24 * 8) = plVar12;
              }
              else {
                plVar18 = *(longlong **)(lVar28 + lVar24 * 8);
                if (lVar27 == plVar18[4]) {
                  if (lVar27 != 0) {
                    if ((ulonglong)plVar18[5] < 8) {
                      plVar25 = plVar18 + 2;
                    }
                    else {
                      plVar25 = (longlong *)plVar18[2];
                    }
                    lVar16 = 0;
                    do {
                      if (*(short *)((longlong)plVar23 + lVar16 * 2) !=
                          *(short *)((longlong)plVar25 + lVar16 * 2)) goto LAB_1400dd200;
                      lVar16 = lVar16 + 1;
                    } while (lVar27 != lVar16);
                  }
                  plVar18 = (longlong *)*plVar18;
                  if (plVar18 != plVar12) {
                    plVar23 = (longlong *)plVar12[1];
                    *plVar23 = (longlong)plVar4;
                    puVar15 = (undefined8 *)plVar4[1];
                    *puVar15 = plVar18;
                    puVar13 = (undefined8 *)plVar18[1];
                    *puVar13 = plVar12;
                    plVar18[1] = (longlong)puVar15;
                    plVar4[1] = (longlong)plVar23;
                    plVar12[1] = (longlong)puVar13;
                  }
                  *(longlong **)(lVar28 + lVar24 * 8) = plVar12;
                }
                else {
LAB_1400dd200:
                  if (plVar5 != plVar18) {
                    plVar18 = (longlong *)plVar18[1];
                    if (lVar27 == plVar18[4]) {
                      if (lVar27 == 0) {
LAB_1400dd254:
                        lVar27 = *plVar18;
                        plVar23 = (longlong *)plVar12[1];
                        *plVar23 = (longlong)plVar4;
                        plVar5 = (longlong *)plVar4[1];
                        *plVar5 = lVar27;
                        puVar15 = *(undefined8 **)(lVar27 + 8);
                        *puVar15 = plVar12;
                        *(longlong **)(lVar27 + 8) = plVar5;
                        plVar4[1] = (longlong)plVar23;
                        plVar12[1] = (longlong)puVar15;
                        goto LAB_1400dd068;
                      }
                      if ((ulonglong)plVar18[5] < 8) {
                        plVar25 = plVar18 + 2;
                      }
                      else {
                        plVar25 = (longlong *)plVar18[2];
                      }
                      lVar24 = 0;
                      while (*(short *)((longlong)plVar23 + lVar24 * 2) ==
                             *(short *)((longlong)plVar25 + lVar24 * 2)) {
                        lVar24 = lVar24 + 1;
                        if (lVar27 == lVar24) goto LAB_1400dd254;
                      }
                    }
                    goto LAB_1400dd200;
                  }
                  plVar23 = (longlong *)plVar12[1];
                  *plVar23 = (longlong)plVar4;
                  puVar15 = (undefined8 *)plVar4[1];
                  *puVar15 = plVar5;
                  puVar13 = (undefined8 *)plVar5[1];
                  *puVar13 = plVar12;
                  plVar5[1] = (longlong)puVar15;
                  plVar4[1] = (longlong)plVar23;
                  plVar12[1] = (longlong)puVar13;
                  *(longlong **)(lVar28 + uVar26 * 0x10) = plVar12;
                }
              }
LAB_1400dd068:
              plVar12 = plVar4;
            } while (plVar4 != plVar3);
            plVar23 = *(longlong **)(pauVar10[1] + 8);
            uVar20 = *(ulonglong *)(pauVar10[2] + 0x10);
          }
          plVar3 = *(longlong **)(*(longlong *)(pauVar10[1] + 0x18) + 8 + (uVar20 & uVar21) * 0x10);
          if (plVar3 != plVar23) {
            if (7 < (ulonglong)puVar9[5]) {
              local_98 = (undefined8 *)puVar9[2];
            }
            plVar23 = *(longlong **)(*(longlong *)(pauVar10[1] + 0x18) + (uVar20 & uVar21) * 0x10);
            lVar27 = puVar9[4];
            lVar28 = plVar3[4];
            do {
              if (lVar27 == lVar28) {
                if (lVar27 == 0) {
LAB_1400dd351:
                  plVar23 = (longlong *)*plVar3;
                  break;
                }
                if ((ulonglong)plVar3[5] < 8) {
                  plVar12 = plVar3 + 2;
                }
                else {
                  plVar12 = (longlong *)plVar3[2];
                }
                lVar28 = 0;
                while (*(short *)((longlong)local_98 + lVar28 * 2) ==
                       *(short *)((longlong)plVar12 + lVar28 * 2)) {
                  lVar28 = lVar28 + 1;
                  if (lVar27 == lVar28) goto LAB_1400dd351;
                }
              }
              if (plVar3 == plVar23) break;
              plVar3 = (longlong *)plVar3[1];
              lVar28 = plVar3[4];
            } while( true );
          }
        }
        puVar15 = (undefined8 *)plVar23[1];
        *(longlong *)(pauVar10[1] + 0x10) = *(longlong *)(pauVar10[1] + 0x10) + 1;
        *puVar9 = plVar23;
        puVar9[1] = puVar15;
        *puVar15 = puVar9;
        plVar23[1] = (longlong)puVar9;
        lVar27 = *(longlong *)(pauVar10[1] + 0x18);
        lVar28 = (uVar21 & *(ulonglong *)(pauVar10[2] + 0x10)) * 0x10;
        puVar13 = (undefined8 *)(lVar27 + lVar28 + 8);
        if (*(longlong **)(lVar27 + lVar28) == *(longlong **)(pauVar10[1] + 8)) {
          *(undefined8 *)(lVar27 + lVar28) = puVar9;
          puVar11 = puVar13;
        }
        else {
          puVar11 = (undefined8 *)(lVar27 + lVar28);
          if ((*(longlong **)(lVar27 + lVar28) != plVar23) &&
             (puVar11 = puVar13, (undefined8 *)*puVar13 != puVar15)) goto LAB_1400dca14;
        }
        *puVar11 = puVar9;
        goto LAB_1400dca14;
      }
      *(undefined1 (*) [16])pauVar10[3] = auVar30;
      *(undefined8 *)(pauVar10[3] + 0x10) = 0;
      _Var14 = *(longlong *)(pauVar19[3] + 8) - *(longlong *)pauVar19[3];
      if (_Var14 != 0) {
        lVar27 = *(longlong *)(pauVar19[3] + 8) - *(longlong *)pauVar19[3] >> 3;
        uVar20 = lVar27 * -0x3333333333333333;
        if (0x666666666666666 < uVar20) {
                    /* WARNING: Subroutine does not return */
          FUN_1400bf760();
        }
        if (uVar20 < 0x67) {
          auVar36 = ZEXT1664(auVar30);
          auVar38 = ZEXT1664(auVar37);
          puVar15 = operator_new(_Var14);
        }
        else {
          auVar36 = ZEXT1664(auVar30);
          auVar38 = ZEXT1664(auVar37);
          pvVar7 = operator_new(_Var14 + 0x27);
          puVar15 = (undefined8 *)((longlong)pvVar7 + 0x27U & 0xffffffffffffffe0);
          puVar15[-1] = pvVar7;
        }
        *(undefined8 **)pauVar10[3] = puVar15;
        *(undefined8 **)(pauVar10[3] + 8) = puVar15;
        *(undefined8 **)(pauVar10[3] + 0x10) = puVar15 + lVar27;
        puVar9 = *(undefined8 **)pauVar19[3];
        puVar13 = *(undefined8 **)(pauVar19[3] + 8);
        while( true ) {
          auVar37 = auVar38._0_16_;
          auVar30 = auVar36._0_16_;
          if (puVar9 == puVar13) break;
          *puVar15 = 0;
          puVar15[1] = 0;
          puVar15[2] = 0;
          puVar15[3] = 0;
          puVar11 = puVar9;
          if (7 < (ulonglong)puVar9[3]) {
            puVar11 = (undefined8 *)*puVar9;
          }
          uVar20 = puVar9[2];
          if (0x7ffffffffffffffe < uVar20) {
                    /* WARNING: Subroutine does not return */
            FUN_140086cb0();
          }
          if (uVar20 < 8) {
            puVar15[2] = uVar20;
            puVar15[3] = 7;
            uVar6 = puVar11[1];
            *puVar15 = *puVar11;
            puVar15[1] = uVar6;
          }
          else {
            puVar15[3] = 7;
            uVar21 = uVar20 | 7;
            if (0x7ffffffffffffffe < uVar21) {
LAB_1400dd78a:
                    /* WARNING: Subroutine does not return */
              FUN_1400bb790();
            }
            if (uVar21 < 0xb) {
              uVar21 = 10;
            }
            if (uVar21 < 0x7ff) {
              auVar36 = ZEXT1664(auVar30);
              auVar38 = ZEXT1664(auVar37);
              pvVar7 = operator_new(uVar21 * 2 + 2);
            }
            else {
              if (0x7fffffffffffffeb < uVar21) goto LAB_1400dd78a;
              auVar36 = ZEXT1664(auVar30);
              auVar38 = ZEXT1664(auVar37);
              pvVar8 = operator_new(uVar21 * 2 + 0x29);
              pvVar7 = (void *)((longlong)pvVar8 + 0x27U & 0xffffffffffffffe0);
              *(void **)((longlong)pvVar7 - 8) = pvVar8;
            }
            *puVar15 = pvVar7;
            puVar15[2] = uVar20;
            puVar15[3] = uVar21;
            memcpy(pvVar7,puVar11,uVar20 * 2 + 2);
          }
          puVar15[4] = puVar9[4];
          puVar15 = puVar15 + 5;
          puVar9 = puVar9 + 5;
        }
        *(undefined8 **)(pauVar10[3] + 8) = puVar15;
      }
      *(undefined8 *)(pauVar10[3] + 0x18) = 0;
      *(undefined8 *)pauVar10[4] = 0;
      *(undefined8 *)(pauVar10[4] + 8) = 0;
      *(undefined8 *)(pauVar10[4] + 0x10) = 0;
      uVar20 = *(ulonglong *)(pauVar19[4] + 8);
      if (*(ulonglong *)(pauVar19[4] + 0x10) < 8) {
        puVar15 = (undefined8 *)(pauVar19[3] + 0x18);
      }
      else {
        puVar15 = *(undefined8 **)(pauVar19[3] + 0x18);
      }
      if (0x7ffffffffffffffe < uVar20) {
                    /* WARNING: Subroutine does not return */
        FUN_140086cb0();
      }
      if (uVar20 < 8) {
        *(ulonglong *)(pauVar10[4] + 8) = uVar20;
        *(undefined8 *)(pauVar10[4] + 0x10) = 7;
        uVar6 = puVar15[1];
        *(undefined8 *)(pauVar10[3] + 0x18) = *puVar15;
        *(undefined8 *)pauVar10[4] = uVar6;
      }
      else {
        *(undefined8 *)(pauVar10[4] + 0x10) = 7;
        uVar21 = uVar20 | 7;
        if (0x7ffffffffffffffe < uVar21) {
LAB_1400dd7f2:
                    /* WARNING: Subroutine does not return */
          FUN_1400bb790();
        }
        if (uVar21 < 0xb) {
          uVar21 = 10;
        }
        if (uVar21 < 0x7ff) {
          auVar36 = ZEXT1664(auVar30);
          auVar38 = ZEXT1664(auVar37);
          pvVar7 = operator_new(uVar21 * 2 + 2);
        }
        else {
          if (0x7fffffffffffffeb < uVar21) goto LAB_1400dd7f2;
          auVar36 = ZEXT1664(auVar30);
          auVar38 = ZEXT1664(auVar37);
          pvVar8 = operator_new(uVar21 * 2 + 0x29);
          pvVar7 = (void *)((longlong)pvVar8 + 0x27U & 0xffffffffffffffe0);
          *(void **)((longlong)pvVar7 - 8) = pvVar8;
        }
        *(void **)(pauVar10[3] + 0x18) = pvVar7;
        *(ulonglong *)(pauVar10[4] + 8) = uVar20;
        *(ulonglong *)(pauVar10[4] + 0x10) = uVar21;
        memcpy(pvVar7,puVar15,uVar20 * 2 + 2);
        auVar37 = auVar38._0_16_;
        auVar30 = auVar36._0_16_;
      }
      *(undefined1 (*) [16])(pauVar10[4] + 0x18) = auVar30;
      *(undefined8 *)(pauVar10[5] + 8) = 0;
      auVar36 = ZEXT1664(auVar30);
      auVar38 = ZEXT1664(auVar37);
      FUN_1400dc7a0((undefined8 *)(pauVar10[4] + 0x18),
                    (*(longlong *)pauVar19[5] - *(longlong *)(pauVar19[4] + 0x18) >> 4) *
                    0x2e8ba2e8ba2e8ba3,(undefined8 *)(pauVar19[4] + 0x18),
                    (undefined8 *)(pauVar19 + 5));
      pauVar10 = (undefined1 (*) [32])(pauVar10[5] + 0x10);
    }
    param_1[1] = pauVar10;
  }
  return;
}

