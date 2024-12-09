function bio=Wind_Turbinebio
bio = [];
bio(1).blkName='Pitch Power On';
bio(1).sigName='';
bio(1).portIdx=0;
bio(1).dim=[1,1];
bio(1).sigWidth=1;
bio(1).sigAddress='&Wind_Turbine_B.PitchPowerOn';
bio(1).ndims=2;
bio(1).size=[];
bio(1).isStruct=false;
bio(getlenBIO) = bio(1);

bio(2).blkName='Blade Load/Lift and Drag/Point of Application';
bio(2).sigName='radius';
bio(2).portIdx=0;
bio(2).dim=[1,1];
bio(2).sigWidth=1;
bio(2).sigAddress='&Wind_Turbine_B.radius';
bio(2).ndims=2;
bio(2).size=[];
bio(2).isStruct=false;

bio(3).blkName='Blade Load/Lift and Drag/Divide';
bio(3).sigName='';
bio(3).portIdx=0;
bio(3).dim=[1,1];
bio(3).sigWidth=1;
bio(3).sigAddress='&Wind_Turbine_B.Divide';
bio(3).ndims=2;
bio(3).size=[];
bio(3).isStruct=false;

bio(4).blkName='Grid/mGrid/Kv';
bio(4).sigName='';
bio(4).portIdx=0;
bio(4).dim=[3,1];
bio(4).sigWidth=3;
bio(4).sigAddress='&Wind_Turbine_B.Kv_p[0].re';
bio(4).ndims=2;
bio(4).size=[];
bio(4).isStruct=true;

bio(5).blkName='Grid/mGrid/Kv1';
bio(5).sigName='';
bio(5).portIdx=0;
bio(5).dim=[3,1];
bio(5).sigWidth=3;
bio(5).sigAddress='&Wind_Turbine_B.Kv1_p[0].re';
bio(5).ndims=2;
bio(5).size=[];
bio(5).isStruct=true;

bio(6).blkName='Main Controller/Wind Input/Turbine State Machine/p1';
bio(6).sigName='';
bio(6).portIdx=0;
bio(6).dim=[1,1];
bio(6).sigWidth=1;
bio(6).sigAddress='&Wind_Turbine_B.pitch_brake';
bio(6).ndims=2;
bio(6).size=[];
bio(6).isStruct=false;

bio(7).blkName='Main Controller/Wind Input/Turbine State Machine/p2';
bio(7).sigName='';
bio(7).portIdx=1;
bio(7).dim=[1,1];
bio(7).sigWidth=1;
bio(7).sigAddress='&Wind_Turbine_B.parking_brake';
bio(7).ndims=2;
bio(7).size=[];
bio(7).isStruct=false;

bio(8).blkName='Main Controller/Wind Input/Turbine State Machine/p3';
bio(8).sigName='';
bio(8).portIdx=2;
bio(8).dim=[1,1];
bio(8).sigWidth=1;
bio(8).sigAddress='&Wind_Turbine_B.generator_trip';
bio(8).ndims=2;
bio(8).size=[];
bio(8).isStruct=false;

bio(9).blkName='Main Controller/Wind Input/Turbine State Machine/p4';
bio(9).sigName='';
bio(9).portIdx=3;
bio(9).dim=[1,1];
bio(9).sigWidth=1;
bio(9).sigAddress='&Wind_Turbine_B.turbine_state';
bio(9).ndims=2;
bio(9).size=[];
bio(9).isStruct=false;

bio(10).blkName='Main Controller/Wind Input/radps to rpm';
bio(10).sigName='';
bio(10).portIdx=0;
bio(10).dim=[1,1];
bio(10).sigWidth=1;
bio(10).sigAddress='&Wind_Turbine_B.radpstorpm';
bio(10).ndims=2;
bio(10).size=[];
bio(10).isStruct=false;

bio(11).blkName='Main Controller/Wind Input/Extension to Angle';
bio(11).sigName='';
bio(11).portIdx=0;
bio(11).dim=[3,1];
bio(11).sigWidth=3;
bio(11).sigAddress='&Wind_Turbine_B.ExtensiontoAngle[0]';
bio(11).ndims=2;
bio(11).size=[];
bio(11).isStruct=false;

bio(12).blkName='Scopes/Generator Scopes/radps2pu';
bio(12).sigName='Gen Spd, pu';
bio(12).portIdx=0;
bio(12).dim=[1,1];
bio(12).sigWidth=1;
bio(12).sigAddress='&Wind_Turbine_B.GenSpdpu';
bio(12).ndims=2;
bio(12).size=[];
bio(12).isStruct=false;

bio(13).blkName='Scopes/Generator Scopes/radps2rpm';
bio(13).sigName='';
bio(13).portIdx=0;
bio(13).dim=[1,1];
bio(13).sigWidth=1;
bio(13).sigAddress='&Wind_Turbine_B.radps2rpm_p';
bio(13).ndims=2;
bio(13).size=[];
bio(13).isStruct=false;

bio(14).blkName='Scopes/Generator Scopes/rpm2radps';
bio(14).sigName='';
bio(14).portIdx=0;
bio(14).dim=[1,1];
bio(14).sigWidth=1;
bio(14).sigAddress='&Wind_Turbine_B.rpm2radps';
bio(14).ndims=2;
bio(14).size=[];
bio(14).isStruct=false;

bio(15).blkName='Scopes/Generator Scopes/Divide';
bio(15).sigName='';
bio(15).portIdx=0;
bio(15).dim=[1,1];
bio(15).sigWidth=1;
bio(15).sigAddress='&Wind_Turbine_B.Divide_k';
bio(15).ndims=2;
bio(15).size=[];
bio(15).isStruct=false;

bio(16).blkName='Scopes/Generator Scopes/Saturation';
bio(16).sigName='';
bio(16).portIdx=0;
bio(16).dim=[1,1];
bio(16).sigWidth=1;
bio(16).sigAddress='&Wind_Turbine_B.Saturation_i';
bio(16).ndims=2;
bio(16).size=[];
bio(16).isStruct=false;

bio(17).blkName='Solver Configuration/EVAL_KEY/RATE_TRANSITION_10_1_1';
bio(17).sigName='';
bio(17).portIdx=0;
bio(17).dim=[1,1];
bio(17).sigWidth=1;
bio(17).sigAddress='&Wind_Turbine_B.RATE_TRANSITION_10_1_1';
bio(17).ndims=2;
bio(17).size=[];
bio(17).isStruct=false;

bio(18).blkName='Solver Configuration/EVAL_KEY/RATE_TRANSITION_1_1_1';
bio(18).sigName='';
bio(18).portIdx=0;
bio(18).dim=[1,1];
bio(18).sigWidth=1;
bio(18).sigAddress='&Wind_Turbine_B.RATE_TRANSITION_1_1_1';
bio(18).ndims=2;
bio(18).size=[];
bio(18).isStruct=false;

bio(19).blkName='Solver Configuration/EVAL_KEY/RATE_TRANSITION_2_1_1';
bio(19).sigName='';
bio(19).portIdx=0;
bio(19).dim=[1,1];
bio(19).sigWidth=1;
bio(19).sigAddress='&Wind_Turbine_B.RATE_TRANSITION_2_1_1';
bio(19).ndims=2;
bio(19).size=[];
bio(19).isStruct=false;

bio(20).blkName='Solver Configuration/EVAL_KEY/RATE_TRANSITION_3_1_1';
bio(20).sigName='';
bio(20).portIdx=0;
bio(20).dim=[1,1];
bio(20).sigWidth=1;
bio(20).sigAddress='&Wind_Turbine_B.RATE_TRANSITION_3_1_1';
bio(20).ndims=2;
bio(20).size=[];
bio(20).isStruct=false;

bio(21).blkName='Solver Configuration/EVAL_KEY/RATE_TRANSITION_4_1_1';
bio(21).sigName='';
bio(21).portIdx=0;
bio(21).dim=[1,1];
bio(21).sigWidth=1;
bio(21).sigAddress='&Wind_Turbine_B.RATE_TRANSITION_4_1_1';
bio(21).ndims=2;
bio(21).size=[];
bio(21).isStruct=false;

bio(22).blkName='Solver Configuration/EVAL_KEY/RATE_TRANSITION_5_1_1';
bio(22).sigName='';
bio(22).portIdx=0;
bio(22).dim=[1,1];
bio(22).sigWidth=1;
bio(22).sigAddress='&Wind_Turbine_B.RATE_TRANSITION_5_1_1';
bio(22).ndims=2;
bio(22).size=[];
bio(22).isStruct=false;

bio(23).blkName='Solver Configuration/EVAL_KEY/RATE_TRANSITION_6_1_1';
bio(23).sigName='';
bio(23).portIdx=0;
bio(23).dim=[1,1];
bio(23).sigWidth=1;
bio(23).sigAddress='&Wind_Turbine_B.RATE_TRANSITION_6_1_1';
bio(23).ndims=2;
bio(23).size=[];
bio(23).isStruct=false;

bio(24).blkName='Solver Configuration/EVAL_KEY/RATE_TRANSITION_7_1_1';
bio(24).sigName='';
bio(24).portIdx=0;
bio(24).dim=[1,1];
bio(24).sigWidth=1;
bio(24).sigAddress='&Wind_Turbine_B.RATE_TRANSITION_7_1_1';
bio(24).ndims=2;
bio(24).size=[];
bio(24).isStruct=false;

bio(25).blkName='Solver Configuration/EVAL_KEY/RATE_TRANSITION_8_1_1';
bio(25).sigName='';
bio(25).portIdx=0;
bio(25).dim=[1,1];
bio(25).sigWidth=1;
bio(25).sigAddress='&Wind_Turbine_B.RATE_TRANSITION_8_1_1';
bio(25).ndims=2;
bio(25).size=[];
bio(25).isStruct=false;

bio(26).blkName='Solver Configuration/EVAL_KEY/RATE_TRANSITION_9_1_1';
bio(26).sigName='';
bio(26).portIdx=0;
bio(26).dim=[1,1];
bio(26).sigWidth=1;
bio(26).sigAddress='&Wind_Turbine_B.RATE_TRANSITION_9_1_1';
bio(26).ndims=2;
bio(26).size=[];
bio(26).isStruct=false;

bio(27).blkName='Solver Configuration/EVAL_KEY/INPUT_10_1_1';
bio(27).sigName='';
bio(27).portIdx=0;
bio(27).dim=[4,1];
bio(27).sigWidth=4;
bio(27).sigAddress='&Wind_Turbine_B.INPUT_10_1_1[0]';
bio(27).ndims=2;
bio(27).size=[];
bio(27).isStruct=false;

bio(28).blkName='Solver Configuration/EVAL_KEY/INPUT_11_1_1';
bio(28).sigName='';
bio(28).portIdx=0;
bio(28).dim=[4,1];
bio(28).sigWidth=4;
bio(28).sigAddress='&Wind_Turbine_B.INPUT_11_1_1[0]';
bio(28).ndims=2;
bio(28).size=[];
bio(28).isStruct=false;

bio(29).blkName='Solver Configuration/EVAL_KEY/INPUT_12_1_1';
bio(29).sigName='';
bio(29).portIdx=0;
bio(29).dim=[4,1];
bio(29).sigWidth=4;
bio(29).sigAddress='&Wind_Turbine_B.INPUT_12_1_1[0]';
bio(29).ndims=2;
bio(29).size=[];
bio(29).isStruct=false;

bio(30).blkName='Solver Configuration/EVAL_KEY/INPUT_13_1_1';
bio(30).sigName='';
bio(30).portIdx=0;
bio(30).dim=[4,1];
bio(30).sigWidth=4;
bio(30).sigAddress='&Wind_Turbine_B.INPUT_13_1_1[0]';
bio(30).ndims=2;
bio(30).size=[];
bio(30).isStruct=false;

bio(31).blkName='Solver Configuration/EVAL_KEY/INPUT_14_1_1';
bio(31).sigName='';
bio(31).portIdx=0;
bio(31).dim=[4,1];
bio(31).sigWidth=4;
bio(31).sigAddress='&Wind_Turbine_B.INPUT_14_1_1[0]';
bio(31).ndims=2;
bio(31).size=[];
bio(31).isStruct=false;

bio(32).blkName='Solver Configuration/EVAL_KEY/INPUT_15_1_1';
bio(32).sigName='';
bio(32).portIdx=0;
bio(32).dim=[4,1];
bio(32).sigWidth=4;
bio(32).sigAddress='&Wind_Turbine_B.INPUT_15_1_1[0]';
bio(32).ndims=2;
bio(32).size=[];
bio(32).isStruct=false;

bio(33).blkName='Solver Configuration/EVAL_KEY/INPUT_16_1_1';
bio(33).sigName='';
bio(33).portIdx=0;
bio(33).dim=[4,1];
bio(33).sigWidth=4;
bio(33).sigAddress='&Wind_Turbine_B.INPUT_16_1_1[0]';
bio(33).ndims=2;
bio(33).size=[];
bio(33).isStruct=false;

bio(34).blkName='Solver Configuration/EVAL_KEY/INPUT_17_1_1';
bio(34).sigName='';
bio(34).portIdx=0;
bio(34).dim=[4,1];
bio(34).sigWidth=4;
bio(34).sigAddress='&Wind_Turbine_B.INPUT_17_1_1[0]';
bio(34).ndims=2;
bio(34).size=[];
bio(34).isStruct=false;

bio(35).blkName='Solver Configuration/EVAL_KEY/INPUT_18_1_1';
bio(35).sigName='';
bio(35).portIdx=0;
bio(35).dim=[4,1];
bio(35).sigWidth=4;
bio(35).sigAddress='&Wind_Turbine_B.INPUT_18_1_1[0]';
bio(35).ndims=2;
bio(35).size=[];
bio(35).isStruct=false;

bio(36).blkName='Solver Configuration/EVAL_KEY/INPUT_1_1_1';
bio(36).sigName='';
bio(36).portIdx=0;
bio(36).dim=[4,1];
bio(36).sigWidth=4;
bio(36).sigAddress='&Wind_Turbine_B.INPUT_1_1_1[0]';
bio(36).ndims=2;
bio(36).size=[];
bio(36).isStruct=false;

bio(37).blkName='Solver Configuration/EVAL_KEY/INPUT_1_2_1';
bio(37).sigName='';
bio(37).portIdx=0;
bio(37).dim=[4,1];
bio(37).sigWidth=4;
bio(37).sigAddress='&Wind_Turbine_B.INPUT_1_2_1[0]';
bio(37).ndims=2;
bio(37).size=[];
bio(37).isStruct=false;

bio(38).blkName='Solver Configuration/EVAL_KEY/INPUT_1_3_1';
bio(38).sigName='';
bio(38).portIdx=0;
bio(38).dim=[4,1];
bio(38).sigWidth=4;
bio(38).sigAddress='&Wind_Turbine_B.INPUT_1_3_1[0]';
bio(38).ndims=2;
bio(38).size=[];
bio(38).isStruct=false;

bio(39).blkName='Solver Configuration/EVAL_KEY/INPUT_2_1_1';
bio(39).sigName='';
bio(39).portIdx=0;
bio(39).dim=[4,1];
bio(39).sigWidth=4;
bio(39).sigAddress='&Wind_Turbine_B.INPUT_2_1_1[0]';
bio(39).ndims=2;
bio(39).size=[];
bio(39).isStruct=false;

bio(40).blkName='Solver Configuration/EVAL_KEY/INPUT_2_2_1';
bio(40).sigName='';
bio(40).portIdx=0;
bio(40).dim=[4,1];
bio(40).sigWidth=4;
bio(40).sigAddress='&Wind_Turbine_B.INPUT_2_2_1[0]';
bio(40).ndims=2;
bio(40).size=[];
bio(40).isStruct=false;

bio(41).blkName='Solver Configuration/EVAL_KEY/INPUT_2_3_1';
bio(41).sigName='';
bio(41).portIdx=0;
bio(41).dim=[4,1];
bio(41).sigWidth=4;
bio(41).sigAddress='&Wind_Turbine_B.INPUT_2_3_1[0]';
bio(41).ndims=2;
bio(41).size=[];
bio(41).isStruct=false;

bio(42).blkName='Solver Configuration/EVAL_KEY/INPUT_3_1_1';
bio(42).sigName='';
bio(42).portIdx=0;
bio(42).dim=[4,1];
bio(42).sigWidth=4;
bio(42).sigAddress='&Wind_Turbine_B.INPUT_3_1_1[0]';
bio(42).ndims=2;
bio(42).size=[];
bio(42).isStruct=false;

bio(43).blkName='Solver Configuration/EVAL_KEY/INPUT_3_2_1';
bio(43).sigName='';
bio(43).portIdx=0;
bio(43).dim=[4,1];
bio(43).sigWidth=4;
bio(43).sigAddress='&Wind_Turbine_B.INPUT_3_2_1[0]';
bio(43).ndims=2;
bio(43).size=[];
bio(43).isStruct=false;

bio(44).blkName='Solver Configuration/EVAL_KEY/INPUT_3_3_1';
bio(44).sigName='';
bio(44).portIdx=0;
bio(44).dim=[4,1];
bio(44).sigWidth=4;
bio(44).sigAddress='&Wind_Turbine_B.INPUT_3_3_1[0]';
bio(44).ndims=2;
bio(44).size=[];
bio(44).isStruct=false;

bio(45).blkName='Solver Configuration/EVAL_KEY/INPUT_4_1_1';
bio(45).sigName='';
bio(45).portIdx=0;
bio(45).dim=[4,1];
bio(45).sigWidth=4;
bio(45).sigAddress='&Wind_Turbine_B.INPUT_4_1_1[0]';
bio(45).ndims=2;
bio(45).size=[];
bio(45).isStruct=false;

bio(46).blkName='Solver Configuration/EVAL_KEY/INPUT_5_1_1';
bio(46).sigName='';
bio(46).portIdx=0;
bio(46).dim=[4,1];
bio(46).sigWidth=4;
bio(46).sigAddress='&Wind_Turbine_B.INPUT_5_1_1[0]';
bio(46).ndims=2;
bio(46).size=[];
bio(46).isStruct=false;

bio(47).blkName='Solver Configuration/EVAL_KEY/INPUT_6_1_1';
bio(47).sigName='';
bio(47).portIdx=0;
bio(47).dim=[4,1];
bio(47).sigWidth=4;
bio(47).sigAddress='&Wind_Turbine_B.INPUT_6_1_1[0]';
bio(47).ndims=2;
bio(47).size=[];
bio(47).isStruct=false;

bio(48).blkName='Solver Configuration/EVAL_KEY/INPUT_7_1_1';
bio(48).sigName='';
bio(48).portIdx=0;
bio(48).dim=[4,1];
bio(48).sigWidth=4;
bio(48).sigAddress='&Wind_Turbine_B.INPUT_7_1_1[0]';
bio(48).ndims=2;
bio(48).size=[];
bio(48).isStruct=false;

bio(49).blkName='Solver Configuration/EVAL_KEY/INPUT_8_1_1';
bio(49).sigName='';
bio(49).portIdx=0;
bio(49).dim=[4,1];
bio(49).sigWidth=4;
bio(49).sigAddress='&Wind_Turbine_B.INPUT_8_1_1[0]';
bio(49).ndims=2;
bio(49).size=[];
bio(49).isStruct=false;

bio(50).blkName='Solver Configuration/EVAL_KEY/INPUT_9_1_1';
bio(50).sigName='';
bio(50).portIdx=0;
bio(50).dim=[4,1];
bio(50).sigWidth=4;
bio(50).sigAddress='&Wind_Turbine_B.INPUT_9_1_1[0]';
bio(50).ndims=2;
bio(50).size=[];
bio(50).isStruct=false;

bio(51).blkName='Solver Configuration/EVAL_KEY/INTERNAL_10_1_1';
bio(51).sigName='';
bio(51).portIdx=0;
bio(51).dim=[4,1];
bio(51).sigWidth=4;
bio(51).sigAddress='&Wind_Turbine_B.INTERNAL_10_1_1[0]';
bio(51).ndims=2;
bio(51).size=[];
bio(51).isStruct=false;

bio(52).blkName='Solver Configuration/EVAL_KEY/INTERNAL_1_1_1';
bio(52).sigName='';
bio(52).portIdx=0;
bio(52).dim=[4,1];
bio(52).sigWidth=4;
bio(52).sigAddress='&Wind_Turbine_B.INTERNAL_1_1_1[0]';
bio(52).ndims=2;
bio(52).size=[];
bio(52).isStruct=false;

bio(53).blkName='Solver Configuration/EVAL_KEY/INTERNAL_2_1_1';
bio(53).sigName='';
bio(53).portIdx=0;
bio(53).dim=[4,1];
bio(53).sigWidth=4;
bio(53).sigAddress='&Wind_Turbine_B.INTERNAL_2_1_1[0]';
bio(53).ndims=2;
bio(53).size=[];
bio(53).isStruct=false;

bio(54).blkName='Solver Configuration/EVAL_KEY/INTERNAL_3_1_1';
bio(54).sigName='';
bio(54).portIdx=0;
bio(54).dim=[4,1];
bio(54).sigWidth=4;
bio(54).sigAddress='&Wind_Turbine_B.INTERNAL_3_1_1[0]';
bio(54).ndims=2;
bio(54).size=[];
bio(54).isStruct=false;

bio(55).blkName='Solver Configuration/EVAL_KEY/INTERNAL_4_1_1';
bio(55).sigName='';
bio(55).portIdx=0;
bio(55).dim=[4,1];
bio(55).sigWidth=4;
bio(55).sigAddress='&Wind_Turbine_B.INTERNAL_4_1_1[0]';
bio(55).ndims=2;
bio(55).size=[];
bio(55).isStruct=false;

