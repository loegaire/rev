
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140003dd0(void)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = std::_Random_device();
  uVar2 = std::_Random_device();
  _DAT_14012b2d0 = CONCAT44(uVar2,uVar1) * 0x5851f42d4c957f2d + 1;
  return;
}

