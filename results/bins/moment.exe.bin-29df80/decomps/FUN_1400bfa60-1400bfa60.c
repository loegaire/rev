
undefined1 (*) [16]
FUN_1400bfa60(longlong param_1,undefined1 (*param_2) [16],char *param_3,char *param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  void *pvVar3;
  undefined1 (*pauVar4) [16];
  undefined1 (*pauVar5) [16];
  ulonglong uVar6;
  void *_Memory;
  ulonglong _Size;
  void *_Dst;
  size_t sVar7;
  ulonglong _Size_00;
  undefined1 auVar8 [16];
  
  auVar8._0_12_ = ZEXT812(0);
  auVar8._12_4_ = 0;
  *param_2 = auVar8;
  *(undefined8 *)param_2[1] = 0;
  *(undefined8 *)(param_2[1] + 8) = 0xf;
  sVar7 = (longlong)param_4 - (longlong)param_3;
  pauVar5 = param_2;
  if (sVar7 == 0) {
    sVar7 = 0;
  }
  else {
    _Size_00 = 0;
    do {
      _Size = sVar7 - _Size_00;
      if (sVar7 < _Size_00 || _Size == 0) {
        pauVar4 = param_2;
        if (0xf < *(ulonglong *)(param_2[1] + 8)) {
          pauVar4 = *(undefined1 (**) [16])*param_2;
        }
        *(size_t *)param_2[1] = sVar7;
        (*pauVar4)[sVar7] = 0;
      }
      else {
        uVar1 = *(ulonglong *)(param_2[1] + 8);
        if (uVar1 - _Size_00 < _Size) {
          uVar6 = 0x7fffffffffffffff;
          if ((_Size_00 ^ 0x7fffffffffffffff) < _Size) {
                    /* WARNING: Subroutine does not return */
            FUN_140086cb0();
          }
          uVar2 = sVar7 | 0xf;
          if (((longlong)uVar2 < 0) || ((uVar1 >> 1 ^ 0x7fffffffffffffff) < uVar1)) {
LAB_1400bfb80:
            pvVar3 = operator_new(uVar6 + 0x28);
            _Dst = (void *)((longlong)pvVar3 + 0x27U & 0xffffffffffffffe0);
            *(void **)((longlong)_Dst - 8) = pvVar3;
          }
          else {
            uVar6 = (uVar1 >> 1) + uVar1;
            if (uVar6 < uVar2) {
              uVar6 = uVar2;
            }
            uVar2 = uVar6 + 1;
            if (0xfff < uVar2) {
              if (0xffffffffffffffd8 < uVar2) {
                    /* WARNING: Subroutine does not return */
                FUN_1400bb790();
              }
              goto LAB_1400bfb80;
            }
            _Dst = operator_new(uVar2);
          }
          *(size_t *)param_2[1] = sVar7;
          *(ulonglong *)(param_2[1] + 8) = uVar6;
          if (uVar1 < 0x10) {
            memcpy(_Dst,param_2,_Size_00);
            memset((void *)(_Size_00 + (longlong)_Dst),0,_Size);
            *(undefined1 *)((longlong)_Dst + sVar7) = 0;
          }
          else {
            pvVar3 = *(void **)*param_2;
            memcpy(_Dst,pvVar3,_Size_00);
            memset((void *)(_Size_00 + (longlong)_Dst),0,_Size);
            *(undefined1 *)((longlong)_Dst + sVar7) = 0;
            _Memory = pvVar3;
            if ((0xfff < uVar1 + 1) &&
               (_Memory = *(void **)((longlong)pvVar3 + -8),
               0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
              _invalid_parameter_noinfo_noreturn();
            }
            free(_Memory);
          }
          *(void **)*param_2 = _Dst;
        }
        else {
          *(size_t *)param_2[1] = sVar7;
          pauVar4 = param_2;
          if (0xf < uVar1) {
            pauVar4 = *(undefined1 (**) [16])*param_2;
          }
          memset(*pauVar4 + _Size_00,0,_Size);
          (*pauVar4)[sVar7] = 0;
        }
      }
      pauVar4 = param_2;
      if (0xf < *(ulonglong *)(param_2[1] + 8)) {
        pauVar4 = *(undefined1 (**) [16])*param_2;
      }
      sVar7 = _Strxfrm((char *)pauVar4,*pauVar4 + *(longlong *)param_2[1],param_3,param_4,
                       (_Collvec *)(param_1 + 0x10));
      _Size_00 = *(ulonglong *)param_2[1];
    } while (_Size_00 < sVar7);
    if (0xf < *(ulonglong *)(param_2[1] + 8)) {
      pauVar5 = *(undefined1 (**) [16])*param_2;
    }
  }
  *(size_t *)param_2[1] = sVar7;
  (*pauVar5)[sVar7] = 0;
  return param_2;
}

