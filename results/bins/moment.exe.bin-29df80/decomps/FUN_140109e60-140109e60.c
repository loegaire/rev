
void FUN_140109e60(void)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  ulonglong uVar7;
  undefined7 extraout_var;
  
  _set_app_type(1);
  uVar5 = FUN_14010a180();
  _set_fmode((int)uVar5);
  uVar5 = FUN_140109c90();
  puVar6 = (undefined4 *)__p__commode();
  *puVar6 = (int)uVar5;
  uVar5 = __scrt_initialize_onexit_tables(1);
  if ((char)uVar5 != '\0') {
    FUN_14010a1d8();
    atexit(FUN_14010a214);
    uVar7 = FUN_140109c20();
    iVar4 = _configure_narrow_argv(uVar7 & 0xffffffff);
    if (iVar4 == 0) {
      FUN_14010a188();
      bVar2 = FUN_14010a1bc();
      if ((int)CONCAT71(extraout_var,bVar2) != 0) {
        __setusermatherr(FUN_140109c90);
      }
      FUN_14010a19c();
      FUN_14010a19c();
      uVar5 = FUN_140109c90();
      _configthreadlocale((int)uVar5);
      cVar3 = FUN_14010a198();
      if (cVar3 != '\0') {
        _initialize_narrow_environment();
      }
      FUN_140109c90();
      uVar5 = thunk_FUN_140109c90();
      if ((int)uVar5 == 0) {
        return;
      }
    }
  }
  FUN_140109cac(7);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

