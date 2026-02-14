
void Unwind_1400d7c40(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  void *pvVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  void *pvVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong *_Memory;
  ulonglong uVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong lVar18;
  undefined1 auVar17 [64];
  
  if (*(ulonglong *)(param_2 + 0x21c0) == 0) {
    return;
  }
  plVar12 = *(longlong **)(param_2 + 0x21b8);
  if (*(ulonglong *)(param_2 + 0x21e8) >> 3 <= *(ulonglong *)(param_2 + 0x21c0)) {
    *(undefined8 *)plVar12[1] = 0;
    if ((longlong *)*plVar12 != (longlong *)0x0) {
      lVar16 = 0;
      lVar6 = 0;
      plVar12 = (longlong *)*plVar12;
      do {
        plVar8 = (longlong *)*plVar12;
        pvVar4 = (void *)plVar12[7];
        if (pvVar4 != (void *)0x0) {
          pvVar9 = pvVar4;
          if ((0xfff < (ulonglong)(plVar12[9] - (longlong)pvVar4)) &&
             (pvVar9 = *(void **)((longlong)pvVar4 + -8),
             0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar9)))) goto LAB_1400d8297;
          free(pvVar9);
          plVar12[7] = lVar16;
          plVar12[8] = lVar6;
          plVar12[9] = 0;
        }
        if (7 < (ulonglong)plVar12[5]) {
          pvVar4 = (void *)plVar12[2];
          pvVar9 = pvVar4;
          if ((0xfff < plVar12[5] * 2 + 2U) &&
             (pvVar9 = *(void **)((longlong)pvVar4 + -8),
             0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar9)))) goto LAB_1400d8297;
          free(pvVar9);
        }
        free(plVar12);
        plVar12 = plVar8;
      } while (plVar8 != (longlong *)0x0);
    }
    *(undefined8 *)*(undefined8 *)(param_2 + 0x21b8) = *(undefined8 *)(param_2 + 0x21b8);
    *(longlong *)(*(longlong *)(param_2 + 0x21b8) + 8) = *(longlong *)(param_2 + 0x21b8);
    *(undefined8 *)(param_2 + 0x21c0) = 0;
    puVar5 = *(undefined8 **)(param_2 + 0x21c8);
    puVar2 = *(undefined8 **)(param_2 + 0x21d0);
    if (puVar5 == puVar2) {
      return;
    }
    uVar3 = *(undefined8 *)(param_2 + 0x21b8);
    uVar11 = (longlong)puVar2 + (-8 - (longlong)puVar5);
    if (0x77 < uVar11) {
      uVar11 = (uVar11 >> 3) + 1;
      uVar15 = uVar11 & 0xfffffffffffffff0;
      uVar10 = 0;
      do {
        puVar1 = puVar5 + uVar10;
        *puVar1 = uVar3;
        puVar1[1] = uVar3;
        puVar1[2] = uVar3;
        puVar1[3] = uVar3;
        puVar1 = puVar5 + uVar10 + 4;
        *puVar1 = uVar3;
        puVar1[1] = uVar3;
        puVar1[2] = uVar3;
        puVar1[3] = uVar3;
        puVar1 = puVar5 + uVar10 + 8;
        *puVar1 = uVar3;
        puVar1[1] = uVar3;
        puVar1[2] = uVar3;
        puVar1[3] = uVar3;
        puVar1 = puVar5 + uVar10 + 0xc;
        *puVar1 = uVar3;
        puVar1[1] = uVar3;
        puVar1[2] = uVar3;
        puVar1[3] = uVar3;
        uVar10 = uVar10 + 0x10;
      } while (uVar15 != uVar10);
      if (uVar11 == uVar15) {
        return;
      }
      puVar5 = puVar5 + uVar15;
    }
    do {
      *puVar5 = uVar3;
      puVar5 = puVar5 + 1;
    } while (puVar5 != puVar2);
    return;
  }
  plVar8 = (longlong *)*plVar12;
  if (plVar8 == plVar12) {
    return;
  }
  lVar16 = plVar8[4];
  if ((ulonglong)plVar8[5] < 8) {
    lVar6 = (longlong)(plVar8 + 2);
  }
  else {
    lVar6 = plVar8[2];
  }
  *(undefined8 *)(param_2 + 0x23a0) = *(undefined8 *)(param_2 + 0x21c8);
  uVar11 = lVar16 * 2;
  if (uVar11 == 0) {
    uVar10 = 0xcbf29ce484222325;
  }
  else {
    uVar15 = (ulonglong)((uint)uVar11 & 2);
    if (uVar11 < 4) {
      uVar10 = 0xcbf29ce484222325;
      uVar14 = 0;
    }
    else {
      uVar10 = 0xcbf29ce484222325;
      uVar14 = 0;
      do {
        uVar10 = ((ulonglong)*(byte *)(lVar6 + 3 + uVar14) ^
                 ((ulonglong)*(byte *)(lVar6 + 2 + uVar14) ^
                 ((ulonglong)*(byte *)(lVar6 + 1 + uVar14) ^
                 (*(byte *)(lVar6 + uVar14) ^ uVar10) * 0x100000001b3) * 0x100000001b3) *
                 0x100000001b3) * 0x100000001b3;
        uVar14 = uVar14 + 4;
      } while ((uVar11 & 0xfffffffffffffffc) != uVar14);
    }
    if (uVar15 != 0) {
      uVar11 = 0;
      do {
        uVar10 = (*(byte *)(lVar6 + uVar14 + uVar11) ^ uVar10) * 0x100000001b3;
        uVar11 = uVar11 + 1;
      } while (uVar15 != uVar11);
    }
  }
  *(longlong *)(param_2 + 0x2388) = plVar8[1];
  uVar10 = uVar10 & *(ulonglong *)(param_2 + 0x21e0);
  lVar16 = *(longlong *)(param_2 + 0x23a0);
  *(ulonglong *)(param_2 + 0x2398) = lVar16 + uVar10 * 0x10;
  *(ulonglong *)(param_2 + 0x2390) = uVar10 * 2 + 1;
  lVar6 = *(longlong *)(lVar16 + uVar10 * 0x10);
  plVar7 = *(longlong **)(lVar16 + 8 + uVar10 * 0x10);
  lVar16 = 0;
  lVar18 = 0;
  _Memory = plVar8;
  do {
    plVar13 = (longlong *)*_Memory;
    pvVar4 = (void *)_Memory[7];
    if (pvVar4 != (void *)0x0) {
      pvVar9 = pvVar4;
      if ((0xfff < (ulonglong)(_Memory[9] - (longlong)pvVar4)) &&
         (pvVar9 = *(void **)((longlong)pvVar4 + -8),
         0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar9)))) {
LAB_1400d8297:
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      free(pvVar9);
      _Memory[7] = lVar16;
      _Memory[8] = lVar18;
      _Memory[9] = 0;
    }
    if (7 < (ulonglong)_Memory[5]) {
      pvVar4 = (void *)_Memory[2];
      pvVar9 = pvVar4;
      if ((0xfff < _Memory[5] * 2 + 2U) &&
         (pvVar9 = *(void **)((longlong)pvVar4 + -8),
         0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar9)))) goto LAB_1400d8297;
      free(pvVar9);
    }
    free(_Memory);
    *(longlong *)(param_2 + 0x21c0) = *(longlong *)(param_2 + 0x21c0) + -1;
    if (_Memory == plVar7) {
      plVar7 = *(longlong **)(param_2 + 0x2388);
      if ((longlong *)lVar6 == plVar8) {
        **(longlong **)(param_2 + 0x2398) = (longlong)plVar12;
        plVar7 = plVar12;
      }
      *(longlong **)(*(longlong *)(param_2 + 0x23a0) + *(longlong *)(param_2 + 0x2390) * 8) = plVar7
      ;
      if (plVar13 != plVar12) {
        auVar17 = ZEXT1264(ZEXT812(0));
        do {
          if ((ulonglong)plVar13[5] < 8) {
            plVar8 = plVar13 + 2;
          }
          else {
            plVar8 = (longlong *)plVar13[2];
          }
          uVar15 = 0xcbf29ce484222325;
          uVar11 = plVar13[4] * 2;
          if (uVar11 != 0) {
            uVar10 = (ulonglong)((uint)uVar11 & 2);
            if (uVar11 < 4) {
              uVar14 = 0;
              uVar15 = 0xcbf29ce484222325;
            }
            else {
              uVar14 = 0;
              uVar15 = 0xcbf29ce484222325;
              do {
                uVar15 = ((ulonglong)*(byte *)((longlong)plVar8 + uVar14 + 3) ^
                         ((ulonglong)*(byte *)((longlong)plVar8 + uVar14 + 2) ^
                         ((ulonglong)*(byte *)((longlong)plVar8 + uVar14 + 1) ^
                         (*(byte *)((longlong)plVar8 + uVar14) ^ uVar15) * 0x100000001b3) *
                         0x100000001b3) * 0x100000001b3) * 0x100000001b3;
                uVar14 = uVar14 + 4;
              } while ((uVar11 & 0xfffffffffffffffc) != uVar14);
            }
            if (uVar10 != 0) {
              uVar11 = 0;
              do {
                uVar15 = (*(byte *)((longlong)plVar8 + uVar11 + uVar14) ^ uVar15) * 0x100000001b3;
                uVar11 = uVar11 + 1;
              } while (uVar10 != uVar11);
            }
          }
          uVar15 = uVar15 & *(ulonglong *)(param_2 + 0x21e0);
          *(ulonglong *)(param_2 + 0x2398) = uVar15 * 0x10 + *(longlong *)(param_2 + 0x23a0);
          plVar8 = *(longlong **)(*(longlong *)(param_2 + 0x23a0) + 8 + uVar15 * 0x10);
          plVar7 = plVar13;
          while( true ) {
            plVar13 = (longlong *)*plVar7;
            pvVar4 = (void *)plVar7[7];
            if (pvVar4 != (void *)0x0) {
              pvVar9 = pvVar4;
              if ((0xfff < (ulonglong)(plVar7[9] - (longlong)pvVar4)) &&
                 (pvVar9 = *(void **)((longlong)pvVar4 + -8),
                 0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar9))))
              goto LAB_1400d8297;
              free(pvVar9);
              *(undefined1 (*) [16])(plVar7 + 7) = auVar17._0_16_;
              plVar7[9] = 0;
            }
            if (7 < (ulonglong)plVar7[5]) {
              pvVar4 = (void *)plVar7[2];
              pvVar9 = pvVar4;
              if ((0xfff < plVar7[5] * 2 + 2U) &&
                 (pvVar9 = *(void **)((longlong)pvVar4 + -8),
                 0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar9))))
              goto LAB_1400d8297;
              free(pvVar9);
            }
            free(plVar7);
            *(longlong *)(param_2 + 0x21c0) = *(longlong *)(param_2 + 0x21c0) + -1;
            if (plVar7 == plVar8) break;
            plVar7 = plVar13;
            if (plVar13 == plVar12) goto LAB_1400d827a;
          }
          **(longlong **)(param_2 + 0x2398) = (longlong)plVar12;
          *(longlong **)(*(longlong *)(param_2 + 0x23a0) + (uVar15 * 2 + 1) * 8) = plVar12;
        } while (plVar13 != plVar12);
      }
      break;
    }
    if ((plVar13 == plVar12) && ((longlong *)lVar6 == plVar8)) goto LAB_1400d827a;
    _Memory = plVar13;
  } while (plVar13 != plVar12);
LAB_1400d8284:
  plVar8 = *(longlong **)(param_2 + 0x2388);
  *plVar8 = (longlong)plVar12;
  plVar12[1] = (longlong)plVar8;
  return;
LAB_1400d827a:
  **(longlong **)(param_2 + 0x2398) = (longlong)plVar12;
  goto LAB_1400d8284;
}

