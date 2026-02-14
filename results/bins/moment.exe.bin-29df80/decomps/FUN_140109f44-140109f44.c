
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

int FUN_140109f44(void)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  ulonglong uVar5;
  uint *puVar6;
  ulonglong uVar7;
  undefined8 unaff_RBX;
  undefined8 in_R9;
  undefined1 uVar8;
  
  iVar2 = (int)unaff_RBX;
  uVar3 = FUN_1401098b4(1);
  if ((char)uVar3 == '\0') {
    FUN_140109cac(7);
  }
  else {
    bVar1 = false;
    uVar8 = 0;
    uVar3 = __scrt_acquire_startup_lock();
    iVar2 = (int)CONCAT71((int7)((ulonglong)unaff_RBX >> 8),(char)uVar3);
    if (DAT_14012a9d0 != 1) {
      if (DAT_14012a9d0 == 0) {
        DAT_14012a9d0 = 1;
        iVar2 = _initterm_e(&DAT_140112980,&DAT_140112998);
        if (iVar2 != 0) {
          return 0xff;
        }
        _initterm(&DAT_1401128a8,&DAT_140112978);
        DAT_14012a9d0 = 2;
      }
      else {
        bVar1 = true;
        uVar8 = 1;
      }
      __scrt_release_startup_lock((char)uVar3);
      plVar4 = (longlong *)FUN_14010a1c8();
      if ((*plVar4 != 0) && (uVar5 = FUN_1401097bc((longlong)plVar4), (char)uVar5 != '\0')) {
        (*(code *)*plVar4)(0,2,0,in_R9,uVar8);
      }
      plVar4 = (longlong *)FUN_14010a1d0();
      if ((*plVar4 != 0) && (uVar5 = FUN_1401097bc((longlong)plVar4), (char)uVar5 != '\0')) {
        _register_thread_local_exe_atexit_callback(*plVar4);
      }
      _get_initial_narrow_environment();
      __p___argv();
      puVar6 = (uint *)__p___argc();
      uVar7 = (ulonglong)*puVar6;
      iVar2 = FUN_140100380();
      uVar5 = FUN_140109c3c();
      if ((char)uVar5 != '\0') {
        if (!bVar1) {
          _cexit();
        }
        __scrt_uninitialize_crt(CONCAT71((int7)(uVar7 >> 8),1),'\0');
        return iVar2;
      }
      goto LAB_14010a0b0;
    }
  }
  FUN_140109cac(7);
LAB_14010a0b0:
                    /* WARNING: Subroutine does not return */
  exit(iVar2);
}