bio(56).blkName='Solver Configuration/EVAL_KEY/INTERNAL_5_1_1';
bio(56).sigName='';
bio(56).portIdx=0;
bio(56).dim=[4,1];
bio(56).sigWidth=4;
bio(56).sigAddress='&Wind_Turbine_B.INTERNAL_5_1_1[0]';
bio(56).ndims=2;
bio(56).size=[];
bio(56).isStruct=false;

bio(57).blkName='Solver Configuration/EVAL_KEY/INTERNAL_6_1_1';
bio(57).sigName='';
bio(57).portIdx=0;
bio(57).dim=[4,1];
bio(57).sigWidth=4;
bio(57).sigAddress='&Wind_Turbine_B.INTERNAL_6_1_1[0]';
bio(57).ndims=2;
bio(57).size=[];
bio(57).isStruct=false;

bio(58).blkName='Solver Configuration/EVAL_KEY/INTERNAL_7_1_1';
bio(58).sigName='';
bio(58).portIdx=0;
bio(58).dim=[4,1];
bio(58).sigWidth=4;
bio(58).sigAddress='&Wind_Turbine_B.INTERNAL_7_1_1[0]';
bio(58).ndims=2;
bio(58).size=[];
bio(58).isStruct=false;

bio(59).blkName='Solver Configuration/EVAL_KEY/INTERNAL_8_1_1';
bio(59).sigName='';
bio(59).portIdx=0;
bio(59).dim=[4,1];
bio(59).sigWidth=4;
bio(59).sigAddress='&Wind_Turbine_B.INTERNAL_8_1_1[0]';
bio(59).ndims=2;
bio(59).size=[];
bio(59).isStruct=false;

bio(60).blkName='Solver Configuration/EVAL_KEY/INTERNAL_9_1_1';
bio(60).sigName='';
bio(60).portIdx=0;
bio(60).dim=[4,1];
bio(60).sigWidth=4;
bio(60).sigAddress='&Wind_Turbine_B.INTERNAL_9_1_1[0]';
bio(60).ndims=2;
bio(60).size=[];
bio(60).isStruct=false;

bio(61).blkName='Solver Configuration/EVAL_KEY/OUTPUT_1_0';
bio(61).sigName='';
bio(61).portIdx=0;
bio(61).dim=[17,1];
bio(61).sigWidth=17;
bio(61).sigAddress='&Wind_Turbine_B.OUTPUT_1_0[0]';
bio(61).ndims=2;
bio(61).size=[];
bio(61).isStruct=false;

bio(62).blkName='Solver Configuration/EVAL_KEY/OUTPUT_2_0';
bio(62).sigName='';
bio(62).portIdx=0;
bio(62).dim=[7,1];
bio(62).sigWidth=7;
bio(62).sigAddress='&Wind_Turbine_B.OUTPUT_2_0[0]';
bio(62).ndims=2;
bio(62).size=[];
bio(62).isStruct=false;

bio(63).blkName='Solver Configuration/EVAL_KEY/OUTPUT_3_0';
bio(63).sigName='';
bio(63).portIdx=0;
bio(63).dim=[7,1];
bio(63).sigWidth=7;
bio(63).sigAddress='&Wind_Turbine_B.OUTPUT_3_0[0]';
bio(63).ndims=2;
bio(63).size=[];
bio(63).isStruct=false;

bio(64).blkName='Solver Configuration/EVAL_KEY/OUTPUT_4_0';
bio(64).sigName='';
bio(64).portIdx=0;
bio(64).dim=[4,1];
bio(64).sigWidth=4;
bio(64).sigAddress='&Wind_Turbine_B.OUTPUT_4_0[0]';
bio(64).ndims=2;
bio(64).size=[];
bio(64).isStruct=false;

bio(65).blkName='Solver Configuration/EVAL_KEY/OUTPUT_5_0';
bio(65).sigName='';
bio(65).portIdx=0;
bio(65).dim=[7,1];
bio(65).sigWidth=7;
bio(65).sigAddress='&Wind_Turbine_B.OUTPUT_5_0[0]';
bio(65).ndims=2;
bio(65).size=[];
bio(65).isStruct=false;

bio(66).blkName='Solver Configuration/EVAL_KEY/OUTPUT_6_0';
bio(66).sigName='';
bio(66).portIdx=0;
bio(66).dim=[9,1];
bio(66).sigWidth=9;
bio(66).sigAddress='&Wind_Turbine_B.OUTPUT_6_0[0]';
bio(66).ndims=2;
bio(66).size=[];
bio(66).isStruct=false;

bio(67).blkName='Solver Configuration/EVAL_KEY/OUTPUT_6_1';
bio(67).sigName='';
bio(67).portIdx=0;
bio(67).dim=[18,1];
bio(67).sigWidth=18;
bio(67).sigAddress='&Wind_Turbine_B.OUTPUT_6_1[0]';
bio(67).ndims=2;
bio(67).size=[];
bio(67).isStruct=false;

bio(68).blkName='Solver Configuration/EVAL_KEY/STATE_1';
bio(68).sigName='';
bio(68).portIdx=0;
bio(68).dim=[118,1];
bio(68).sigWidth=118;
bio(68).sigAddress='&Wind_Turbine_B.STATE_1[0]';
bio(68).ndims=2;
bio(68).size=[];
bio(68).isStruct=false;

bio(69).blkName='Solver Configuration/EVAL_KEY/STATE_2';
bio(69).sigName='';
bio(69).portIdx=0;
bio(69).dim=[48,1];
bio(69).sigWidth=48;
bio(69).sigAddress='&Wind_Turbine_B.STATE_2[0]';
bio(69).ndims=2;
bio(69).size=[];
bio(69).isStruct=false;

bio(70).blkName='Solver Configuration/EVAL_KEY/STATE_3';
bio(70).sigName='';
bio(70).portIdx=0;
bio(70).dim=[48,1];
bio(70).sigWidth=48;
bio(70).sigAddress='&Wind_Turbine_B.STATE_3[0]';
bio(70).ndims=2;
bio(70).size=[];
bio(70).isStruct=false;

bio(71).blkName='Solver Configuration/EVAL_KEY/STATE_4';
bio(71).sigName='';
bio(71).portIdx=0;
bio(71).dim=[38,1];
bio(71).sigWidth=38;
bio(71).sigAddress='&Wind_Turbine_B.STATE_4[0]';
bio(71).ndims=2;
bio(71).size=[];
bio(71).isStruct=false;

bio(72).blkName='Solver Configuration/EVAL_KEY/STATE_5';
bio(72).sigName='';
bio(72).portIdx=0;
bio(72).dim=[48,1];
bio(72).sigWidth=48;
bio(72).sigAddress='&Wind_Turbine_B.STATE_5[0]';
bio(72).ndims=2;
bio(72).size=[];
bio(72).isStruct=false;

bio(73).blkName='Solver Configuration/EVAL_KEY/STATE_6';
bio(73).sigName='';
bio(73).portIdx=0;
bio(73).dim=[28,1];
bio(73).sigWidth=28;
bio(73).sigAddress='&Wind_Turbine_B.STATE_6[0]';
bio(73).ndims=2;
bio(73).size=[];
bio(73).isStruct=false;

bio(74).blkName='Yaw Controller/Yaw Controller/Derivative Control';
bio(74).sigName='';
bio(74).portIdx=0;
bio(74).dim=[1,1];
bio(74).sigWidth=1;
bio(74).sigAddress='&Wind_Turbine_B.DerivativeControl';
bio(74).ndims=2;
bio(74).size=[];
bio(74).isStruct=false;

bio(75).blkName='Yaw Controller/Yaw Controller/Limit Nacelle Yaw Rate Cmd';
bio(75).sigName='';
bio(75).portIdx=0;
bio(75).dim=[4,1];
bio(75).sigWidth=4;
bio(75).sigAddress='&Wind_Turbine_B.LimitNacelleYawRateCmd[0]';
bio(75).ndims=2;
bio(75).size=[];
bio(75).isStruct=false;

bio(76).blkName='Yaw Controller/Yaw Controller/Limit Servomotor Torque Cmd';
bio(76).sigName='Torque Command';
bio(76).portIdx=0;
bio(76).dim=[4,1];
bio(76).sigWidth=4;
bio(76).sigAddress='&Wind_Turbine_B.TorqueCommand[0]';
bio(76).ndims=2;
bio(76).size=[];
bio(76).isStruct=false;

bio(77).blkName='Yaw Controller/Yaw Controller/Sum';
bio(77).sigName='';
bio(77).portIdx=0;
bio(77).dim=[4,1];
bio(77).sigWidth=4;
bio(77).sigAddress='&Wind_Turbine_B.Sum_gv[0]';
bio(77).ndims=2;
bio(77).size=[];
bio(77).isStruct=false;

bio(78).blkName='Yaw Controller/Yaw Controller/Sum1';
bio(78).sigName='';
bio(78).portIdx=0;
bio(78).dim=[4,1];
bio(78).sigWidth=4;
bio(78).sigAddress='&Wind_Turbine_B.Sum1_g[0]';
bio(78).ndims=2;
bio(78).size=[];
bio(78).isStruct=false;

bio(79).blkName='Yaw Controller/Yaw Controller/Sum3';
bio(79).sigName='';
bio(79).portIdx=0;
bio(79).dim=[4,1];
bio(79).sigWidth=4;
bio(79).sigAddress='&Wind_Turbine_B.Sum3_kq[0]';
bio(79).ndims=2;
bio(79).size=[];
bio(79).isStruct=false;

bio(80).blkName='powergui/EquivalentModel1/State-Space';
bio(80).sigName='';
bio(80).portIdx=0;
bio(80).dim=[34,1];
bio(80).sigWidth=34;
bio(80).sigAddress='&Wind_Turbine_B.StateSpace[0]';
bio(80).ndims=2;
bio(80).size=[];
bio(80).isStruct=false;

bio(81).blkName='Blade Load/Lift and Drag/Apply Moments/Gain';
bio(81).sigName='';
bio(81).portIdx=0;
bio(81).dim=[1,1];
bio(81).sigWidth=1;
bio(81).sigAddress='&Wind_Turbine_B.Gain_gi';
bio(81).ndims=2;
bio(81).size=[];
bio(81).isStruct=false;

bio(82).blkName='Blade Load/Lift and Drag/Calculate Angle of Attack/Subtract';
bio(82).sigName='alpha';
bio(82).portIdx=0;
bio(82).dim=[1,1];
bio(82).sigWidth=1;
bio(82).sigAddress='&Wind_Turbine_B.alpha';
bio(82).ndims=2;
bio(82).size=[];
bio(82).isStruct=false;

bio(83).blkName='Blade Load/Lift and Drag/Calculate Angle of Attack/Trigonometric Function';
bio(83).sigName='';
bio(83).portIdx=0;
bio(83).dim=[1,1];
bio(83).sigWidth=1;
bio(83).sigAddress='&Wind_Turbine_B.TrigonometricFunction_d';
bio(83).ndims=2;
bio(83).size=[];
bio(83).isStruct=false;

bio(84).blkName='Blade Load/Lift and Drag/Calculate Lift and Drag Forces/R*c';
bio(84).sigName='Q*S';
bio(84).portIdx=0;
bio(84).dim=[1,1];
bio(84).sigWidth=1;
bio(84).sigAddress='&Wind_Turbine_B.QS';
bio(84).ndims=2;
bio(84).size=[];
bio(84).isStruct=false;

bio(85).blkName='Blade Load/Lift and Drag/Calculate Lift and Drag Forces/Math Function1';
bio(85).sigName='';
bio(85).portIdx=0;
bio(85).dim=[1,1];
bio(85).sigWidth=1;
bio(85).sigAddress='&Wind_Turbine_B.MathFunction1';
bio(85).ndims=2;
bio(85).size=[];
bio(85).isStruct=false;

bio(86).blkName='Blade Load/Lift and Drag/Calculate Lift and Drag Forces/Math Function2';
bio(86).sigName='';
bio(86).portIdx=0;
bio(86).dim=[1,1];
bio(86).sigWidth=1;
bio(86).sigAddress='&Wind_Turbine_B.MathFunction2';
bio(86).ndims=2;
bio(86).size=[];
bio(86).isStruct=false;

bio(87).blkName='Blade Load/Lift and Drag/Calculate Lift and Drag Forces/Divide1';
bio(87).sigName='Q';
bio(87).portIdx=0;
bio(87).dim=[1,1];
bio(87).sigWidth=1;
bio(87).sigAddress='&Wind_Turbine_B.Q';
bio(87).ndims=2;
bio(87).size=[];
bio(87).isStruct=false;

bio(88).blkName='Blade Load/Lift and Drag/Calculate Lift and Drag Forces/Divide4';
bio(88).sigName='Lift Force';
bio(88).portIdx=0;
bio(88).dim=[1,1];
bio(88).sigWidth=1;
bio(88).sigAddress='&Wind_Turbine_B.LiftForce';
bio(88).ndims=2;
bio(88).size=[];
bio(88).isStruct=false;

bio(89).blkName='Blade Load/Lift and Drag/Calculate Lift and Drag Forces/Divide5';
bio(89).sigName='Drag Force';
bio(89).portIdx=0;
bio(89).dim=[1,1];
bio(89).sigWidth=1;
bio(89).sigAddress='&Wind_Turbine_B.DragForce';
bio(89).ndims=2;
bio(89).size=[];
bio(89).isStruct=false;

bio(90).blkName='Blade Load/Lift and Drag/Calculate Lift and Drag Forces/Add';
bio(90).sigName='V^2';
bio(90).portIdx=0;
bio(90).dim=[1,1];
bio(90).sigWidth=1;
bio(90).sigAddress='&Wind_Turbine_B.V2_c';
bio(90).ndims=2;
bio(90).size=[];
bio(90).isStruct=false;

bio(91).blkName='Blade Load/Lift and Drag/Lag Pitch/Gain';
bio(91).sigName='';
bio(91).portIdx=0;
bio(91).dim=[1,1];
bio(91).sigWidth=1;
bio(91).sigAddress='&Wind_Turbine_B.Gain_j';
bio(91).ndims=2;
bio(91).size=[];
bio(91).isStruct=false;

bio(92).blkName='Blade Load/Lift and Drag/Lag Pitch/Integrator';
bio(92).sigName='';
bio(92).portIdx=0;
bio(92).dim=[1,1];
bio(92).sigWidth=1;
bio(92).sigAddress='&Wind_Turbine_B.Integrator_c';
bio(92).ndims=2;
bio(92).size=[];
bio(92).isStruct=false;

bio(93).blkName='Blade Load/Lift and Drag/Lag Pitch/Sum';
bio(93).sigName='';
bio(93).portIdx=0;
bio(93).dim=[1,1];
bio(93).sigWidth=1;
bio(93).sigAddress='&Wind_Turbine_B.Sum_c';
bio(93).ndims=2;
bio(93).size=[];
bio(93).isStruct=false;

bio(94).blkName='Blade Load/Lift and Drag/Lag Rotor Spd/Gain';
bio(94).sigName='';
bio(94).portIdx=0;
bio(94).dim=[1,1];
bio(94).sigWidth=1;
bio(94).sigAddress='&Wind_Turbine_B.Gain_ep';
bio(94).ndims=2;
bio(94).size=[];
bio(94).isStruct=false;

bio(95).blkName='Blade Load/Lift and Drag/Lag Rotor Spd/Integrator';
bio(95).sigName='';
bio(95).portIdx=0;
bio(95).dim=[1,1];
bio(95).sigWidth=1;
bio(95).sigAddress='&Wind_Turbine_B.Integrator_k';
bio(95).ndims=2;
bio(95).size=[];
bio(95).isStruct=false;

bio(96).blkName='Blade Load/Lift and Drag/Lag Rotor Spd/Sum';
bio(96).sigName='';
bio(96).portIdx=0;
bio(96).dim=[1,1];
bio(96).sigWidth=1;
bio(96).sigAddress='&Wind_Turbine_B.Sum_m';
bio(96).ndims=2;
bio(96).size=[];
bio(96).isStruct=false;

bio(97).blkName='Blade Load/Lift and Drag/Obtain Lift and Drag Constants/drag polar';
bio(97).sigName='Cd';
bio(97).portIdx=0;
bio(97).dim=[1,1];
bio(97).sigWidth=1;
bio(97).sigAddress='&Wind_Turbine_B.Cd';
bio(97).ndims=2;
bio(97).size=[];
bio(97).isStruct=false;

bio(98).blkName='Blade Load/Lift and Drag/Obtain Lift and Drag Constants/lift polar';
bio(98).sigName='Cl';
bio(98).portIdx=0;
bio(98).dim=[1,1];
bio(98).sigWidth=1;
bio(98).sigAddress='&Wind_Turbine_B.Cl';
bio(98).ndims=2;
bio(98).size=[];
bio(98).isStruct=false;

bio(99).blkName='Blade Load/Lift and Drag/Obtain Lift and Drag Constants/Math Function';
bio(99).sigName='';
bio(99).portIdx=0;
bio(99).dim=[1,1];
bio(99).sigWidth=1;
bio(99).sigAddress='&Wind_Turbine_B.MathFunction_f';
bio(99).ndims=2;
bio(99).size=[];
bio(99).isStruct=false;

bio(100).blkName='Blade Load/Lift and Drag/Resolve Moments/Gain';
bio(100).sigName='';
bio(100).portIdx=0;
bio(100).dim=[1,1];
bio(100).sigWidth=1;
bio(100).sigAddress='&Wind_Turbine_B.Gain_er';
bio(100).ndims=2;
bio(100).size=[];
bio(100).isStruct=false;

bio(101).blkName='Blade Load/Lift and Drag/Resolve Moments/Divide11';
bio(101).sigName='N';
bio(101).portIdx=0;
bio(101).dim=[1,1];
bio(101).sigWidth=1;
bio(101).sigAddress='&Wind_Turbine_B.N';
bio(101).ndims=2;
bio(101).size=[];
bio(101).isStruct=false;

bio(102).blkName='Blade Load/Lift and Drag/Resolve Moments/Divide12';
bio(102).sigName='L';
bio(102).portIdx=0;
bio(102).dim=[1,1];
bio(102).sigWidth=1;
bio(102).sigAddress='&Wind_Turbine_B.L';
bio(102).ndims=2;
bio(102).size=[];
bio(102).isStruct=false;

bio(103).blkName='Blade Load/Lift and Drag/Resolve Moments/Divide6';
bio(103).sigName='Lift*cos(alpha)';
bio(103).portIdx=0;
bio(103).dim=[1,1];
bio(103).sigWidth=1;
bio(103).sigAddress='&Wind_Turbine_B.Liftcosalpha';
bio(103).ndims=2;
bio(103).size=[];
bio(103).isStruct=false;

bio(104).blkName='Blade Load/Lift and Drag/Resolve Moments/Divide7';
bio(104).sigName='Drag*sin(alpha)';
bio(104).portIdx=0;
bio(104).dim=[1,1];
bio(104).sigWidth=1;
bio(104).sigAddress='&Wind_Turbine_B.Dragsinalpha';
bio(104).ndims=2;
bio(104).size=[];
bio(104).isStruct=false;

bio(105).blkName='Blade Load/Lift and Drag/Resolve Moments/Divide8';
bio(105).sigName='Lift*sin(alpha)';
bio(105).portIdx=0;
bio(105).dim=[1,1];
bio(105).sigWidth=1;
bio(105).sigAddress='&Wind_Turbine_B.Liftsinalpha';
bio(105).ndims=2;
bio(105).size=[];
bio(105).isStruct=false;

bio(106).blkName='Blade Load/Lift and Drag/Resolve Moments/Divide9';
bio(106).sigName='Drag*cos(alpha)';
bio(106).portIdx=0;
bio(106).dim=[1,1];
bio(106).sigWidth=1;
bio(106).sigAddress='&Wind_Turbine_B.Dragcosalpha';
bio(106).ndims=2;
bio(106).size=[];
bio(106).isStruct=false;

bio(107).blkName='Blade Load/Lift and Drag/Resolve Moments/Subtract1';
bio(107).sigName='X';
bio(107).portIdx=0;
bio(107).dim=[1,1];
bio(107).sigWidth=1;
bio(107).sigAddress='&Wind_Turbine_B.X';
bio(107).ndims=2;
bio(107).size=[];
bio(107).isStruct=false;

bio(108).blkName='Blade Load/Lift and Drag/Resolve Moments/Subtract2';
bio(108).sigName='Z';
bio(108).portIdx=0;
bio(108).dim=[1,1];
bio(108).sigWidth=1;
bio(108).sigAddress='&Wind_Turbine_B.Z';
bio(108).ndims=2;
bio(108).size=[];
bio(108).isStruct=false;

bio(109).blkName='Blade Load/Lift and Drag/Resolve Moments/Trigonometric Function1';
bio(109).sigName='';
bio(109).portIdx=0;
bio(109).dim=[1,1];
bio(109).sigWidth=1;
bio(109).sigAddress='&Wind_Turbine_B.TrigonometricFunction1';
bio(109).ndims=2;
bio(109).size=[];
bio(109).isStruct=false;

bio(110).blkName='Blade Load/Lift and Drag/Resolve Moments/Trigonometric Function2';
bio(110).sigName='';
bio(110).portIdx=0;
bio(110).dim=[1,1];
bio(110).sigWidth=1;
bio(110).sigAddress='&Wind_Turbine_B.TrigonometricFunction2';
bio(110).ndims=2;
bio(110).size=[];
bio(110).isStruct=false;

