
void FUN_1400e1a30(void)

{
  code *pcVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auVar5 [32];
  void *pvVar6;
  wchar_t ******ppppppwVar7;
  uint uVar8;
  longlong *plVar9;
  undefined1 *puVar10;
  uint uVar11;
  longlong lVar12;
  ulonglong uVar13;
  code cVar14;
  undefined8 *puVar15;
  code *pcVar16;
  uint uVar17;
  char cVar18;
  uint uVar19;
  ulonglong uVar20;
  undefined1 (*_Src) [16];
  ulonglong uVar21;
  wchar_t *******pppppppwVar22;
  char *pcVar23;
  bool bVar24;
  undefined1 local_98 [32];
  undefined1 *local_70;
  wchar_t ******local_68;
  undefined8 uStack_60;
  ulonglong uStack_58;
  ulonglong uStack_50;
  undefined8 local_48;
  
  plVar4 = DAT_14012ac08;
  local_48 = 0xfffffffffffffffe;
  plVar9 = DAT_14012ac08;
LAB_1400e1a7d:
  plVar9 = (longlong *)*plVar9;
  if (plVar9 == plVar4) {
    return;
  }
  local_98 = ZEXT1232(ZEXT812(0));
  if ((ulonglong)plVar9[5] < 8) {
    _Src = (undefined1 (*) [16])(plVar9 + 2);
  }
  else {
    _Src = (undefined1 (*) [16])plVar9[2];
  }
  uVar21 = plVar9[4];
  if (0x7ffffffffffffffe < uVar21) {
                    /* WARNING: Subroutine does not return */
    FUN_140086cb0();
  }
  if (uVar21 < 8) {
    local_98._12_4_ = 0;
    local_98._0_12_ = ZEXT812(0);
    local_98._16_8_ = uVar21;
    local_98._24_8_ = 7;
    local_98._0_16_ = *_Src;
    auVar5 = local_98;
    local_68 = (wchar_t ******)0x5c002e005c005c;
    uStack_60 = 0;
    uStack_50 = 7;
    local_98._0_8_ = SUB168(*_Src,0);
    local_70 = (undefined1 *)local_98._0_8_;
    uVar13 = 7;
    local_98 = auVar5;
    if (uVar21 < 4) {
      uStack_58 = uVar21 + 4;
      memcpy(&uStack_60,local_98,uVar21 * 2);
      *(undefined2 *)((longlong)&uStack_60 + uVar21 * 2) = 0;
      goto LAB_1400e1cac;
    }
    puVar10 = local_98;
  }
  else {
    uVar13 = uVar21 | 7;
    if (0x7ffffffffffffffe < uVar13) {
LAB_1400e1fe4:
                    /* WARNING: Subroutine does not return */
      FUN_1400bb790();
    }
    if (uVar13 < 0xb) {
      uVar13 = 10;
    }
    if (uVar13 < 0x7ff) {
      puVar10 = operator_new(uVar13 * 2 + 2);
    }
    else {
      if (0x7fffffffffffffeb < uVar13) goto LAB_1400e1fe4;
      pvVar6 = operator_new(uVar13 * 2 + 0x29);
      puVar10 = (undefined1 *)((longlong)pvVar6 + 0x27U & 0xffffffffffffffe0);
      *(void **)(puVar10 + -8) = pvVar6;
    }
    local_98._0_8_ = puVar10;
    local_98._16_8_ = uVar21;
    local_98._24_8_ = uVar13;
    memcpy(puVar10,_Src,uVar21 * 2 + 2);
    local_68 = (wchar_t ******)0x5c002e005c005c;
    uStack_60 = 0;
    uStack_58 = 4;
    uStack_50 = 7;
    local_70 = puVar10;
    if (0x7ffffffffffffffa < uVar21) {
                    /* WARNING: Subroutine does not return */
      FUN_140086cb0();
    }
  }
  uStack_50 = 7;
  uStack_58 = 4;
  uStack_60 = 0;
  local_68 = (wchar_t ******)0x5c002e005c005c;
  uVar20 = uVar21 + 4 | 7;
  if (0x7ffffffffffffffe < uVar20) {
LAB_1400e1fd4:
                    /* WARNING: Subroutine does not return */
    FUN_1400bb790();
  }
  if (uVar20 < 0xb) {
    uVar20 = 10;
  }
  if (uVar20 < 0x7ff) {
    pppppppwVar22 = operator_new(uVar20 * 2 + 2);
  }
  else {
    if (0x7fffffffffffffeb < uVar20) goto LAB_1400e1fd4;
    ppppppwVar7 = operator_new(uVar20 * 2 + 0x29);
    pppppppwVar22 = (wchar_t *******)((longlong)ppppppwVar7 + 0x27U & 0xffffffffffffffe0);
    pppppppwVar22[-1] = ppppppwVar7;
  }
  *pppppppwVar22 = local_68;
  uStack_58 = uVar21 + 4;
  uStack_50 = uVar20;
  memcpy(pppppppwVar22 + 1,puVar10,uVar21 * 2);
  *(wchar_t *)((longlong)pppppppwVar22 + (uVar21 + 4) * 2) = L'\0';
  local_68 = (wchar_t ******)pppppppwVar22;
LAB_1400e1cac:
  uVar8 = 0;
  lVar12 = readgsbase();
  puVar2 = (undefined8 *)
           **(undefined8 **)(*(longlong *)(*(longlong *)(lVar12 + 0x60) + 0x18) + 0x10);
  uVar11 = 0x4f095876;
  puVar15 = puVar2;
  do {
    if (uVar8 == 0) {
LAB_1400e1d1d:
      lVar3 = puVar15[6];
      uVar17 = *(uint *)(lVar3 + 0x88 + (longlong)*(int *)(lVar3 + 0x3c));
      lVar12 = lVar3 + (ulonglong)uVar17;
      if ((ulonglong)uVar17 != 0) {
        uVar21 = (ulonglong)*(uint *)(lVar12 + 0x18);
        do {
          bVar24 = uVar21 == 0;
          uVar21 = uVar21 - 1;
          if (bVar24) goto LAB_1400e1cd3;
          uVar20 = (ulonglong)*(uint *)((ulonglong)*(uint *)(lVar12 + 0x20) + lVar3 + uVar21 * 4);
          cVar18 = *(char *)(lVar3 + uVar20);
          if (cVar18 == '\0') {
            uVar19 = 0xabaedc3b;
          }
          else {
            pcVar23 = (char *)(uVar20 + lVar3 + 1);
            uVar19 = 0xabaedc3b;
            do {
              uVar19 = ((int)cVar18 ^ uVar19) * 0x1000193;
              cVar18 = *pcVar23;
              pcVar23 = pcVar23 + 1;
            } while (cVar18 != '\0');
          }
        } while (uVar19 != uVar11);
        uVar8 = *(uint *)((ulonglong)*(uint *)(lVar12 + 0x1c) + lVar3 +
                         (ulonglong)
                         *(ushort *)
                          ((ulonglong)*(uint *)(lVar12 + 0x24) + lVar3 + (uVar21 & 0xffffffff) * 2)
                         * 4);
        pcVar16 = (code *)(lVar3 + (ulonglong)uVar8);
        if ((uVar8 <= uVar17) ||
           ((code *)(lVar12 + (ulonglong)*(uint *)(lVar3 + 0x8c + (longlong)*(int *)(lVar3 + 0x3c)))
            <= pcVar16)) break;
        uVar11 = 0xabaedc3b;
        uVar8 = 0xabaedc3b;
        cVar14 = *pcVar16;
        while (cVar14 != (code)0x2e) {
          uVar8 = ((int)(char)cVar14 ^ uVar8) * 0x1000193;
          pcVar1 = pcVar16 + 1;
          pcVar16 = pcVar16 + 1;
          cVar14 = *pcVar1;
        }
        cVar14 = pcVar16[1];
        if (cVar14 != (code)0x0) {
          pcVar16 = pcVar16 + 2;
          uVar11 = 0xabaedc3b;
          do {
            uVar11 = ((int)(char)cVar14 ^ uVar11) * 0x1000193;
            cVar14 = *pcVar16;
            pcVar16 = pcVar16 + 1;
          } while (cVar14 != (code)0x0);
        }
        puVar15 = (undefined8 *)*puVar2;
      }
    }
    else {
      uVar17 = 0xabaedc3b;
      if (1 < (ushort)(*(int *)(puVar15 + 0xb) - 8U)) {
        lVar12 = 0;
        do {
          uVar17 = ((int)*(char *)(puVar15[0xc] + lVar12) ^ uVar17) * 0x1000193;
          lVar12 = lVar12 + 2;
        } while ((ulonglong)((*(int *)(puVar15 + 0xb) - 8U & 0xffff) >> 1) * 2 != lVar12);
      }
      if (uVar17 == uVar8) goto LAB_1400e1d1d;
    }
LAB_1400e1cd3:
    puVar15 = (undefined8 *)*puVar15;
  } while( true );
  pppppppwVar22 = &local_68;
  if (7 < uStack_50) {
    pppppppwVar22 = (wchar_t *******)local_68;
  }
  lVar12 = (*pcVar16)(pppppppwVar22,0x80000000,1,0,3,0x80,0);
  if (lVar12 + 1U < 2) {
    if (7 < uStack_50) {
      pppppppwVar22 = (wchar_t *******)local_68;
      if ((0xfff < uStack_50 * 2 + 2) &&
         (pppppppwVar22 = (wchar_t *******)local_68[-1],
         0x1f < (ulonglong)((longlong)local_68 + (-8 - (longlong)pppppppwVar22))))
      goto LAB_1400e1ff4;
      free(pppppppwVar22);
    }
    if (uVar13 < 8) goto LAB_1400e1a7d;
    puVar10 = local_70;
    if ((uVar13 * 2 + 2 < 0x1000) ||
       (puVar10 = *(undefined1 **)(local_70 + -8),
       local_70 + (-8 - (longlong)puVar10) < &DAT_00000020)) {
      free(puVar10);
      goto LAB_1400e1a7d;
    }
  }
  else {
    LOCK();
    DAT_14012b250 = 1;
    UNLOCK();
    NtClose(lVar12);
    if (7 < uStack_50) {
      pppppppwVar22 = (wchar_t *******)local_68;
      if ((0xfff < uStack_50 * 2 + 2) &&
         (pppppppwVar22 = (wchar_t *******)local_68[-1],
         0x1f < (ulonglong)((longlong)local_68 + (-8 - (longlong)pppppppwVar22))))
      goto LAB_1400e1ff4;
      free(pppppppwVar22);
    }
    if ((ulonglong)local_98._24_8_ < 8) {
      return;
    }
    pvVar6 = (void *)local_98._0_8_;
    if ((local_98._24_8_ * 2 + 2U < 0x1000) ||
       (pvVar6 = *(void **)(local_98._0_8_ + -8),
       (ulonglong)(local_98._0_8_ + (-8 - (longlong)pvVar6)) < 0x20)) {
      free(pvVar6);
      return;
    }
  }
LAB_1400e1ff4:
                    /* WARNING: Subroutine does not return */
  _invalid_parameter_noinfo_noreturn();
}

