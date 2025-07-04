    function targMap = targDataMap(),

    ;%***********************
    ;% Create Parameter Map *
    ;%***********************
    
        nTotData      = 0; %add to this count as we go
        nTotSects     = 1;
        sectIdxOffset = 0;

        ;%
        ;% Define dummy sections & preallocate arrays
        ;%
        dumSection.nData = -1;
        dumSection.data  = [];

        dumData.logicalSrcIdx = -1;
        dumData.dtTransOffset = -1;

        ;%
        ;% Init/prealloc paramMap
        ;%
        paramMap.nSections           = nTotSects;
        paramMap.sectIdxOffset       = sectIdxOffset;
            paramMap.sections(nTotSects) = dumSection; %prealloc
        paramMap.nTotData            = -1;

        ;%
        ;% Auto data (rtP)
        ;%
            section.nData     = 9;
            section.data(9)  = dumData; %prealloc

                    ;% rtP.Switch1_Threshold
                    section.data(1).logicalSrcIdx = 0;
                    section.data(1).dtTransOffset = 0;

                    ;% rtP.AudioDeviceWriter_P1
                    section.data(2).logicalSrcIdx = 1;
                    section.data(2).dtTransOffset = 1;

                    ;% rtP.AudioDeviceReader_P1
                    section.data(3).logicalSrcIdx = 2;
                    section.data(3).dtTransOffset = 2;

                    ;% rtP.Switch_Threshold
                    section.data(4).logicalSrcIdx = 3;
                    section.data(4).dtTransOffset = 3;

                    ;% rtP.Buffer_ic
                    section.data(5).logicalSrcIdx = 4;
                    section.data(5).dtTransOffset = 4;

                    ;% rtP.Constant4_Value
                    section.data(6).logicalSrcIdx = 5;
                    section.data(6).dtTransOffset = 5;

                    ;% rtP.Constant1_Value
                    section.data(7).logicalSrcIdx = 6;
                    section.data(7).dtTransOffset = 6;

                    ;% rtP.Constant2_Value
                    section.data(8).logicalSrcIdx = 7;
                    section.data(8).dtTransOffset = 7;

                    ;% rtP.Constant3_Value
                    section.data(9).logicalSrcIdx = 8;
                    section.data(9).dtTransOffset = 8;

            nTotData = nTotData + section.nData;
            paramMap.sections(1) = section;
            clear section


            ;%
            ;% Non-auto Data (parameter)
            ;%


        ;%
        ;% Add final counts to struct.
        ;%
        paramMap.nTotData = nTotData;



    ;%**************************
    ;% Create Block Output Map *
    ;%**************************
    
        nTotData      = 0; %add to this count as we go
        nTotSects     = 1;
        sectIdxOffset = 0;

        ;%
        ;% Define dummy sections & preallocate arrays
        ;%
        dumSection.nData = -1;
        dumSection.data  = [];

        dumData.logicalSrcIdx = -1;
        dumData.dtTransOffset = -1;

        ;%
        ;% Init/prealloc sigMap
        ;%
        sigMap.nSections           = nTotSects;
        sigMap.sectIdxOffset       = sectIdxOffset;
            sigMap.sections(nTotSects) = dumSection; %prealloc
        sigMap.nTotData            = -1;

        ;%
        ;% Auto data (rtB)
        ;%
            section.nData     = 9;
            section.data(9)  = dumData; %prealloc

                    ;% rtB.fm2bclfi1a
                    section.data(1).logicalSrcIdx = 0;
                    section.data(1).dtTransOffset = 0;

                    ;% rtB.bpytsqbdv1
                    section.data(2).logicalSrcIdx = 1;
                    section.data(2).dtTransOffset = 2048;

                    ;% rtB.ckdk3dpzbc
                    section.data(3).logicalSrcIdx = 2;
                    section.data(3).dtTransOffset = 3072;

                    ;% rtB.a2r1rksip5
                    section.data(4).logicalSrcIdx = 3;
                    section.data(4).dtTransOffset = 4096;

                    ;% rtB.iu1mablgic
                    section.data(5).logicalSrcIdx = 4;
                    section.data(5).dtTransOffset = 5120;

                    ;% rtB.jfsc5bkbri
                    section.data(6).logicalSrcIdx = 5;
                    section.data(6).dtTransOffset = 5121;

                    ;% rtB.cnwnvnufnf
                    section.data(7).logicalSrcIdx = 7;
                    section.data(7).dtTransOffset = 6145;

                    ;% rtB.bwikhqgzi1
                    section.data(8).logicalSrcIdx = 9;
                    section.data(8).dtTransOffset = 6176;

                    ;% rtB.mzsfr4barx
                    section.data(9).logicalSrcIdx = 10;
                    section.data(9).dtTransOffset = 6177;

            nTotData = nTotData + section.nData;
            sigMap.sections(1) = section;
            clear section


            ;%
            ;% Non-auto Data (signal)
            ;%


        ;%
        ;% Add final counts to struct.
        ;%
        sigMap.nTotData = nTotData;



    ;%*******************
    ;% Create DWork Map *
    ;%*******************
    
        nTotData      = 0; %add to this count as we go
        nTotSects     = 5;
        sectIdxOffset = 1;

        ;%
        ;% Define dummy sections & preallocate arrays
        ;%
        dumSection.nData = -1;
        dumSection.data  = [];

        dumData.logicalSrcIdx = -1;
        dumData.dtTransOffset = -1;

        ;%
        ;% Init/prealloc dworkMap
        ;%
        dworkMap.nSections           = nTotSects;
        dworkMap.sectIdxOffset       = sectIdxOffset;
            dworkMap.sections(nTotSects) = dumSection; %prealloc
        dworkMap.nTotData            = -1;

        ;%
        ;% Auto data (rtDW)
        ;%
            section.nData     = 5;
            section.data(5)  = dumData; %prealloc

                    ;% rtDW.eevlbptizq
                    section.data(1).logicalSrcIdx = 0;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.nr2inbcx3w
                    section.data(2).logicalSrcIdx = 1;
                    section.data(2).dtTransOffset = 40000;

                    ;% rtDW.oqn3pi044w
                    section.data(3).logicalSrcIdx = 2;
                    section.data(3).dtTransOffset = 40137;

                    ;% rtDW.e2vq1vlryh
                    section.data(4).logicalSrcIdx = 3;
                    section.data(4).dtTransOffset = 40142;

                    ;% rtDW.onrqffi2a1
                    section.data(5).logicalSrcIdx = 4;
                    section.data(5).dtTransOffset = 40153;

            nTotData = nTotData + section.nData;
            dworkMap.sections(1) = section;
            clear section

            section.nData     = 8;
            section.data(8)  = dumData; %prealloc

                    ;% rtDW.ksb220rab2
                    section.data(1).logicalSrcIdx = 5;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.aiwfpkwj3j
                    section.data(2).logicalSrcIdx = 6;
                    section.data(2).dtTransOffset = 1;

                    ;% rtDW.dhaotaxhrp
                    section.data(3).logicalSrcIdx = 7;
                    section.data(3).dtTransOffset = 2;

                    ;% rtDW.cpqu5t1geo
                    section.data(4).logicalSrcIdx = 8;
                    section.data(4).dtTransOffset = 3;

                    ;% rtDW.kvtskrthpe
                    section.data(5).logicalSrcIdx = 9;
                    section.data(5).dtTransOffset = 4;

                    ;% rtDW.oykxmdtwre
                    section.data(6).logicalSrcIdx = 10;
                    section.data(6).dtTransOffset = 5;

                    ;% rtDW.izi2tami0i
                    section.data(7).logicalSrcIdx = 11;
                    section.data(7).dtTransOffset = 6;

                    ;% rtDW.ls4dwl451y
                    section.data(8).logicalSrcIdx = 12;
                    section.data(8).dtTransOffset = 7;

            nTotData = nTotData + section.nData;
            dworkMap.sections(2) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtDW.m2b2bdbdfb
                    section.data(1).logicalSrcIdx = 13;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(3) = section;
            clear section

            section.nData     = 3;
            section.data(3)  = dumData; %prealloc

                    ;% rtDW.gzgwm4aj3x
                    section.data(1).logicalSrcIdx = 14;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.l05wjbovmj
                    section.data(2).logicalSrcIdx = 15;
                    section.data(2).dtTransOffset = 1096;

                    ;% rtDW.d431oespjx
                    section.data(3).logicalSrcIdx = 16;
                    section.data(3).dtTransOffset = 2192;

            nTotData = nTotData + section.nData;
            dworkMap.sections(4) = section;
            clear section

            section.nData     = 4;
            section.data(4)  = dumData; %prealloc

                    ;% rtDW.giubrblnl2
                    section.data(1).logicalSrcIdx = 17;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.j1ojzjtxum
                    section.data(2).logicalSrcIdx = 18;
                    section.data(2).dtTransOffset = 1;

                    ;% rtDW.p4hudmdwnu
                    section.data(3).logicalSrcIdx = 19;
                    section.data(3).dtTransOffset = 2;

                    ;% rtDW.gfdptv1xsh
                    section.data(4).logicalSrcIdx = 20;
                    section.data(4).dtTransOffset = 3;

            nTotData = nTotData + section.nData;
            dworkMap.sections(5) = section;
            clear section


            ;%
            ;% Non-auto Data (dwork)
            ;%


        ;%
        ;% Add final counts to struct.
        ;%
        dworkMap.nTotData = nTotData;



    ;%
    ;% Add individual maps to base struct.
    ;%

    targMap.paramMap  = paramMap;
    targMap.signalMap = sigMap;
    targMap.dworkMap  = dworkMap;

    ;%
    ;% Add checksums to base struct.
    ;%


    targMap.checksum0 = 3841060151;
    targMap.checksum1 = 3132833807;
    targMap.checksum2 = 1446850906;
    targMap.checksum3 = 3013277858;

