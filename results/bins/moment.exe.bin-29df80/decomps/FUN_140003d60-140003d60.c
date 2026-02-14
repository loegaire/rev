
void FUN_140003d60(void)

{
  HANDLE pvVar1;
  undefined1 auStack_48 [44];
  uint local_1c;
  ulonglong local_18;
  
  local_18 = DAT_140127040 ^ (ulonglong)auStack_48;
  SetConsoleOutputCP(0xfde9);
  pvVar1 = GetStdHandle(0xfffffff5);
  GetConsoleMode(pvVar1,&local_1c);
  pvVar1 = GetStdHandle(0xfffffff5);
  SetConsoleMode(pvVar1,local_1c | 4);
  FUN_14010a260(local_18 ^ (ulonglong)auStack_48);
  return;
}

