
void FUN_1400c6080(void)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  uint *puVar6;
  uint uVar7;
  longlong lVar8;
  char *pcVar9;
  char cVar10;
  uint uVar11;
  longlong lVar12;
  undefined8 local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  uint *puStack_a8;
  undefined8 uStack_a0;
  undefined1 auStack_98 [16];
  uint *local_88;
  uint local_80;
  undefined8 local_78;
  uint *local_70;
  ulonglong local_68 [2];
  uint *local_58;
  uint *local_50;
  longlong local_48 [2];
  
  local_48[1] = 0xfffffffffffffffe;
  uVar2 = _Query_perf_frequency();
  uVar3 = _Query_perf_counter();
  if (uVar2 == 10000000) {
    lVar5 = uVar3 * 100;
  }
  else if (uVar2 == 24000000) {
    lVar5 = (((longlong)uVar3 % 24000000) * 1000000000) / 24000000 +
            ((longlong)uVar3 / 24000000) * 1000000000;
  }
  else {
    if ((uVar3 | uVar2) >> 0x20 == 0) {
      uVar4 = (uVar3 & 0xffffffff) / (uVar2 & 0xffffffff);
      uVar3 = (uVar3 & 0xffffffff) % (uVar2 & 0xffffffff);
    }
    else {
      uVar4 = (longlong)uVar3 / (longlong)uVar2;
      uVar3 = (longlong)uVar3 % (longlong)uVar2;
    }
    uVar3 = uVar3 * 1000000000;
    if ((uVar2 | uVar3) >> 0x20 == 0) {
      uVar3 = (uVar3 & 0xffffffff) / (uVar2 & 0xffffffff);
    }
    else {
      uVar3 = (longlong)uVar3 / (longlong)uVar2;
    }
    lVar5 = uVar3 + uVar4 * 1000000000;
  }
  lVar12 = 0x7fffffffffffffff;
  if (lVar5 < 0x7fffffff88ca6bff) {
    lVar12 = lVar5 + 2000000000;
  }
  while( true ) {
    uVar2 = _Query_perf_frequency();
    uVar3 = _Query_perf_counter();
    if (uVar2 == 10000000) {
      lVar5 = uVar3 * 100;
    }
    else if (uVar2 == 24000000) {
      lVar5 = (((longlong)uVar3 % 24000000) * 1000000000) / 24000000 +
              ((longlong)uVar3 / 24000000) * 1000000000;
    }
    else {
      if ((uVar3 | uVar2) >> 0x20 == 0) {
        uVar4 = (uVar3 & 0xffffffff) / (uVar2 & 0xffffffff);
        uVar3 = (uVar3 & 0xffffffff) % (uVar2 & 0xffffffff);
      }
      else {
        uVar4 = (longlong)uVar3 / (longlong)uVar2;
        uVar3 = (longlong)uVar3 % (longlong)uVar2;
      }
      uVar3 = uVar3 * 1000000000;
      if ((uVar2 | uVar3) >> 0x20 == 0) {
        uVar3 = (uVar3 & 0xffffffff) / (uVar2 & 0xffffffff);
      }
      else {
        uVar3 = (longlong)uVar3 / (longlong)uVar2;
      }
      lVar5 = uVar3 + uVar4 * 1000000000;
    }
    lVar8 = lVar12 - lVar5;
    if (lVar8 == 0 || lVar12 < lVar5) break;
    lVar5 = _Xtime_get_ticks();
    if (863999999999999 < lVar8) {
      lVar8 = 864000000000000;
    }
    lVar8 = lVar5 * 100 + lVar8;
    local_b8 = lVar8 / 1000000000;
    uStack_b0 = (int)lVar8 + (int)local_b8 * -1000000000;
    _Thrd_sleep(&local_b8);
  }
  local_88 = (uint *)0x0;
  local_80 = 0;
  local_b8._0_4_ = (int)ClientId.UniqueProcess;
  local_b8._4_4_ = (undefined4)((ulonglong)ClientId.UniqueProcess >> 0x20);
  uStack_b0._0_2_ = 0;
  uStack_b0._2_2_ = 0;
  puStack_a8 = (uint *)0x0;
  uVar3 = 0;
  lVar5 = readgsbase();
  lVar5 = *(longlong *)
           (**(longlong **)(*(longlong *)(*(longlong *)(lVar5 + 0x60) + 0x18) + 0x10) + 0x30);
  uVar2 = (ulonglong)*(uint *)(lVar5 + 0x88 + (longlong)*(int *)(lVar5 + 0x3c));
  do {
    uVar4 = (ulonglong)*(uint *)((ulonglong)*(uint *)(lVar5 + 0x20 + uVar2) + lVar5 + uVar3 * 4);
    cVar10 = *(char *)(lVar5 + uVar4);
    if (cVar10 != '\0') {
      pcVar9 = (char *)(uVar4 + lVar5 + 1);
      uVar7 = 0x839e15e3;
      do {
        uVar7 = ((int)cVar10 ^ uVar7) * 0x1000193;
        cVar10 = *pcVar9;
        pcVar9 = pcVar9 + 1;
      } while (cVar10 != '\0');
      if (uVar7 == 0xf128f4b0) break;
    }
    uVar3 = uVar3 + 1;
  } while( true );
  local_58 = (uint *)0x0;
  iVar1 = (*(code *)((ulonglong)
                     *(uint *)((ulonglong)*(uint *)(lVar5 + 0x1c + uVar2) + lVar5 +
                              (ulonglong)
                              *(ushort *)
                               ((ulonglong)*(uint *)(lVar5 + 0x24 + uVar2) + lVar5 +
                               (uVar3 & 0xffffffff) * 2) * 4) + lVar5))
                    (0x58,&local_b8,0x18,local_48);
  if (iVar1 == -0x3ffffffc) {
    local_68[0] = (ulonglong)(ushort)uStack_b0 + 2;
    if ((ulonglong)(ushort)uStack_b0 + 2 <= (ulonglong)uStack_b0._2_2_) {
      local_68[0] = (ulonglong)uStack_b0._2_2_;
    }
    local_78 = (uint *)0x0;
    uVar3 = 0;
    iVar1 = NtAllocateVirtualMemory(0xffffffffffffffff,&local_78,0,local_68,0x1000,4);
    uVar7 = ~(iVar1 >> 0x1f) & (uint)local_68[0];
    puVar6 = (uint *)0x0;
    if (-1 < iVar1) {
      puVar6 = local_78;
    }
    uStack_b0._2_2_ = (ushort)uVar7;
    lVar5 = readgsbase();
    lVar5 = *(longlong *)
             (**(longlong **)(*(longlong *)(*(longlong *)(lVar5 + 0x60) + 0x18) + 0x10) + 0x30);
    uVar2 = (ulonglong)*(uint *)(lVar5 + 0x88 + (longlong)*(int *)(lVar5 + 0x3c));
    do {
      uVar4 = (ulonglong)*(uint *)((ulonglong)*(uint *)(lVar5 + 0x20 + uVar2) + lVar5 + uVar3 * 4);
      cVar10 = *(char *)(lVar5 + uVar4);
      if (cVar10 != '\0') {
        pcVar9 = (char *)(uVar4 + lVar5 + 1);
        uVar11 = 0x33a499bb;
        do {
          uVar11 = ((int)cVar10 ^ uVar11) * 0x1000193;
          cVar10 = *pcVar9;
          pcVar9 = pcVar9 + 1;
        } while (cVar10 != '\0');
        if (uVar11 == 0x6161d2b8) goto code_r0x0001400c6403;
      }
      uVar3 = uVar3 + 1;
    } while( true );
  }
  if (iVar1 != 0) {
    return;
  }
  uVar7 = 0;
  puVar6 = (uint *)0x0;
  uStack_b0._0_2_ = 0;
