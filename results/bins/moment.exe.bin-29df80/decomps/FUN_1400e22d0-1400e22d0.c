
/* WARNING: Removing unreachable block (ram,0x0001400e22f3) */
/* WARNING: Removing unreachable block (ram,0x0001400e22db) */

int FUN_1400e22d0(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined1 uVar4;
  
  uVar4 = DAT_14012b250;
  piVar1 = (int *)cpuid(0x13371337);
  piVar2 = (int *)cpuid(0x40000000);
  iVar3 = *piVar2;
  if ((((*piVar1 != iVar3) || (piVar1[1] != piVar2[1])) || (piVar1[3] != piVar2[3])) ||
     (piVar1[2] != piVar2[2])) {
    LOCK();
    DAT_14012b250 = 1;
    iVar3 = CONCAT31((int3)((uint)iVar3 >> 8),uVar4);
    UNLOCK();
  }
  return iVar3;
}