bio(111).blkName='Grid/Grid/Model/Data Type  Conversion';
bio(111).sigName='';
bio(111).portIdx=0;
bio(111).dim=[1,1];
bio(111).sigWidth=1;
bio(111).sigAddress='&Wind_Turbine_B.DataTypeConversion';
bio(111).ndims=2;
bio(111).size=[];
bio(111).isStruct=false;

bio(112).blkName='Grid/Grid/Model/Data Type  Conversion1';
bio(112).sigName='';
bio(112).portIdx=0;
bio(112).dim=[1,1];
bio(112).sigWidth=1;
bio(112).sigAddress='&Wind_Turbine_B.DataTypeConversion1_m';
bio(112).ndims=2;
bio(112).size=[];
bio(112).isStruct=false;

bio(113).blkName='Grid/Grid/Model/Data Type  Conversion2';
bio(113).sigName='';
bio(113).portIdx=0;
bio(113).dim=[1,1];
bio(113).sigWidth=1;
bio(113).sigAddress='&Wind_Turbine_B.DataTypeConversion2_k';
bio(113).ndims=2;
bio(113).size=[];
bio(113).isStruct=false;

bio(114).blkName='Grid/Grid/Model/Gain3';
bio(114).sigName='';
bio(114).portIdx=0;
bio(114).dim=[1,1];
bio(114).sigWidth=1;
bio(114).sigAddress='&Wind_Turbine_B.Gain3';
bio(114).ndims=2;
bio(114).size=[];
bio(114).isStruct=false;

bio(115).blkName='Grid/Grid/Model/Gain4';
bio(115).sigName='';
bio(115).portIdx=0;
bio(115).dim=[1,1];
bio(115).sigWidth=1;
bio(115).sigAddress='&Wind_Turbine_B.Gain4_b';
bio(115).ndims=2;
bio(115).size=[];
bio(115).isStruct=false;

bio(116).blkName='Grid/Grid/Model/Logical Operator';
bio(116).sigName='';
bio(116).portIdx=0;
bio(116).dim=[1,1];
bio(116).sigWidth=1;
bio(116).sigAddress='&Wind_Turbine_B.LogicalOperator_g';
bio(116).ndims=2;
bio(116).size=[];
bio(116).isStruct=false;

bio(117).blkName='Grid/Grid/Model/Logical Operator1';
bio(117).sigName='';
bio(117).portIdx=0;
bio(117).dim=[1,1];
bio(117).sigWidth=1;
bio(117).sigAddress='&Wind_Turbine_B.LogicalOperator1_j';
bio(117).ndims=2;
bio(117).size=[];
bio(117).isStruct=false;

bio(118).blkName='Grid/Grid/Model/Magnitude-Angle to Complex';
bio(118).sigName='';
bio(118).portIdx=0;
bio(118).dim=[3,1];
bio(118).sigWidth=3;
bio(118).sigAddress='&Wind_Turbine_B.MagnitudeAngletoComplex[0].re';
bio(118).ndims=2;
bio(118).size=[];
bio(118).isStruct=true;

bio(119).blkName='Grid/Grid/Model/Relational Operator';
bio(119).sigName='Amplitude';
bio(119).portIdx=0;
bio(119).dim=[1,1];
bio(119).sigWidth=1;
bio(119).sigAddress='&Wind_Turbine_B.Amplitude';
bio(119).ndims=2;
bio(119).size=[];
bio(119).isStruct=false;

bio(120).blkName='Grid/Grid/Model/Relational Operator1';
bio(120).sigName='Phase';
bio(120).portIdx=0;
bio(120).dim=[1,1];
bio(120).sigWidth=1;
bio(120).sigAddress='&Wind_Turbine_B.Phase';
bio(120).ndims=2;
bio(120).size=[];
bio(120).isStruct=false;

bio(121).blkName='Grid/Grid/Model/Relational Operator3';
bio(121).sigName='';
bio(121).portIdx=0;
bio(121).dim=[1,1];
bio(121).sigWidth=1;
bio(121).sigAddress='&Wind_Turbine_B.RelationalOperator3';
bio(121).ndims=2;
bio(121).size=[];
bio(121).isStruct=false;

bio(122).blkName='Grid/Grid/Model/Step';
bio(122).sigName='Ton';
bio(122).portIdx=0;
bio(122).dim=[1,1];
bio(122).sigWidth=1;
bio(122).sigAddress='&Wind_Turbine_B.Ton_h';
bio(122).ndims=2;
bio(122).size=[];
bio(122).isStruct=false;

bio(123).blkName='Grid/Grid/Model/Step1';
bio(123).sigName='Toff';
bio(123).portIdx=0;
bio(123).dim=[1,1];
bio(123).sigWidth=1;
bio(123).sigAddress='&Wind_Turbine_B.Toff_e';
bio(123).ndims=2;
bio(123).size=[];
bio(123).isStruct=false;

bio(124).blkName='Grid/Grid/Model/Sum2';
bio(124).sigName='';
bio(124).portIdx=0;
bio(124).dim=[3,1];
bio(124).sigWidth=3;
bio(124).sigAddress='&Wind_Turbine_B.Sum2_i[0]';
bio(124).ndims=2;
bio(124).size=[];
bio(124).isStruct=false;

bio(125).blkName='Grid/Grid/Model/Sum3';
bio(125).sigName='';
bio(125).portIdx=0;
bio(125).dim=[1,1];
bio(125).sigWidth=1;
bio(125).sigAddress='&Wind_Turbine_B.Sum3_b';
bio(125).ndims=2;
bio(125).size=[];
bio(125).isStruct=false;

bio(126).blkName='Grid/Grid/Model/Sum4';
bio(126).sigName='';
bio(126).portIdx=0;
bio(126).dim=[1,1];
bio(126).sigWidth=1;
bio(126).sigAddress='&Wind_Turbine_B.Sum4';
bio(126).ndims=2;
bio(126).size=[];
bio(126).isStruct=false;

bio(127).blkName='Grid/Grid/Model/Sum5';
bio(127).sigName='';
bio(127).portIdx=0;
bio(127).dim=[3,1];
bio(127).sigWidth=3;
bio(127).sigAddress='&Wind_Turbine_B.Sum5[0].re';
bio(127).ndims=2;
bio(127).size=[];
bio(127).isStruct=true;

bio(128).blkName='Grid/Grid/Model/Switch1';
bio(128).sigName='';
bio(128).portIdx=0;
bio(128).dim=[1,1];
bio(128).sigWidth=1;
bio(128).sigAddress='&Wind_Turbine_B.Switch1';
bio(128).ndims=2;
bio(128).size=[];
bio(128).isStruct=false;

bio(129).blkName='Grid/Grid/Model/Switch2';
bio(129).sigName='';
bio(129).portIdx=0;
bio(129).dim=[1,1];
bio(129).sigWidth=1;
bio(129).sigAddress='&Wind_Turbine_B.Switch2_o';
bio(129).ndims=2;
bio(129).size=[];
bio(129).isStruct=false;

bio(130).blkName='Grid/Grid/Model/Switch3';
bio(130).sigName='';
bio(130).portIdx=0;
bio(130).dim=[1,1];
bio(130).sigWidth=1;
bio(130).sigAddress='&Wind_Turbine_B.Switch3_e';
bio(130).ndims=2;
bio(130).size=[];
bio(130).isStruct=false;

bio(131).blkName='Grid/Grid/Model/Switch5';
bio(131).sigName='';
bio(131).portIdx=0;
bio(131).dim=[3,1];
bio(131).sigWidth=3;
bio(131).sigAddress='&Wind_Turbine_B.Switch5[0]';
bio(131).ndims=2;
bio(131).size=[];
bio(131).isStruct=false;

bio(132).blkName='Grid/mGrid/Mode V/Magnitude';
bio(132).sigName='';
bio(132).portIdx=0;
bio(132).dim=[3,1];
bio(132).sigWidth=3;
bio(132).sigAddress='&Wind_Turbine_B.Magnitude[0]';
bio(132).ndims=2;
bio(132).size=[];
bio(132).isStruct=false;

bio(133).blkName='Nacelle/Generator/Full/pu2rpm';
bio(133).sigName='';
bio(133).portIdx=0;
bio(133).dim=[1,1];
bio(133).sigWidth=1;
bio(133).sigAddress='&Wind_Turbine_B.pu2rpm';
bio(133).ndims=2;
bio(133).size=[];
bio(133).isStruct=false;

bio(134).blkName='Nacelle/Generator/Full/radps2pu';
bio(134).sigName='';
bio(134).portIdx=0;
bio(134).dim=[1,1];
bio(134).sigWidth=1;
bio(134).sigAddress='&Wind_Turbine_B.radps2pu';
bio(134).ndims=2;
bio(134).size=[];
bio(134).isStruct=false;

bio(135).blkName='Nacelle/Generator/Full/radps2rpm';
bio(135).sigName='Turbine Speed (rpm)';
bio(135).portIdx=0;
bio(135).dim=[1,1];
bio(135).sigWidth=1;
bio(135).sigAddress='&Wind_Turbine_B.TurbineSpeedrpm';
bio(135).ndims=2;
bio(135).size=[];
bio(135).isStruct=false;

bio(136).blkName='Nacelle/Generator/Full/torque_pu2Nm';
bio(136).sigName='';
bio(136).portIdx=0;
bio(136).dim=[1,1];
bio(136).sigWidth=1;
bio(136).sigAddress='&Wind_Turbine_B.torque_pu2Nm';
bio(136).ndims=2;
bio(136).size=[];
bio(136).isStruct=false;

bio(137).blkName='Nacelle/Generator/Full/Logical Operator1';
bio(137).sigName='';
bio(137).portIdx=0;
bio(137).dim=[1,1];
bio(137).sigWidth=1;
bio(137).sigAddress='&Wind_Turbine_B.LogicalOperator1';
bio(137).ndims=2;
bio(137).size=[];
bio(137).isStruct=false;

bio(138).blkName='Scopes/Generator Scopes/pu to MW//MVar/Fix Sign';
bio(138).sigName='';
bio(138).portIdx=0;
bio(138).dim=[2,1];
bio(138).sigWidth=2;
bio(138).sigAddress='&Wind_Turbine_B.FixSign[0]';
bio(138).ndims=2;
bio(138).size=[];
bio(138).isStruct=false;

bio(139).blkName='Scopes/Generator Scopes/pu to MW//MVar/pu to A';
bio(139).sigName='';
bio(139).portIdx=0;
bio(139).dim=[3,1];
bio(139).sigWidth=3;
bio(139).sigAddress='&Wind_Turbine_B.putoA[0].re';
bio(139).ndims=2;
bio(139).size=[];
bio(139).isStruct=true;

bio(140).blkName='Scopes/Generator Scopes/pu to MW//MVar/pu to MW';
bio(140).sigName='';
bio(140).portIdx=0;
bio(140).dim=[1,1];
bio(140).sigWidth=1;
bio(140).sigAddress='&Wind_Turbine_B.putoMW';
bio(140).ndims=2;
bio(140).size=[];
bio(140).isStruct=false;

bio(141).blkName='Scopes/Generator Scopes/pu to MW//MVar/pu to Mvar';
bio(141).sigName='';
bio(141).portIdx=0;
bio(141).dim=[1,1];
bio(141).sigWidth=1;
bio(141).sigAddress='&Wind_Turbine_B.putoMvar';
bio(141).ndims=2;
bio(141).size=[];
bio(141).isStruct=false;

bio(142).blkName='Scopes/Generator Scopes/pu to MW//MVar/pu to V';
bio(142).sigName='';
bio(142).portIdx=0;
bio(142).dim=[3,1];
bio(142).sigWidth=3;
bio(142).sigAddress='&Wind_Turbine_B.putoV[0].re';
bio(142).ndims=2;
bio(142).size=[];
bio(142).isStruct=true;

bio(143).blkName='Scopes/Generator Scopes/pu to MW//MVar/to pu';
bio(143).sigName='';
bio(143).portIdx=0;
bio(143).dim=[2,1];
bio(143).sigWidth=2;
bio(143).sigAddress='&Wind_Turbine_B.topu[0]';
bio(143).ndims=2;
bio(143).size=[];
bio(143).isStruct=false;

bio(144).blkName='Turbine Input/Wind/Wind Input/FromWs';
bio(144).sigName='';
bio(144).portIdx=0;
bio(144).dim=[2,1];
bio(144).sigWidth=2;
bio(144).sigAddress='&Wind_Turbine_B.FromWs[0]';
bio(144).ndims=2;
bio(144).size=[];
bio(144).isStruct=false;

bio(145).blkName='Yaw Controller/Yaw Controller/PI Controller Nacelle Yaw/Integral Gain';
bio(145).sigName='';
bio(145).portIdx=0;
bio(145).dim=[4,1];
bio(145).sigWidth=4;
bio(145).sigAddress='&Wind_Turbine_B.IntegralGain_l[0]';
bio(145).ndims=2;
bio(145).size=[];
bio(145).isStruct=false;

bio(146).blkName='Yaw Controller/Yaw Controller/PI Controller Nacelle Yaw/Proportional Gain';
bio(146).sigName='';
bio(146).portIdx=0;
bio(146).dim=[4,1];
bio(146).sigWidth=4;
bio(146).sigAddress='&Wind_Turbine_B.ProportionalGain_e[0]';
bio(146).ndims=2;
bio(146).size=[];
bio(146).isStruct=false;

bio(147).blkName='Yaw Controller/Yaw Controller/PI Controller Nacelle Yaw/Integrator';
bio(147).sigName='';
bio(147).portIdx=0;
bio(147).dim=[4,1];
bio(147).sigWidth=4;
bio(147).sigAddress='&Wind_Turbine_B.Integrator_iv[0]';
bio(147).ndims=2;
bio(147).size=[];
bio(147).isStruct=false;

bio(148).blkName='Yaw Controller/Yaw Controller/PI Controller Nacelle Yaw/Sum';
bio(148).sigName='';
bio(148).portIdx=0;
bio(148).dim=[4,1];
bio(148).sigWidth=4;
bio(148).sigAddress='&Wind_Turbine_B.Sum_ko[0]';
bio(148).ndims=2;
bio(148).size=[];
bio(148).isStruct=false;

bio(149).blkName='Yaw Controller/Yaw Controller/PI Controller Nacelle Yaw Rate/Integral Gain';
bio(149).sigName='';
bio(149).portIdx=0;
bio(149).dim=[4,1];
bio(149).sigWidth=4;
bio(149).sigAddress='&Wind_Turbine_B.IntegralGain_o[0]';
bio(149).ndims=2;
bio(149).size=[];
bio(149).isStruct=false;

bio(150).blkName='Yaw Controller/Yaw Controller/PI Controller Nacelle Yaw Rate/Proportional Gain';
bio(150).sigName='';
bio(150).portIdx=0;
bio(150).dim=[4,1];
bio(150).sigWidth=4;
bio(150).sigAddress='&Wind_Turbine_B.ProportionalGain_e2[0]';
bio(150).ndims=2;
bio(150).size=[];
bio(150).isStruct=false;

bio(151).blkName='Yaw Controller/Yaw Controller/PI Controller Nacelle Yaw Rate/Integrator';
bio(151).sigName='';
bio(151).portIdx=0;
bio(151).dim=[4,1];
bio(151).sigWidth=4;
bio(151).sigAddress='&Wind_Turbine_B.Integrator_b[0]';
bio(151).ndims=2;
bio(151).size=[];
bio(151).isStruct=false;

bio(152).blkName='Yaw Controller/Yaw Controller/PI Controller Nacelle Yaw Rate/Sum';
bio(152).sigName='';
bio(152).portIdx=0;
bio(152).dim=[4,1];
bio(152).sigWidth=4;
bio(152).sigAddress='&Wind_Turbine_B.Sum_eb[0]';
bio(152).ndims=2;
bio(152).size=[];
bio(152).isStruct=false;

bio(153).blkName='powergui/EquivalentModel1/conversion/Real-Imag to Complex';
bio(153).sigName='';
bio(153).portIdx=0;
bio(153).dim=[17,1];
bio(153).sigWidth=17;
bio(153).sigAddress='&Wind_Turbine_B.RealImagtoComplex[0].re';
bio(153).ndims=2;
bio(153).size=[];
bio(153).isStruct=true;

bio(154).blkName='powergui/EquivalentModel1/conversion /Complex to Real-Imag/p1';
bio(154).sigName='';
bio(154).portIdx=0;
bio(154).dim=[11,1];
bio(154).sigWidth=11;
bio(154).sigAddress='&Wind_Turbine_B.ComplextoRealImag_o1[0]';
bio(154).ndims=2;
bio(154).size=[];
bio(154).isStruct=false;

bio(155).blkName='powergui/EquivalentModel1/conversion /Complex to Real-Imag/p2';
bio(155).sigName='';
bio(155).portIdx=1;
bio(155).dim=[11,1];
bio(155).sigWidth=11;
bio(155).sigAddress='&Wind_Turbine_B.ComplextoRealImag_o2[0]';
bio(155).ndims=2;
bio(155).size=[];
bio(155).isStruct=false;

bio(156).blkName='Grid/Grid/Model/Seq A Generation/Gain3';
bio(156).sigName='';
bio(156).portIdx=0;
bio(156).dim=[1,1];
bio(156).sigWidth=1;
bio(156).sigAddress='&Wind_Turbine_B.Gain3_j';
bio(156).ndims=2;
bio(156).size=[];
bio(156).isStruct=false;

bio(157).blkName='Grid/Grid/Model/Seq A Generation/Magnitude-Angle to Complex';
bio(157).sigName='';
bio(157).portIdx=0;
bio(157).dim=[3,1];
bio(157).sigWidth=3;
bio(157).sigAddress='&Wind_Turbine_B.MagnitudeAngletoComplex_g[0].re';
bio(157).ndims=2;
bio(157).size=[];
bio(157).isStruct=true;

bio(158).blkName='Grid/Grid/Model/Seq A Generation/Multiport Switch';
bio(158).sigName='';
bio(158).portIdx=0;
bio(158).dim=[3,1];
bio(158).sigWidth=3;
bio(158).sigAddress='&Wind_Turbine_B.MultiportSwitch[0]';
bio(158).ndims=2;
bio(158).size=[];
bio(158).isStruct=false;

bio(159).blkName='Grid/Grid/Model/Seq A Generation/Product1';
bio(159).sigName='';
bio(159).portIdx=0;
bio(159).dim=[3,1];
bio(159).sigWidth=3;
bio(159).sigAddress='&Wind_Turbine_B.Product1[0].re';
bio(159).ndims=2;
bio(159).size=[];
bio(159).isStruct=true;

bio(160).blkName='Grid/Grid/Model/Seq A Generation/Sum';
bio(160).sigName='';
bio(160).portIdx=0;
bio(160).dim=[3,1];
bio(160).sigWidth=3;
bio(160).sigAddress='&Wind_Turbine_B.Sum_e[0]';
bio(160).ndims=2;
bio(160).size=[];
bio(160).isStruct=false;

bio(161).blkName='Grid/Grid/Model/Seq A Generation/Sum1';
bio(161).sigName='';
bio(161).portIdx=0;
bio(161).dim=[1,1];
bio(161).sigWidth=1;
bio(161).sigAddress='&Wind_Turbine_B.Sum1_d';
bio(161).ndims=2;
bio(161).size=[];
bio(161).isStruct=false;

bio(162).blkName='Grid/Grid/Model/Seq B Generation/Gain3';
bio(162).sigName='';
bio(162).portIdx=0;
bio(162).dim=[1,1];
bio(162).sigWidth=1;
bio(162).sigAddress='&Wind_Turbine_B.Gain3_l';
bio(162).ndims=2;
bio(162).size=[];
bio(162).isStruct=false;

bio(163).blkName='Grid/Grid/Model/Seq B Generation/Magnitude-Angle to Complex';
bio(163).sigName='';
bio(163).portIdx=0;
bio(163).dim=[3,1];
bio(163).sigWidth=3;
bio(163).sigAddress='&Wind_Turbine_B.MagnitudeAngletoComplex_a[0].re';
bio(163).ndims=2;
bio(163).size=[];
bio(163).isStruct=true;

bio(164).blkName='Grid/Grid/Model/Seq B Generation/Multiport Switch';
bio(164).sigName='';
bio(164).portIdx=0;
bio(164).dim=[3,1];
bio(164).sigWidth=3;
bio(164).sigAddress='&Wind_Turbine_B.MultiportSwitch_j[0]';
bio(164).ndims=2;
bio(164).size=[];
bio(164).isStruct=false;

bio(165).blkName='Grid/Grid/Model/Seq B Generation/Product1';
bio(165).sigName='';
bio(165).portIdx=0;
bio(165).dim=[3,1];
bio(165).sigWidth=3;
bio(165).sigAddress='&Wind_Turbine_B.Product1_g[0].re';
bio(165).ndims=2;
bio(165).size=[];
bio(165).isStruct=true;

bio(166).blkName='Grid/Grid/Model/Seq B Generation/Sum';
bio(166).sigName='';
bio(166).portIdx=0;
bio(166).dim=[3,1];
bio(166).sigWidth=3;
bio(166).sigAddress='&Wind_Turbine_B.Sum_j[0]';
bio(166).ndims=2;
bio(166).size=[];
bio(166).isStruct=false;

bio(167).blkName='Grid/Grid/Model/Seq B Generation/Sum1';
bio(167).sigName='';
bio(167).portIdx=0;
bio(167).dim=[1,1];
bio(167).sigWidth=1;
bio(167).sigAddress='&Wind_Turbine_B.Sum1_i';
bio(167).ndims=2;
bio(167).size=[];
bio(167).isStruct=false;

