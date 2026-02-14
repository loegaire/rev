
void FUN_1400edaf0(void)

{
  code *pcVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  void *_ArgList;
  uintptr_t uVar5;
  uint uVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong *plVar10;
  code *pcVar11;
  code cVar12;
  uint uVar13;
  uint uVar14;
  char cVar15;
  ulonglong uVar16;
  char *pcVar17;
  bool bVar18;
  uint local_50 [2];
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  _ArgList = operator_new(1);
  uVar5 = _beginthreadex((void *)0x0,0,FUN_1400edfe0,_ArgList,0,local_50);
  if (uVar5 == 0) {
    local_50[0] = 0;
    std::_Throw_Cpp_error(6);
  }
  uVar9 = 0;
LAB_1400edb70:
  uVar3 = 0;
  lVar7 = readgsbase();
  plVar10 = (longlong *)(*(longlong *)(*(longlong *)(lVar7 + 0x60) + 0x18) + 0x10);
  uVar6 = 0xd4261fbe;
LAB_1400edbb6:
  plVar10 = (longlong *)*plVar10;
  if (uVar3 != 0) goto code_r0x0001400edbbd;
  goto LAB_1400edc0d;
code_r0x0001400edbbd:
  uVar13 = 0x2c564f5c;
  if (1 < (ushort)(*(int *)(plVar10 + 0xb) - 8U)) {
    lVar7 = 0;
    do {
      uVar13 = ((int)*(char *)(plVar10[0xc] + lVar7) ^ uVar13) * 0x1000193;
      lVar7 = lVar7 + 2;
    } while ((ulonglong)((*(int *)(plVar10 + 0xb) - 8U & 0xffff) >> 1) * 2 != lVar7);
  }
  if (uVar13 == uVar3) {
LAB_1400edc0d:
    lVar2 = plVar10[6];
    uVar13 = *(uint *)(lVar2 + 0x88 + (longlong)*(int *)(lVar2 + 0x3c));
    lVar7 = lVar2 + (ulonglong)uVar13;
    if ((ulonglong)uVar13 != 0) {
      uVar8 = (ulonglong)*(uint *)(lVar7 + 0x18);
      do {
        bVar18 = uVar8 == 0;
        uVar8 = uVar8 - 1;
        if (bVar18) goto LAB_1400edbb6;
        uVar16 = (ulonglong)*(uint *)((ulonglong)*(uint *)(lVar7 + 0x20) + lVar2 + uVar8 * 4);
        cVar15 = *(char *)(lVar2 + uVar16);
        if (cVar15 == '\0') {
          uVar14 = 0x2c564f5c;
        }
        else {
          pcVar17 = (char *)(uVar16 + lVar2 + 1);
          uVar14 = 0x2c564f5c;
          do {
            uVar14 = ((int)cVar15 ^ uVar14) * 0x1000193;
            cVar15 = *pcVar17;
            pcVar17 = pcVar17 + 1;
          } while (cVar15 != '\0');
        }
      } while (uVar14 != uVar6);
      uVar3 = *(uint *)((ulonglong)*(uint *)(lVar7 + 0x1c) + lVar2 +
                       (ulonglong)
                       *(ushort *)
                        ((ulonglong)*(uint *)(lVar7 + 0x24) + lVar2 + (uVar8 & 0xffffffff) * 2) * 4)
      ;
      pcVar11 = (code *)((ulonglong)uVar3 + lVar2);
      if ((uVar3 <= uVar13) ||
         ((code *)(lVar7 + (ulonglong)*(uint *)(lVar2 + 0x8c + (longlong)*(int *)(lVar2 + 0x3c))) <=
          pcVar11)) goto LAB_1400edd40;
      uVar6 = 0x2c564f5c;
      uVar3 = 0x2c564f5c;
      cVar12 = *pcVar11;
      while (cVar12 != (code)0x2e) {
        uVar3 = ((int)(char)cVar12 ^ uVar3) * 0x1000193;
        pcVar1 = pcVar11 + 1;
        pcVar11 = pcVar11 + 1;
        cVar12 = *pcVar1;
      }
      cVar12 = pcVar11[1];
      if (cVar12 != (code)0x0) {
        pcVar11 = pcVar11 + 2;
        uVar6 = 0x2c564f5c;
        do {
          uVar6 = ((int)(char)cVar12 ^ uVar6) * 0x1000193;
          cVar12 = *pcVar11;
          pcVar11 = pcVar11 + 1;
        } while (cVar12 != (code)0x0);
      }
      lVar7 = readgsbase();
      plVar10 = *(longlong **)(*(longlong *)(*(longlong *)(lVar7 + 0x60) + 0x18) + 0x10);
    }
  }
  goto LAB_1400edbb6;
LAB_1400edd40:
  (*pcVar11)(uVar5);
  uVar9 = uVar9 + 1;
  if (0x7f < uVar9) goto LAB_1400edd67;
  goto LAB_1400edb70;
LAB_1400edd67:
  lVar7 = readgsbase();
  plVar10 = (longlong *)(*(longlong *)(*(longlong *)(lVar7 + 0x60) + 0x18) + 0x10);
  uVar6 = 0x7757e6e7;
  uVar3 = 0;
LAB_1400edda6:
  plVar10 = (longlong *)*plVar10;
  if (uVar3 != 0) goto code_r0x0001400eddad;
  goto LAB_1400eddfd;
code_r0x0001400eddad:
  uVar13 = 0x8715a7ab;
  if (1 < (ushort)(*(int *)(plVar10 + 0xb) - 8U)) {
    lVar7 = 0;
    do {
      uVar13 = ((int)*(char *)(plVar10[0xc] + lVar7) ^ uVar13) * 0x1000193;
      lVar7 = lVar7 + 2;
    } while ((ulonglong)((*(int *)(plVar10 + 0xb) - 8U & 0xffff) >> 1) * 2 != lVar7);
  }
  if (uVar13 == uVar3) {
LAB_1400eddfd:
    lVar2 = plVar10[6];
    uVar13 = *(uint *)(lVar2 + 0x88 + (longlong)*(int *)(lVar2 + 0x3c));
    lVar7 = lVar2 + (ulonglong)uVar13;
    if ((ulonglong)uVar13 != 0) {
      uVar9 = (ulonglong)*(uint *)(lVar7 + 0x18);
      do {
        bVar18 = uVar9 == 0;
        uVar9 = uVar9 - 1;
        if (bVar18) goto LAB_1400edda6;
        uVar8 = (ulonglong)*(uint *)((ulonglong)*(uint *)(lVar7 + 0x20) + lVar2 + uVar9 * 4);
        cVar15 = *(char *)(lVar2 + uVar8);
        if (cVar15 == '\0') {
          uVar14 = 0x8715a7ab;
        }
        else {
          pcVar17 = (char *)(uVar8 + lVar2 + 1);
          uVar14 = 0x8715a7ab;
          do {
            uVar14 = ((int)cVar15 ^ uVar14) * 0x1000193;
            cVar15 = *pcVar17;
            pcVar17 = pcVar17 + 1;
          } while (cVar15 != '\0');
        }
      } while (uVar14 != uVar6);
      uVar3 = *(uint *)((ulonglong)*(uint *)(lVar7 + 0x1c) + lVar2 +
                       (ulonglong)
                       *(ushort *)
                        ((ulonglong)*(uint *)(lVar7 + 0x24) + lVar2 + (uVar9 & 0xffffffff) * 2) * 4)
      ;
      pcVar11 = (code *)((ulonglong)uVar3 + lVar2);
      if ((uVar3 <= uVar13) ||
         ((code *)(lVar7 + (ulonglong)*(uint *)(lVar2 + 0x8c + (longlong)*(int *)(lVar2 + 0x3c))) <=
          pcVar11)) goto LAB_1400edf30;
      uVar6 = 0x8715a7ab;
      uVar3 = 0x8715a7ab;
      cVar12 = *pcVar11;
      while (cVar12 != (code)0x2e) {
        uVar3 = ((int)(char)cVar12 ^ uVar3) * 0x1000193;
        pcVar1 = pcVar11 + 1;
        pcVar11 = pcVar11 + 1;
        cVar12 = *pcVar1;
      }
      cVar12 = pcVar11[1];
      if (cVar12 != (code)0x0) {
        pcVar11 = pcVar11 + 2;
        uVar6 = 0x8715a7ab;
        do {
          uVar6 = ((int)(char)cVar12 ^ uVar6) * 0x1000193;
          cVar12 = *pcVar11;
          pcVar11 = pcVar11 + 1;
        } while (cVar12 != (code)0x0);
      }
      lVar7 = readgsbase();
      plVar10 = *(longlong **)(*(longlong *)(*(longlong *)(lVar7 + 0x60) + 0x18) + 0x10);
    }
  }
  goto LAB_1400edda6;
LAB_1400edf30:
  iVar4 = (*pcVar11)(uVar5);
  if (iVar4 != -0x3fffffb6) {
    LOCK();
    DAT_14012b201 = 1;
    UNLOCK();
    LOCK();
    DAT_14012b250 = 1;
    UNLOCK();
  }
  Sleep(1000);
  goto LAB_1400edd67;
}

