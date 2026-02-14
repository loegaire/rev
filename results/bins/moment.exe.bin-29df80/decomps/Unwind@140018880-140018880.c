
void Unwind_140018880(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0xc40);
  if (*(char *)(param_2 + 0x172a) == '\x01') {
    while ((longlong *)(param_2 + 0x110) != plVar1) {
      plVar1 = plVar1 + -5;
      FUN_1400bfe30(plVar1);
    }
  }
  return;
}

