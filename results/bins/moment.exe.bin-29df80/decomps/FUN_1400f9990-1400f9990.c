
int FUN_1400f9990(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 local_res20;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 *local_40;
  undefined8 *local_30;
  ulonglong local_28;
  
  local_28 = DAT_140127040 ^ (ulonglong)auStack_68;
  local_res20 = param_4;
  local_30 = &local_res20;
  puVar2 = (undefined8 *)FUN_1400dc790();
  local_48 = 0;
  local_40 = &local_res20;
  iVar1 = __stdio_common_vsprintf_s(*puVar2,param_1,param_2,param_3);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  FUN_14010a260(local_28 ^ (ulonglong)auStack_68);
  return iVar1;
}