bio(168).blkName='Grid/Grid/Model/Variation SubSystem/Data Type  Conversion1';
bio(168).sigName='';
bio(168).portIdx=0;
bio(168).dim=[1,1];
bio(168).sigWidth=1;
bio(168).sigAddress='&Wind_Turbine_B.DataTypeConversion1';
bio(168).ndims=2;
bio(168).size=[];
bio(168).isStruct=false;

bio(169).blkName='Grid/Grid/Model/Variation SubSystem/Data Type  Conversion2';
bio(169).sigName='';
bio(169).portIdx=0;
bio(169).dim=[1,1];
bio(169).sigWidth=1;
bio(169).sigAddress='&Wind_Turbine_B.DataTypeConversion2';
bio(169).ndims=2;
bio(169).size=[];
bio(169).isStruct=false;

bio(170).blkName='Grid/Grid/Model/Variation SubSystem/Gain1';
bio(170).sigName='';
bio(170).portIdx=0;
bio(170).dim=[1,1];
bio(170).sigWidth=1;
bio(170).sigAddress='&Wind_Turbine_B.Gain1_h';
bio(170).ndims=2;
bio(170).size=[];
bio(170).isStruct=false;

bio(171).blkName='Grid/Grid/Model/Variation SubSystem/Integrator';
bio(171).sigName='Ramp';
bio(171).portIdx=0;
bio(171).dim=[1,1];
bio(171).sigWidth=1;
bio(171).sigAddress='&Wind_Turbine_B.Ramp';
bio(171).ndims=2;
bio(171).size=[];
bio(171).isStruct=false;

bio(172).blkName='Grid/Grid/Model/Variation SubSystem/Logical Operator';
bio(172).sigName='';
bio(172).portIdx=0;
bio(172).dim=[1,1];
bio(172).sigWidth=1;
bio(172).sigAddress='&Wind_Turbine_B.LogicalOperator';
bio(172).ndims=2;
bio(172).size=[];
bio(172).isStruct=false;

bio(173).blkName='Grid/Grid/Model/Variation SubSystem/Logical Operator1';
bio(173).sigName='';
bio(173).portIdx=0;
bio(173).dim=[1,1];
bio(173).sigWidth=1;
bio(173).sigAddress='&Wind_Turbine_B.LogicalOperator1_d';
bio(173).ndims=2;
bio(173).size=[];
bio(173).isStruct=false;

bio(174).blkName='Grid/Grid/Model/Variation SubSystem/Memory';
bio(174).sigName='';
bio(174).portIdx=0;
bio(174).dim=[1,1];
bio(174).sigWidth=1;
bio(174).sigAddress='&Wind_Turbine_B.Memory';
bio(174).ndims=2;
bio(174).size=[];
bio(174).isStruct=false;

bio(175).blkName='Grid/Grid/Model/Variation SubSystem/Multiport Switch1';
bio(175).sigName='';
bio(175).portIdx=0;
bio(175).dim=[1,1];
bio(175).sigWidth=1;
bio(175).sigAddress='&Wind_Turbine_B.MultiportSwitch1';
bio(175).ndims=2;
bio(175).size=[];
bio(175).isStruct=false;

bio(176).blkName='Grid/Grid/Model/Variation SubSystem/Product';
bio(176).sigName='Mod';
bio(176).portIdx=0;
bio(176).dim=[1,1];
bio(176).sigWidth=1;
bio(176).sigAddress='&Wind_Turbine_B.Mod';
bio(176).ndims=2;
bio(176).size=[];
bio(176).isStruct=false;

bio(177).blkName='Grid/Grid/Model/Variation SubSystem/Product1';
bio(177).sigName='';
bio(177).portIdx=0;
bio(177).dim=[1,1];
bio(177).sigWidth=1;
bio(177).sigAddress='&Wind_Turbine_B.Product1_b';
bio(177).ndims=2;
bio(177).size=[];
bio(177).isStruct=false;

bio(178).blkName='Grid/Grid/Model/Variation SubSystem/Product2';
bio(178).sigName='Step';
bio(178).portIdx=0;
bio(178).dim=[1,1];
bio(178).sigWidth=1;
bio(178).sigAddress='&Wind_Turbine_B.Step_j';
bio(178).ndims=2;
bio(178).size=[];
bio(178).isStruct=false;

bio(179).blkName='Grid/Grid/Model/Variation SubSystem/Relational Operator';
bio(179).sigName='';
bio(179).portIdx=0;
bio(179).dim=[1,1];
bio(179).sigWidth=1;
bio(179).sigAddress='&Wind_Turbine_B.RelationalOperator';
bio(179).ndims=2;
bio(179).size=[];
bio(179).isStruct=false;

bio(180).blkName='Grid/Grid/Model/Variation SubSystem/Relational Operator1';
bio(180).sigName='';
bio(180).portIdx=0;
bio(180).dim=[1,1];
bio(180).sigWidth=1;
bio(180).sigAddress='&Wind_Turbine_B.RelationalOperator1';
bio(180).ndims=2;
bio(180).size=[];
bio(180).isStruct=false;

bio(181).blkName='Grid/Grid/Model/Variation SubSystem/Step';
bio(181).sigName='Ton';
bio(181).portIdx=0;
bio(181).dim=[1,1];
bio(181).sigWidth=1;
bio(181).sigAddress='&Wind_Turbine_B.Ton';
bio(181).ndims=2;
bio(181).size=[];
bio(181).isStruct=false;

bio(182).blkName='Grid/Grid/Model/Variation SubSystem/Step1';
bio(182).sigName='Toff';
bio(182).portIdx=0;
bio(182).dim=[1,1];
bio(182).sigWidth=1;
bio(182).sigAddress='&Wind_Turbine_B.Toff';
bio(182).ndims=2;
bio(182).size=[];
bio(182).isStruct=false;

bio(183).blkName='Grid/Grid/Model/Variation SubSystem/Switch';
bio(183).sigName='';
bio(183).portIdx=0;
bio(183).dim=[1,1];
bio(183).sigWidth=1;
bio(183).sigAddress='&Wind_Turbine_B.Switch_o';
bio(183).ndims=2;
bio(183).size=[];
bio(183).isStruct=false;

bio(184).blkName='Grid/Grid/Model/Variation SubSystem/Switch1';
bio(184).sigName='';
bio(184).portIdx=0;
bio(184).dim=[1,1];
bio(184).sigWidth=1;
bio(184).sigAddress='&Wind_Turbine_B.Switch1_d';
bio(184).ndims=2;
bio(184).size=[];
bio(184).isStruct=false;

bio(185).blkName='Grid/Grid/Model/Variation SubSystem/Switch2';
bio(185).sigName='';
bio(185).portIdx=0;
bio(185).dim=[1,1];
bio(185).sigWidth=1;
bio(185).sigAddress='&Wind_Turbine_B.Switch2';
bio(185).ndims=2;
bio(185).size=[];
bio(185).isStruct=false;

bio(186).blkName='Grid/Grid/Model/Variation SubSystem/Switch3';
bio(186).sigName='';
bio(186).portIdx=0;
bio(186).dim=[1,1];
bio(186).sigWidth=1;
bio(186).sigAddress='&Wind_Turbine_B.Switch3';
bio(186).ndims=2;
bio(186).size=[];
bio(186).isStruct=false;

bio(187).blkName='Grid/Grid/Model/Variation SubSystem/Trigonometric Function1';
bio(187).sigName='';
bio(187).portIdx=0;
bio(187).dim=[1,1];
bio(187).sigWidth=1;
bio(187).sigAddress='&Wind_Turbine_B.TrigonometricFunction1_j';
bio(187).ndims=2;
bio(187).size=[];
bio(187).isStruct=false;

bio(188).blkName='Grid/mGrid/Model/U A:/do not delete this gain';
bio(188).sigName='';
bio(188).portIdx=0;
bio(188).dim=[1,1];
bio(188).sigWidth=1;
bio(188).sigAddress='&Wind_Turbine_B.donotdeletethisgain_h.re';
bio(188).ndims=2;
bio(188).size=[];
bio(188).isStruct=true;

bio(189).blkName='Grid/mGrid/Model/U B:/do not delete this gain';
bio(189).sigName='';
bio(189).portIdx=0;
bio(189).dim=[1,1];
bio(189).sigWidth=1;
bio(189).sigAddress='&Wind_Turbine_B.donotdeletethisgain_a.re';
bio(189).ndims=2;
bio(189).size=[];
bio(189).isStruct=true;

bio(190).blkName='Grid/mGrid/Model/U C:/do not delete this gain';
bio(190).sigName='';
bio(190).portIdx=0;
bio(190).dim=[1,1];
bio(190).sigWidth=1;
bio(190).sigAddress='&Wind_Turbine_B.donotdeletethisgain_k.re';
bio(190).ndims=2;
bio(190).size=[];
bio(190).isStruct=true;

bio(191).blkName='Nacelle/Generator/Full/Actuator Dynamics/Gain';
bio(191).sigName='';
bio(191).portIdx=0;
bio(191).dim=[1,1];
bio(191).sigWidth=1;
bio(191).sigAddress='&Wind_Turbine_B.Gain_l';
bio(191).ndims=2;
bio(191).size=[];
bio(191).isStruct=false;

bio(192).blkName='Nacelle/Generator/Full/Actuator Dynamics/Integrator';
bio(192).sigName='';
bio(192).portIdx=0;
bio(192).dim=[1,1];
bio(192).sigWidth=1;
bio(192).sigAddress='&Wind_Turbine_B.Integrator_n';
bio(192).ndims=2;
bio(192).size=[];
bio(192).isStruct=false;

bio(193).blkName='Nacelle/Generator/Full/Actuator Dynamics/Sum';
bio(193).sigName='';
bio(193).portIdx=0;
bio(193).dim=[1,1];
bio(193).sigWidth=1;
bio(193).sigAddress='&Wind_Turbine_B.Sum_d';
bio(193).ndims=2;
bio(193).size=[];
bio(193).isStruct=false;

bio(194).blkName='Nacelle/Generator/Full/Actuator Dynamics1/Gain';
bio(194).sigName='';
bio(194).portIdx=0;
bio(194).dim=[1,1];
bio(194).sigWidth=1;
bio(194).sigAddress='&Wind_Turbine_B.Gain_e';
bio(194).ndims=2;
bio(194).size=[];
bio(194).isStruct=false;

bio(195).blkName='Nacelle/Generator/Full/Actuator Dynamics1/Integrator';
bio(195).sigName='';
bio(195).portIdx=0;
bio(195).dim=[1,1];
bio(195).sigWidth=1;
bio(195).sigAddress='&Wind_Turbine_B.Integrator_f';
bio(195).ndims=2;
bio(195).size=[];
bio(195).isStruct=false;

bio(196).blkName='Nacelle/Generator/Full/Actuator Dynamics1/Sum';
bio(196).sigName='';
bio(196).portIdx=0;
bio(196).dim=[1,1];
bio(196).sigWidth=1;
bio(196).sigAddress='&Wind_Turbine_B.Sum_n';
bio(196).ndims=2;
bio(196).size=[];
bio(196).isStruct=false;

bio(197).blkName='Nacelle/Generator/Full/B_Gen/Kv';
bio(197).sigName='';
bio(197).portIdx=0;
bio(197).dim=[3,1];
bio(197).sigWidth=3;
bio(197).sigAddress='&Wind_Turbine_B.Kv[0].re';
bio(197).ndims=2;
bio(197).size=[];
bio(197).isStruct=true;

bio(198).blkName='Nacelle/Generator/Full/B_Gen/Kv1';
bio(198).sigName='';
bio(198).portIdx=0;
bio(198).dim=[3,1];
bio(198).sigWidth=3;
bio(198).sigAddress='&Wind_Turbine_B.Kv1[0].re';
bio(198).ndims=2;
bio(198).size=[];
bio(198).isStruct=true;

bio(199).blkName='Nacelle/Generator/Full/Trip Breaker1/Switch';
bio(199).sigName='';
bio(199).portIdx=0;
bio(199).dim=[1,1];
bio(199).sigWidth=1;
bio(199).sigAddress='&Wind_Turbine_B.Switch_j';
bio(199).ndims=2;
bio(199).size=[];
bio(199).isStruct=false;

bio(200).blkName='Nacelle/Generator/Full/Trip Breaker1/Switch1';
bio(200).sigName='';
bio(200).portIdx=0;
bio(200).dim=[1,1];
bio(200).sigWidth=1;
bio(200).sigAddress='&Wind_Turbine_B.Switch1_b';
bio(200).ndims=2;
bio(200).size=[];
bio(200).isStruct=false;

bio(201).blkName='Nacelle/Generator/Full/Trip Breaker1/Switch2';
bio(201).sigName='';
bio(201).portIdx=0;
bio(201).dim=[1,1];
bio(201).sigWidth=1;
bio(201).sigAddress='&Wind_Turbine_B.Switch2_ax';
bio(201).ndims=2;
bio(201).size=[];
bio(201).isStruct=false;

bio(202).blkName='Nacelle/Generator/Full/Trip Breaker1/Switch3';
bio(202).sigName='';
bio(202).portIdx=0;
bio(202).dim=[1,1];
bio(202).sigWidth=1;
bio(202).sigAddress='&Wind_Turbine_B.Switch3_p';
bio(202).ndims=2;
bio(202).size=[];
bio(202).isStruct=false;

bio(203).blkName='Nacelle/Generator/Full/Trip Breaker2/Switch';
bio(203).sigName='';
bio(203).portIdx=0;
bio(203).dim=[1,1];
bio(203).sigWidth=1;
bio(203).sigAddress='&Wind_Turbine_B.Switch_i';
bio(203).ndims=2;
bio(203).size=[];
bio(203).isStruct=false;

bio(204).blkName='Nacelle/Generator/Full/Trip Breaker2/Switch1';
bio(204).sigName='';
bio(204).portIdx=0;
bio(204).dim=[1,1];
bio(204).sigWidth=1;
bio(204).sigAddress='&Wind_Turbine_B.Switch1_g';
bio(204).ndims=2;
bio(204).size=[];
bio(204).isStruct=false;

bio(205).blkName='Nacelle/Generator/Full/Trip Breaker2/Switch2';
bio(205).sigName='';
bio(205).portIdx=0;
bio(205).dim=[1,1];
bio(205).sigWidth=1;
bio(205).sigAddress='&Wind_Turbine_B.Switch2_g';
bio(205).ndims=2;
bio(205).size=[];
bio(205).isStruct=false;

bio(206).blkName='Nacelle/Generator/Full/Trip Breaker2/Switch3';
bio(206).sigName='';
bio(206).portIdx=0;
bio(206).dim=[1,1];
bio(206).sigWidth=1;
bio(206).sigAddress='&Wind_Turbine_B.Switch3_f';
bio(206).ndims=2;
bio(206).size=[];
bio(206).isStruct=false;

bio(207).blkName='Nacelle/Hub Axis/Rotate/Sensing/Gain';
bio(207).sigName='';
bio(207).portIdx=0;
bio(207).dim=[1,1];
bio(207).sigWidth=1;
bio(207).sigAddress='&Wind_Turbine_B.Gain_ax';
bio(207).ndims=2;
bio(207).size=[];
bio(207).isStruct=false;

bio(208).blkName='Nacelle/Hub Axis/Rotate/Sensing/Gain1';
bio(208).sigName='';
bio(208).portIdx=0;
bio(208).dim=[1,1];
bio(208).sigWidth=1;
bio(208).sigAddress='&Wind_Turbine_B.Gain1_c';
bio(208).ndims=2;
bio(208).size=[];
bio(208).isStruct=false;

bio(209).blkName='Nacelle/Pitch System/Hydraulic/Hydraulic/Scaling Factor';
bio(209).sigName='';
bio(209).portIdx=0;
bio(209).dim=[3,1];
bio(209).sigWidth=3;
bio(209).sigAddress='&Wind_Turbine_B.ScalingFactor[0]';
bio(209).ndims=2;
bio(209).size=[];
bio(209).isStruct=false;

bio(210).blkName='Nacelle/Pitch System/Hydraulic/Rev RB1/Gain';
bio(210).sigName='';
bio(210).portIdx=0;
bio(210).dim=[1,1];
bio(210).sigWidth=1;
bio(210).sigAddress='&Wind_Turbine_B.Gain_ag';
bio(210).ndims=2;
bio(210).size=[];
bio(210).isStruct=false;

bio(211).blkName='Nacelle/Pitch System/Hydraulic/Rev RB2/Gain';
bio(211).sigName='';
bio(211).portIdx=0;
bio(211).dim=[1,1];
bio(211).sigWidth=1;
bio(211).sigAddress='&Wind_Turbine_B.Gain_jy';
bio(211).ndims=2;
bio(211).size=[];
bio(211).isStruct=false;

bio(212).blkName='Nacelle/Pitch System/Hydraulic/Rev RB3/Gain';
bio(212).sigName='';
bio(212).portIdx=0;
bio(212).dim=[1,1];
bio(212).sigWidth=1;
bio(212).sigAddress='&Wind_Turbine_B.Gain_i';
bio(212).ndims=2;
bio(212).size=[];
bio(212).isStruct=false;

bio(213).blkName='Pitch Controller/PI on AoA/Pitch Controller/Actuator Controller/Derivative_Gain';
bio(213).sigName='';
bio(213).portIdx=0;
bio(213).dim=[3,1];
bio(213).sigWidth=3;
bio(213).sigAddress='&Wind_Turbine_B.Derivative_Gain[0]';
bio(213).ndims=2;
bio(213).size=[];
bio(213).isStruct=false;

bio(214).blkName='Pitch Controller/PI on AoA/Pitch Controller/Actuator Controller/Lookup Fix';
bio(214).sigName='';
bio(214).portIdx=0;
bio(214).dim=[1,1];
bio(214).sigWidth=1;
bio(214).sigAddress='&Wind_Turbine_B.LookupFix';
bio(214).ndims=2;
bio(214).size=[];
bio(214).isStruct=false;

bio(215).blkName='Pitch Controller/PI on AoA/Pitch Controller/Actuator Controller/Angle to Extension';
bio(215).sigName='';
bio(215).portIdx=0;
bio(215).dim=[1,1];
bio(215).sigWidth=1;
bio(215).sigAddress='&Wind_Turbine_B.AngletoExtension';
bio(215).ndims=2;
bio(215).size=[];
bio(215).isStruct=false;

bio(216).blkName='Pitch Controller/PI on AoA/Pitch Controller/Actuator Controller/Sum';
bio(216).sigName='';
bio(216).portIdx=0;
bio(216).dim=[3,1];
bio(216).sigWidth=3;
bio(216).sigAddress='&Wind_Turbine_B.Sum_l[0]';
bio(216).ndims=2;
bio(216).size=[];
bio(216).isStruct=false;

bio(217).blkName='Pitch Controller/PI on AoA/Pitch Controller/Actuator Controller/Sum1';
bio(217).sigName='';
bio(217).portIdx=0;
bio(217).dim=[3,1];
bio(217).sigWidth=3;
bio(217).sigAddress='&Wind_Turbine_B.Sum1_k[0]';
bio(217).ndims=2;
bio(217).size=[];
bio(217).isStruct=false;

bio(218).blkName='Pitch Controller/PI on AoA/Pitch Controller/Determine Pitch Command/Limit Pitch Command';
bio(218).sigName='';
bio(218).portIdx=0;
bio(218).dim=[1,1];
bio(218).sigWidth=1;
bio(218).sigAddress='&Wind_Turbine_B.LimitPitchCommand';
bio(218).ndims=2;
bio(218).size=[];
bio(218).isStruct=false;

bio(219).blkName='Pitch Controller/PI on AoA/Pitch Controller/Determine Pitch Command/Sum';
bio(219).sigName='';
bio(219).portIdx=0;
bio(219).dim=[1,1];
bio(219).sigWidth=1;
bio(219).sigAddress='&Wind_Turbine_B.Sum_jc';
bio(219).ndims=2;
bio(219).size=[];
bio(219).isStruct=false;

bio(220).blkName='Pitch Controller/PI on AoA/Pitch Controller/Determine Pitch Command/Check For Park Condition';
bio(220).sigName='';
bio(220).portIdx=0;
bio(220).dim=[1,1];
bio(220).sigWidth=1;
bio(220).sigAddress='&Wind_Turbine_B.CheckForParkCondition';
bio(220).ndims=2;
bio(220).size=[];
bio(220).isStruct=false;

bio(221).blkName='Pitch Controller/PI on AoA/Pitch Controller/Determine Pitch Command/Check For Pitch Brake Condition';
bio(221).sigName='';
bio(221).portIdx=0;
bio(221).dim=[1,1];
bio(221).sigWidth=1;
bio(221).sigAddress='&Wind_Turbine_B.CheckForPitchBrakeCondition';
bio(221).ndims=2;
bio(221).size=[];
bio(221).isStruct=false;

bio(222).blkName='Scopes/Generator Scopes/pu to MW//MVar/3-Phase Active & Reactive Power (Phasor Type)/Complex to Real-Imag/p1';
bio(222).sigName='';
bio(222).portIdx=0;
bio(222).dim=[1,1];
bio(222).sigWidth=1;
bio(222).sigAddress='&Wind_Turbine_B.ComplextoRealImag_o1_m';
bio(222).ndims=2;
bio(222).size=[];
bio(222).isStruct=false;

bio(223).blkName='Scopes/Generator Scopes/pu to MW//MVar/3-Phase Active & Reactive Power (Phasor Type)/Complex to Real-Imag/p2';
bio(223).sigName='';
bio(223).portIdx=1;
bio(223).dim=[1,1];
bio(223).sigWidth=1;
bio(223).sigAddress='&Wind_Turbine_B.ComplextoRealImag_o2_g';
bio(223).ndims=2;
bio(223).size=[];
bio(223).isStruct=false;

