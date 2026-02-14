
void FUN_140086cd0(void)

{
  undefined1 auStack_48 [40];
  undefined **local_20;
  char *local_18;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_140127040 ^ (ulonglong)auStack_48;
  local_10 = 0;
  local_18 = "bad cast";
  local_20 = std::bad_cast::vftable;
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(&local_20,(ThrowInfo *)&DAT_140114380);
}

