
void FUN_1400ee000(void)

{
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  char *pcVar6;
  char cVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [64];
  undefined4 uVar10;
  code *pcVar11;
  undefined1 in_stack_ffffffffffffff18 [16];
  undefined4 local_c4;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  void *local_98;
  void *local_90;
  undefined4 local_88;
  undefined1 auStack_84 [12];
  undefined1 auStack_78 [16];
  undefined1 auStack_68 [16];
  
  auVar9 = ZEXT1264(ZEXT812(0));
LAB_1400ee05b:
  if ((DAT_14012b201 & 1) != 0) {
    LOCK();
    DAT_14012b250 = 1;
    UNLOCK();
  }
  lVar2 = readgsbase();
  lVar2 = *(longlong *)
           (**(longlong **)(*(longlong *)(*(longlong *)(lVar2 + 0x60) + 0x18) + 0x10) + 0x30);
  uVar1 = (ulonglong)*(uint *)(lVar2 + 0x88 + (longlong)*(int *)(lVar2 + 0x3c));
  uVar4 = 0;
  do {
    uVar5 = (ulonglong)*(uint *)((ulonglong)*(uint *)(lVar2 + 0x20 + uVar1) + lVar2 + uVar4 * 4);
    cVar7 = *(char *)(lVar2 + uVar5);
    if (cVar7 != '\0') {
      pcVar6 = (char *)(uVar5 + lVar2 + 1);
      uVar3 = 0x3ab531b5;
      do {
        uVar3 = ((int)cVar7 ^ uVar3) * 0x1000193;
        cVar7 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar7 != '\0');
      if (uVar3 == 0x4a584ad1) break;
    }
    uVar4 = uVar4 + 1;
  } while( true );
  (*(code *)((ulonglong)
             *(uint *)((ulonglong)*(uint *)(lVar2 + 0x1c + uVar1) + lVar2 +
                      (ulonglong)
                      *(ushort *)
                       ((ulonglong)*(uint *)(lVar2 + 0x24 + uVar1) + lVar2 +
                       (uVar4 & 0xffffffff) * 2) * 4) + lVar2))(&local_b8,0x2000000,0,0);
  lVar2 = readgsbase();
  lVar2 = *(longlong *)
           (**(longlong **)(*(longlong *)(*(longlong *)(lVar2 + 0x60) + 0x18) + 0x10) + 0x30);
  uVar1 = (ulonglong)*(uint *)(lVar2 + 0x88 + (longlong)*(int *)(lVar2 + 0x3c));
  uVar4 = 0;
  do {
    uVar5 = (ulonglong)*(uint *)((ulonglong)*(uint *)(lVar2 + 0x20 + uVar1) + lVar2 + uVar4 * 4);
    cVar7 = *(char *)(lVar2 + uVar5);
    if (cVar7 != '\0') {
      pcVar6 = (char *)(uVar5 + lVar2 + 1);
      uVar3 = 0xbcbeaedb;
      do {
        uVar3 = ((int)cVar7 ^ uVar3) * 0x1000193;
        cVar7 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar7 != '\0');
      if (uVar3 == 0x3d3b1c37) break;
    }
    uVar4 = uVar4 + 1;
  } while( true );
  pcVar11 = FUN_1400ee6d0;
  auVar8._12_4_ = in_stack_ffffffffffffff18._12_4_;
  auVar8._8_4_ = 4;
  auVar8._0_8_ = &local_a0;
  uVar10 = 0xffffffff;
  (*(code *)((ulonglong)
             *(uint *)((ulonglong)*(uint *)(lVar2 + 0x1c + uVar1) + lVar2 +
                      (ulonglong)
                      *(ushort *)
                       ((ulonglong)*(uint *)(lVar2 + 0x24 + uVar1) + lVar2 +
                       (uVar4 & 0xffffffff) * 2) * 4) + lVar2))
            (&local_a0,0x2000000,0,local_b8,0xffffffffffffffff,FUN_1400ee6d0,auVar8,0x1000,0x1000);
  lVar2 = readgsbase();
  lVar2 = *(longlong *)
           (**(longlong **)(*(longlong *)(*(longlong *)(lVar2 + 0x60) + 0x18) + 0x10) + 0x30);
  uVar1 = (ulonglong)*(uint *)(lVar2 + 0x88 + (longlong)*(int *)(lVar2 + 0x3c));
  uVar4 = 0;
  do {
    uVar5 = (ulonglong)*(uint *)((ulonglong)*(uint *)(lVar2 + 0x20 + uVar1) + lVar2 + uVar4 * 4);
    cVar7 = *(char *)(lVar2 + uVar5);
    if (cVar7 != '\0') {
      pcVar6 = (char *)(uVar5 + lVar2 + 1);
      uVar3 = 0xc8819288;
      do {
        uVar3 = ((int)cVar7 ^ uVar3) * 0x1000193;
        cVar7 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar7 != '\0');
      if (uVar3 == 0x632c7f5f) break;
    }
    uVar4 = uVar4 + 1;
  } while( true );
  (*(code *)((ulonglong)
             *(uint *)((ulonglong)*(uint *)(lVar2 + 0x1c + uVar1) + lVar2 +
                      (ulonglong)
                      *(ushort *)
                       ((ulonglong)*(uint *)(lVar2 + 0x24 + uVar1) + lVar2 +
                       (uVar4 & 0xffffffff) * 2) * 4) + lVar2))
            (&local_c0,0,0,0,CONCAT44(uVar10,0x2000000));
  local_a8 = 0xfffffffffa0a1f00;
  lVar2 = readgsbase();
  lVar2 = *(longlong *)
           (**(longlong **)(*(longlong *)(*(longlong *)(lVar2 + 0x60) + 0x18) + 0x10) + 0x30);
  uVar1 = (ulonglong)*(uint *)(lVar2 + 0x88 + (longlong)*(int *)(lVar2 + 0x3c));
  uVar4 = 0;
  do {
    uVar5 = (ulonglong)*(uint *)((ulonglong)*(uint *)(lVar2 + 0x20 + uVar1) + lVar2 + uVar4 * 4);
    cVar7 = *(char *)(lVar2 + uVar5);
    if (cVar7 != '\0') {
      pcVar6 = (char *)(uVar5 + lVar2 + 1);
      uVar3 = 0x8a7e8eb4;
      do {
        uVar3 = ((int)cVar7 ^ uVar3) * 0x1000193;
        cVar7 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar7 != '\0');
      if (uVar3 == 0xce21ae0f) break;
    }
    uVar4 = uVar4 + 1;
  } while( true );
  (*(code *)((ulonglong)
             *(uint *)((ulonglong)*(uint *)(lVar2 + 0x1c + uVar1) + lVar2 +
                      (ulonglong)
                      *(ushort *)
                       ((ulonglong)*(uint *)(lVar2 + 0x24 + uVar1) + lVar2 +
                       (uVar4 & 0xffffffff) * 2) * 4) + lVar2))(local_c0,&local_a8,0,0);
  lVar2 = readgsbase();
  lVar2 = *(longlong *)
           (**(longlong **)(*(longlong *)(*(longlong *)(lVar2 + 0x60) + 0x18) + 0x10) + 0x30);
  uVar1 = (ulonglong)*(uint *)(lVar2 + 0x88 + (longlong)*(int *)(lVar2 + 0x3c));
  uVar4 = 0;
  do {
    uVar5 = (ulonglong)*(uint *)((ulonglong)*(uint *)(lVar2 + 0x20 + uVar1) + lVar2 + uVar4 * 4);
    cVar7 = *(char *)(lVar2 + uVar5);
    if (cVar7 != '\0') {
      pcVar6 = (char *)(uVar5 + lVar2 + 1);
      uVar3 = 0xacca40e0;
      do {
        uVar3 = ((int)cVar7 ^ uVar3) * 0x1000193;
        cVar7 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar7 != '\0');
      if (uVar3 == 0x5b135a69) break;
    }
    uVar4 = uVar4 + 1;
  } while( true );
  (*(code *)((ulonglong)
             *(uint *)((ulonglong)*(uint *)(lVar2 + 0x1c + uVar1) + lVar2 +
                      (ulonglong)
                      *(ushort *)
                       ((ulonglong)*(uint *)(lVar2 + 0x24 + uVar1) + lVar2 +
                       (uVar4 & 0xffffffff) * 2) * 4) + lVar2))(&local_b0,0x2000000);
  lVar2 = readgsbase();
  lVar2 = *(longlong *)
           (**(longlong **)(*(longlong *)(*(longlong *)(lVar2 + 0x60) + 0x18) + 0x10) + 0x30);
  uVar1 = (ulonglong)*(uint *)(lVar2 + 0x88 + (longlong)*(int *)(lVar2 + 0x3c));
  uVar4 = 0;
  do {
    uVar5 = (ulonglong)*(uint *)((ulonglong)*(uint *)(lVar2 + 0x20 + uVar1) + lVar2 + uVar4 * 4);
    cVar7 = *(char *)(lVar2 + uVar5);
    if (cVar7 != '\0') {
      pcVar6 = (char *)(uVar5 + lVar2 + 1);
      uVar3 = 0xd89bb515;
      do {
        uVar3 = ((int)cVar7 ^ uVar3) * 0x1000193;
        cVar7 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar7 != '\0');
      if (uVar3 == 0x1670b590) break;
    }
    uVar4 = uVar4 + 1;
  } while( true );
  in_stack_ffffffffffffff18 = auVar9._0_16_;
  (*(code *)((ulonglong)
             *(uint *)((ulonglong)*(uint *)(lVar2 + 0x1c + uVar1) + lVar2 +
                      (ulonglong)
                      *(ushort *)
                       ((ulonglong)*(uint *)(lVar2 + 0x24 + uVar1) + lVar2 +
                       (uVar4 & 0xffffffff) * 2) * 4) + lVar2))
            (local_b0,local_b8,local_c0,0,0,(ulonglong)pcVar11 & 0xffffffff00000000,
             in_stack_ffffffffffffff18);
  local_c4 = 1;
  lVar2 = readgsbase();
  lVar2 = *(longlong *)
           (**(longlong **)(*(longlong *)(*(longlong *)(lVar2 + 0x60) + 0x18) + 0x10) + 0x30);
  uVar1 = (ulonglong)*(uint *)(lVar2 + 0x88 + (longlong)*(int *)(lVar2 + 0x3c));
  uVar4 = 0;
  do {
    uVar5 = (ulonglong)*(uint *)((ulonglong)*(uint *)(lVar2 + 0x20 + uVar1) + lVar2 + uVar4 * 4);
    cVar7 = *(char *)(lVar2 + uVar5);
    if (cVar7 != '\0') {
      pcVar6 = (char *)(uVar5 + lVar2 + 1);
      uVar3 = 0xdf7c160e;
      do {
        uVar3 = ((int)cVar7 ^ uVar3) * 0x1000193;
        cVar7 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar7 != '\0');
      if (uVar3 == 0xedcb66ca) break;
    }
    uVar4 = uVar4 + 1;
  } while( true );
  (*(code *)((ulonglong)
             *(uint *)((ulonglong)*(uint *)(lVar2 + 0x1c + uVar1) + lVar2 +
                      (ulonglong)
                      *(ushort *)
                       ((ulonglong)*(uint *)(lVar2 + 0x24 + uVar1) + lVar2 +
                       (uVar4 & 0xffffffff) * 2) * 4) + lVar2))(local_a0,3,&local_c4,4);
  auVar8 = auVar9._0_16_;
  local_98 = ClientId.UniqueProcess;
  local_90 = ClientId.UniqueThread;
  auStack_84._8_4_ = 0;
  auStack_84._0_8_ = SUB128(ZEXT812(0),4);
  auStack_78._12_4_ = 0;
  auStack_78._0_12_ = ZEXT812(0);
  auStack_68 = (undefined1  [16])0x0;
  local_88 = 0x30;
  if (DAT_14012aca0 + 1U < 2) {
    lVar2 = readgsbase();
    lVar2 = *(longlong *)
             (**(longlong **)(*(longlong *)(*(longlong *)(lVar2 + 0x60) + 0x18) + 0x10) + 0x30);
    uVar1 = (ulonglong)*(uint *)(lVar2 + 0x88 + (longlong)*(int *)(lVar2 + 0x3c));
    uVar4 = 0;
    do {
      uVar5 = (ulonglong)*(uint *)((ulonglong)*(uint *)(lVar2 + 0x20 + uVar1) + lVar2 + uVar4 * 4);
      cVar7 = *(char *)(lVar2 + uVar5);
      if (cVar7 != '\0') {
        pcVar6 = (char *)(uVar5 + lVar2 + 1);
        uVar3 = 0xa1ba275b;
        do {
          uVar3 = ((int)cVar7 ^ uVar3) * 0x1000193;
          cVar7 = *pcVar6;
          pcVar6 = pcVar6 + 1;
        } while (cVar7 != '\0');
        if (uVar3 == 0x3f1727a9) goto code_r0x0001400ee682;
      }
      uVar4 = uVar4 + 1;
    } while( true );
  }
LAB_1400ee050:
  auVar9 = ZEXT1664(auVar8);
  Sleep(1000);
  goto LAB_1400ee05b;
code_r0x0001400ee682:
  auVar9 = ZEXT1664(auVar8);
  (*(code *)((ulonglong)
             *(uint *)((ulonglong)*(uint *)(lVar2 + 0x1c + uVar1) + lVar2 +
                      (ulonglong)
                      *(ushort *)
                       ((ulonglong)*(uint *)(lVar2 + 0x24 + uVar1) + lVar2 +
                       (uVar4 & 0xffffffff) * 2) * 4) + lVar2))
            (&DAT_14012aca0,0x2000000,&local_88,&local_98);
  auVar8 = auVar9._0_16_;
  goto LAB_1400ee050;
}