bio(224).blkName='Scopes/Generator Scopes/pu to MW//MVar/3-Phase Active & Reactive Power (Phasor Type)/K';
bio(224).sigName='';
bio(224).portIdx=0;
bio(224).dim=[1,1];
bio(224).sigWidth=1;
bio(224).sigAddress='&Wind_Turbine_B.K.re';
bio(224).ndims=2;
bio(224).size=[];
bio(224).isStruct=true;

bio(225).blkName='Scopes/Generator Scopes/pu to MW//MVar/3-Phase Active & Reactive Power (Phasor Type)/Math Function';
bio(225).sigName='';
bio(225).portIdx=0;
bio(225).dim=[3,1];
bio(225).sigWidth=3;
bio(225).sigAddress='&Wind_Turbine_B.MathFunction[0].re';
bio(225).ndims=2;
bio(225).size=[];
bio(225).isStruct=true;

bio(226).blkName='Scopes/Generator Scopes/pu to MW//MVar/3-Phase Active & Reactive Power (Phasor Type)/Product2';
bio(226).sigName='';
bio(226).portIdx=0;
bio(226).dim=[3,1];
bio(226).sigWidth=3;
bio(226).sigAddress='&Wind_Turbine_B.Product2[0].re';
bio(226).ndims=2;
bio(226).size=[];
bio(226).isStruct=true;

bio(227).blkName='Scopes/Generator Scopes/pu to MW//MVar/3-Phase Active & Reactive Power (Phasor Type)/Sum3';
bio(227).sigName='';
bio(227).portIdx=0;
bio(227).dim=[1,1];
bio(227).sigWidth=1;
bio(227).sigAddress='&Wind_Turbine_B.Sum3_k.re';
bio(227).ndims=2;
bio(227).size=[];
bio(227).isStruct=true;

bio(228).blkName='Scopes/Generator Scopes/pu to MW//MVar/Mean Value P/Gain';
bio(228).sigName='';
bio(228).portIdx=0;
bio(228).dim=[1,1];
bio(228).sigWidth=1;
bio(228).sigAddress='&Wind_Turbine_B.Gain_k';
bio(228).ndims=2;
bio(228).size=[];
bio(228).isStruct=false;

bio(229).blkName='Scopes/Generator Scopes/pu to MW//MVar/Mean Value P/integrator';
bio(229).sigName='';
bio(229).portIdx=0;
bio(229).dim=[1,1];
bio(229).sigWidth=1;
bio(229).sigAddress='&Wind_Turbine_B.integrator';
bio(229).ndims=2;
bio(229).size=[];
bio(229).isStruct=false;

bio(230).blkName='Scopes/Generator Scopes/pu to MW//MVar/Mean Value P/Step';
bio(230).sigName='';
bio(230).portIdx=0;
bio(230).dim=[1,1];
bio(230).sigWidth=1;
bio(230).sigAddress='&Wind_Turbine_B.Step';
bio(230).ndims=2;
bio(230).size=[];
bio(230).isStruct=false;

bio(231).blkName='Scopes/Generator Scopes/pu to MW//MVar/Mean Value P/Sum';
bio(231).sigName='';
bio(231).portIdx=0;
bio(231).dim=[1,1];
bio(231).sigWidth=1;
bio(231).sigAddress='&Wind_Turbine_B.Sum_az';
bio(231).ndims=2;
bio(231).size=[];
bio(231).isStruct=false;

bio(232).blkName='Scopes/Generator Scopes/pu to MW//MVar/Mean Value P/Switch';
bio(232).sigName='';
bio(232).portIdx=0;
bio(232).dim=[1,1];
bio(232).sigWidth=1;
bio(232).sigAddress='&Wind_Turbine_B.Switch';
bio(232).ndims=2;
bio(232).size=[];
bio(232).isStruct=false;

bio(233).blkName='Scopes/Generator Scopes/pu to MW//MVar/Mean Value P/Transport Delay';
bio(233).sigName='';
bio(233).portIdx=0;
bio(233).dim=[1,1];
bio(233).sigWidth=1;
bio(233).sigAddress='&Wind_Turbine_B.TransportDelay';
bio(233).ndims=2;
bio(233).size=[];
bio(233).isStruct=false;

bio(234).blkName='Scopes/Generator Scopes/pu to MW//MVar/Mean Value Q/Gain';
bio(234).sigName='';
bio(234).portIdx=0;
bio(234).dim=[1,1];
bio(234).sigWidth=1;
bio(234).sigAddress='&Wind_Turbine_B.Gain_p';
bio(234).ndims=2;
bio(234).size=[];
bio(234).isStruct=false;

bio(235).blkName='Scopes/Generator Scopes/pu to MW//MVar/Mean Value Q/integrator';
bio(235).sigName='';
bio(235).portIdx=0;
bio(235).dim=[1,1];
bio(235).sigWidth=1;
bio(235).sigAddress='&Wind_Turbine_B.integrator_h';
bio(235).ndims=2;
bio(235).size=[];
bio(235).isStruct=false;

bio(236).blkName='Scopes/Generator Scopes/pu to MW//MVar/Mean Value Q/Step';
bio(236).sigName='';
bio(236).portIdx=0;
bio(236).dim=[1,1];
bio(236).sigWidth=1;
bio(236).sigAddress='&Wind_Turbine_B.Step_p';
bio(236).ndims=2;
bio(236).size=[];
bio(236).isStruct=false;

bio(237).blkName='Scopes/Generator Scopes/pu to MW//MVar/Mean Value Q/Sum';
bio(237).sigName='';
bio(237).portIdx=0;
bio(237).dim=[1,1];
bio(237).sigWidth=1;
bio(237).sigAddress='&Wind_Turbine_B.Sum_no';
bio(237).ndims=2;
bio(237).size=[];
bio(237).isStruct=false;

bio(238).blkName='Scopes/Generator Scopes/pu to MW//MVar/Mean Value Q/Switch';
bio(238).sigName='';
bio(238).portIdx=0;
bio(238).dim=[1,1];
bio(238).sigWidth=1;
bio(238).sigAddress='&Wind_Turbine_B.Switch_c';
bio(238).ndims=2;
bio(238).size=[];
bio(238).isStruct=false;

bio(239).blkName='Scopes/Generator Scopes/pu to MW//MVar/Mean Value Q/Transport Delay';
bio(239).sigName='';
bio(239).portIdx=0;
bio(239).dim=[1,1];
bio(239).sigWidth=1;
bio(239).sigAddress='&Wind_Turbine_B.TransportDelay_l';
bio(239).ndims=2;
bio(239).size=[];
bio(239).isStruct=false;

bio(240).blkName='Grid/Grid/Model/Stair Generator/Model/Clock';
bio(240).sigName='';
bio(240).portIdx=0;
bio(240).dim=[1,1];
bio(240).sigWidth=1;
bio(240).sigAddress='&Wind_Turbine_B.Clock';
bio(240).ndims=2;
bio(240).size=[];
bio(240).isStruct=false;

bio(241).blkName='Grid/Grid/Model/Stair Generator/Model/Derivative';
bio(241).sigName='';
bio(241).portIdx=0;
bio(241).dim=[1,1];
bio(241).sigWidth=1;
bio(241).sigAddress='&Wind_Turbine_B.Derivative';
bio(241).ndims=2;
bio(241).size=[];
bio(241).isStruct=false;

bio(242).blkName='Grid/Grid/Model/Stair Generator/Model/Look-Up Table';
bio(242).sigName='';
bio(242).portIdx=0;
bio(242).dim=[1,1];
bio(242).sigWidth=1;
bio(242).sigAddress='&Wind_Turbine_B.LookUpTable';
bio(242).ndims=2;
bio(242).size=[];
bio(242).isStruct=false;

bio(243).blkName='Nacelle/Geartrain/Ideal/Brakes/Signal to Pressure/Engagement Pressure';
bio(243).sigName='';
bio(243).portIdx=0;
bio(243).dim=[1,1];
bio(243).sigWidth=1;
bio(243).sigAddress='&Wind_Turbine_B.EngagementPressure';
bio(243).ndims=2;
bio(243).size=[];
bio(243).isStruct=false;

bio(244).blkName='Nacelle/Geartrain/Ideal/Brakes/Signal to Pressure/Saturation';
bio(244).sigName='';
bio(244).portIdx=0;
bio(244).dim=[1,1];
bio(244).sigWidth=1;
bio(244).sigAddress='&Wind_Turbine_B.Saturation_c';
bio(244).ndims=2;
bio(244).size=[];
bio(244).isStruct=false;

bio(245).blkName='Nacelle/Geartrain/Ideal/Brakes/Signal to Pressure/Sum';
bio(245).sigName='';
bio(245).portIdx=0;
bio(245).dim=[1,1];
bio(245).sigWidth=1;
bio(245).sigAddress='&Wind_Turbine_B.Sum_g';
bio(245).ndims=2;
bio(245).size=[];
bio(245).isStruct=false;

bio(246).blkName='Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/Complex to Magnitude-Angle';
bio(246).sigName='irabc';
bio(246).portIdx=0;
bio(246).dim=[3,1];
bio(246).sigWidth=3;
bio(246).sigAddress='&Wind_Turbine_B.irabc[0]';
bio(246).ndims=2;
bio(246).size=[];
bio(246).isStruct=false;

bio(247).blkName='Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/Complex to Magnitude-Angle1';
bio(247).sigName='isabc';
bio(247).portIdx=0;
bio(247).dim=[3,1];
bio(247).sigWidth=3;
bio(247).sigAddress='&Wind_Turbine_B.isabc[0]';
bio(247).ndims=2;
bio(247).size=[];
bio(247).isStruct=false;

bio(248).blkName='Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/1_Vb';
bio(248).sigName='';
bio(248).portIdx=0;
bio(248).dim=[2,1];
bio(248).sigWidth=2;
bio(248).sigAddress='&Wind_Turbine_B.u_Vb[0].re';
bio(248).ndims=2;
bio(248).size=[];
bio(248).isStruct=true;

bio(249).blkName='Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/Gain';
bio(249).sigName='';
bio(249).portIdx=0;
bio(249).dim=[19,1];
bio(249).sigWidth=19;
bio(249).sigAddress='&Wind_Turbine_B.Gain_lj[0]';
bio(249).ndims=2;
bio(249).size=[];
bio(249).isStruct=false;

bio(250).blkName='Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/ib';
bio(250).sigName='';
bio(250).portIdx=0;
bio(250).dim=[2,1];
bio(250).sigWidth=2;
bio(250).sigAddress='&Wind_Turbine_B.ib[0].re';
bio(250).ndims=2;
bio(250).size=[];
bio(250).isStruct=true;

bio(251).blkName='Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/Product3';
bio(251).sigName='';
bio(251).portIdx=0;
bio(251).dim=[1,1];
bio(251).sigWidth=1;
bio(251).sigAddress='&Wind_Turbine_B.Product3_d';
bio(251).ndims=2;
bio(251).size=[];
bio(251).isStruct=false;

bio(252).blkName='Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/Product4';
bio(252).sigName='';
bio(252).portIdx=0;
bio(252).dim=[1,1];
bio(252).sigWidth=1;
bio(252).sigAddress='&Wind_Turbine_B.Product4_o';
bio(252).ndims=2;
bio(252).size=[];
bio(252).isStruct=false;

bio(253).blkName='Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/Sum2';
bio(253).sigName='s2=ws+wr';
bio(253).portIdx=0;
bio(253).dim=[1,1];
bio(253).sigWidth=1;
bio(253).sigAddress='&Wind_Turbine_B.s2wswr';
bio(253).ndims=2;
bio(253).size=[];
bio(253).isStruct=false;

bio(254).blkName='Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/Sum4';
bio(254).sigName='Neg. seq. Torque';
bio(254).portIdx=0;
bio(254).dim=[1,1];
bio(254).sigWidth=1;
bio(254).sigAddress='&Wind_Turbine_B.NegseqTorque';
bio(254).ndims=2;
bio(254).size=[];
bio(254).isStruct=false;

bio(255).blkName='Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/Sum5';
bio(255).sigName='';
bio(255).portIdx=0;
bio(255).dim=[1,1];
bio(255).sigWidth=1;
bio(255).sigAddress='&Wind_Turbine_B.Sum5_a';
bio(255).ndims=2;
bio(255).size=[];
bio(255).isStruct=false;

bio(256).blkName='Nacelle/Generator/Full/Asynchronous Machine pu Units/Mechanical model/1\\p';
bio(256).sigName='';
bio(256).portIdx=0;
bio(256).dim=[1,1];
bio(256).sigWidth=1;
bio(256).sigAddress='&Wind_Turbine_B.up';
bio(256).ndims=2;
bio(256).size=[];
bio(256).isStruct=false;

bio(257).blkName='Nacelle/Generator/Full/Asynchronous Machine pu Units/Mechanical model/Gain';
bio(257).sigName='';
bio(257).portIdx=0;
bio(257).dim=[3,1];
bio(257).sigWidth=3;
bio(257).sigAddress='&Wind_Turbine_B.Gain_o[0]';
bio(257).ndims=2;
bio(257).size=[];
bio(257).isStruct=false;

bio(258).blkName='Nacelle/Generator/Full/Asynchronous Machine pu Units/Mechanical model/web_psb';
bio(258).sigName='';
bio(258).portIdx=0;
bio(258).dim=[1,1];
bio(258).sigWidth=1;
bio(258).sigAddress='&Wind_Turbine_B.web_psb';
bio(258).ndims=2;
bio(258).size=[];
bio(258).isStruct=false;

bio(259).blkName='Nacelle/Generator/Full/Asynchronous Machine pu Units/Mechanical model/web_psb1';
bio(259).sigName='';
bio(259).portIdx=0;
bio(259).dim=[1,1];
bio(259).sigWidth=1;
bio(259).sigAddress='&Wind_Turbine_B.web_psb1';
bio(259).ndims=2;
bio(259).size=[];
bio(259).isStruct=false;

bio(260).blkName='Nacelle/Generator/Full/Asynchronous Machine pu Units/Mechanical model/Rotor angle thetam';
bio(260).sigName='';
bio(260).portIdx=0;
bio(260).dim=[1,1];
bio(260).sigWidth=1;
bio(260).sigAddress='&Wind_Turbine_B.Rotoranglethetam';
bio(260).ndims=2;
bio(260).size=[];
bio(260).isStruct=false;

bio(261).blkName='Nacelle/Yaw System/Servomotor/Servomotor/Actuator Dynamics/Gain';
bio(261).sigName='';
bio(261).portIdx=0;
bio(261).dim=[4,1];
bio(261).sigWidth=4;
bio(261).sigAddress='&Wind_Turbine_B.Gain_lm[0]';
bio(261).ndims=2;
bio(261).size=[];
bio(261).isStruct=false;

bio(262).blkName='Nacelle/Yaw System/Servomotor/Servomotor/Actuator Dynamics/Integrator';
bio(262).sigName='';
bio(262).portIdx=0;
bio(262).dim=[4,1];
bio(262).sigWidth=4;
bio(262).sigAddress='&Wind_Turbine_B.Integrator_if[0]';
bio(262).ndims=2;
bio(262).size=[];
bio(262).isStruct=false;

bio(263).blkName='Nacelle/Yaw System/Servomotor/Servomotor/Actuator Dynamics/Sum';
bio(263).sigName='';
bio(263).portIdx=0;
bio(263).dim=[4,1];
bio(263).sigWidth=4;
bio(263).sigAddress='&Wind_Turbine_B.Sum_a[0]';
bio(263).ndims=2;
bio(263).size=[];
bio(263).isStruct=false;

bio(264).blkName='Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Actuator Position to Nacelle Angle';
bio(264).sigName='';
bio(264).portIdx=0;
bio(264).dim=[1,1];
bio(264).sigWidth=1;
bio(264).sigAddress='&Wind_Turbine_B.Nacelle_Yaw_Angle';
bio(264).ndims=2;
bio(264).size=[];
bio(264).isStruct=false;

bio(265).blkName='Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Actuator Speed to Nacelle Yaw Rate';
bio(265).sigName='';
bio(265).portIdx=0;
bio(265).dim=[1,1];
bio(265).sigWidth=1;
bio(265).sigAddress='&Wind_Turbine_B.ActuatorSpeedtoNacelleYawRate_d';
bio(265).ndims=2;
bio(265).size=[];
bio(265).isStruct=false;

bio(266).blkName='Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Actuator Position to Nacelle Angle';
bio(266).sigName='';
bio(266).portIdx=0;
bio(266).dim=[1,1];
bio(266).sigWidth=1;
bio(266).sigAddress='&Wind_Turbine_B.ActuatorPositiontoNacelleAngle';
bio(266).ndims=2;
bio(266).size=[];
bio(266).isStruct=false;

bio(267).blkName='Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Actuator Speed to Nacelle Yaw Rate';
bio(267).sigName='';
bio(267).portIdx=0;
bio(267).dim=[1,1];
bio(267).sigWidth=1;
bio(267).sigAddress='&Wind_Turbine_B.ActuatorSpeedtoNacelleYawRate_a';
bio(267).ndims=2;
bio(267).size=[];
bio(267).isStruct=false;

bio(268).blkName='Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Actuator Position to Nacelle Angle';
bio(268).sigName='';
bio(268).portIdx=0;
bio(268).dim=[1,1];
bio(268).sigWidth=1;
bio(268).sigAddress='&Wind_Turbine_B.ActuatorPositiontoNacelleAngl_i';
bio(268).ndims=2;
bio(268).size=[];
bio(268).isStruct=false;

bio(269).blkName='Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Actuator Speed to Nacelle Yaw Rate';
bio(269).sigName='';
bio(269).portIdx=0;
bio(269).dim=[1,1];
bio(269).sigWidth=1;
bio(269).sigAddress='&Wind_Turbine_B.ActuatorSpeedtoNacelleYawRate_f';
bio(269).ndims=2;
bio(269).size=[];
bio(269).isStruct=false;

bio(270).blkName='Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Actuator Position to Nacelle Angle';
bio(270).sigName='';
bio(270).portIdx=0;
bio(270).dim=[1,1];
bio(270).sigWidth=1;
bio(270).sigAddress='&Wind_Turbine_B.ActuatorPositiontoNacelleAngl_k';
bio(270).ndims=2;
bio(270).size=[];
bio(270).isStruct=false;

bio(271).blkName='Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Actuator Speed to Nacelle Yaw Rate';
bio(271).sigName='';
bio(271).portIdx=0;
bio(271).dim=[1,1];
bio(271).sigWidth=1;
bio(271).sigAddress='&Wind_Turbine_B.ActuatorSpeedtoNacelleYawRate';
bio(271).ndims=2;
bio(271).size=[];
bio(271).isStruct=false;

bio(272).blkName='Pitch Controller/PI on AoA/Pitch Controller/Actuator Controller/PI Controller/Integral Gain';
bio(272).sigName='';
bio(272).portIdx=0;
bio(272).dim=[3,1];
bio(272).sigWidth=3;
bio(272).sigAddress='&Wind_Turbine_B.IntegralGain[0]';
bio(272).ndims=2;
bio(272).size=[];
bio(272).isStruct=false;

bio(273).blkName='Pitch Controller/PI on AoA/Pitch Controller/Actuator Controller/PI Controller/Proportional Gain';
bio(273).sigName='';
bio(273).portIdx=0;
bio(273).dim=[3,1];
bio(273).sigWidth=3;
bio(273).sigAddress='&Wind_Turbine_B.ProportionalGain_b[0]';
bio(273).ndims=2;
bio(273).size=[];
bio(273).isStruct=false;

bio(274).blkName='Pitch Controller/PI on AoA/Pitch Controller/Actuator Controller/PI Controller/Integrator';
bio(274).sigName='';
bio(274).portIdx=0;
bio(274).dim=[3,1];
bio(274).sigWidth=3;
bio(274).sigAddress='&Wind_Turbine_B.Integrator_l[0]';
bio(274).ndims=2;
bio(274).size=[];
bio(274).isStruct=false;

bio(275).blkName='Pitch Controller/PI on AoA/Pitch Controller/Actuator Controller/PI Controller/Sum';
bio(275).sigName='';
bio(275).portIdx=0;
bio(275).dim=[3,1];
bio(275).sigWidth=3;
bio(275).sigAddress='&Wind_Turbine_B.Sum_e5[0]';
bio(275).ndims=2;
bio(275).size=[];
bio(275).isStruct=false;

bio(276).blkName='Pitch Controller/PI on AoA/Pitch Controller/Determine Pitch Command/Determine Angle of Attack if Pitch Angle Were 0/rad2deg';
bio(276).sigName='';
bio(276).portIdx=0;
bio(276).dim=[1,1];
bio(276).sigWidth=1;
bio(276).sigAddress='&Wind_Turbine_B.rad2deg';
bio(276).ndims=2;
bio(276).size=[];
bio(276).isStruct=false;

bio(277).blkName='Pitch Controller/PI on AoA/Pitch Controller/Determine Pitch Command/Determine Angle of Attack if Pitch Angle Were 0/radps2mps';
bio(277).sigName='';
bio(277).portIdx=0;
bio(277).dim=[1,1];
bio(277).sigWidth=1;
bio(277).sigAddress='&Wind_Turbine_B.radps2mps';
bio(277).ndims=2;
bio(277).size=[];
bio(277).isStruct=false;

