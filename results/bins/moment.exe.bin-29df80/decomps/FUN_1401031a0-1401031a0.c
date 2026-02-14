
void FUN_1401031a0(void)

{
  code *pcVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 _Src;
  int iVar4;
  size_t sVar5;
  void *pvVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong *plVar11;
  code cVar12;
  undefined8 *puVar13;
  code *pcVar14;
  uint uVar15;
  uint uVar16;
  ulonglong uVar17;
  char cVar18;
  undefined1 *puVar19;
  char *pcVar20;
  undefined1 *_Dst;
  bool bVar21;
  undefined1 local_a8 [32];
  ulonglong local_80;
  undefined1 local_78 [32];
  char *local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  iVar4 = _Mtx_lock(&DAT_14012b470);
  if (iVar4 == 0) {
    if (DAT_14012b4bc == 0x7fffffff) {
      DAT_14012b4bc = 0x7ffffffe;
      std::_Throw_Cpp_error(6);
    }
    do {
    } while ((DAT_14012b250 & 1) == 0);
  }
  else {
    std::_Throw_Cpp_error(5);
  }
  FUN_1400bb9d0((longlong *)local_78);
  _Src = local_78._0_8_;
  local_a8 = ZEXT1232(ZEXT812(0));
  sVar5 = strlen((char *)local_78._0_8_);
  if ((longlong)sVar5 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140086cb0();
  }
  if (sVar5 < 0x10) {
    local_a8._16_8_ = sVar5;
    local_a8._24_8_ = 0xf;
    memcpy(local_a8,(void *)_Src,sVar5);
    puVar19 = local_a8;
  }
  else {
    uVar10 = 0x16;
    if (0x16 < (sVar5 | 0xf)) {
      uVar10 = sVar5 | 0xf;
    }
    if (uVar10 < 0xfff) {
      puVar19 = operator_new(uVar10 + 1);
    }
    else {
      pvVar6 = operator_new(uVar10 + 0x28);
      puVar19 = (undefined1 *)((longlong)pvVar6 + 0x27U & 0xffffffffffffffe0);
      *(void **)(puVar19 + -8) = pvVar6;
    }
    local_a8._0_8_ = puVar19;
    local_a8._16_8_ = sVar5;
    local_a8._24_8_ = uVar10;
    memcpy(puVar19,(void *)_Src,sVar5);
  }
  puVar19[sVar5] = 0;
  if (local_78._0_8_ != 0) {
    uVar7 = 0;
    lVar9 = readgsbase();
    puVar2 = (undefined8 *)
             **(undefined8 **)(*(longlong *)(*(longlong *)(lVar9 + 0x60) + 0x18) + 0x10);
    uVar8 = 0x95ed46c;
    puVar13 = puVar2;
    do {
      if (uVar7 == 0) {
LAB_14010339d:
        lVar3 = puVar13[6];
        uVar15 = *(uint *)(lVar3 + 0x88 + (longlong)*(int *)(lVar3 + 0x3c));
        lVar9 = lVar3 + (ulonglong)uVar15;
        if ((ulonglong)uVar15 != 0) {
          uVar10 = (ulonglong)*(uint *)(lVar9 + 0x18);
          do {
            bVar21 = uVar10 == 0;
            uVar10 = uVar10 - 1;
            if (bVar21) goto LAB_140103353;
            uVar17 = (ulonglong)*(uint *)((ulonglong)*(uint *)(lVar9 + 0x20) + lVar3 + uVar10 * 4);
            cVar18 = *(char *)(lVar3 + uVar17);
            if (cVar18 == '\0') {
              uVar16 = 0xca89e2eb;
            }
            else {
              pcVar20 = (char *)(uVar17 + lVar3 + 1);
              uVar16 = 0xca89e2eb;
              do {
                uVar16 = ((int)cVar18 ^ uVar16) * 0x1000193;
                cVar18 = *pcVar20;
                pcVar20 = pcVar20 + 1;
              } while (cVar18 != '\0');
            }
          } while (uVar16 != uVar8);
          uVar7 = *(uint *)((ulonglong)*(uint *)(lVar9 + 0x1c) + lVar3 +
                           (ulonglong)
                           *(ushort *)
                            ((ulonglong)*(uint *)(lVar9 + 0x24) + lVar3 + (uVar10 & 0xffffffff) * 2)
                           * 4);
          pcVar14 = (code *)(lVar3 + (ulonglong)uVar7);
          if ((uVar7 <= uVar15) ||
             ((code *)(lVar9 + (ulonglong)*(uint *)(lVar3 + 0x8c + (longlong)*(int *)(lVar3 + 0x3c))
                      ) <= pcVar14)) goto LAB_1401034cf;
          uVar8 = 0xca89e2eb;
          uVar7 = 0xca89e2eb;
          cVar12 = *pcVar14;
          while (cVar12 != (code)0x2e) {
            uVar7 = ((int)(char)cVar12 ^ uVar7) * 0x1000193;
            pcVar1 = pcVar14 + 1;
            pcVar14 = pcVar14 + 1;
            cVar12 = *pcVar1;
          }
          cVar12 = pcVar14[1];
          if (cVar12 != (code)0x0) {
            pcVar14 = pcVar14 + 2;
            uVar8 = 0xca89e2eb;
            do {
              uVar8 = ((int)(char)cVar12 ^ uVar8) * 0x1000193;
              cVar12 = *pcVar14;
              pcVar14 = pcVar14 + 1;
            } while (cVar12 != (code)0x0);
          }
          puVar13 = (undefined8 *)*puVar2;
        }
      }
      else {
        uVar15 = 0xca89e2eb;
        if (1 < (ushort)(*(int *)(puVar13 + 0xb) - 8U)) {
          lVar9 = 0;
          do {
            uVar15 = ((int)*(char *)(puVar13[0xc] + lVar9) ^ uVar15) * 0x1000193;
            lVar9 = lVar9 + 2;
          } while ((ulonglong)((*(int *)(puVar13 + 0xb) - 8U & 0xffff) >> 1) * 2 != lVar9);
        }
        if (uVar15 == uVar7) goto LAB_14010339d;
      }
LAB_140103353:
      puVar13 = (undefined8 *)*puVar13;
    } while( true );
  }
LAB_1401034e1:
  if ((ulonglong)local_a8._24_8_ < 0x10) {
    puVar19 = local_a8;
  }
  else {
    puVar19 = (undefined1 *)local_a8._0_8_;
  }
  local_80 = local_a8._24_8_;
  FUN_140103bd0((longlong *)&local_50);
  pcVar20 = local_50;
  local_78 = ZEXT1232(ZEXT812(0));
  sVar5 = strlen(local_50);
  if ((longlong)sVar5 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140086cb0();
  }
  if (sVar5 < 0x10) {
    local_78._16_8_ = sVar5;
    local_78._24_8_ = 0xf;
    memcpy(local_78,pcVar20,sVar5);
    _Dst = local_78;
  }
  else {
    uVar10 = 0x16;
    if (0x16 < (sVar5 | 0xf)) {
      uVar10 = sVar5 | 0xf;
    }
    if (uVar10 < 0xfff) {
      _Dst = operator_new(uVar10 + 1);
    }
    else {
      pvVar6 = operator_new(uVar10 + 0x28);
      _Dst = (undefined1 *)((longlong)pvVar6 + 0x27U & 0xffffffffffffffe0);
      *(void **)(_Dst + -8) = pvVar6;
    }
    local_78._0_8_ = _Dst;
    local_78._16_8_ = sVar5;
    local_78._24_8_ = uVar10;
    memcpy(_Dst,pcVar20,sVar5);
  }
  _Dst[sVar5] = 0;
  if (local_50 != (char *)0x0) {
    uVar7 = 0;
    lVar9 = readgsbase();
    puVar2 = (undefined8 *)
             **(undefined8 **)(*(longlong *)(*(longlong *)(lVar9 + 0x60) + 0x18) + 0x10);
    uVar8 = 0x95ed46c;
    puVar13 = puVar2;
    do {
      if (uVar7 == 0) {
LAB_1401037ed:
        lVar3 = puVar13[6];
        uVar15 = *(uint *)(lVar3 + 0x88 + (longlong)*(int *)(lVar3 + 0x3c));
        lVar9 = lVar3 + (ulonglong)uVar15;
        if ((ulonglong)uVar15 != 0) {
          uVar10 = (ulonglong)*(uint *)(lVar9 + 0x18);
          do {
            bVar21 = uVar10 == 0;
            uVar10 = uVar10 - 1;
            if (bVar21) goto LAB_1401037a3;
            uVar17 = (ulonglong)*(uint *)((ulonglong)*(uint *)(lVar9 + 0x20) + lVar3 + uVar10 * 4);
            cVar18 = *(char *)(lVar3 + uVar17);
            if (cVar18 == '\0') {
              uVar16 = 0xca89e2eb;
            }
            else {
              pcVar20 = (char *)(uVar17 + lVar3 + 1);
              uVar16 = 0xca89e2eb;
              do {
                uVar16 = ((int)cVar18 ^ uVar16) * 0x1000193;
                cVar18 = *pcVar20;
                pcVar20 = pcVar20 + 1;
              } while (cVar18 != '\0');
            }
          } while (uVar16 != uVar8);
          uVar7 = *(uint *)((ulonglong)*(uint *)(lVar9 + 0x1c) + lVar3 +
                           (ulonglong)
                           *(ushort *)
                            ((ulonglong)*(uint *)(lVar9 + 0x24) + lVar3 + (uVar10 & 0xffffffff) * 2)
                           * 4);
          pcVar14 = (code *)(lVar3 + (ulonglong)uVar7);
          if ((uVar7 <= uVar15) ||
             ((code *)(lVar9 + (ulonglong)*(uint *)(lVar3 + 0x8c + (longlong)*(int *)(lVar3 + 0x3c))
                      ) <= pcVar14)) goto LAB_14010391f;
          uVar8 = 0xca89e2eb;
          uVar7 = 0xca89e2eb;
          cVar12 = *pcVar14;
          while (cVar12 != (code)0x2e) {
            uVar7 = ((int)(char)cVar12 ^ uVar7) * 0x1000193;
            pcVar1 = pcVar14 + 1;
            pcVar14 = pcVar14 + 1;
            cVar12 = *pcVar1;
          }
          cVar12 = pcVar14[1];
          if (cVar12 != (code)0x0) {
            pcVar14 = pcVar14 + 2;
            uVar8 = 0xca89e2eb;
            do {
              uVar8 = ((int)(char)cVar12 ^ uVar8) * 0x1000193;
              cVar12 = *pcVar14;
              pcVar14 = pcVar14 + 1;
            } while (cVar12 != (code)0x0);
          }
          puVar13 = (undefined8 *)*puVar2;
        }
      }
      else {
        uVar15 = 0xca89e2eb;
        if (1 < (ushort)(*(int *)(puVar13 + 0xb) - 8U)) {
          lVar9 = 0;
          do {
            uVar15 = ((int)*(char *)(puVar13[0xc] + lVar9) ^ uVar15) * 0x1000193;
            lVar9 = lVar9 + 2;
          } while ((ulonglong)((*(int *)(puVar13 + 0xb) - 8U & 0xffff) >> 1) * 2 != lVar9);
        }
        if (uVar15 == uVar7) goto LAB_1401037ed;
      }
LAB_1401037a3:
      puVar13 = (undefined8 *)*puVar13;
    } while( true );
  }
LAB_140103931:
  plVar11 = (longlong *)local_78;
  if (0xf < (ulonglong)local_78._24_8_) {
    plVar11 = (longlong *)local_78._0_8_;
  }
  FUN_140103f00(plVar11,puVar19);
  FUN_1400bfe30((longlong *)local_78);
  FUN_1400bfe30((longlong *)local_a8);
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
LAB_1401034cf:
  (*pcVar14)(local_78._0_8_,0,0x8000);
  goto LAB_1401034e1;
LAB_14010391f:
  (*pcVar14)(local_50,0,0x8000);
  goto LAB_140103931;
}

