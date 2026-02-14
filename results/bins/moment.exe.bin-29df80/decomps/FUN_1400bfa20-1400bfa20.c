
ulonglong FUN_1400bfa20(longlong param_1,char *param_2,char *param_3,char *param_4,char *param_5)

{
  int iVar1;
  ulonglong uVar2;
  
  iVar1 = _Strcoll(param_2,param_3,param_4,param_5,(_Collvec *)(param_1 + 0x10));
  uVar2 = 0xffffffff;
  if (-1 < iVar1) {
    uVar2 = (ulonglong)(iVar1 != 0);
  }
  return uVar2;
}