bio(278).blkName='Pitch Controller/PI on AoA/Pitch Controller/Determine Pitch Command/Determine Angle of Attack if Pitch Angle Were 0/Trigonometric Function';
bio(278).sigName='';
bio(278).portIdx=0;
bio(278).dim=[1,1];
bio(278).sigWidth=1;
bio(278).sigAddress='&Wind_Turbine_B.TrigonometricFunction';
bio(278).ndims=2;
bio(278).size=[];
bio(278).isStruct=false;

bio(279).blkName='Pitch Controller/PI on AoA/Pitch Controller/Determine Pitch Command/Determine Desired Angle of Attack/radps2rpm';
bio(279).sigName='';
bio(279).portIdx=0;
bio(279).dim=[1,1];
bio(279).sigWidth=1;
bio(279).sigAddress='&Wind_Turbine_B.radps2rpm';
bio(279).ndims=2;
bio(279).size=[];
bio(279).isStruct=false;

bio(280).blkName='Pitch Controller/PI on AoA/Pitch Controller/Determine Pitch Command/Determine Desired Angle of Attack/Saturation';
bio(280).sigName='';
bio(280).portIdx=0;
bio(280).dim=[1,1];
bio(280).sigWidth=1;
bio(280).sigAddress='&Wind_Turbine_B.Saturation';
bio(280).ndims=2;
bio(280).size=[];
bio(280).isStruct=false;

bio(281).blkName='Pitch Controller/PI on AoA/Pitch Controller/Determine Pitch Command/Determine Desired Angle of Attack/Sum';
bio(281).sigName='';
bio(281).portIdx=0;
bio(281).dim=[1,1];
bio(281).sigWidth=1;
bio(281).sigAddress='&Wind_Turbine_B.Sum_k';
bio(281).ndims=2;
bio(281).size=[];
bio(281).isStruct=false;

bio(282).blkName='Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/Matrix W Synchronous Ref. Frame /W(3,4)=1-wr';
bio(282).sigName='';
bio(282).portIdx=0;
bio(282).dim=[4,4];
bio(282).sigWidth=16;
bio(282).sigAddress='&Wind_Turbine_B.W341wr[0]';
bio(282).ndims=2;
bio(282).size=[];
bio(282).isStruct=false;

bio(283).blkName='Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/Matrix W Synchronous Ref. Frame /W(4,3)=wr-1';
bio(283).sigName='';
bio(283).portIdx=0;
bio(283).dim=[4,4];
bio(283).sigWidth=16;
bio(283).sigAddress='&Wind_Turbine_B.W43wr1[0]';
bio(283).ndims=2;
bio(283).size=[];
bio(283).isStruct=false;

bio(284).blkName='Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/Matrix W Synchronous Ref. Frame /Gain2';
bio(284).sigName='';
bio(284).portIdx=0;
bio(284).dim=[1,1];
bio(284).sigWidth=1;
bio(284).sigAddress='&Wind_Turbine_B.Gain2_o';
bio(284).ndims=2;
bio(284).size=[];
bio(284).isStruct=false;

bio(285).blkName='Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/Matrix W Synchronous Ref. Frame /Sum';
bio(285).sigName='we-wr';
bio(285).portIdx=0;
bio(285).dim=[1,1];
bio(285).sigWidth=1;
bio(285).sigAddress='&Wind_Turbine_B.wewr';
bio(285).ndims=2;
bio(285).size=[];
bio(285).isStruct=false;

bio(286).blkName='Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/abc2dq/Complex to Real-Imag/p1';
bio(286).sigName='';
bio(286).portIdx=0;
bio(286).dim=[1,1];
bio(286).sigWidth=1;
bio(286).sigAddress='&Wind_Turbine_B.ComplextoRealImag_o1_p';
bio(286).ndims=2;
bio(286).size=[];
bio(286).isStruct=false;

bio(287).blkName='Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/abc2dq/Complex to Real-Imag/p2';
bio(287).sigName='';
bio(287).portIdx=1;
bio(287).dim=[1,1];
bio(287).sigWidth=1;
bio(287).sigAddress='&Wind_Turbine_B.ComplextoRealImag_o2_f';
bio(287).ndims=2;
bio(287).size=[];
bio(287).isStruct=false;

bio(288).blkName='Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/abc2dq/Complex to Real-Imag3/p1';
bio(288).sigName='';
bio(288).portIdx=0;
bio(288).dim=[1,1];
bio(288).sigWidth=1;
bio(288).sigAddress='&Wind_Turbine_B.ComplextoRealImag3_o1';
bio(288).ndims=2;
bio(288).size=[];
bio(288).isStruct=false;

bio(289).blkName='Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/abc2dq/Complex to Real-Imag3/p2';
bio(289).sigName='';
bio(289).portIdx=1;
bio(289).dim=[1,1];
bio(289).sigWidth=1;
bio(289).sigAddress='&Wind_Turbine_B.ComplextoRealImag3_o2';
bio(289).ndims=2;
bio(289).size=[];
bio(289).isStruct=false;

bio(290).blkName='Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/abc2dq/(a^2)//3';
bio(290).sigName='';
bio(290).portIdx=0;
bio(290).dim=[1,1];
bio(290).sigWidth=1;
bio(290).sigAddress='&Wind_Turbine_B.a23.re';
bio(290).ndims=2;
bio(290).size=[];
bio(290).isStruct=true;

bio(291).blkName='Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/abc2dq/Gain';
bio(291).sigName='';
bio(291).portIdx=0;
bio(291).dim=[1,1];
bio(291).sigWidth=1;
bio(291).sigAddress='&Wind_Turbine_B.Gain.re';
bio(291).ndims=2;
bio(291).size=[];
bio(291).isStruct=true;

bio(292).blkName='Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/abc2dq/Gain1';
bio(292).sigName='';
bio(292).portIdx=0;
bio(292).dim=[1,1];
bio(292).sigWidth=1;
bio(292).sigAddress='&Wind_Turbine_B.Gain1.re';
bio(292).ndims=2;
bio(292).size=[];
bio(292).isStruct=true;

bio(293).blkName='Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/abc2dq/a//3';
bio(293).sigName='';
bio(293).portIdx=0;
bio(293).dim=[1,1];
bio(293).sigWidth=1;
bio(293).sigAddress='&Wind_Turbine_B.a3.re';
bio(293).ndims=2;
bio(293).size=[];
bio(293).isStruct=true;

bio(294).blkName='Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/abc2dq/Sum3';
bio(294).sigName='V1';
bio(294).portIdx=0;
bio(294).dim=[1,1];
bio(294).sigWidth=1;
bio(294).sigAddress='&Wind_Turbine_B.V1.re';
bio(294).ndims=2;
bio(294).size=[];
bio(294).isStruct=true;

bio(295).blkName='Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/abc2dq/Sum4';
bio(295).sigName='V2';
bio(295).portIdx=0;
bio(295).dim=[1,1];
bio(295).sigWidth=1;
bio(295).sigAddress='&Wind_Turbine_B.V2.re';
bio(295).ndims=2;
bio(295).size=[];
bio(295).isStruct=true;

bio(296).blkName='Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/positive-sequence state-space model (4 states, with saturation)/Product3';
bio(296).sigName='';
bio(296).portIdx=0;
bio(296).dim=[4,1];
bio(296).sigWidth=4;
bio(296).sigAddress='&Wind_Turbine_B.Product3_l[0]';
bio(296).ndims=2;
bio(296).size=[];
bio(296).isStruct=false;

bio(297).blkName='Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/positive-sequence state-space model (4 states, with saturation)/Sum1';
bio(297).sigName='A';
bio(297).portIdx=0;
bio(297).dim=[4,4];
bio(297).sigWidth=16;
bio(297).sigAddress='&Wind_Turbine_B.A[0]';
bio(297).ndims=2;
bio(297).size=[];
bio(297).isStruct=false;

bio(298).blkName='Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/positive-sequence state-space model (4 states, with saturation)/Switch';
bio(298).sigName='Linv';
bio(298).portIdx=0;
bio(298).dim=[4,4];
bio(298).sigWidth=16;
bio(298).sigAddress='&Wind_Turbine_B.Linv[0]';
bio(298).ndims=2;
bio(298).size=[];
bio(298).isStruct=false;

bio(299).blkName='Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/positive-sequence state-space model (4 states, with saturation)/Switch1';
bio(299).sigName='R*Linv';
bio(299).portIdx=0;
bio(299).dim=[4,4];
bio(299).sigWidth=16;
bio(299).sigAddress='&Wind_Turbine_B.RLinv[0]';
bio(299).ndims=2;
bio(299).size=[];
bio(299).isStruct=false;

bio(300).blkName='Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/positive-sequence state-space model (4 states, with saturation)/Switch2';
bio(300).sigName='';
bio(300).portIdx=0;
bio(300).dim=[1,1];
bio(300).sigWidth=1;
bio(300).sigAddress='&Wind_Turbine_B.Switch2_a';
bio(300).ndims=2;
bio(300).size=[];
bio(300).isStruct=false;

bio(301).blkName='Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/simpilified negative-sequence model (2 states, no saturation)/Complex to Real-Imag/p1';
bio(301).sigName='Phids2';
bio(301).portIdx=0;
bio(301).dim=[1,1];
bio(301).sigWidth=1;
bio(301).sigAddress='&Wind_Turbine_B.Phids2';
bio(301).ndims=2;
bio(301).size=[];
bio(301).isStruct=false;

bio(302).blkName='Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/simpilified negative-sequence model (2 states, no saturation)/Complex to Real-Imag/p2';
bio(302).sigName='Phiqs2';
bio(302).portIdx=1;
bio(302).dim=[1,1];
bio(302).sigWidth=1;
bio(302).sigAddress='&Wind_Turbine_B.Phiqs2';
bio(302).ndims=2;
bio(302).size=[];
bio(302).isStruct=false;

bio(303).blkName='Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/simpilified negative-sequence model (2 states, no saturation)/-pi//2  phase shift';
bio(303).sigName='Phi2';
bio(303).portIdx=0;
bio(303).dim=[1,1];
bio(303).sigWidth=1;
bio(303).sigAddress='&Wind_Turbine_B.Phi2.re';
bio(303).ndims=2;
bio(303).size=[];
bio(303).isStruct=true;

bio(304).blkName='Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/simpilified negative-sequence model (2 states, no saturation)/Gain1';
bio(304).sigName='';
bio(304).portIdx=0;
bio(304).dim=[1,1];
bio(304).sigWidth=1;
bio(304).sigAddress='&Wind_Turbine_B.Gain1_e.re';
bio(304).ndims=2;
bio(304).size=[];
bio(304).isStruct=true;

bio(305).blkName='Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/simpilified negative-sequence model (2 states, no saturation)/Gain2';
bio(305).sigName='';
bio(305).portIdx=0;
bio(305).dim=[1,1];
bio(305).sigWidth=1;
bio(305).sigAddress='&Wind_Turbine_B.Gain2.re';
bio(305).ndims=2;
bio(305).size=[];
bio(305).isStruct=true;

bio(306).blkName='Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/simpilified negative-sequence model (2 states, no saturation)/Gain3';
bio(306).sigName='';
bio(306).portIdx=0;
bio(306).dim=[2,1];
bio(306).sigWidth=2;
bio(306).sigAddress='&Wind_Turbine_B.Gain3_d[0]';
bio(306).ndims=2;
bio(306).size=[];
bio(306).isStruct=false;

bio(307).blkName='Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/simpilified negative-sequence model (2 states, no saturation)/Gain4';
bio(307).sigName='';
bio(307).portIdx=0;
bio(307).dim=[2,1];
bio(307).sigWidth=2;
bio(307).sigAddress='&Wind_Turbine_B.Gain4[0]';
bio(307).ndims=2;
bio(307).size=[];
bio(307).isStruct=false;

bio(308).blkName='Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/simpilified negative-sequence model (2 states, no saturation)/Integrator';
bio(308).sigName='Iqds2';
bio(308).portIdx=0;
bio(308).dim=[2,1];
bio(308).sigWidth=2;
bio(308).sigAddress='&Wind_Turbine_B.Iqds2[0]';
bio(308).ndims=2;
bio(308).size=[];
bio(308).isStruct=false;

bio(309).blkName='Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/simpilified negative-sequence model (2 states, no saturation)/Product1';
bio(309).sigName='Iqd2*R2/L2';
bio(309).portIdx=0;
bio(309).dim=[2,1];
bio(309).sigWidth=2;
bio(309).sigAddress='&Wind_Turbine_B.Iqd2R2L2[0]';
bio(309).ndims=2;
bio(309).size=[];
bio(309).isStruct=false;

bio(310).blkName='Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/simpilified negative-sequence model (2 states, no saturation)/Product2';
bio(310).sigName='Vqd2/L2';
bio(310).portIdx=0;
bio(310).dim=[2,1];
bio(310).sigWidth=2;
bio(310).sigAddress='&Wind_Turbine_B.Vqd2L2[0]';
bio(310).ndims=2;
bio(310).size=[];
bio(310).isStruct=false;

bio(311).blkName='Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/simpilified negative-sequence model (2 states, no saturation)/Product3';
bio(311).sigName='';
bio(311).portIdx=0;
bio(311).dim=[1,1];
bio(311).sigWidth=1;
bio(311).sigAddress='&Wind_Turbine_B.Product3.re';
bio(311).ndims=2;
bio(311).size=[];
bio(311).isStruct=true;

bio(312).blkName='Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/simpilified negative-sequence model (2 states, no saturation)/Real-Imag to Complex';
bio(312).sigName='';
bio(312).portIdx=0;
bio(312).dim=[1,1];
bio(312).sigWidth=1;
bio(312).sigAddress='&Wind_Turbine_B.RealImagtoComplex_b.re';
bio(312).ndims=2;
bio(312).size=[];
bio(312).isStruct=true;

bio(313).blkName='Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/simpilified negative-sequence model (2 states, no saturation)/Real-Imag to Complex1';
bio(313).sigName='';
bio(313).portIdx=0;
bio(313).dim=[1,1];
bio(313).sigWidth=1;
bio(313).sigAddress='&Wind_Turbine_B.RealImagtoComplex1.re';
bio(313).ndims=2;
bio(313).size=[];
bio(313).isStruct=true;

bio(314).blkName='Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/simpilified negative-sequence model (2 states, no saturation)/Sum';
bio(314).sigName='';
bio(314).portIdx=0;
bio(314).dim=[2,1];
bio(314).sigWidth=2;
bio(314).sigAddress='&Wind_Turbine_B.Sum_df[0]';
bio(314).ndims=2;
bio(314).size=[];
bio(314).isStruct=false;

bio(315).blkName='Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/simpilified negative-sequence model (2 states, no saturation)/Sum1';
bio(315).sigName='Vm2';
bio(315).portIdx=0;
bio(315).dim=[1,1];
bio(315).sigWidth=1;
bio(315).sigAddress='&Wind_Turbine_B.Vm2.re';
bio(315).ndims=2;
bio(315).size=[];
bio(315).isStruct=true;

bio(316).blkName='Nacelle/Generator/Full/B_Gen/Model/I A:/do not delete this gain';
bio(316).sigName='';
bio(316).portIdx=0;
bio(316).dim=[1,1];
bio(316).sigWidth=1;
bio(316).sigAddress='&Wind_Turbine_B.donotdeletethisgain_ee.re';
bio(316).ndims=2;
bio(316).size=[];
bio(316).isStruct=true;

bio(317).blkName='Nacelle/Generator/Full/B_Gen/Model/I B:/do not delete this gain';
bio(317).sigName='';
bio(317).portIdx=0;
bio(317).dim=[1,1];
bio(317).sigWidth=1;
bio(317).sigAddress='&Wind_Turbine_B.donotdeletethisgain_g1.re';
bio(317).ndims=2;
bio(317).size=[];
bio(317).isStruct=true;

bio(318).blkName='Nacelle/Generator/Full/B_Gen/Model/I C:/do not delete this gain';
bio(318).sigName='';
bio(318).portIdx=0;
bio(318).dim=[1,1];
bio(318).sigWidth=1;
bio(318).sigAddress='&Wind_Turbine_B.donotdeletethisgain_i.re';
bio(318).ndims=2;
bio(318).size=[];
bio(318).isStruct=true;

bio(319).blkName='Nacelle/Generator/Full/B_Gen/Model/U A:/do not delete this gain';
bio(319).sigName='';
bio(319).portIdx=0;
bio(319).dim=[1,1];
bio(319).sigWidth=1;
bio(319).sigAddress='&Wind_Turbine_B.donotdeletethisgain.re';
bio(319).ndims=2;
bio(319).size=[];
bio(319).isStruct=true;

bio(320).blkName='Nacelle/Generator/Full/B_Gen/Model/U B:/do not delete this gain';
bio(320).sigName='';
bio(320).portIdx=0;
bio(320).dim=[1,1];
bio(320).sigWidth=1;
bio(320).sigAddress='&Wind_Turbine_B.donotdeletethisgain_g.re';
bio(320).ndims=2;
bio(320).size=[];
bio(320).isStruct=true;

bio(321).blkName='Nacelle/Generator/Full/B_Gen/Model/U C:/do not delete this gain';
bio(321).sigName='';
bio(321).portIdx=0;
bio(321).dim=[1,1];
bio(321).sigWidth=1;
bio(321).sigAddress='&Wind_Turbine_B.donotdeletethisgain_e.re';
bio(321).ndims=2;
bio(321).size=[];
bio(321).isStruct=true;

bio(322).blkName='Nacelle/Generator/Full/Trip Breaker1/Breaker A/Model/Data Type  Conversion';
bio(322).sigName='';
bio(322).portIdx=0;
bio(322).dim=[1,1];
bio(322).sigWidth=1;
bio(322).sigAddress='&Wind_Turbine_B.DataTypeConversion_j';
bio(322).ndims=2;
bio(322).size=[];
bio(322).isStruct=false;

bio(323).blkName='Nacelle/Generator/Full/Trip Breaker1/Breaker A/Model/Switch3';
bio(323).sigName='';
bio(323).portIdx=0;
bio(323).dim=[1,1];
bio(323).sigWidth=1;
bio(323).sigAddress='&Wind_Turbine_B.Switch3_d';
bio(323).ndims=2;
bio(323).size=[];
bio(323).isStruct=false;

bio(324).blkName='Nacelle/Generator/Full/Trip Breaker1/Breaker B/Model/Data Type  Conversion';
bio(324).sigName='';
bio(324).portIdx=0;
bio(324).dim=[1,1];
bio(324).sigWidth=1;
bio(324).sigAddress='&Wind_Turbine_B.DataTypeConversion_b';
bio(324).ndims=2;
bio(324).size=[];
bio(324).isStruct=false;

bio(325).blkName='Nacelle/Generator/Full/Trip Breaker1/Breaker B/Model/Switch3';
bio(325).sigName='';
bio(325).portIdx=0;
bio(325).dim=[1,1];
bio(325).sigWidth=1;
bio(325).sigAddress='&Wind_Turbine_B.Switch3_j';
bio(325).ndims=2;
bio(325).size=[];
bio(325).isStruct=false;

bio(326).blkName='Nacelle/Generator/Full/Trip Breaker1/Breaker C/Model/Data Type  Conversion';
bio(326).sigName='';
bio(326).portIdx=0;
bio(326).dim=[1,1];
bio(326).sigWidth=1;
bio(326).sigAddress='&Wind_Turbine_B.DataTypeConversion_n';
bio(326).ndims=2;
bio(326).size=[];
bio(326).isStruct=false;

bio(327).blkName='Nacelle/Generator/Full/Trip Breaker1/Breaker C/Model/Switch3';
bio(327).sigName='';
bio(327).portIdx=0;
bio(327).dim=[1,1];
bio(327).sigWidth=1;
bio(327).sigAddress='&Wind_Turbine_B.Switch3_dw';
bio(327).ndims=2;
bio(327).size=[];
bio(327).isStruct=false;

bio(328).blkName='Nacelle/Generator/Full/Trip Breaker1/Stair Generator/Model/Clock';
bio(328).sigName='';
bio(328).portIdx=0;
bio(328).dim=[1,1];
bio(328).sigWidth=1;
bio(328).sigAddress='&Wind_Turbine_B.Clock_o';
bio(328).ndims=2;
bio(328).size=[];
bio(328).isStruct=false;

bio(329).blkName='Nacelle/Generator/Full/Trip Breaker1/Stair Generator/Model/Derivative';
bio(329).sigName='';
bio(329).portIdx=0;
bio(329).dim=[1,1];
bio(329).sigWidth=1;
bio(329).sigAddress='&Wind_Turbine_B.Derivative_p';
bio(329).ndims=2;
bio(329).size=[];
bio(329).isStruct=false;

bio(330).blkName='Nacelle/Generator/Full/Trip Breaker1/Stair Generator/Model/Look-Up Table';
bio(330).sigName='';
bio(330).portIdx=0;
bio(330).dim=[1,1];
bio(330).sigWidth=1;
bio(330).sigAddress='&Wind_Turbine_B.LookUpTable_i';
bio(330).ndims=2;
bio(330).size=[];
bio(330).isStruct=false;

bio(331).blkName='Nacelle/Generator/Full/Trip Breaker2/Breaker A/Model/Data Type  Conversion';
bio(331).sigName='';
bio(331).portIdx=0;
bio(331).dim=[1,1];
bio(331).sigWidth=1;
bio(331).sigAddress='&Wind_Turbine_B.DataTypeConversion_f';
bio(331).ndims=2;
bio(331).size=[];
bio(331).isStruct=false;

bio(332).blkName='Nacelle/Generator/Full/Trip Breaker2/Breaker A/Model/Switch3';
bio(332).sigName='';
bio(332).portIdx=0;
bio(332).dim=[1,1];
bio(332).sigWidth=1;
bio(332).sigAddress='&Wind_Turbine_B.Switch3_er';
bio(332).ndims=2;
bio(332).size=[];
bio(332).isStruct=false;

