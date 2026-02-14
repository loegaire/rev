
void FUN_1400bb4f0(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  for (; (param_1 != param_2 && (param_1 != 0)); param_1 = *(longlong *)(param_1 + 0x10)) {
    lVar2 = param_3;
    switch(*(undefined4 *)(param_1 + 8)) {
    case 10:
    case 0xb:
      FUN_1400bb4f0(*(longlong *)(param_1 + 0x20),0,0);
      break;
    case 0x10:
      if (param_3 != 0) {
        *(undefined4 *)(param_3 + 0x34) = 0;
      }
      for (lVar1 = *(longlong *)(param_1 + 0x28); lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x28)) {
        FUN_1400bb4f0(*(longlong *)(lVar1 + 0x10),*(longlong *)(lVar1 + 0x20),param_3);
      }
      break;
    case 0x12:
      lVar2 = param_1;
      if (param_3 != 0) {
        *(undefined4 *)(param_3 + 0x34) = 0;
        *(undefined4 *)(param_1 + 0x34) = 0;
        lVar2 = param_3;
      }
      break;
    case 0x13:
      if (param_3 == *(longlong *)(param_1 + 0x20)) {
        if (*(int *)(param_3 + 0x34) == -1) {
          *(undefined4 *)(param_3 + 0x34) = 1;
        }
        lVar2 = 0;
      }
    }
    param_3 = lVar2;
  }
  return;
}

