
void FUN_1400de0d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 local_res20;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 *local_30;
  undefined8 *local_20;
  ulonglong local_18;
  
  local_18 = DAT_140127040 ^ (ulonglong)auStack_58;
  local_res20 = param_4;
  local_20 = &local_res20;
  puVar1 = (undefined8 *)FUN_1400dc790();
  local_38 = 0;
  local_30 = &local_res20;
  __stdio_common_vswprintf_s(*puVar1,param_1,0x1000,L"%ls\\%ls");
  FUN_14010a260(local_18 ^ (ulonglong)auStack_58);
  return;
}