bio(333).blkName='Nacelle/Generator/Full/Trip Breaker2/Breaker B/Model/Data Type  Conversion';
bio(333).sigName='';
bio(333).portIdx=0;
bio(333).dim=[1,1];
bio(333).sigWidth=1;
bio(333).sigAddress='&Wind_Turbine_B.DataTypeConversion_l';
bio(333).ndims=2;
bio(333).size=[];
bio(333).isStruct=false;

bio(334).blkName='Nacelle/Generator/Full/Trip Breaker2/Breaker B/Model/Switch3';
bio(334).sigName='';
bio(334).portIdx=0;
bio(334).dim=[1,1];
bio(334).sigWidth=1;
bio(334).sigAddress='&Wind_Turbine_B.Switch3_a';
bio(334).ndims=2;
bio(334).size=[];
bio(334).isStruct=false;

bio(335).blkName='Nacelle/Generator/Full/Trip Breaker2/Breaker C/Model/Data Type  Conversion';
bio(335).sigName='';
bio(335).portIdx=0;
bio(335).dim=[1,1];
bio(335).sigWidth=1;
bio(335).sigAddress='&Wind_Turbine_B.DataTypeConversion_k';
bio(335).ndims=2;
bio(335).size=[];
bio(335).isStruct=false;

bio(336).blkName='Nacelle/Generator/Full/Trip Breaker2/Breaker C/Model/Switch3';
bio(336).sigName='';
bio(336).portIdx=0;
bio(336).dim=[1,1];
bio(336).sigWidth=1;
bio(336).sigAddress='&Wind_Turbine_B.Switch3_h';
bio(336).ndims=2;
bio(336).size=[];
bio(336).isStruct=false;

bio(337).blkName='Nacelle/Generator/Full/Trip Breaker2/Stair Generator/Model/Clock';
bio(337).sigName='';
bio(337).portIdx=0;
bio(337).dim=[1,1];
bio(337).sigWidth=1;
bio(337).sigAddress='&Wind_Turbine_B.Clock_e';
bio(337).ndims=2;
bio(337).size=[];
bio(337).isStruct=false;

bio(338).blkName='Nacelle/Generator/Full/Trip Breaker2/Stair Generator/Model/Derivative';
bio(338).sigName='';
bio(338).portIdx=0;
bio(338).dim=[1,1];
bio(338).sigWidth=1;
bio(338).sigAddress='&Wind_Turbine_B.Derivative_i';
bio(338).ndims=2;
bio(338).size=[];
bio(338).isStruct=false;

bio(339).blkName='Nacelle/Generator/Full/Trip Breaker2/Stair Generator/Model/Look-Up Table';
bio(339).sigName='';
bio(339).portIdx=0;
bio(339).dim=[1,1];
bio(339).sigWidth=1;
bio(339).sigAddress='&Wind_Turbine_B.LookUpTable_g';
bio(339).ndims=2;
bio(339).size=[];
bio(339).isStruct=false;

bio(340).blkName='Nacelle/Hub Axis/Rotate/Sensing/PS-Simulink Converter/EVAL_KEY/GAIN';
bio(340).sigName='';
bio(340).portIdx=0;
bio(340).dim=[1,1];
bio(340).sigWidth=1;
bio(340).sigAddress='&Wind_Turbine_B.GAIN_i';
bio(340).ndims=2;
bio(340).size=[];
bio(340).isStruct=false;

bio(341).blkName='Nacelle/Pitch System/Hydraulic/Hydraulic/Actuator_1/EM Logic/Switch';
bio(341).sigName='';
bio(341).portIdx=0;
bio(341).dim=[1,1];
bio(341).sigWidth=1;
bio(341).sigAddress='&Wind_Turbine_B.Switch_h';
bio(341).ndims=2;
bio(341).size=[];
bio(341).isStruct=false;

bio(342).blkName='Nacelle/Pitch System/Hydraulic/Hydraulic/Actuator_2/EM Logic/Switch';
bio(342).sigName='';
bio(342).portIdx=0;
bio(342).dim=[1,1];
bio(342).sigWidth=1;
bio(342).sigAddress='&Wind_Turbine_B.Switch_hx';
bio(342).ndims=2;
bio(342).size=[];
bio(342).isStruct=false;

bio(343).blkName='Nacelle/Pitch System/Hydraulic/Hydraulic/Actuator_3/EM Logic/Switch';
bio(343).sigName='';
bio(343).portIdx=0;
bio(343).dim=[1,1];
bio(343).sigWidth=1;
bio(343).sigAddress='&Wind_Turbine_B.Switch_d';
bio(343).ndims=2;
bio(343).size=[];
bio(343).isStruct=false;

bio(344).blkName='Pitch Controller/PI on AoA/Pitch Controller/Determine Pitch Command/Determine Desired Angle of Attack/PI Controller Rotor Speed/Integral Gain';
bio(344).sigName='';
bio(344).portIdx=0;
bio(344).dim=[1,1];
bio(344).sigWidth=1;
bio(344).sigAddress='&Wind_Turbine_B.IntegralGain_b';
bio(344).ndims=2;
bio(344).size=[];
bio(344).isStruct=false;

bio(345).blkName='Pitch Controller/PI on AoA/Pitch Controller/Determine Pitch Command/Determine Desired Angle of Attack/PI Controller Rotor Speed/Proportional Gain';
bio(345).sigName='';
bio(345).portIdx=0;
bio(345).dim=[1,1];
bio(345).sigWidth=1;
bio(345).sigAddress='&Wind_Turbine_B.ProportionalGain';
bio(345).ndims=2;
bio(345).size=[];
bio(345).isStruct=false;

bio(346).blkName='Pitch Controller/PI on AoA/Pitch Controller/Determine Pitch Command/Determine Desired Angle of Attack/PI Controller Rotor Speed/Integrator';
bio(346).sigName='';
bio(346).portIdx=0;
bio(346).dim=[1,1];
bio(346).sigWidth=1;
bio(346).sigAddress='&Wind_Turbine_B.Integrator_m';
bio(346).ndims=2;
bio(346).size=[];
bio(346).isStruct=false;

bio(347).blkName='Pitch Controller/PI on AoA/Pitch Controller/Determine Pitch Command/Determine Desired Angle of Attack/PI Controller Rotor Speed/Sum';
bio(347).sigName='';
bio(347).portIdx=0;
bio(347).dim=[1,1];
bio(347).sigWidth=1;
bio(347).sigAddress='&Wind_Turbine_B.Sum_o';
bio(347).ndims=2;
bio(347).size=[];
bio(347).isStruct=false;

bio(348).blkName='Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/dq2abc/Phasors Ia Ib rotor/a';
bio(348).sigName='';
bio(348).portIdx=0;
bio(348).dim=[1,1];
bio(348).sigWidth=1;
bio(348).sigAddress='&Wind_Turbine_B.a_g.re';
bio(348).ndims=2;
bio(348).size=[];
bio(348).isStruct=true;

bio(349).blkName='Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/dq2abc/Phasors Ia Ib rotor/a^2';
bio(349).sigName='';
bio(349).portIdx=0;
bio(349).dim=[1,1];
bio(349).sigWidth=1;
bio(349).sigAddress='&Wind_Turbine_B.a2_k.re';
bio(349).ndims=2;
bio(349).size=[];
bio(349).isStruct=true;

bio(350).blkName='Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/dq2abc/Phasors Ia Ib rotor/inv';
bio(350).sigName='ic';
bio(350).portIdx=0;
bio(350).dim=[1,1];
bio(350).sigWidth=1;
bio(350).sigAddress='&Wind_Turbine_B.ic.re';
bio(350).ndims=2;
bio(350).size=[];
bio(350).isStruct=true;

bio(351).blkName='Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/dq2abc/Phasors Ia Ib rotor/Real-Imag to Complex';
bio(351).sigName='I1';
bio(351).portIdx=0;
bio(351).dim=[1,1];
bio(351).sigWidth=1;
bio(351).sigAddress='&Wind_Turbine_B.I1_c.re';
bio(351).ndims=2;
bio(351).size=[];
bio(351).isStruct=true;

bio(352).blkName='Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/dq2abc/Phasors Ia Ib rotor/Sum';
bio(352).sigName='';
bio(352).portIdx=0;
bio(352).dim=[1,1];
bio(352).sigWidth=1;
bio(352).sigAddress='&Wind_Turbine_B.Sum.re';
bio(352).ndims=2;
bio(352).size=[];
bio(352).isStruct=true;

bio(353).blkName='Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/dq2abc/Phasors Ia Ib rotor/Sum1';
bio(353).sigName='';
bio(353).portIdx=0;
bio(353).dim=[1,1];
bio(353).sigWidth=1;
bio(353).sigAddress='&Wind_Turbine_B.Sum1_b.re';
bio(353).ndims=2;
bio(353).size=[];
bio(353).isStruct=true;

bio(354).blkName='Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/dq2abc/Phasors Ia Ib rotor/Sum3';
bio(354).sigName='';
bio(354).portIdx=0;
bio(354).dim=[1,1];
bio(354).sigWidth=1;
bio(354).sigAddress='&Wind_Turbine_B.Sum3_i.re';
bio(354).ndims=2;
bio(354).size=[];
bio(354).isStruct=true;

bio(355).blkName='Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/dq2abc/Phasors Ia Ib stator/a';
bio(355).sigName='';
bio(355).portIdx=0;
bio(355).dim=[1,1];
bio(355).sigWidth=1;
bio(355).sigAddress='&Wind_Turbine_B.a.re';
bio(355).ndims=2;
bio(355).size=[];
bio(355).isStruct=true;

bio(356).blkName='Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/dq2abc/Phasors Ia Ib stator/a^2';
bio(356).sigName='';
bio(356).portIdx=0;
bio(356).dim=[1,1];
bio(356).sigWidth=1;
bio(356).sigAddress='&Wind_Turbine_B.a2.re';
bio(356).ndims=2;
bio(356).size=[];
bio(356).isStruct=true;

bio(357).blkName='Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/dq2abc/Phasors Ia Ib stator/inv';
bio(357).sigName='ic';
bio(357).portIdx=0;
bio(357).dim=[1,1];
bio(357).sigWidth=1;
bio(357).sigAddress='&Wind_Turbine_B.ic_g.re';
bio(357).ndims=2;
bio(357).size=[];
bio(357).isStruct=true;

bio(358).blkName='Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/dq2abc/Phasors Ia Ib stator/Real-Imag to Complex';
bio(358).sigName='I1';
bio(358).portIdx=0;
bio(358).dim=[1,1];
bio(358).sigWidth=1;
bio(358).sigAddress='&Wind_Turbine_B.I1.re';
bio(358).ndims=2;
bio(358).size=[];
bio(358).isStruct=true;

bio(359).blkName='Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/dq2abc/Phasors Ia Ib stator/Sum';
bio(359).sigName='';
bio(359).portIdx=0;
bio(359).dim=[1,1];
bio(359).sigWidth=1;
bio(359).sigAddress='&Wind_Turbine_B.Sum_f.re';
bio(359).ndims=2;
bio(359).size=[];
bio(359).isStruct=true;

bio(360).blkName='Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/dq2abc/Phasors Ia Ib stator/Sum1';
bio(360).sigName='';
bio(360).portIdx=0;
bio(360).dim=[1,1];
bio(360).sigWidth=1;
bio(360).sigAddress='&Wind_Turbine_B.Sum1.re';
bio(360).ndims=2;
bio(360).size=[];
bio(360).isStruct=true;

bio(361).blkName='Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/dq2abc/Phasors Ia Ib stator/Sum3';
bio(361).sigName='';
bio(361).portIdx=0;
bio(361).dim=[1,1];
bio(361).sigWidth=1;
bio(361).sigAddress='&Wind_Turbine_B.Sum3.re';
bio(361).ndims=2;
bio(361).size=[];
bio(361).isStruct=true;

bio(362).blkName='Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/positive-sequence state-space model (4 states, with saturation)/Electromagnetic Torque/1-1';
bio(362).sigName='iqs -ids';
bio(362).portIdx=0;
bio(362).dim=[2,1];
bio(362).sigWidth=2;
bio(362).sigAddress='&Wind_Turbine_B.iqsids[0]';
bio(362).ndims=2;
bio(362).size=[];
bio(362).isStruct=false;

bio(363).blkName='Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/positive-sequence state-space model (4 states, with saturation)/Electromagnetic Torque/Mult1';
bio(363).sigName='';
bio(363).portIdx=0;
bio(363).dim=[2,1];
bio(363).sigWidth=2;
bio(363).sigAddress='&Wind_Turbine_B.Mult1[0]';
bio(363).ndims=2;
bio(363).size=[];
bio(363).isStruct=false;

bio(364).blkName='Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/positive-sequence state-space model (4 states, with saturation)/Electromagnetic Torque/Sum2';
bio(364).sigName='';
bio(364).portIdx=0;
bio(364).dim=[1,1];
bio(364).sigWidth=1;
bio(364).sigAddress='&Wind_Turbine_B.Sum2_a';
bio(364).ndims=2;
bio(364).size=[];
bio(364).isStruct=false;

bio(365).blkName='Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/positive-sequence state-space model (4 states, with saturation)/Saturation/1-D Lookup Table';
bio(365).sigName='Isat';
bio(365).portIdx=0;
bio(365).dim=[1,1];
bio(365).sigWidth=1;
bio(365).sigAddress='&Wind_Turbine_B.Isat';
bio(365).ndims=2;
bio(365).size=[];
bio(365).isStruct=false;

bio(366).blkName='Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/positive-sequence state-space model (4 states, with saturation)/Saturation/Math Function';
bio(366).sigName='Phisat';
bio(366).portIdx=0;
bio(366).dim=[1,1];
bio(366).sigWidth=1;
bio(366).sigAddress='&Wind_Turbine_B.Phisat';
bio(366).ndims=2;
bio(366).size=[];
bio(366).isStruct=false;

bio(367).blkName='Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/positive-sequence state-space model (4 states, with saturation)/Saturation/Product';
bio(367).sigName='Lm';
bio(367).portIdx=0;
bio(367).dim=[1,1];
bio(367).sigWidth=1;
bio(367).sigAddress='&Wind_Turbine_B.Lm_l';
bio(367).ndims=2;
bio(367).size=[];
bio(367).isStruct=false;

bio(368).blkName='Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/positive-sequence state-space model (4 states, with saturation)/Saturation/Product1';
bio(368).sigName='R*Linv';
bio(368).portIdx=0;
bio(368).dim=[4,4];
bio(368).sigWidth=16;
bio(368).sigAddress='&Wind_Turbine_B.RLinv_n[0]';
bio(368).ndims=2;
bio(368).size=[];
bio(368).isStruct=false;

bio(369).blkName='Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/positive-sequence state-space model (4 states, with saturation)/Saturation/inversion';
bio(369).sigName='Linv';
bio(369).portIdx=0;
bio(369).dim=[4,4];
bio(369).sigWidth=16;
bio(369).sigAddress='&Wind_Turbine_B.Linv_b[0]';
bio(369).ndims=2;
bio(369).size=[];
bio(369).isStruct=false;

bio(370).blkName='Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/positive-sequence state-space model (4 states, with saturation)/Saturation/Switch';
bio(370).sigName='Lm';
bio(370).portIdx=0;
bio(370).dim=[1,1];
bio(370).sigWidth=1;
bio(370).sigAddress='&Wind_Turbine_B.Lm';
bio(370).ndims=2;
bio(370).size=[];
bio(370).isStruct=false;

bio(371).blkName='Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/positive-sequence state-space model (4 states, with saturation)/phi/wbase';
bio(371).sigName='';
bio(371).portIdx=0;
bio(371).dim=[4,1];
bio(371).sigWidth=4;
bio(371).sigAddress='&Wind_Turbine_B.wbase[0]';
bio(371).ndims=2;
bio(371).size=[];
bio(371).isStruct=false;

bio(372).blkName='Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/positive-sequence state-space model (4 states, with saturation)/phi/Integrator';
bio(372).sigName='';
bio(372).portIdx=0;
bio(372).dim=[4,1];
bio(372).sigWidth=4;
bio(372).sigAddress='&Wind_Turbine_B.Integrator_pj[0]';
bio(372).ndims=2;
bio(372).size=[];
bio(372).isStruct=false;

bio(373).blkName='Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/positive-sequence state-space model (4 states, with saturation)/phi/Product1';
bio(373).sigName='';
bio(373).portIdx=0;
bio(373).dim=[4,1];
bio(373).sigWidth=4;
bio(373).sigAddress='&Wind_Turbine_B.Product1_j[0]';
bio(373).ndims=2;
bio(373).size=[];
bio(373).isStruct=false;

bio(374).blkName='Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/positive-sequence state-space model (4 states, with saturation)/phi/sum1';
bio(374).sigName='';
bio(374).portIdx=0;
bio(374).dim=[4,1];
bio(374).sigWidth=4;
bio(374).sigAddress='&Wind_Turbine_B.sum1[0]';
bio(374).ndims=2;
bio(374).size=[];
bio(374).isStruct=false;

bio(375).blkName='Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/simpilified negative-sequence model (2 states, no saturation)/Equivalent R2 L2/Complex to Real-Imag/p1';
bio(375).sigName='';
bio(375).portIdx=0;
bio(375).dim=[1,1];
bio(375).sigWidth=1;
bio(375).sigAddress='&Wind_Turbine_B.ComplextoRealImag_o1_a';
bio(375).ndims=2;
bio(375).size=[];
bio(375).isStruct=false;

bio(376).blkName='Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/simpilified negative-sequence model (2 states, no saturation)/Equivalent R2 L2/Complex to Real-Imag/p2';
bio(376).sigName='';
bio(376).portIdx=1;
bio(376).dim=[1,1];
bio(376).sigWidth=1;
bio(376).sigAddress='&Wind_Turbine_B.ComplextoRealImag_o2_d';
bio(376).ndims=2;
bio(376).size=[];
bio(376).isStruct=false;

bio(377).blkName='Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/simpilified negative-sequence model (2 states, no saturation)/Equivalent R2 L2/Product1';
bio(377).sigName='';
bio(377).portIdx=0;
bio(377).dim=[1,1];
bio(377).sigWidth=1;
bio(377).sigAddress='&Wind_Turbine_B.Product1_c';
bio(377).ndims=2;
bio(377).size=[];
bio(377).isStruct=false;

bio(378).blkName='Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/simpilified negative-sequence model (2 states, no saturation)/Equivalent R2 L2/Product2';
bio(378).sigName='Zr*Zm';
bio(378).portIdx=0;
bio(378).dim=[1,1];
bio(378).sigWidth=1;
bio(378).sigAddress='&Wind_Turbine_B.ZrZm_k.re';
bio(378).ndims=2;
bio(378).size=[];
bio(378).isStruct=true;

bio(379).blkName='Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/simpilified negative-sequence model (2 states, no saturation)/Equivalent R2 L2/Product3';
bio(379).sigName='Zr//Zm';
bio(379).portIdx=0;
bio(379).dim=[1,1];
bio(379).sigWidth=1;
bio(379).sigAddress='&Wind_Turbine_B.ZrZm_m.re';
bio(379).ndims=2;
bio(379).size=[];
bio(379).isStruct=true;

bio(380).blkName='Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/simpilified negative-sequence model (2 states, no saturation)/Equivalent R2 L2/Product4';
bio(380).sigName='';
bio(380).portIdx=0;
bio(380).dim=[1,1];
bio(380).sigWidth=1;
bio(380).sigAddress='&Wind_Turbine_B.Product4.re';
bio(380).ndims=2;
bio(380).size=[];
bio(380).isStruct=true;

bio(381).blkName='Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/simpilified negative-sequence model (2 states, no saturation)/Equivalent R2 L2/Sum1';
bio(381).sigName='Zr+Zm';
bio(381).portIdx=0;
bio(381).dim=[1,1];
bio(381).sigWidth=1;
bio(381).sigAddress='&Wind_Turbine_B.ZrZm.re';
bio(381).ndims=2;
bio(381).size=[];
bio(381).isStruct=true;

bio(382).blkName='Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/simpilified negative-sequence model (2 states, no saturation)/Equivalent R2 L2/Sum2';
bio(382).sigName='Z2';
bio(382).portIdx=0;
bio(382).dim=[1,1];
bio(382).sigWidth=1;
bio(382).sigAddress='&Wind_Turbine_B.Z2.re';
bio(382).ndims=2;
bio(382).size=[];
bio(382).isStruct=true;

bio(383).blkName='Nacelle/Generator/Full/Trip Breaker1/Breaker A/Model/Timer/Clock';
bio(383).sigName='';
bio(383).portIdx=0;
bio(383).dim=[1,1];
bio(383).sigWidth=1;
bio(383).sigAddress='&Wind_Turbine_B.Clock_a';
bio(383).ndims=2;
bio(383).size=[];
bio(383).isStruct=false;

bio(384).blkName='Nacelle/Generator/Full/Trip Breaker1/Breaker A/Model/Timer/Derivative';
bio(384).sigName='';
bio(384).portIdx=0;
bio(384).dim=[1,1];
bio(384).sigWidth=1;
bio(384).sigAddress='&Wind_Turbine_B.Derivative_m';
bio(384).ndims=2;
bio(384).size=[];
bio(384).isStruct=false;

bio(385).blkName='Nacelle/Generator/Full/Trip Breaker1/Breaker A/Model/Timer/Look-Up Table';
bio(385).sigName='';
bio(385).portIdx=0;
bio(385).dim=[1,1];
bio(385).sigWidth=1;
bio(385).sigAddress='&Wind_Turbine_B.LookUpTable_n';
bio(385).ndims=2;
bio(385).size=[];
bio(385).isStruct=false;