LAB_1400c6452:
  local_78._0_4_ = CONCAT22((ushort)uStack_b0,(ushort)uStack_b0);
  local_b8._4_4_ = 0;
  uStack_b0._0_2_ = 0;
  uStack_b0._2_2_ = 0;
  uStack_ac = 0;
  uStack_a0 = 0;
  auStack_98 = (undefined1  [16])0x0;
  local_b8._0_4_ = 0x30;
  puStack_a8 = (uint *)&local_78;
  local_48[0] = 0;
  uVar3 = 0;
  lVar5 = readgsbase();
  lVar5 = *(longlong *)
           (**(longlong **)(*(longlong *)(*(longlong *)(lVar5 + 0x60) + 0x18) + 0x10) + 0x30);
  uVar2 = (ulonglong)*(uint *)(lVar5 + 0x88 + (longlong)*(int *)(lVar5 + 0x3c));
  do {
    uVar4 = (ulonglong)*(uint *)((ulonglong)*(uint *)(lVar5 + 0x20 + uVar2) + lVar5 + uVar3 * 4);
    cVar10 = *(char *)(lVar5 + uVar4);
    if (cVar10 != '\0') {
      pcVar9 = (char *)(uVar4 + lVar5 + 1);
      uVar11 = 0x7bb0b765;
      do {
        uVar11 = ((int)cVar10 ^ uVar11) * 0x1000193;
        cVar10 = *pcVar9;
        pcVar9 = pcVar9 + 1;
      } while (cVar10 != '\0');
      if (uVar11 == 0x2f966b5d) goto code_r0x0001400c6502;
    }
    uVar3 = uVar3 + 1;
  } while( true );
