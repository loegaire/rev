
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140103f00(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  tm *_Tm;
  size_t _Size;
  void *pvVar4;
  ulonglong uVar5;
  void *_Dst;
  char *pcVar6;
  undefined1 *_Dst_00;
  char local_1068 [4104];
  __time64_t local_60;
  undefined1 local_58 [32];
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 4)
       < DAT_14012b5f8) && (FUN_140109684(&DAT_14012b5f8), DAT_14012b5f8 == -1)) {
    _DAT_14012b538 = 2;
    _DAT_14012b540 = 0;
    _DAT_14012b548 = ZEXT1232(ZEXT812(0));
    _DAT_14012b588 = 0;
    _DAT_14012b568 = _DAT_14012b548;
    _Mtx_init_in_situ(&DAT_14012b540,2);
    _DAT_14012b590 = ZEXT812(0);
    register0x0000120c = 0;
    DAT_14012b5f0 = "%T  %d-%m-%Y";
    atexit(FUN_1400f9950);
    _Init_thread_footer(&DAT_14012b5f8);
  }
  iVar3 = _Mtx_lock();
  if (iVar3 == 0) {
    if (DAT_14012b58c != 0x7fffffff) {
      local_60 = _time64((__time64_t *)0x0);
      _Tm = _localtime64(&local_60);
      strftime(&DAT_14012b5a0,0x50,DAT_14012b5f0,_Tm);
      memset(local_1068,0,0x1000);
      iVar3 = FUN_1400f9990(local_1068,0x1000,"%s => %s",&DAT_14012b5a0);
      FUN_1400f9990(local_1068 + iVar3,(longlong)(0x1000 - iVar3),param_1,param_2);
      local_58 = ZEXT1232(ZEXT812(0));
      _Size = strlen(local_1068);
      if (-1 < (longlong)_Size) {
        if (_Size < 0x10) {
          local_58._16_8_ = _Size;
          local_58._24_8_ = 0xf;
          memcpy(local_58,local_1068,_Size);
          _Dst_00 = local_58;
        }
        else {
          uVar5 = 0x16;
          if (0x16 < (_Size | 0xf)) {
            uVar5 = _Size | 0xf;
          }
          if (uVar5 < 0xfff) {
            _Dst_00 = operator_new(uVar5 + 1);
          }
          else {
            pvVar4 = operator_new(uVar5 + 0x28);
            _Dst_00 = (undefined1 *)((longlong)pvVar4 + 0x27U & 0xffffffffffffffe0);
            *(void **)(_Dst_00 + -8) = pvVar4;
          }
          local_58._0_8_ = _Dst_00;
          local_58._16_8_ = _Size;
          local_58._24_8_ = uVar5;
          memcpy(_Dst_00,local_1068,_Size);
        }
        _Dst_00[_Size] = 0;
        pvVar4 = operator_new(0x1027);
        _Dst = (void *)((longlong)pvVar4 + 0x27U & 0xffffffffffffffe0);
        *(void **)((longlong)_Dst + -8) = pvVar4;
        memset(_Dst,0,0x1000);
        uVar2 = local_58._24_8_;
        uVar1 = local_58._0_8_;
        pcVar6 = local_58;
        if (0xf < (ulonglong)local_58._24_8_) {
          pcVar6 = (char *)local_58._0_8_;
        }
        memmove(_Dst,pcVar6,local_58._16_8_);
        puts(pcVar6);
        if (_Dst != (void *)0x0) {
          if (0x1f < (ulonglong)((longlong)_Dst + (-8 - (longlong)*(void **)((longlong)_Dst + -8))))
          goto LAB_140104277;
          free(*(void **)((longlong)_Dst + -8));
        }
        if (0xf < (ulonglong)uVar2) {
          pcVar6 = (char *)uVar1;
          if ((0xfff < uVar2 + 1) &&
             (pcVar6 = *(char **)(uVar1 + -8),
             (char *)0x1f < (char *)(uVar1 + (-8 - (longlong)pcVar6)))) {
LAB_140104277:
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
          free(pcVar6);
        }
        _Mtx_unlock(&DAT_14012b540);
        return;
      }
      goto LAB_140104272;
    }
  }
  else {
    std::_Throw_Cpp_error(5);
  }
  _DAT_14012b588 = CONCAT44(0x7ffffffe,_DAT_14012b588);
  std::_Throw_Cpp_error(6);
LAB_140104272:
                    /* WARNING: Subroutine does not return */
  FUN_140086cb0();
}