bio(386).blkName='Nacelle/Generator/Full/Trip Breaker1/Breaker B/Model/Timer/Clock';
bio(386).sigName='';
bio(386).portIdx=0;
bio(386).dim=[1,1];
bio(386).sigWidth=1;
bio(386).sigAddress='&Wind_Turbine_B.Clock_az';
bio(386).ndims=2;
bio(386).size=[];
bio(386).isStruct=false;

bio(387).blkName='Nacelle/Generator/Full/Trip Breaker1/Breaker B/Model/Timer/Derivative';
bio(387).sigName='';
bio(387).portIdx=0;
bio(387).dim=[1,1];
bio(387).sigWidth=1;
bio(387).sigAddress='&Wind_Turbine_B.Derivative_o';
bio(387).ndims=2;
bio(387).size=[];
bio(387).isStruct=false;

bio(388).blkName='Nacelle/Generator/Full/Trip Breaker1/Breaker B/Model/Timer/Look-Up Table';
bio(388).sigName='';
bio(388).portIdx=0;
bio(388).dim=[1,1];
bio(388).sigWidth=1;
bio(388).sigAddress='&Wind_Turbine_B.LookUpTable_k';
bio(388).ndims=2;
bio(388).size=[];
bio(388).isStruct=false;

bio(389).blkName='Nacelle/Generator/Full/Trip Breaker1/Breaker C/Model/Timer/Clock';
bio(389).sigName='';
bio(389).portIdx=0;
bio(389).dim=[1,1];
bio(389).sigWidth=1;
bio(389).sigAddress='&Wind_Turbine_B.Clock_k';
bio(389).ndims=2;
bio(389).size=[];
bio(389).isStruct=false;

bio(390).blkName='Nacelle/Generator/Full/Trip Breaker1/Breaker C/Model/Timer/Derivative';
bio(390).sigName='';
bio(390).portIdx=0;
bio(390).dim=[1,1];
bio(390).sigWidth=1;
bio(390).sigAddress='&Wind_Turbine_B.Derivative_f';
bio(390).ndims=2;
bio(390).size=[];
bio(390).isStruct=false;

bio(391).blkName='Nacelle/Generator/Full/Trip Breaker1/Breaker C/Model/Timer/Look-Up Table';
bio(391).sigName='';
bio(391).portIdx=0;
bio(391).dim=[1,1];
bio(391).sigWidth=1;
bio(391).sigAddress='&Wind_Turbine_B.LookUpTable_l';
bio(391).ndims=2;
bio(391).size=[];
bio(391).isStruct=false;

bio(392).blkName='Nacelle/Generator/Full/Trip Breaker2/Breaker A/Model/Timer/Clock';
bio(392).sigName='';
bio(392).portIdx=0;
bio(392).dim=[1,1];
bio(392).sigWidth=1;
bio(392).sigAddress='&Wind_Turbine_B.Clock_l';
bio(392).ndims=2;
bio(392).size=[];
bio(392).isStruct=false;

bio(393).blkName='Nacelle/Generator/Full/Trip Breaker2/Breaker A/Model/Timer/Derivative';
bio(393).sigName='';
bio(393).portIdx=0;
bio(393).dim=[1,1];
bio(393).sigWidth=1;
bio(393).sigAddress='&Wind_Turbine_B.Derivative_pb';
bio(393).ndims=2;
bio(393).size=[];
bio(393).isStruct=false;

bio(394).blkName='Nacelle/Generator/Full/Trip Breaker2/Breaker A/Model/Timer/Look-Up Table';
bio(394).sigName='';
bio(394).portIdx=0;
bio(394).dim=[1,1];
bio(394).sigWidth=1;
bio(394).sigAddress='&Wind_Turbine_B.LookUpTable_j';
bio(394).ndims=2;
bio(394).size=[];
bio(394).isStruct=false;

bio(395).blkName='Nacelle/Generator/Full/Trip Breaker2/Breaker B/Model/Timer/Clock';
bio(395).sigName='';
bio(395).portIdx=0;
bio(395).dim=[1,1];
bio(395).sigWidth=1;
bio(395).sigAddress='&Wind_Turbine_B.Clock_f';
bio(395).ndims=2;
bio(395).size=[];
bio(395).isStruct=false;

bio(396).blkName='Nacelle/Generator/Full/Trip Breaker2/Breaker B/Model/Timer/Derivative';
bio(396).sigName='';
bio(396).portIdx=0;
bio(396).dim=[1,1];
bio(396).sigWidth=1;
bio(396).sigAddress='&Wind_Turbine_B.Derivative_m5';
bio(396).ndims=2;
bio(396).size=[];
bio(396).isStruct=false;

bio(397).blkName='Nacelle/Generator/Full/Trip Breaker2/Breaker B/Model/Timer/Look-Up Table';
bio(397).sigName='';
bio(397).portIdx=0;
bio(397).dim=[1,1];
bio(397).sigWidth=1;
bio(397).sigAddress='&Wind_Turbine_B.LookUpTable_o';
bio(397).ndims=2;
bio(397).size=[];
bio(397).isStruct=false;

bio(398).blkName='Nacelle/Generator/Full/Trip Breaker2/Breaker C/Model/Timer/Clock';
bio(398).sigName='';
bio(398).portIdx=0;
bio(398).dim=[1,1];
bio(398).sigWidth=1;
bio(398).sigAddress='&Wind_Turbine_B.Clock_m';
bio(398).ndims=2;
bio(398).size=[];
bio(398).isStruct=false;

bio(399).blkName='Nacelle/Generator/Full/Trip Breaker2/Breaker C/Model/Timer/Derivative';
bio(399).sigName='';
bio(399).portIdx=0;
bio(399).dim=[1,1];
bio(399).sigWidth=1;
bio(399).sigAddress='&Wind_Turbine_B.Derivative_j';
bio(399).ndims=2;
bio(399).size=[];
bio(399).isStruct=false;

bio(400).blkName='Nacelle/Generator/Full/Trip Breaker2/Breaker C/Model/Timer/Look-Up Table';
bio(400).sigName='';
bio(400).portIdx=0;
bio(400).dim=[1,1];
bio(400).sigWidth=1;
bio(400).sigAddress='&Wind_Turbine_B.LookUpTable_h';
bio(400).ndims=2;
bio(400).size=[];
bio(400).isStruct=false;

bio(401).blkName='Nacelle/Pitch System/Hydraulic/Hydraulic/Actuator_1/EM Logic/Actuator Dynamics/Gain';
bio(401).sigName='';
bio(401).portIdx=0;
bio(401).dim=[1,1];
bio(401).sigWidth=1;
bio(401).sigAddress='&Wind_Turbine_B.Gain_d';
bio(401).ndims=2;
bio(401).size=[];
bio(401).isStruct=false;

bio(402).blkName='Nacelle/Pitch System/Hydraulic/Hydraulic/Actuator_1/EM Logic/Actuator Dynamics/Integrator';
bio(402).sigName='';
bio(402).portIdx=0;
bio(402).dim=[1,1];
bio(402).sigWidth=1;
bio(402).sigAddress='&Wind_Turbine_B.Integrator';
bio(402).ndims=2;
bio(402).size=[];
bio(402).isStruct=false;

bio(403).blkName='Nacelle/Pitch System/Hydraulic/Hydraulic/Actuator_1/EM Logic/Actuator Dynamics/Sum';
bio(403).sigName='';
bio(403).portIdx=0;
bio(403).dim=[1,1];
bio(403).sigWidth=1;
bio(403).sigAddress='&Wind_Turbine_B.Sum_gk';
bio(403).ndims=2;
bio(403).size=[];
bio(403).isStruct=false;

bio(404).blkName='Nacelle/Pitch System/Hydraulic/Hydraulic/Actuator_2/EM Logic/Actuator Dynamics/Gain';
bio(404).sigName='';
bio(404).portIdx=0;
bio(404).dim=[1,1];
bio(404).sigWidth=1;
bio(404).sigAddress='&Wind_Turbine_B.Gain_a';
bio(404).ndims=2;
bio(404).size=[];
bio(404).isStruct=false;

bio(405).blkName='Nacelle/Pitch System/Hydraulic/Hydraulic/Actuator_2/EM Logic/Actuator Dynamics/Integrator';
bio(405).sigName='';
bio(405).portIdx=0;
bio(405).dim=[1,1];
bio(405).sigWidth=1;
bio(405).sigAddress='&Wind_Turbine_B.Integrator_i';
bio(405).ndims=2;
bio(405).size=[];
bio(405).isStruct=false;

bio(406).blkName='Nacelle/Pitch System/Hydraulic/Hydraulic/Actuator_2/EM Logic/Actuator Dynamics/Sum';
bio(406).sigName='';
bio(406).portIdx=0;
bio(406).dim=[1,1];
bio(406).sigWidth=1;
bio(406).sigAddress='&Wind_Turbine_B.Sum_g5';
bio(406).ndims=2;
bio(406).size=[];
bio(406).isStruct=false;

bio(407).blkName='Nacelle/Pitch System/Hydraulic/Hydraulic/Actuator_3/EM Logic/Actuator Dynamics/Gain';
bio(407).sigName='';
bio(407).portIdx=0;
bio(407).dim=[1,1];
bio(407).sigWidth=1;
bio(407).sigAddress='&Wind_Turbine_B.Gain_g';
bio(407).ndims=2;
bio(407).size=[];
bio(407).isStruct=false;

bio(408).blkName='Nacelle/Pitch System/Hydraulic/Hydraulic/Actuator_3/EM Logic/Actuator Dynamics/Integrator';
bio(408).sigName='';
bio(408).portIdx=0;
bio(408).dim=[1,1];
bio(408).sigWidth=1;
bio(408).sigAddress='&Wind_Turbine_B.Integrator_p';
bio(408).ndims=2;
bio(408).size=[];
bio(408).isStruct=false;

bio(409).blkName='Nacelle/Pitch System/Hydraulic/Hydraulic/Actuator_3/EM Logic/Actuator Dynamics/Sum';
bio(409).sigName='';
bio(409).portIdx=0;
bio(409).dim=[1,1];
bio(409).sigWidth=1;
bio(409).sigAddress='&Wind_Turbine_B.Sum_p';
bio(409).ndims=2;
bio(409).size=[];
bio(409).isStruct=false;

bio(410).blkName='Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/PS-Simulink Converter/EVAL_KEY/GAIN';
bio(410).sigName='';
bio(410).portIdx=0;
bio(410).dim=[1,1];
bio(410).sigWidth=1;
bio(410).sigAddress='&Wind_Turbine_B.GAIN';
bio(410).ndims=2;
bio(410).size=[];
bio(410).isStruct=false;

bio(411).blkName='Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/PS-Simulink Converter1/EVAL_KEY/GAIN';
bio(411).sigName='';
bio(411).portIdx=0;
bio(411).dim=[1,1];
bio(411).sigWidth=1;
bio(411).sigAddress='&Wind_Turbine_B.GAIN_ds';
bio(411).ndims=2;
bio(411).size=[];
bio(411).isStruct=false;

bio(412).blkName='Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/PS-Simulink Converter/EVAL_KEY/GAIN';
bio(412).sigName='';
bio(412).portIdx=0;
bio(412).dim=[1,1];
bio(412).sigWidth=1;
bio(412).sigAddress='&Wind_Turbine_B.GAIN_d';
bio(412).ndims=2;
bio(412).size=[];
bio(412).isStruct=false;

bio(413).blkName='Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/PS-Simulink Converter1/EVAL_KEY/GAIN';
bio(413).sigName='';
bio(413).portIdx=0;
bio(413).dim=[1,1];
bio(413).sigWidth=1;
bio(413).sigAddress='&Wind_Turbine_B.GAIN_o';
bio(413).ndims=2;
bio(413).size=[];
bio(413).isStruct=false;

bio(414).blkName='Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/PS-Simulink Converter/EVAL_KEY/GAIN';
bio(414).sigName='';
bio(414).portIdx=0;
bio(414).dim=[1,1];
bio(414).sigWidth=1;
bio(414).sigAddress='&Wind_Turbine_B.GAIN_fl';
bio(414).ndims=2;
bio(414).size=[];
bio(414).isStruct=false;

bio(415).blkName='Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/PS-Simulink Converter1/EVAL_KEY/GAIN';
bio(415).sigName='';
bio(415).portIdx=0;
bio(415).dim=[1,1];
bio(415).sigWidth=1;
bio(415).sigAddress='&Wind_Turbine_B.GAIN_oq';
bio(415).ndims=2;
bio(415).size=[];
bio(415).isStruct=false;

bio(416).blkName='Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/PS-Simulink Converter/EVAL_KEY/GAIN';
bio(416).sigName='';
bio(416).portIdx=0;
bio(416).dim=[1,1];
bio(416).sigWidth=1;
bio(416).sigAddress='&Wind_Turbine_B.GAIN_p';
bio(416).ndims=2;
bio(416).size=[];
bio(416).isStruct=false;

bio(417).blkName='Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/PS-Simulink Converter1/EVAL_KEY/GAIN';
bio(417).sigName='';
bio(417).portIdx=0;
bio(417).dim=[1,1];
bio(417).sigWidth=1;
bio(417).sigAddress='&Wind_Turbine_B.GAIN_f';
bio(417).ndims=2;
bio(417).size=[];
bio(417).isStruct=false;

bio(418).blkName='Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/positive-sequence state-space model (4 states, with saturation)/Saturation/Laq=Lad/Math Function';
bio(418).sigName='';
bio(418).portIdx=0;
bio(418).dim=[3,1];
bio(418).sigWidth=3;
bio(418).sigAddress='&Wind_Turbine_B.MathFunction_a[0]';
bio(418).ndims=2;
bio(418).size=[];
bio(418).isStruct=false;

bio(419).blkName='Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/positive-sequence state-space model (4 states, with saturation)/Saturation/Laq=Lad/Math Function1';
bio(419).sigName='';
bio(419).portIdx=0;
bio(419).dim=[1,1];
bio(419).sigWidth=1;
bio(419).sigAddress='&Wind_Turbine_B.MathFunction1_m';
bio(419).ndims=2;
bio(419).size=[];
bio(419).isStruct=false;

bio(420).blkName='Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/positive-sequence state-space model (4 states, with saturation)/Saturation/Laq=Lad/Sum2';
bio(420).sigName='';
bio(420).portIdx=0;
bio(420).dim=[1,1];
bio(420).sigWidth=1;
bio(420).sigAddress='&Wind_Turbine_B.Sum2_h';
bio(420).ndims=2;
bio(420).size=[];
bio(420).isStruct=false;

bio(421).blkName='Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/positive-sequence state-space model (4 states, with saturation)/Saturation/Matrix L/Lm in rows[1,3] & col[1,3]';
bio(421).sigName='';
bio(421).portIdx=0;
bio(421).dim=[4,4];
bio(421).sigWidth=16;
bio(421).sigAddress='&Wind_Turbine_B.Lminrows13col13[0]';
bio(421).ndims=2;
bio(421).size=[];
bio(421).isStruct=false;

bio(422).blkName='Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/positive-sequence state-space model (4 states, with saturation)/Saturation/Matrix L/Lm in rows[2,4] & col[2,4]';
bio(422).sigName='';
bio(422).portIdx=0;
bio(422).dim=[4,4];
bio(422).sigWidth=16;
bio(422).sigAddress='&Wind_Turbine_B.Lminrows24col24[0]';
bio(422).ndims=2;
bio(422).size=[];
bio(422).isStruct=false;

bio(423).blkName='Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/positive-sequence state-space model (4 states, with saturation)/Saturation/Matrix L/Sum2';
bio(423).sigName='';
bio(423).portIdx=0;
bio(423).dim=[4,4];
bio(423).sigWidth=16;
bio(423).sigAddress='&Wind_Turbine_B.Sum2_b[0]';
bio(423).ndims=2;
bio(423).size=[];
bio(423).isStruct=false;

bio(424).blkName='Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/positive-sequence state-space model (4 states, with saturation)/Saturation/Time Constant/1//T (T= 1e-6s)';
bio(424).sigName='';
bio(424).portIdx=0;
bio(424).dim=[1,1];
bio(424).sigWidth=1;
bio(424).sigAddress='&Wind_Turbine_B.uTT1e6s';
bio(424).ndims=2;
bio(424).size=[];
bio(424).isStruct=false;

bio(425).blkName='Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/positive-sequence state-space model (4 states, with saturation)/Saturation/Time Constant/Integrator';
bio(425).sigName='';
bio(425).portIdx=0;
bio(425).dim=[1,1];
bio(425).sigWidth=1;
bio(425).sigAddress='&Wind_Turbine_B.Integrator_g';
bio(425).ndims=2;
bio(425).size=[];
bio(425).isStruct=false;

bio(426).blkName='Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/positive-sequence state-space model (4 states, with saturation)/Saturation/Time Constant/Add';
bio(426).sigName='';
bio(426).portIdx=0;
bio(426).dim=[1,1];
bio(426).sigWidth=1;
bio(426).sigAddress='&Wind_Turbine_B.Add';
bio(426).ndims=2;
bio(426).size=[];
bio(426).isStruct=false;

bio(427).blkName='Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/positive-sequence state-space model (4 states, with saturation)/Saturation/phimqd/Product';
bio(427).sigName='';
bio(427).portIdx=0;
bio(427).dim=[2,1];
bio(427).sigWidth=2;
bio(427).sigAddress='&Wind_Turbine_B.Product[0]';
bio(427).ndims=2;
bio(427).size=[];
bio(427).isStruct=false;

bio(428).blkName='Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/positive-sequence state-space model (4 states, with saturation)/Saturation/phimqd/Product1';
bio(428).sigName='';
bio(428).portIdx=0;
bio(428).dim=[2,1];
bio(428).sigWidth=2;
bio(428).sigAddress='&Wind_Turbine_B.Product1_p[0]';
bio(428).ndims=2;
bio(428).size=[];
bio(428).isStruct=false;

bio(429).blkName='Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/positive-sequence state-space model (4 states, with saturation)/Saturation/phimqd/Product2';
bio(429).sigName='';
bio(429).portIdx=0;
bio(429).dim=[2,1];
bio(429).sigWidth=2;
bio(429).sigAddress='&Wind_Turbine_B.Product2_p[0]';
bio(429).ndims=2;
bio(429).size=[];
bio(429).isStruct=false;

bio(430).blkName='Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/positive-sequence state-space model (4 states, with saturation)/Saturation/phimqd/Sum1';
bio(430).sigName='phimd';
bio(430).portIdx=0;
bio(430).dim=[1,1];
bio(430).sigWidth=1;
bio(430).sigAddress='&Wind_Turbine_B.phimd';
bio(430).ndims=2;
bio(430).size=[];
bio(430).isStruct=false;

bio(431).blkName='Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/positive-sequence state-space model (4 states, with saturation)/Saturation/phimqd/Sum2';
bio(431).sigName='phimq';
bio(431).portIdx=0;
bio(431).dim=[1,1];
bio(431).sigWidth=1;
bio(431).sigAddress='&Wind_Turbine_B.phimq';
bio(431).ndims=2;
bio(431).size=[];
bio(431).isStruct=false;

bio(432).blkName='Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/simpilified negative-sequence model (2 states, no saturation)/Equivalent R2 L2/Zr/Product2';
bio(432).sigName='';
bio(432).portIdx=0;
bio(432).dim=[1,1];
bio(432).sigWidth=1;
bio(432).sigAddress='&Wind_Turbine_B.Product2_g';
bio(432).ndims=2;
bio(432).size=[];
bio(432).isStruct=false;

bio(433).blkName='Nacelle/Generator/Full/Asynchronous Machine pu Units/Electrical model/simpilified negative-sequence model (2 states, no saturation)/Equivalent R2 L2/Zr/Sum2';
bio(433).sigName='';
bio(433).portIdx=0;
bio(433).dim=[1,1];
bio(433).sigWidth=1;
bio(433).sigAddress='&Wind_Turbine_B.Sum2.re';
bio(433).ndims=2;
bio(433).size=[];
bio(433).isStruct=true;

bio(434).blkName='Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 1/Servomotor/PS-Simulink Converter/EVAL_KEY/GAIN';
bio(434).sigName='';
bio(434).portIdx=0;
bio(434).dim=[1,1];
bio(434).sigWidth=1;
bio(434).sigAddress='&Wind_Turbine_B.GAIN_dl';
bio(434).ndims=2;
bio(434).size=[];
bio(434).isStruct=false;

bio(435).blkName='Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 2/Servomotor/PS-Simulink Converter/EVAL_KEY/GAIN';
bio(435).sigName='';
bio(435).portIdx=0;
bio(435).dim=[1,1];
bio(435).sigWidth=1;
bio(435).sigAddress='&Wind_Turbine_B.GAIN_d1';
bio(435).ndims=2;
bio(435).size=[];
bio(435).isStruct=false;

bio(436).blkName='Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 3/Servomotor/PS-Simulink Converter/EVAL_KEY/GAIN';
bio(436).sigName='';
bio(436).portIdx=0;
bio(436).dim=[1,1];
bio(436).sigWidth=1;
bio(436).sigAddress='&Wind_Turbine_B.GAIN_g';
bio(436).ndims=2;
bio(436).size=[];
bio(436).isStruct=false;

bio(437).blkName='Nacelle/Yaw System/Servomotor/Servomotor/Yaw Motor 4/Servomotor/PS-Simulink Converter/EVAL_KEY/GAIN';
bio(437).sigName='';
bio(437).portIdx=0;
bio(437).dim=[1,1];
bio(437).sigWidth=1;
bio(437).sigAddress='&Wind_Turbine_B.GAIN_o1';
bio(437).ndims=2;
bio(437).size=[];
bio(437).isStruct=false;

function len = getlenBIO
len = 437;

