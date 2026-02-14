
void FUN_1400bb790(void)

{
  undefined1 auStack_48 [40];
  undefined **local_20;
  char *local_18;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_140127040 ^ (ulonglong)auStack_48;
  local_10 = 0;
  local_18 = "bad array new length";
  local_20 = std::bad_array_new_length::vftable;
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(&local_20,(ThrowInfo *)&DAT_140114340);
}