code_r0x0001400c6403:
  puStack_a8 = puVar6;
  local_88 = puVar6;
  local_80 = uVar7;
  local_58 = puVar6;
  iVar1 = (*(code *)((ulonglong)
                     *(uint *)((ulonglong)*(uint *)(lVar5 + 0x1c + uVar2) + lVar5 +
                              (ulonglong)
                              *(ushort *)
                               ((ulonglong)*(uint *)(lVar5 + 0x24 + uVar2) + lVar5 +
                               (uVar3 & 0xffffffff) * 2) * 4) + lVar5))(0x58,&local_b8,0x18,0);
  if (iVar1 == 0) goto LAB_1400c6452;
  goto LAB_1400c661e;
code_r0x0001400c65d2:
  iVar1 = (*(code *)((ulonglong)
                     *(uint *)((ulonglong)*(uint *)(lVar5 + 0x1c + uVar2) + lVar5 +
                              (ulonglong)
                              *(ushort *)
                               ((ulonglong)*(uint *)(lVar5 + 0x24 + uVar2) + lVar5 +
                               (uVar3 & 0xffffffff) * 2) * 4) + lVar5))
                    (local_48[0],local_68,local_50,uVar7,0x2f);
  if ((iVar1 == 0) && (uVar7 = *local_50, uVar7 != 0)) {
    uVar3 = 0;
    do {
      if ((*(void **)(local_50 + uVar3 * 2 + 2) != (void *)0x4) &&
         (*(void **)(local_50 + uVar3 * 2 + 2) != ClientId.UniqueProcess)) {
        LOCK();
        DAT_14012b250 = 1;
        UNLOCK();
        uVar7 = *local_50;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar7);
  }
  goto LAB_1400c660b;
code_r0x0001400c6502:
  local_70 = puVar6;
  local_50 = puVar6;
  iVar1 = (*(code *)((ulonglong)
                     *(uint *)((ulonglong)*(uint *)(lVar5 + 0x1c + uVar2) + lVar5 +
                              (ulonglong)
                              *(ushort *)
                               ((ulonglong)*(uint *)(lVar5 + 0x24 + uVar2) + lVar5 +
                               (uVar3 & 0xffffffff) * 2) * 4) + lVar5))
                    (local_48,0x80,&local_b8,local_68,0,0x40);
  if (iVar1 == 0) {
    uVar3 = 0;
    lVar5 = readgsbase();
    lVar5 = *(longlong *)
             (**(longlong **)(*(longlong *)(*(longlong *)(lVar5 + 0x60) + 0x18) + 0x10) + 0x30);
    uVar2 = (ulonglong)*(uint *)(lVar5 + 0x88 + (longlong)*(int *)(lVar5 + 0x3c));
    do {
      uVar4 = (ulonglong)*(uint *)((ulonglong)*(uint *)(lVar5 + 0x20 + uVar2) + lVar5 + uVar3 * 4);
      cVar10 = *(char *)(lVar5 + uVar4);
      if (cVar10 != '\0') {
        pcVar9 = (char *)(uVar4 + lVar5 + 1);
        uVar11 = 0x50281d9c;
        do {
          uVar11 = ((int)cVar10 ^ uVar11) * 0x1000193;
          cVar10 = *pcVar9;
          pcVar9 = pcVar9 + 1;
        } while (cVar10 != '\0');
        if (uVar11 == 0xcdeb938a) goto code_r0x0001400c65d2;
      }
      uVar3 = uVar3 + 1;
    } while( true );
  }
LAB_1400c660b:
  puVar6 = local_88;
  if (0 < local_48[0]) {
    NtClose();
    puVar6 = local_88;
  }
LAB_1400c661e:
  if (puVar6 != (uint *)0x0) {
    local_b8._0_4_ = 0;
    local_b8._4_4_ = 0;
    NtFreeVirtualMemory(0xffffffffffffffff,&local_88,&local_b8,0x8000);
  }
  return;
}

