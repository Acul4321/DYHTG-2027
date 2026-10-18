#include "pch-cpp.hpp"





template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*,const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj,invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*,T1,const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj,p1,invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*,T1,T2,const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj,p1,p2,invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2Invoker;
template <typename T1, typename T2>
struct InterfaceActionInvoker2Invoker<T1, T2*>
{
	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2* p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		void* params[2] = { &p1, p2 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[1]);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*,const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj,invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*,T1,const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj,p1,invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1Invoker;
template <typename R, typename T1>
struct InterfaceFuncInvoker1Invoker<R, T1*>
{
	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1* p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		R ret;
		void* params[1] = { p1 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1>
struct InvokerFuncInvoker1;
template <typename R, typename T1>
struct InvokerFuncInvoker1<R, T1*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		R ret;
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};

struct Comparison_1_tF2EA38711BF4E71781108F0D7BD2B99D225BCE80;
struct Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588;
struct IEnumerator_1_t015C9AD38251EE3C6BEF3DB70144877E0A83EBB1;
struct IEnumerator_1_t1DB6C091851185E6691BCB2116153ABEAF2FE65C;
struct IEnumerator_1_t4CA3732E083480E40018894623B3C184576E5EFD;
struct IEnumerator_1_tED07FAE8E345C75C805DBA8B3F7ECE84B3ED0EF7;
struct IEnumerator_1_tFA0BD75D386055A6A6D1D4570C8A4EFB04DDBD3D;
struct IEnumerator_1_tF484670D181B18CE9BD1CEB2F65DF379E4BB4E8A;
struct IEnumerator_1_t7ECC00986D2586FFF60F5F6F22BABD801865C4B6;
struct IEnumerator_1_tC180C74C2811CF8B0D961C36318C29C45CA4D3C0;
struct IEnumerator_1_t28314E682493CA936A454DA48BFB000CAF4F5D74;
struct IEnumerator_1_t9F7F81EBFE10861B9E55BB1D13A17515E51B7F2B;
struct IEnumerator_1_t799D3B14D3B489ADD1849FECFF9C32632A4A9BC1;
struct IEnumerator_1_t3CC86A3400052644282FACCCB4E3B694C3D75BC9;
struct IEnumerator_1_tF217F730C27D3BB43EE57D8255E20D734F72499F;
struct IEnumerator_1_tE3FEADCA3A678A8D3C9C75F77098E1D5967F91D7;
struct IEnumerator_1_t80CBC53998B34A547697057BE05FFFD2E32DEEBA;
struct IEnumerator_1_t5C748DC7D7E115AED44A4C66A1F4785E69616F74;
struct IEnumerator_1_t737E5D96E5E3657734509E507812DBA5E7EDD547;
struct IEnumerator_1_tE07B98951C528DCEC133D87CFB6966101285E71E;
struct IEnumerator_1_t0F66F32CA3E87B57379F9A8E071D35DEBFE6C6F6;
struct IEnumerator_1_t96293398300B5893696EDED7A1CD14F91EB606E2;
struct IEnumerator_1_t8323F8C060F59949739B2A1792BF110C73B196A2;
struct IEnumerator_1_t8C3EDDEC54B75D176EE7B2192E6E6FABF7DA82B8;
struct IEnumerator_1_tC0C08C9659581E6A592DEEC8CEE4A412A400B773;
struct IEnumerator_1_tD1458B7D83AB52223A503862617A8A15E008EE1E;
struct IEnumerator_1_t1DC9BF0C441509977AE52846CAE10D10A21C5FE0;
struct IEnumerator_1_t06541250E744F82918C560E3AF79DA72DFABEC49;
struct IEnumerator_1_t2390E479B6DB7DEA6DE39BB6212EBB88FD6163B4;
struct IEnumerator_1_tE9F3C0CE079AB011D8144D3C66FD4E6C73E58F61;
struct IEnumerator_1_tFD92D349677E89FA94B8AEC66F76C0041590FEDB;
struct IEnumerator_1_tC0DCDBFB5F49A30481B632EBFCCF52AD75C3E237;
struct IEnumerator_1_t7B7ADC2004E9DB8853547BFD6BE15532414A65C1;
struct IEnumerator_1_t5A39BC8D4B46B3762131AB270AB6DA3994AB270A;
struct IEnumerator_1_t94419D74B819FB354D78445D329AA5D6E0AD6367;
struct IEnumerator_1_t7409D4FC1D79938E450AB140B39C06170E71039F;
struct IEnumerator_1_tB00265C848CC8131C088CF2E0C06FA0AA8C3E66F;
struct IEnumerator_1_tB41B292FAFD525FC5C54D7E469F0BA1A193CA8B1;
struct IEnumerator_1_t9D5AD8C382C310ECCB5FF06F8FE44118996EE79D;
struct IEnumerator_1_t75CB2681E18F7F2791528FA2CA60361FDB5DA08D;
struct IEnumerator_1_tF74C952F97E24A4AFD21162637D82942513CB35B;
struct IEnumerator_1_t70473736C2E860779B5778F060AD52DB508F1783;
struct IEnumerator_1_t17AFB84DBC584CCC2F6B9EBEE20982287A2837A8;
struct IEnumerator_1_t370106682CD9420C2E62EE409E02BCD92635034E;
struct IEnumerator_1_t2969140D251E6333E0163EC60997B1A07E5BB75C;
struct IList_1_t9E91BFF262CB056A08571647015BF59EFA42260E;
struct IList_1_t106684EB8072F954E3C8B7F82E9D74C8E30622FE;
struct IList_1_t99293E71ADCFDC5DB0835881A041C460B1E133E6;
struct IList_1_t8BA15D2AE00335FFDE6FEBE104DBDDCB5D8232E8;
struct IList_1_tC706C207F04784C33C9328F0C4E0E0A92B4B8AFC;
struct IList_1_t7C7A8628121C9B1161DB44B62EA7B45AB600852C;
struct IList_1_tD489A418BE3D82A1F57AB8DCB436A89A77064271;
struct IList_1_tA91A36EBDB5CA519DEEF07D349BC80E1B054B681;
struct IList_1_t429E5FFEB09B32AA86D0CA81D144EC71604F2376;
struct IList_1_t2C50FFEF044F2EE012E6F7F73EC7044476D72E33;
struct IList_1_tFCA0CAAC72A5E0287096421FF3921AF6E549EBDE;
struct IList_1_tD45813C75C2E9CE5644E7E0ECEA16E061AF337C6;
struct IList_1_t7C94015474540F0009E4F2C369960F5CBFF622E9;
struct IList_1_tD01F121A6E09A7FB2463237A05A02D8736665FDB;
struct IList_1_t1B290ECCB9D2FD52EB25227789136D5C40BD3D5D;
struct IList_1_t523A61EF6E7DDB6C11B5F676FE10E3A0E0CD14EE;
struct IList_1_t7DD9C9615378C587EB066B67143D3CCED6C5E873;
struct IList_1_t969553523152AD25969D45265A0DADD2CA2F64B3;
struct IList_1_t9888C5EB0D8AFE50C0EBE08C18A4CEB9798D0AD0;
struct IList_1_t3A0A6C3E926DC5755900551DFAE5A1A0FC77DD52;
struct IList_1_t41354D256C86A74719FA826D7CB4874A44AFA560;
struct IList_1_t4819BEE8AD954E5567BBA6F55DEA575721AFAFAA;
struct IList_1_t0DF1E5F56EE58E1A7F1FE26A676FC9FBF4D52A07;
struct IList_1_t4EEE459A249DDE104FA2E88234C593389EE5D291;
struct IList_1_t42FF818BEA4BF4853E17DE64566576B4020C72EF;
struct IList_1_t057158FE233DC0721BC83986546CB11DD55EFDAD;
struct IList_1_t394566ACD92198848950B83D3260ADE4FEF94687;
struct IList_1_tEF23B17E999E7D610ED15470E34BE424B954E5A7;
struct IList_1_t82892C93D8E03E68BB11DCD20470A61C1188C7B5;
struct IList_1_t659DADB7E83B3ED5B2BA010E84D831E635C33329;
struct IList_1_tBA821B3F5193EF6F7EC4CCD7D970BEA53C9121F4;
struct IList_1_t7AE43E9BE210CC5A9A96EC37B2087048F30F80A1;
struct IList_1_t1A2FD800BF0210E34639241534E5592CD060AE69;
struct IList_1_tFD0AA6FA757751ADC9944DAF4D4858E311928209;
struct IList_1_tD4524336A640CBA52D02C55E127F36B55880C425;
struct IList_1_t7DC7A22F42EEFA1E8D796516A9F22282DF4EB5FA;
struct IList_1_tE00655F1AC041AB3B785699F9C5A6EA951470879;
struct IList_1_t8AC59FFD0F90EC2DAD4C3FA39B2A5851F9D2987A;
struct IList_1_t4D7D7DAB02DB631C876CF3E68462F0FD9F9A8985;
struct IList_1_t723F6D5137B11A931DA716028E7AB780AB396C40;
struct IList_1_t53022DA63CBD1D5B84D7A1EE9BFA05CEB304192B;
struct IList_1_t8F542B81A30EE4F6005571BA675A2F6F0EF8B0AC;
struct IList_1_t7C2346A2A9C19BBA14BE9DD134F0F582962F4F5A;
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
struct List_1_t41896DF347A129D13205BBFADE03DFB21E05E459;
struct List_1_tC0E7595725AFEF62394C64B77712190FBAC6C2C5;
struct ReadOnlyCollection_1_t5439F37121A216F441FC4896558C7D05C6CB0730;
struct ReadOnlyCollection_1_t23F8C5D5ADD49EC309D753255852410BFE1BB4EC;
struct ReadOnlyCollection_1_tE86375B1668A6FBD2D1ABEFD277DA7ED73EF5088;
struct ReadOnlyCollection_1_t4A4298CBF971053B7107BCB3172698E18C4C4C78;
struct ReadOnlyCollection_1_tFF93E8D08323FE0D47D1EDFE961D186F7E3C9AEE;
struct ReadOnlyCollection_1_tE93D7970A5840C0077489CEA45621B02483FABC9;
struct ReadOnlyCollection_1_t2401BF20081A5300090A5FC70F287797DBFE10B0;
struct ReadOnlyCollection_1_tBE445934E4BBFAD9104AC1AFC81C07456740D5B9;
struct ReadOnlyCollection_1_tB270E5CCE3D7607E7CDDBE1B835360A0E7B07DF4;
struct ReadOnlyCollection_1_t8597CBFC170B56C5585AD118A321EEE3B225D172;
struct ReadOnlyCollection_1_tFF6716AACE48FE7B167A53ED10AE04FA2A2AB83A;
struct ReadOnlyCollection_1_tCC240C9BD7F4AF6686AA54B53FAD2BED7C354C7D;
struct ReadOnlyCollection_1_t5F8B55EF85E52FBC5F41B42D70D13BC89D4C469A;
struct ReadOnlyCollection_1_tAC9F0ECFFCE3DC3797BE610439BF76ACB015D44E;
struct ReadOnlyCollection_1_t0279BBDF584EF96177DF75FA7A456E4629B2B09E;
struct ReadOnlyCollection_1_t068BDAE7D562067D24182EABF4C4C7AA8C7C5812;
struct ReadOnlyCollection_1_tF3F201D52E933A4489A4C06E8B1203099F42FB01;
struct ReadOnlyCollection_1_tABD6F7BDD581540C8981BBE5012B221D4701AA0A;
struct ReadOnlyCollection_1_tC00260BA5B1BEF55EBEF800DF50485F5D9806E4C;
struct ReadOnlyCollection_1_tDF87C8E26187E1D6C24D2DD02E4716CC5B7ACC34;
struct ReadOnlyCollection_1_tF64E6ECDE29B9EE2538F5A045045DF7774BB8466;
struct ReadOnlyCollection_1_tAE114E8C18E180A65629D9DF0D8911860274551C;
struct ReadOnlyCollection_1_tC5795E68B14E438B5B65AF3F4C3F50CA0F951647;
struct ReadOnlyCollection_1_t9E2776C66EA6797EAB405FB5507CCFDAA18084F6;
struct ReadOnlyCollection_1_tC097ADAD4728DA15D13F639EC263BD398D57B04F;
struct ReadOnlyCollection_1_tA87EA4F23BAC952A78BDE9A5B94F3091DB5C7861;
struct ReadOnlyCollection_1_tB6FD6BA75C6F479B6860FCBA235488206BF20E52;
struct ReadOnlyCollection_1_tCE850EF6D2887B695661E22343E54F58D576C0E3;
struct ReadOnlyCollection_1_t803A81BE343B15275BCD30A219ACAC97F0B9A1C8;
struct ReadOnlyCollection_1_t90B1C0D935E236955963E2FEDC049B30EB5DFA1E;
struct ReadOnlyCollection_1_t283D5D7D9E3DE9783937ADBA3BF6BEE67BCBFDCE;
struct ReadOnlyCollection_1_t9ED77C33BF650F562B350CE0279E194D11C3611C;
struct ReadOnlyCollection_1_t64CE92B3FF66059503B90BF1A065847EB7B4D4E1;
struct ReadOnlyCollection_1_t3BF272D45B9E5E8E67E09C9D4C9A00BF19EE2852;
struct ReadOnlyCollection_1_t95C4CE7A3281F650247DAD055168AC75CA2E0D94;
struct ReadOnlyCollection_1_t06F71F2F3EBC6E0A34714E0A7EB3367B6D248263;
struct ReadOnlyCollection_1_tD86E076A19D3DF6CFD1AC3FEE937BD0FB0B39AF7;
struct ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8;
struct ReadOnlyCollection_1_tA097AD399F1ED95CBDEFC0663790A10C4A43DFB8;
struct ReadOnlyCollection_1_t57A9EA1D0B6B2A5908DD58EA8C84F29F53D509A1;
struct ReadOnlyCollection_1_tDA9EBC2C2934508604BBB2BA544E97C8DA1907BF;
struct ReadOnlyCollection_1_t502D44622D39E2DFE6DABEFCEA766AC61E338C30;
struct ReadOnlyCollection_1_t6902277BA0F804A3B22466CBEF4B07E1FB12E479;
struct RefComparison_1_tCC78A8CC5E113253AC71C9081E096010349AC8DC;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct StylePropertyValueU5BU5D_t4DE6509822A9A487529DC8DC8C08CB8822CE8688;
struct StyleSelectorMatchU5BU5D_t12881F27D31A0176A4653E10BD3A544A534CFE5F;
struct StyleSelectorPartU5BU5D_tBA574FB3E75E94E52874FDB7B05B9048E8A5421B;
struct StyleSyntaxTokenU5BU5D_t47245051E1F0EBD45B56D9E0ED113E9586B33CD8;
struct StyleValueU5BU5D_t544D1F13B44DC23CA765A18E32B7779768FDF0C8;
struct StyleValueHandleU5BU5D_t66B7732469E9E30B1FB9A6E386315DAB36914ADE;
struct StyleValueManagedU5BU5D_tA36DD573E215D5C8EE43B4BD109BE2AA3902E1E9;
struct StyleVariableU5BU5D_tFE786BD2C1F914C1605C072F0BB10C405C0B4D96;
struct SubstringU5BU5D_t9973080FDB519ED771E9FB3E6FDC90DF45211B77;
struct TimeSpanU5BU5D_tC920B81B0E6DCA110DB9D62B5C3850B4BECB87E6;
struct TimeValueU5BU5D_t3EB79C5975D39A0E711250FD8A9547F5312746DE;
struct TrackableKeyU5BU5D_t53CCCB5B373E040573C0FF1CF1859279EE0AA858;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct UICharInfoU5BU5D_t98D25C0197327978FA4E11B3518901A4839E086C;
struct UILineInfoU5BU5D_tDD6C8909B58F997A6FB1A17F360E8DBE387204BC;
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
struct UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83;
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
struct UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299;
struct UniqueStyleStringU5BU5D_t47384C749ED152804F196C5613B5145349958ECA;
struct UsageHintU5BU5D_t678E554916FB102DB4E2DC2C6CC0976DC145BF23;
struct UxmlNamespaceDefinitionU5BU5D_t28B781ECD62CAF3666F6920255948A5FA6B3D319;
struct UxmlPropertyU5BU5D_tD5BDB1BE0719FB862DB6B3E0CB35022536021BCB;
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
struct Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD;
struct VertexAttributeDescriptorU5BU5D_t5D10E60612F12777F59B7E33939F9075DB0E02B2;
struct X509ChainStatusU5BU5D_tA4CB502E13E6D62B9C824B15F3193FE7EC889299;
struct XREraseAnchorResultU5BU5D_t07FAB42E00B6A49C5112764825A8A944F8E68140;
struct XRFeatureDescriptorU5BU5D_tBB735747E74DA05050B124BFE3525E40EC4114A7;
struct XRFovU5BU5D_tA4BD9240E5BF2E9F7CA7FC9DDA13F00246326FCA;
struct XRLoadAnchorResultU5BU5D_tB8B8C38BD5343704EC2AF30B5FB7BBDAA3662E3A;
struct XRNodeStateU5BU5D_tEC64805398059D44C2FBA68AABAEFFB262B93845;
struct XRReferenceImageU5BU5D_t4D170E9A3F892011ACE006CDECE1F5D50720F65D;
struct XRReferenceObjectU5BU5D_t61D00BD3A99E533B703D4F2FFF3C2C80F358DBA4;
struct XRViewU5BU5D_t46B2B3C0D45A670846E736AFB362448972CB513D;
struct __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979;
struct __Il2CppByteEnumU5BU5D_t4D02DF3357DB0BD78CB7064114CAFFD248D6999A;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
struct __Il2CppInt32EnumU5BU5D_t8FBDB13799B3615AA893F06F601FF09189B04297;
struct __Il2CppUInt32EnumU5BU5D_t59DD627323F45C05F28FE49E0DEA327606079F43;
struct float2U5BU5D_t7F04848FC796653244477DC40830B0A39D67D350;
struct IdsOfInstancesU5BU5D_t6627296D68BD3B37D56902FC2586A0C05853E3BF;
struct ShadowResolutionRequestU5BU5D_tC33A2E5E2712B8688E21C80BB2350155D029B334;
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
struct ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
struct Regex_tE773142C2BE45C5D362B0F815AFF831707A51772;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct String_t;
struct StyleComplexSelector_tE46C29F65FDBA48D3152781187401C8B55B7D8AD;
struct StyleSheet_t6FAF43FCDB45BC6BED0522A222FD4C1A9BB10428;
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
struct Type_t;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

IL2CPP_EXTERN_C RuntimeClass* ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D;

struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StylePropertyValueU5BU5D_t4DE6509822A9A487529DC8DC8C08CB8822CE8688;
struct StyleSelectorMatchU5BU5D_t12881F27D31A0176A4653E10BD3A544A534CFE5F;
struct StyleSelectorPartU5BU5D_tBA574FB3E75E94E52874FDB7B05B9048E8A5421B;
struct StyleSyntaxTokenU5BU5D_t47245051E1F0EBD45B56D9E0ED113E9586B33CD8;
struct StyleValueU5BU5D_t544D1F13B44DC23CA765A18E32B7779768FDF0C8;
struct StyleValueHandleU5BU5D_t66B7732469E9E30B1FB9A6E386315DAB36914ADE;
struct StyleValueManagedU5BU5D_tA36DD573E215D5C8EE43B4BD109BE2AA3902E1E9;
struct StyleVariableU5BU5D_tFE786BD2C1F914C1605C072F0BB10C405C0B4D96;
struct SubstringU5BU5D_t9973080FDB519ED771E9FB3E6FDC90DF45211B77;
struct TimeSpanU5BU5D_tC920B81B0E6DCA110DB9D62B5C3850B4BECB87E6;
struct TimeValueU5BU5D_t3EB79C5975D39A0E711250FD8A9547F5312746DE;
struct TrackableKeyU5BU5D_t53CCCB5B373E040573C0FF1CF1859279EE0AA858;
struct UICharInfoU5BU5D_t98D25C0197327978FA4E11B3518901A4839E086C;
struct UILineInfoU5BU5D_tDD6C8909B58F997A6FB1A17F360E8DBE387204BC;
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
struct UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83;
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
struct UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299;
struct UniqueStyleStringU5BU5D_t47384C749ED152804F196C5613B5145349958ECA;
struct UsageHintU5BU5D_t678E554916FB102DB4E2DC2C6CC0976DC145BF23;
struct UxmlNamespaceDefinitionU5BU5D_t28B781ECD62CAF3666F6920255948A5FA6B3D319;
struct UxmlPropertyU5BU5D_tD5BDB1BE0719FB862DB6B3E0CB35022536021BCB;
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
struct Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD;
struct VertexAttributeDescriptorU5BU5D_t5D10E60612F12777F59B7E33939F9075DB0E02B2;
struct X509ChainStatusU5BU5D_tA4CB502E13E6D62B9C824B15F3193FE7EC889299;
struct XREraseAnchorResultU5BU5D_t07FAB42E00B6A49C5112764825A8A944F8E68140;
struct XRFeatureDescriptorU5BU5D_tBB735747E74DA05050B124BFE3525E40EC4114A7;
struct XRFovU5BU5D_tA4BD9240E5BF2E9F7CA7FC9DDA13F00246326FCA;
struct XRLoadAnchorResultU5BU5D_tB8B8C38BD5343704EC2AF30B5FB7BBDAA3662E3A;
struct XRNodeStateU5BU5D_tEC64805398059D44C2FBA68AABAEFFB262B93845;
struct XRReferenceImageU5BU5D_t4D170E9A3F892011ACE006CDECE1F5D50720F65D;
struct XRReferenceObjectU5BU5D_t61D00BD3A99E533B703D4F2FFF3C2C80F358DBA4;
struct XRViewU5BU5D_t46B2B3C0D45A670846E736AFB362448972CB513D;
struct __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979;
struct __Il2CppByteEnumU5BU5D_t4D02DF3357DB0BD78CB7064114CAFFD248D6999A;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
struct __Il2CppInt32EnumU5BU5D_t8FBDB13799B3615AA893F06F601FF09189B04297;
struct __Il2CppUInt32EnumU5BU5D_t59DD627323F45C05F28FE49E0DEA327606079F43;
struct float2U5BU5D_t7F04848FC796653244477DC40830B0A39D67D350;
struct IdsOfInstancesU5BU5D_t6627296D68BD3B37D56902FC2586A0C05853E3BF;
struct ShadowResolutionRequestU5BU5D_tC33A2E5E2712B8688E21C80BB2350155D029B334;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct ReadOnlyCollection_1_t5439F37121A216F441FC4896558C7D05C6CB0730  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_t23F8C5D5ADD49EC309D753255852410BFE1BB4EC  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_tE86375B1668A6FBD2D1ABEFD277DA7ED73EF5088  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_t4A4298CBF971053B7107BCB3172698E18C4C4C78  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_tFF93E8D08323FE0D47D1EDFE961D186F7E3C9AEE  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_tE93D7970A5840C0077489CEA45621B02483FABC9  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_t2401BF20081A5300090A5FC70F287797DBFE10B0  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_tBE445934E4BBFAD9104AC1AFC81C07456740D5B9  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_tB270E5CCE3D7607E7CDDBE1B835360A0E7B07DF4  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_t8597CBFC170B56C5585AD118A321EEE3B225D172  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_tFF6716AACE48FE7B167A53ED10AE04FA2A2AB83A  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_tCC240C9BD7F4AF6686AA54B53FAD2BED7C354C7D  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_t5F8B55EF85E52FBC5F41B42D70D13BC89D4C469A  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_tAC9F0ECFFCE3DC3797BE610439BF76ACB015D44E  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_t0279BBDF584EF96177DF75FA7A456E4629B2B09E  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_t068BDAE7D562067D24182EABF4C4C7AA8C7C5812  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_tF3F201D52E933A4489A4C06E8B1203099F42FB01  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_tABD6F7BDD581540C8981BBE5012B221D4701AA0A  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_tC00260BA5B1BEF55EBEF800DF50485F5D9806E4C  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_tDF87C8E26187E1D6C24D2DD02E4716CC5B7ACC34  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_tF64E6ECDE29B9EE2538F5A045045DF7774BB8466  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_tAE114E8C18E180A65629D9DF0D8911860274551C  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_tC5795E68B14E438B5B65AF3F4C3F50CA0F951647  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_t9E2776C66EA6797EAB405FB5507CCFDAA18084F6  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_tC097ADAD4728DA15D13F639EC263BD398D57B04F  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_tA87EA4F23BAC952A78BDE9A5B94F3091DB5C7861  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_tB6FD6BA75C6F479B6860FCBA235488206BF20E52  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_tCE850EF6D2887B695661E22343E54F58D576C0E3  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_t803A81BE343B15275BCD30A219ACAC97F0B9A1C8  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_t90B1C0D935E236955963E2FEDC049B30EB5DFA1E  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_t283D5D7D9E3DE9783937ADBA3BF6BEE67BCBFDCE  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_t9ED77C33BF650F562B350CE0279E194D11C3611C  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_t64CE92B3FF66059503B90BF1A065847EB7B4D4E1  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_t3BF272D45B9E5E8E67E09C9D4C9A00BF19EE2852  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_t95C4CE7A3281F650247DAD055168AC75CA2E0D94  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_t06F71F2F3EBC6E0A34714E0A7EB3367B6D248263  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_tD86E076A19D3DF6CFD1AC3FEE937BD0FB0B39AF7  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_tA097AD399F1ED95CBDEFC0663790A10C4A43DFB8  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_t57A9EA1D0B6B2A5908DD58EA8C84F29F53D509A1  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_tDA9EBC2C2934508604BBB2BA544E97C8DA1907BF  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_t502D44622D39E2DFE6DABEFCEA766AC61E338C30  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_t6902277BA0F804A3B22466CBEF4B07E1FB12E479  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct MemberInfo_t  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	float ___r;
	float ___g;
	float ___b;
	float ___a;
};
struct Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___rgba;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint8_t ___r;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_OffsetPadding[1];
			uint8_t ___g;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_OffsetPadding[2];
			uint8_t ___b;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_OffsetPadding[3];
			uint8_t ___a;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_forAlignmentOnly;
		};
	};
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};
struct Guid_t 
{
	int32_t ____a;
	int16_t ____b;
	int16_t ____c;
	uint8_t ____d;
	uint8_t ____e;
	uint8_t ____f;
	uint8_t ____g;
	uint8_t ____h;
	uint8_t ____i;
	uint8_t ____j;
	uint8_t ____k;
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
	float ___m00;
	float ___m10;
	float ___m20;
	float ___m30;
	float ___m01;
	float ___m11;
	float ___m21;
	float ___m31;
	float ___m02;
	float ___m12;
	float ___m22;
	float ___m32;
	float ___m03;
	float ___m13;
	float ___m23;
	float ___m33;
};
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	float ___x;
	float ___y;
	float ___z;
	float ___w;
};
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	float ___m_XMin;
	float ___m_YMin;
	float ___m_Width;
	float ___m_Height;
};
struct SerializableGuid_tCEABDCED6CD954AC100159BDEFC5D414049C0378 
{
	uint64_t ___m_GuidLow;
	uint64_t ___m_GuidHigh;
};
struct StyleSelectorMatch_tA4C195A8F23EE7E672CEE7042BA64189DBC2E6DE 
{
	StyleSheet_t6FAF43FCDB45BC6BED0522A222FD4C1A9BB10428* ___sheet;
	int32_t ___styleSheetIndexInStack;
	int32_t ___importedStyleSheetIndex;
	StyleComplexSelector_tE46C29F65FDBA48D3152781187401C8B55B7D8AD* ___complexSelector;
};
struct StyleSelectorMatch_tA4C195A8F23EE7E672CEE7042BA64189DBC2E6DE_marshaled_pinvoke
{
	StyleSheet_t6FAF43FCDB45BC6BED0522A222FD4C1A9BB10428* ___sheet;
	int32_t ___styleSheetIndexInStack;
	int32_t ___importedStyleSheetIndex;
	StyleComplexSelector_tE46C29F65FDBA48D3152781187401C8B55B7D8AD* ___complexSelector;
};
struct StyleSelectorMatch_tA4C195A8F23EE7E672CEE7042BA64189DBC2E6DE_marshaled_com
{
	StyleSheet_t6FAF43FCDB45BC6BED0522A222FD4C1A9BB10428* ___sheet;
	int32_t ___styleSheetIndexInStack;
	int32_t ___importedStyleSheetIndex;
	StyleComplexSelector_tE46C29F65FDBA48D3152781187401C8B55B7D8AD* ___complexSelector;
};
struct StyleVariable_t5D4DEC936102A13961F4F2C6214B83D6CDC56269 
{
	int32_t ___nameId;
	int32_t ___hash;
	StyleSheet_t6FAF43FCDB45BC6BED0522A222FD4C1A9BB10428* ___sheet;
	StyleValueHandleU5BU5D_t66B7732469E9E30B1FB9A6E386315DAB36914ADE* ___handles;
};
struct StyleVariable_t5D4DEC936102A13961F4F2C6214B83D6CDC56269_marshaled_pinvoke
{
	int32_t ___nameId;
	int32_t ___hash;
	StyleSheet_t6FAF43FCDB45BC6BED0522A222FD4C1A9BB10428* ___sheet;
	StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D* ___handles;
};
struct StyleVariable_t5D4DEC936102A13961F4F2C6214B83D6CDC56269_marshaled_com
{
	int32_t ___nameId;
	int32_t ___hash;
	StyleSheet_t6FAF43FCDB45BC6BED0522A222FD4C1A9BB10428* ___sheet;
	StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D* ___handles;
};
struct Substring_t2E16755269E6716C22074D6BC0A9099915E67849 
{
	String_t* ___m_String;
	int32_t ___m_Index;
	int32_t ___m_Length;
};
struct Substring_t2E16755269E6716C22074D6BC0A9099915E67849_marshaled_pinvoke
{
	char* ___m_String;
	int32_t ___m_Index;
	int32_t ___m_Length;
};
struct Substring_t2E16755269E6716C22074D6BC0A9099915E67849_marshaled_com
{
	Il2CppChar* ___m_String;
	int32_t ___m_Index;
	int32_t ___m_Length;
};
struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A 
{
	int64_t ____ticks;
};
struct TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 
{
	uint64_t ___m_SubId1;
	uint64_t ___m_SubId2;
};
struct UILineInfo_tC6FF4F85BD2316FADA2148A1789B3FF0B05A6CAC 
{
	int32_t ___startCharIdx;
	int32_t ___height;
	float ___topY;
	float ___leading;
};
struct UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455 
{
	uint16_t ___m_value;
};
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	uint32_t ___m_value;
};
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	uint64_t ___m_value;
};
struct UniqueStyleString_tE980AA033ABB00413A3139B42FF22750952DAECF 
{
	int32_t ___m_Id;
};
struct UsageHint_tFD7259AF9E91500CF1D0CE602394B40FD2397AB1 
{
	String_t* ___content;
};
struct UsageHint_tFD7259AF9E91500CF1D0CE602394B40FD2397AB1_marshaled_pinvoke
{
	char* ___content;
};
struct UsageHint_tFD7259AF9E91500CF1D0CE602394B40FD2397AB1_marshaled_com
{
	Il2CppChar* ___content;
};
struct UxmlNamespaceDefinition_t6B70CA125A4C1D5F74F1C901A6F4F72637F6621B 
{
	String_t* ___prefix;
	String_t* ___resolvedNamespace;
};
struct UxmlNamespaceDefinition_t6B70CA125A4C1D5F74F1C901A6F4F72637F6621B_marshaled_pinvoke
{
	char* ___prefix;
	char* ___resolvedNamespace;
};
struct UxmlNamespaceDefinition_t6B70CA125A4C1D5F74F1C901A6F4F72637F6621B_marshaled_com
{
	Il2CppChar* ___prefix;
	Il2CppChar* ___resolvedNamespace;
};
struct UxmlProperty_t98965D0AC619F23715A51F072A885C7F07F15FE4 
{
	String_t* ___name;
	String_t* ___value;
};
struct UxmlProperty_t98965D0AC619F23715A51F072A885C7F07F15FE4_marshaled_pinvoke
{
	char* ___name;
	char* ___value;
};
struct UxmlProperty_t98965D0AC619F23715A51F072A885C7F07F15FE4_marshaled_com
{
	Il2CppChar* ___name;
	Il2CppChar* ___value;
};
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	float ___x;
	float ___y;
};
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	float ___x;
	float ___y;
	float ___z;
};
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	float ___x;
	float ___y;
	float ___z;
	float ___w;
};
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};
struct XRFov_t51E4BB7B76304E61CF064687586D096CE585817A 
{
	float ___m_AngleLeft;
	float ___m_AngleRight;
	float ___m_AngleUp;
	float ___m_AngleDown;
};
struct XRReferenceObject_tDC04E77BBDCC6428C8B852A7CF1208DD2AF9AE14 
{
	uint64_t ___m_GuidLow;
	uint64_t ___m_GuidHigh;
	String_t* ___m_Name;
	List_1_tC0E7595725AFEF62394C64B77712190FBAC6C2C5* ___m_Entries;
};
struct XRReferenceObject_tDC04E77BBDCC6428C8B852A7CF1208DD2AF9AE14_marshaled_pinvoke
{
	uint64_t ___m_GuidLow;
	uint64_t ___m_GuidHigh;
	char* ___m_Name;
	List_1_tC0E7595725AFEF62394C64B77712190FBAC6C2C5* ___m_Entries;
};
struct XRReferenceObject_tDC04E77BBDCC6428C8B852A7CF1208DD2AF9AE14_marshaled_com
{
	uint64_t ___m_GuidLow;
	uint64_t ___m_GuidHigh;
	Il2CppChar* ___m_Name;
	List_1_tC0E7595725AFEF62394C64B77712190FBAC6C2C5* ___m_Entries;
};
struct float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5 
{
	float ___x;
	float ___y;
};
struct IdsOfInstances_t4412C0FA3A4CE4CBFCB20E15BAB081BAC990B350 
{
	int32_t ___IdOfInstance;
	int32_t ___AccelStructID;
};
struct AvailableTrackingData_t223756B90093C1B8974F04856043E3983BA37402 
{
	int32_t ___value__;
};
struct BackgroundPositionKeyword_tE680A05B983D256AADC8E2CF1CA169D004B8641B 
{
	int32_t ___value__;
};
struct Exception_t  : public RuntimeObject
{
	String_t* ____className;
	String_t* ____message;
	RuntimeObject* ____data;
	Exception_t* ____innerException;
	String_t* ____helpURL;
	RuntimeObject* ____stackTrace;
	String_t* ____stackTraceString;
	String_t* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	RuntimeObject* ____dynamicMethods;
	int32_t ____HResult;
	String_t* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_pinvoke
{
	char* ____className;
	char* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_pinvoke* ____innerException;
	char* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	char* ____stackTraceString;
	char* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	char* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className;
	Il2CppChar* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_com* ____innerException;
	Il2CppChar* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	Il2CppChar* ____stackTraceString;
	Il2CppChar* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	Il2CppChar* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct ExceptionArgument_t60E7F8D9DE5362CBE9365893983C30302D83B778 
{
	int32_t ___value__;
};
struct ExceptionResource_t609A85E253A4E615583553D91D839E2E79FDFBD9 
{
	int32_t ___value__;
};
struct FeatureType_t794EFAD24C687FA0CDC5A313581A39F5CB61CC41 
{
	int32_t ___value__;
};
struct LayoutUnit_tF18EC17FE8588A01C72784546410EA0D9B1D2F22 
{
	int32_t ___value__;
};
struct Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation;
};
struct Repeat_tC0330B75B12D24B063BA5151AF3BB73B85D8B840 
{
	int32_t ___value__;
};
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	intptr_t ___value;
};
struct StyleKeyword_t2812E72266C15CBA8927586972DC2FD27B10E705 
{
	int32_t ___value__;
};
struct StylePropertyId_tA3B8A5213F5BA43F9C5443B27B165D744713BE69 
{
	int32_t ___value__;
};
struct StyleSelectorType_t425962DE6D175F785FA2B5554D793B71D39430A3 
{
	int32_t ___value__;
};
struct StyleSyntaxTokenType_tFB5906557ADB62467788C6C7F28D771374EC4834 
{
	int32_t ___value__;
};
struct StyleValueType_tC3253FE046DBB95224A74D13B534D015CC4AADDE 
{
	int32_t ___value__;
};
struct TimeUnit_t56A79CDB672E98A4EE28002BD23B6D5E0BAA2649 
{
	int32_t ___value__;
};
struct TrackableKey_t5E448EF061013AFD452918EC5232225B4590EB9B 
{
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___U3CtrackableIdU3Ek__BackingField;
	Type_t* ___U3CtrackableTypeU3Ek__BackingField;
};
struct TrackableKey_t5E448EF061013AFD452918EC5232225B4590EB9B_marshaled_pinvoke
{
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___U3CtrackableIdU3Ek__BackingField;
	Type_t* ___U3CtrackableTypeU3Ek__BackingField;
};
struct TrackableKey_t5E448EF061013AFD452918EC5232225B4590EB9B_marshaled_com
{
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___U3CtrackableIdU3Ek__BackingField;
	Type_t* ___U3CtrackableTypeU3Ek__BackingField;
};
struct TrackingState_t5487241B6888BB15D8448EBBC640835A011DBBC2 
{
	int32_t ___value__;
};
struct UICharInfo_t24C2EA0F2F3A938100C271891D9DEB015ABA5FBD 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___cursorPos;
	float ___charWidth;
};
struct UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___normal;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___tangent;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___uv0;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___uv1;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___uv2;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___uv3;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___prevPosition;
};
struct VertexAttribute_tF34C1B76F20CA4AEC9D606BCD37A8A0C4A24C9A6 
{
	int32_t ___value__;
};
struct VertexAttributeFormat_tD714C51E671502B116ACE5E23F042BA80649D32F 
{
	int32_t ___value__;
};
struct X509ChainStatusFlags_t57C80D7C1F4C319F6D6B9FBDEA402E3023E6C769 
{
	int32_t ___value__;
};
struct XRNode_t41F4B2F0EDD99DB33C49EC731C8C7F9DF142B5FF 
{
	int32_t ___value__;
};
struct XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F 
{
	SerializableGuid_tCEABDCED6CD954AC100159BDEFC5D414049C0378 ___m_SerializedGuid;
	SerializableGuid_tCEABDCED6CD954AC100159BDEFC5D414049C0378 ___m_SerializedTextureGuid;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Size;
	bool ___m_SpecifySize;
	String_t* ___m_Name;
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___m_Texture;
};
struct XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F_marshaled_pinvoke
{
	SerializableGuid_tCEABDCED6CD954AC100159BDEFC5D414049C0378 ___m_SerializedGuid;
	SerializableGuid_tCEABDCED6CD954AC100159BDEFC5D414049C0378 ___m_SerializedTextureGuid;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Size;
	int32_t ___m_SpecifySize;
	char* ___m_Name;
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___m_Texture;
};
struct XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F_marshaled_com
{
	SerializableGuid_tCEABDCED6CD954AC100159BDEFC5D414049C0378 ___m_SerializedGuid;
	SerializableGuid_tCEABDCED6CD954AC100159BDEFC5D414049C0378 ___m_SerializedTextureGuid;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Size;
	int32_t ___m_SpecifySize;
	Il2CppChar* ___m_Name;
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___m_Texture;
};
struct XRView_t70E23918C68E24DB22A8614AA8717B3BA213FAB5 
{
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___projMatrix;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___viewMatrix;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___prevViewMatrix;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___viewport;
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___occlusionMesh;
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___visibleMesh;
	int32_t ___textureArraySlice;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___eyeCenterUV;
	bool ___isPrevViewMatrixValid;
};
struct XRView_t70E23918C68E24DB22A8614AA8717B3BA213FAB5_marshaled_pinvoke
{
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___projMatrix;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___viewMatrix;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___prevViewMatrix;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___viewport;
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___occlusionMesh;
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___visibleMesh;
	int32_t ___textureArraySlice;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___eyeCenterUV;
	int32_t ___isPrevViewMatrixValid;
};
struct XRView_t70E23918C68E24DB22A8614AA8717B3BA213FAB5_marshaled_com
{
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___projMatrix;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___viewMatrix;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___prevViewMatrix;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___viewport;
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___occlusionMesh;
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___visibleMesh;
	int32_t ___textureArraySlice;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___eyeCenterUV;
	int32_t ___isPrevViewMatrixValid;
};
struct StatusCode_tB2BCF980A5E9E723CE4E05146B7F9CC89EB5BF4B 
{
	int32_t ___value__;
};
struct SettingsOptions_t935A71692F21EE9D959FCAC00574AA018F8BA2CB 
{
	uint16_t ___value__;
};
struct BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F 
{
	int32_t ___x;
	int32_t ___y;
};
struct Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 
{
	float ___m_Value;
	int32_t ___m_Unit;
};
struct StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 
{
	String_t* ___m_Value;
	int32_t ___m_Type;
	RuntimeObject* ___tempData;
	int32_t ___cachedUniqueStyleStringId;
};
struct StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470_marshaled_pinvoke
{
	char* ___m_Value;
	int32_t ___m_Type;
	Il2CppIUnknown* ___tempData;
	int32_t ___cachedUniqueStyleStringId;
};
struct StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470_marshaled_com
{
	Il2CppChar* ___m_Value;
	int32_t ___m_Type;
	Il2CppIUnknown* ___tempData;
	int32_t ___cachedUniqueStyleStringId;
};
struct StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C 
{
	int32_t ___type;
	String_t* ___text;
	float ___number;
};
struct StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C_marshaled_pinvoke
{
	int32_t ___type;
	char* ___text;
	float ___number;
};
struct StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C_marshaled_com
{
	int32_t ___type;
	Il2CppChar* ___text;
	float ___number;
};
struct StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D 
{
	int32_t ___m_ValueType;
	int32_t ___valueIndex;
};
struct StyleValueManaged_t68DFBEC1594279E4DC56634FD5092318D1E9A5F4 
{
	int32_t ___id;
	int32_t ___keyword;
	RuntimeObject* ___value;
};
struct StyleValueManaged_t68DFBEC1594279E4DC56634FD5092318D1E9A5F4_marshaled_pinvoke
{
	int32_t ___id;
	int32_t ___keyword;
	Il2CppIUnknown* ___value;
};
struct StyleValueManaged_t68DFBEC1594279E4DC56634FD5092318D1E9A5F4_marshaled_com
{
	int32_t ___id;
	int32_t ___keyword;
	Il2CppIUnknown* ___value;
};
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};
struct TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E 
{
	float ___m_Value;
	int32_t ___m_Unit;
};
struct Type_t  : public MemberInfo_t
{
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl;
};
struct VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76 
{
	int32_t ___U3CattributeU3Ek__BackingField;
	int32_t ___U3CformatU3Ek__BackingField;
	int32_t ___U3CdimensionU3Ek__BackingField;
	int32_t ___U3CstreamU3Ek__BackingField;
};
struct X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D 
{
	int32_t ___status;
	String_t* ___info;
};
struct X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D_marshaled_pinvoke
{
	int32_t ___status;
	char* ___info;
};
struct X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D_marshaled_com
{
	int32_t ___status;
	Il2CppChar* ___info;
};
struct XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82 
{
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___m_Id;
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_Pose;
	int32_t ___m_TrackingState;
	intptr_t ___m_NativePtr;
	Guid_t ___m_SessionId;
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___m_ParentId;
};
struct XRFeatureDescriptor_t690E672A6BBBEFBB8AF221485C1884507EAFB5B2 
{
	String_t* ___name;
	List_1_t41896DF347A129D13205BBFADE03DFB21E05E459* ___usageHints;
	int32_t ___featureType;
	uint32_t ___customSize;
};
struct XRFeatureDescriptor_t690E672A6BBBEFBB8AF221485C1884507EAFB5B2_marshaled_pinvoke
{
	char* ___name;
	List_1_t41896DF347A129D13205BBFADE03DFB21E05E459* ___usageHints;
	int32_t ___featureType;
	uint32_t ___customSize;
};
struct XRFeatureDescriptor_t690E672A6BBBEFBB8AF221485C1884507EAFB5B2_marshaled_com
{
	Il2CppChar* ___name;
	List_1_t41896DF347A129D13205BBFADE03DFB21E05E459* ___usageHints;
	int32_t ___featureType;
	uint32_t ___customSize;
};
struct XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A 
{
	int32_t ___m_Type;
	int32_t ___m_AvailableFields;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Position;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___m_Rotation;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Velocity;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_AngularVelocity;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Acceleration;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_AngularAcceleration;
	int32_t ___m_Tracked;
	uint64_t ___m_UniqueID;
};
struct XRResultStatus_tCC9883C2EC8AE64CE75A3B0BD56DEFB134CEC941 
{
	int32_t ___m_StatusCode;
	int32_t ___m_NativeStatusCode;
};
struct ShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE 
{
	uint16_t ___visibleLightIndex;
	uint16_t ___perLightShadowSliceIndex;
	uint16_t ___requestedResolution;
	uint16_t ___offsetX;
	uint16_t ___offsetY;
	uint16_t ___allocatedResolution;
	uint16_t ___m_ShadowProperties;
};
struct ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56 
{
	int32_t ___keyword;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___offset;
};
struct StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2 
{
	StyleSheet_t6FAF43FCDB45BC6BED0522A222FD4C1A9BB10428* ___sheet;
	StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D ___handle;
};
struct StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2_marshaled_pinvoke
{
	StyleSheet_t6FAF43FCDB45BC6BED0522A222FD4C1A9BB10428* ___sheet;
	StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D ___handle;
};
struct StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2_marshaled_com
{
	StyleSheet_t6FAF43FCDB45BC6BED0522A222FD4C1A9BB10428* ___sheet;
	StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D ___handle;
};
struct XREraseAnchorResult_t2B44248D283942660C5CE02ECEE6843F60055B2E 
{
	XRResultStatus_tCC9883C2EC8AE64CE75A3B0BD56DEFB134CEC941 ___resultStatus;
	SerializableGuid_tCEABDCED6CD954AC100159BDEFC5D414049C0378 ___savedAnchorGuid;
};
struct XRLoadAnchorResult_t56374A5E6B313EC113CCA50D43ACFC75B66E95B5 
{
	XRResultStatus_tCC9883C2EC8AE64CE75A3B0BD56DEFB134CEC941 ___resultStatus;
	SerializableGuid_tCEABDCED6CD954AC100159BDEFC5D414049C0378 ___savedAnchorGuid;
	XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82 ___xrAnchor;
};
struct StyleValue_t56307594EC04E04EFBCC3220595B4AAD66FF93C5 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___id;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___id_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___keyword_OffsetPadding[4];
			int32_t ___keyword;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___keyword_OffsetPadding_forAlignmentOnly[4];
			int32_t ___keyword_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___number_OffsetPadding[8];
			float ___number;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___number_OffsetPadding_forAlignmentOnly[8];
			float ___number_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___length_OffsetPadding[8];
			Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___length;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___length_OffsetPadding_forAlignmentOnly[8];
			Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___length_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___color_OffsetPadding[8];
			Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___color_OffsetPadding_forAlignmentOnly[8];
			Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___position_OffsetPadding[8];
			BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56 ___position;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___position_OffsetPadding_forAlignmentOnly[8];
			BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56 ___position_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___repeat_OffsetPadding[8];
			BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F ___repeat;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___repeat_OffsetPadding_forAlignmentOnly[8];
			BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F ___repeat_forAlignmentOnly;
		};
	};
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
struct StyleSelectorMatch_tA4C195A8F23EE7E672CEE7042BA64189DBC2E6DE_StaticFields
{
	Comparison_1_tF2EA38711BF4E71781108F0D7BD2B99D225BCE80* ___Comparison;
	RefComparison_1_tCC78A8CC5E113253AC71C9081E096010349AC8DC* ___RefComparison;
};
struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_StaticFields
{
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___Zero;
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MaxValue;
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MinValue;
};
struct UniqueStyleString_tE980AA033ABB00413A3139B42FF22750952DAECF_StaticFields
{
	UniqueStyleString_tE980AA033ABB00413A3139B42FF22750952DAECF ___Null;
	UniqueStyleString_tE980AA033ABB00413A3139B42FF22750952DAECF ___Empty;
	Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* ___k_StringToIndex;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___k_IndexToString;
};
struct UxmlNamespaceDefinition_t6B70CA125A4C1D5F74F1C901A6F4F72637F6621B_StaticFields
{
	UxmlNamespaceDefinition_t6B70CA125A4C1D5F74F1C901A6F4F72637F6621B ___U3CEmptyU3Ek__BackingField;
};
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector;
};
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector;
};
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector;
};
struct float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5_StaticFields
{
	float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5 ___zero;
};
struct UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207_StaticFields
{
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___s_DefaultColor;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___s_DefaultTangent;
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 ___simpleVert;
};
struct Type_t_StaticFields
{
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder;
	Il2CppChar ___Delimiter;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes;
	RuntimeObject* ___Missing;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
struct StylePropertyValueU5BU5D_t4DE6509822A9A487529DC8DC8C08CB8822CE8688  : public RuntimeArray
{
	ALIGN_FIELD (8) StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2 m_Items[1];

	inline StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___sheet), (void*)NULL);
	}
	inline StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___sheet), (void*)NULL);
	}
};
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct StyleSelectorMatchU5BU5D_t12881F27D31A0176A4653E10BD3A544A534CFE5F  : public RuntimeArray
{
	ALIGN_FIELD (8) StyleSelectorMatch_tA4C195A8F23EE7E672CEE7042BA64189DBC2E6DE m_Items[1];

	inline StyleSelectorMatch_tA4C195A8F23EE7E672CEE7042BA64189DBC2E6DE GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline StyleSelectorMatch_tA4C195A8F23EE7E672CEE7042BA64189DBC2E6DE* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, StyleSelectorMatch_tA4C195A8F23EE7E672CEE7042BA64189DBC2E6DE value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___sheet), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___complexSelector), (void*)NULL);
		#endif
	}
	inline StyleSelectorMatch_tA4C195A8F23EE7E672CEE7042BA64189DBC2E6DE GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline StyleSelectorMatch_tA4C195A8F23EE7E672CEE7042BA64189DBC2E6DE* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, StyleSelectorMatch_tA4C195A8F23EE7E672CEE7042BA64189DBC2E6DE value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___sheet), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___complexSelector), (void*)NULL);
		#endif
	}
};
struct StyleSelectorPartU5BU5D_tBA574FB3E75E94E52874FDB7B05B9048E8A5421B  : public RuntimeArray
{
	ALIGN_FIELD (8) StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 m_Items[1];

	inline StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_Value), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___tempData), (void*)NULL);
		#endif
	}
	inline StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_Value), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___tempData), (void*)NULL);
		#endif
	}
};
struct StyleSyntaxTokenU5BU5D_t47245051E1F0EBD45B56D9E0ED113E9586B33CD8  : public RuntimeArray
{
	ALIGN_FIELD (8) StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C m_Items[1];

	inline StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___text), (void*)NULL);
	}
	inline StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___text), (void*)NULL);
	}
};
struct StyleValueU5BU5D_t544D1F13B44DC23CA765A18E32B7779768FDF0C8  : public RuntimeArray
{
	ALIGN_FIELD (8) StyleValue_t56307594EC04E04EFBCC3220595B4AAD66FF93C5 m_Items[1];

	inline StyleValue_t56307594EC04E04EFBCC3220595B4AAD66FF93C5 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline StyleValue_t56307594EC04E04EFBCC3220595B4AAD66FF93C5* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, StyleValue_t56307594EC04E04EFBCC3220595B4AAD66FF93C5 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline StyleValue_t56307594EC04E04EFBCC3220595B4AAD66FF93C5 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline StyleValue_t56307594EC04E04EFBCC3220595B4AAD66FF93C5* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, StyleValue_t56307594EC04E04EFBCC3220595B4AAD66FF93C5 value)
	{
		m_Items[index] = value;
	}
};
struct StyleValueHandleU5BU5D_t66B7732469E9E30B1FB9A6E386315DAB36914ADE  : public RuntimeArray
{
	ALIGN_FIELD (8) StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D m_Items[1];

	inline StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D value)
	{
		m_Items[index] = value;
	}
};
struct StyleValueManagedU5BU5D_tA36DD573E215D5C8EE43B4BD109BE2AA3902E1E9  : public RuntimeArray
{
	ALIGN_FIELD (8) StyleValueManaged_t68DFBEC1594279E4DC56634FD5092318D1E9A5F4 m_Items[1];

	inline StyleValueManaged_t68DFBEC1594279E4DC56634FD5092318D1E9A5F4 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline StyleValueManaged_t68DFBEC1594279E4DC56634FD5092318D1E9A5F4* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, StyleValueManaged_t68DFBEC1594279E4DC56634FD5092318D1E9A5F4 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
	}
	inline StyleValueManaged_t68DFBEC1594279E4DC56634FD5092318D1E9A5F4 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline StyleValueManaged_t68DFBEC1594279E4DC56634FD5092318D1E9A5F4* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, StyleValueManaged_t68DFBEC1594279E4DC56634FD5092318D1E9A5F4 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
	}
};
struct StyleVariableU5BU5D_tFE786BD2C1F914C1605C072F0BB10C405C0B4D96  : public RuntimeArray
{
	ALIGN_FIELD (8) StyleVariable_t5D4DEC936102A13961F4F2C6214B83D6CDC56269 m_Items[1];

	inline StyleVariable_t5D4DEC936102A13961F4F2C6214B83D6CDC56269 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline StyleVariable_t5D4DEC936102A13961F4F2C6214B83D6CDC56269* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, StyleVariable_t5D4DEC936102A13961F4F2C6214B83D6CDC56269 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___sheet), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___handles), (void*)NULL);
		#endif
	}
	inline StyleVariable_t5D4DEC936102A13961F4F2C6214B83D6CDC56269 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline StyleVariable_t5D4DEC936102A13961F4F2C6214B83D6CDC56269* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, StyleVariable_t5D4DEC936102A13961F4F2C6214B83D6CDC56269 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___sheet), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___handles), (void*)NULL);
		#endif
	}
};
struct SubstringU5BU5D_t9973080FDB519ED771E9FB3E6FDC90DF45211B77  : public RuntimeArray
{
	ALIGN_FIELD (8) Substring_t2E16755269E6716C22074D6BC0A9099915E67849 m_Items[1];

	inline Substring_t2E16755269E6716C22074D6BC0A9099915E67849 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Substring_t2E16755269E6716C22074D6BC0A9099915E67849* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Substring_t2E16755269E6716C22074D6BC0A9099915E67849 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_String), (void*)NULL);
	}
	inline Substring_t2E16755269E6716C22074D6BC0A9099915E67849 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Substring_t2E16755269E6716C22074D6BC0A9099915E67849* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Substring_t2E16755269E6716C22074D6BC0A9099915E67849 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_String), (void*)NULL);
	}
};
struct TimeSpanU5BU5D_tC920B81B0E6DCA110DB9D62B5C3850B4BECB87E6  : public RuntimeArray
{
	ALIGN_FIELD (8) TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A m_Items[1];

	inline TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A value)
	{
		m_Items[index] = value;
	}
};
struct TimeValueU5BU5D_t3EB79C5975D39A0E711250FD8A9547F5312746DE  : public RuntimeArray
{
	ALIGN_FIELD (8) TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E m_Items[1];

	inline TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E value)
	{
		m_Items[index] = value;
	}
};
struct TrackableKeyU5BU5D_t53CCCB5B373E040573C0FF1CF1859279EE0AA858  : public RuntimeArray
{
	ALIGN_FIELD (8) TrackableKey_t5E448EF061013AFD452918EC5232225B4590EB9B m_Items[1];

	inline TrackableKey_t5E448EF061013AFD452918EC5232225B4590EB9B GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline TrackableKey_t5E448EF061013AFD452918EC5232225B4590EB9B* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, TrackableKey_t5E448EF061013AFD452918EC5232225B4590EB9B value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___U3CtrackableTypeU3Ek__BackingField), (void*)NULL);
	}
	inline TrackableKey_t5E448EF061013AFD452918EC5232225B4590EB9B GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline TrackableKey_t5E448EF061013AFD452918EC5232225B4590EB9B* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, TrackableKey_t5E448EF061013AFD452918EC5232225B4590EB9B value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___U3CtrackableTypeU3Ek__BackingField), (void*)NULL);
	}
};
struct UICharInfoU5BU5D_t98D25C0197327978FA4E11B3518901A4839E086C  : public RuntimeArray
{
	ALIGN_FIELD (8) UICharInfo_t24C2EA0F2F3A938100C271891D9DEB015ABA5FBD m_Items[1];

	inline UICharInfo_t24C2EA0F2F3A938100C271891D9DEB015ABA5FBD GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline UICharInfo_t24C2EA0F2F3A938100C271891D9DEB015ABA5FBD* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, UICharInfo_t24C2EA0F2F3A938100C271891D9DEB015ABA5FBD value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline UICharInfo_t24C2EA0F2F3A938100C271891D9DEB015ABA5FBD GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline UICharInfo_t24C2EA0F2F3A938100C271891D9DEB015ABA5FBD* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, UICharInfo_t24C2EA0F2F3A938100C271891D9DEB015ABA5FBD value)
	{
		m_Items[index] = value;
	}
};
struct UILineInfoU5BU5D_tDD6C8909B58F997A6FB1A17F360E8DBE387204BC  : public RuntimeArray
{
	ALIGN_FIELD (8) UILineInfo_tC6FF4F85BD2316FADA2148A1789B3FF0B05A6CAC m_Items[1];

	inline UILineInfo_tC6FF4F85BD2316FADA2148A1789B3FF0B05A6CAC GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline UILineInfo_tC6FF4F85BD2316FADA2148A1789B3FF0B05A6CAC* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, UILineInfo_tC6FF4F85BD2316FADA2148A1789B3FF0B05A6CAC value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline UILineInfo_tC6FF4F85BD2316FADA2148A1789B3FF0B05A6CAC GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline UILineInfo_tC6FF4F85BD2316FADA2148A1789B3FF0B05A6CAC* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, UILineInfo_tC6FF4F85BD2316FADA2148A1789B3FF0B05A6CAC value)
	{
		m_Items[index] = value;
	}
};
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F  : public RuntimeArray
{
	ALIGN_FIELD (8) UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 m_Items[1];

	inline UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 value)
	{
		m_Items[index] = value;
	}
};
struct UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83  : public RuntimeArray
{
	ALIGN_FIELD (8) uint16_t m_Items[1];

	inline uint16_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint16_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint16_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint16_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint16_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint16_t value)
	{
		m_Items[index] = value;
	}
};
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA  : public RuntimeArray
{
	ALIGN_FIELD (8) uint32_t m_Items[1];

	inline uint32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint32_t value)
	{
		m_Items[index] = value;
	}
};
struct UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299  : public RuntimeArray
{
	ALIGN_FIELD (8) uint64_t m_Items[1];

	inline uint64_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint64_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint64_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint64_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint64_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint64_t value)
	{
		m_Items[index] = value;
	}
};
struct UniqueStyleStringU5BU5D_t47384C749ED152804F196C5613B5145349958ECA  : public RuntimeArray
{
	ALIGN_FIELD (8) UniqueStyleString_tE980AA033ABB00413A3139B42FF22750952DAECF m_Items[1];

	inline UniqueStyleString_tE980AA033ABB00413A3139B42FF22750952DAECF GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline UniqueStyleString_tE980AA033ABB00413A3139B42FF22750952DAECF* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, UniqueStyleString_tE980AA033ABB00413A3139B42FF22750952DAECF value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline UniqueStyleString_tE980AA033ABB00413A3139B42FF22750952DAECF GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline UniqueStyleString_tE980AA033ABB00413A3139B42FF22750952DAECF* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, UniqueStyleString_tE980AA033ABB00413A3139B42FF22750952DAECF value)
	{
		m_Items[index] = value;
	}
};
struct UsageHintU5BU5D_t678E554916FB102DB4E2DC2C6CC0976DC145BF23  : public RuntimeArray
{
	ALIGN_FIELD (8) UsageHint_tFD7259AF9E91500CF1D0CE602394B40FD2397AB1 m_Items[1];

	inline UsageHint_tFD7259AF9E91500CF1D0CE602394B40FD2397AB1 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline UsageHint_tFD7259AF9E91500CF1D0CE602394B40FD2397AB1* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, UsageHint_tFD7259AF9E91500CF1D0CE602394B40FD2397AB1 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___content), (void*)NULL);
	}
	inline UsageHint_tFD7259AF9E91500CF1D0CE602394B40FD2397AB1 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline UsageHint_tFD7259AF9E91500CF1D0CE602394B40FD2397AB1* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, UsageHint_tFD7259AF9E91500CF1D0CE602394B40FD2397AB1 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___content), (void*)NULL);
	}
};
struct UxmlNamespaceDefinitionU5BU5D_t28B781ECD62CAF3666F6920255948A5FA6B3D319  : public RuntimeArray
{
	ALIGN_FIELD (8) UxmlNamespaceDefinition_t6B70CA125A4C1D5F74F1C901A6F4F72637F6621B m_Items[1];

	inline UxmlNamespaceDefinition_t6B70CA125A4C1D5F74F1C901A6F4F72637F6621B GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline UxmlNamespaceDefinition_t6B70CA125A4C1D5F74F1C901A6F4F72637F6621B* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, UxmlNamespaceDefinition_t6B70CA125A4C1D5F74F1C901A6F4F72637F6621B value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___prefix), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___resolvedNamespace), (void*)NULL);
		#endif
	}
	inline UxmlNamespaceDefinition_t6B70CA125A4C1D5F74F1C901A6F4F72637F6621B GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline UxmlNamespaceDefinition_t6B70CA125A4C1D5F74F1C901A6F4F72637F6621B* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, UxmlNamespaceDefinition_t6B70CA125A4C1D5F74F1C901A6F4F72637F6621B value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___prefix), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___resolvedNamespace), (void*)NULL);
		#endif
	}
};
struct UxmlPropertyU5BU5D_tD5BDB1BE0719FB862DB6B3E0CB35022536021BCB  : public RuntimeArray
{
	ALIGN_FIELD (8) UxmlProperty_t98965D0AC619F23715A51F072A885C7F07F15FE4 m_Items[1];

	inline UxmlProperty_t98965D0AC619F23715A51F072A885C7F07F15FE4 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline UxmlProperty_t98965D0AC619F23715A51F072A885C7F07F15FE4* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, UxmlProperty_t98965D0AC619F23715A51F072A885C7F07F15FE4 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___name), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
		#endif
	}
	inline UxmlProperty_t98965D0AC619F23715A51F072A885C7F07F15FE4 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline UxmlProperty_t98965D0AC619F23715A51F072A885C7F07F15FE4* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, UxmlProperty_t98965D0AC619F23715A51F072A885C7F07F15FE4 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___name), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
		#endif
	}
};
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 m_Items[1];

	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 value)
	{
		m_Items[index] = value;
	}
};
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 m_Items[1];

	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		m_Items[index] = value;
	}
};
struct Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 m_Items[1];

	inline Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 value)
	{
		m_Items[index] = value;
	}
};
struct VertexAttributeDescriptorU5BU5D_t5D10E60612F12777F59B7E33939F9075DB0E02B2  : public RuntimeArray
{
	ALIGN_FIELD (8) VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76 m_Items[1];

	inline VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76 value)
	{
		m_Items[index] = value;
	}
};
struct X509ChainStatusU5BU5D_tA4CB502E13E6D62B9C824B15F3193FE7EC889299  : public RuntimeArray
{
	ALIGN_FIELD (8) X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D m_Items[1];

	inline X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___info), (void*)NULL);
	}
	inline X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___info), (void*)NULL);
	}
};
struct XREraseAnchorResultU5BU5D_t07FAB42E00B6A49C5112764825A8A944F8E68140  : public RuntimeArray
{
	ALIGN_FIELD (8) XREraseAnchorResult_t2B44248D283942660C5CE02ECEE6843F60055B2E m_Items[1];

	inline XREraseAnchorResult_t2B44248D283942660C5CE02ECEE6843F60055B2E GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline XREraseAnchorResult_t2B44248D283942660C5CE02ECEE6843F60055B2E* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, XREraseAnchorResult_t2B44248D283942660C5CE02ECEE6843F60055B2E value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline XREraseAnchorResult_t2B44248D283942660C5CE02ECEE6843F60055B2E GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline XREraseAnchorResult_t2B44248D283942660C5CE02ECEE6843F60055B2E* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, XREraseAnchorResult_t2B44248D283942660C5CE02ECEE6843F60055B2E value)
	{
		m_Items[index] = value;
	}
};
struct XRFeatureDescriptorU5BU5D_tBB735747E74DA05050B124BFE3525E40EC4114A7  : public RuntimeArray
{
	ALIGN_FIELD (8) XRFeatureDescriptor_t690E672A6BBBEFBB8AF221485C1884507EAFB5B2 m_Items[1];

	inline XRFeatureDescriptor_t690E672A6BBBEFBB8AF221485C1884507EAFB5B2 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline XRFeatureDescriptor_t690E672A6BBBEFBB8AF221485C1884507EAFB5B2* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, XRFeatureDescriptor_t690E672A6BBBEFBB8AF221485C1884507EAFB5B2 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___name), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___usageHints), (void*)NULL);
		#endif
	}
	inline XRFeatureDescriptor_t690E672A6BBBEFBB8AF221485C1884507EAFB5B2 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline XRFeatureDescriptor_t690E672A6BBBEFBB8AF221485C1884507EAFB5B2* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, XRFeatureDescriptor_t690E672A6BBBEFBB8AF221485C1884507EAFB5B2 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___name), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___usageHints), (void*)NULL);
		#endif
	}
};
struct XRFovU5BU5D_tA4BD9240E5BF2E9F7CA7FC9DDA13F00246326FCA  : public RuntimeArray
{
	ALIGN_FIELD (8) XRFov_t51E4BB7B76304E61CF064687586D096CE585817A m_Items[1];

	inline XRFov_t51E4BB7B76304E61CF064687586D096CE585817A GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline XRFov_t51E4BB7B76304E61CF064687586D096CE585817A* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, XRFov_t51E4BB7B76304E61CF064687586D096CE585817A value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline XRFov_t51E4BB7B76304E61CF064687586D096CE585817A GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline XRFov_t51E4BB7B76304E61CF064687586D096CE585817A* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, XRFov_t51E4BB7B76304E61CF064687586D096CE585817A value)
	{
		m_Items[index] = value;
	}
};
struct XRLoadAnchorResultU5BU5D_tB8B8C38BD5343704EC2AF30B5FB7BBDAA3662E3A  : public RuntimeArray
{
	ALIGN_FIELD (8) XRLoadAnchorResult_t56374A5E6B313EC113CCA50D43ACFC75B66E95B5 m_Items[1];

	inline XRLoadAnchorResult_t56374A5E6B313EC113CCA50D43ACFC75B66E95B5 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline XRLoadAnchorResult_t56374A5E6B313EC113CCA50D43ACFC75B66E95B5* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, XRLoadAnchorResult_t56374A5E6B313EC113CCA50D43ACFC75B66E95B5 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline XRLoadAnchorResult_t56374A5E6B313EC113CCA50D43ACFC75B66E95B5 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline XRLoadAnchorResult_t56374A5E6B313EC113CCA50D43ACFC75B66E95B5* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, XRLoadAnchorResult_t56374A5E6B313EC113CCA50D43ACFC75B66E95B5 value)
	{
		m_Items[index] = value;
	}
};
struct XRNodeStateU5BU5D_tEC64805398059D44C2FBA68AABAEFFB262B93845  : public RuntimeArray
{
	ALIGN_FIELD (8) XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A m_Items[1];

	inline XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A value)
	{
		m_Items[index] = value;
	}
};
struct XRReferenceImageU5BU5D_t4D170E9A3F892011ACE006CDECE1F5D50720F65D  : public RuntimeArray
{
	ALIGN_FIELD (8) XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F m_Items[1];

	inline XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_Name), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_Texture), (void*)NULL);
		#endif
	}
	inline XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_Name), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_Texture), (void*)NULL);
		#endif
	}
};
struct XRReferenceObjectU5BU5D_t61D00BD3A99E533B703D4F2FFF3C2C80F358DBA4  : public RuntimeArray
{
	ALIGN_FIELD (8) XRReferenceObject_tDC04E77BBDCC6428C8B852A7CF1208DD2AF9AE14 m_Items[1];

	inline XRReferenceObject_tDC04E77BBDCC6428C8B852A7CF1208DD2AF9AE14 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline XRReferenceObject_tDC04E77BBDCC6428C8B852A7CF1208DD2AF9AE14* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, XRReferenceObject_tDC04E77BBDCC6428C8B852A7CF1208DD2AF9AE14 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_Name), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_Entries), (void*)NULL);
		#endif
	}
	inline XRReferenceObject_tDC04E77BBDCC6428C8B852A7CF1208DD2AF9AE14 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline XRReferenceObject_tDC04E77BBDCC6428C8B852A7CF1208DD2AF9AE14* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, XRReferenceObject_tDC04E77BBDCC6428C8B852A7CF1208DD2AF9AE14 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_Name), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_Entries), (void*)NULL);
		#endif
	}
};
struct XRViewU5BU5D_t46B2B3C0D45A670846E736AFB362448972CB513D  : public RuntimeArray
{
	ALIGN_FIELD (8) XRView_t70E23918C68E24DB22A8614AA8717B3BA213FAB5 m_Items[1];

	inline XRView_t70E23918C68E24DB22A8614AA8717B3BA213FAB5 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline XRView_t70E23918C68E24DB22A8614AA8717B3BA213FAB5* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, XRView_t70E23918C68E24DB22A8614AA8717B3BA213FAB5 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___occlusionMesh), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___visibleMesh), (void*)NULL);
		#endif
	}
	inline XRView_t70E23918C68E24DB22A8614AA8717B3BA213FAB5 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline XRView_t70E23918C68E24DB22A8614AA8717B3BA213FAB5* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, XRView_t70E23918C68E24DB22A8614AA8717B3BA213FAB5 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___occlusionMesh), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___visibleMesh), (void*)NULL);
		#endif
	}
};
struct __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979  : public RuntimeArray
{
	ALIGN_FIELD (8) Il2CppSharedGenericObject* m_Items[1];

	inline Il2CppSharedGenericObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppSharedGenericObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppSharedGenericObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Il2CppSharedGenericObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppSharedGenericObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppSharedGenericObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct __Il2CppByteEnumU5BU5D_t4D02DF3357DB0BD78CB7064114CAFFD248D6999A  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
};
struct __Il2CppInt32EnumU5BU5D_t8FBDB13799B3615AA893F06F601FF09189B04297  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
struct __Il2CppUInt32EnumU5BU5D_t59DD627323F45C05F28FE49E0DEA327606079F43  : public RuntimeArray
{
	ALIGN_FIELD (8) uint32_t m_Items[1];

	inline uint32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint32_t value)
	{
		m_Items[index] = value;
	}
};
struct float2U5BU5D_t7F04848FC796653244477DC40830B0A39D67D350  : public RuntimeArray
{
	ALIGN_FIELD (8) float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5 m_Items[1];

	inline float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5 value)
	{
		m_Items[index] = value;
	}
};
struct IdsOfInstancesU5BU5D_t6627296D68BD3B37D56902FC2586A0C05853E3BF  : public RuntimeArray
{
	ALIGN_FIELD (8) IdsOfInstances_t4412C0FA3A4CE4CBFCB20E15BAB081BAC990B350 m_Items[1];

	inline IdsOfInstances_t4412C0FA3A4CE4CBFCB20E15BAB081BAC990B350 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline IdsOfInstances_t4412C0FA3A4CE4CBFCB20E15BAB081BAC990B350* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, IdsOfInstances_t4412C0FA3A4CE4CBFCB20E15BAB081BAC990B350 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline IdsOfInstances_t4412C0FA3A4CE4CBFCB20E15BAB081BAC990B350 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline IdsOfInstances_t4412C0FA3A4CE4CBFCB20E15BAB081BAC990B350* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, IdsOfInstances_t4412C0FA3A4CE4CBFCB20E15BAB081BAC990B350 value)
	{
		m_Items[index] = value;
	}
};
struct ShadowResolutionRequestU5BU5D_tC33A2E5E2712B8688E21C80BB2350155D029B334  : public RuntimeArray
{
	ALIGN_FIELD (8) ShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE m_Items[1];

	inline ShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline ShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE value)
	{
		m_Items[index] = value;
	}
};


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_mC2DE5125863C866A36E96B0435C1CE3267D57641 (ReadOnlyCollection_1_t5439F37121A216F441FC4896558C7D05C6CB0730* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_mA52C70C8A21853D5DBB552E2C2A72BC214F2B76F (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m74F4C2A8BF2605D73D007839E2D98F4A376F2552 (ReadOnlyCollection_1_t5439F37121A216F441FC4896558C7D05C6CB0730* __this, StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_mD61A01DE3E2EA656BD6DE679CC9E4FAB59B9FBF3 (ReadOnlyCollection_1_t5439F37121A216F441FC4896558C7D05C6CB0730* __this, StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_mA820E69F0ACE5C10485BDA2D9403C9FE92A5A685 (ReadOnlyCollection_1_t23F8C5D5ADD49EC309D753255852410BFE1BB4EC* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m57C36A631CA969171961A9F5081E07EAE88F3D71 (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m7E2E6E4CDEB961B485773CFAB0D1CFB7A13ADA0D (ReadOnlyCollection_1_t23F8C5D5ADD49EC309D753255852410BFE1BB4EC* __this, StyleSelectorMatch_tA4C195A8F23EE7E672CEE7042BA64189DBC2E6DE ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_mA0A1A670468F470E5C834117D075E967979682FB (ReadOnlyCollection_1_t23F8C5D5ADD49EC309D753255852410BFE1BB4EC* __this, StyleSelectorMatch_tA4C195A8F23EE7E672CEE7042BA64189DBC2E6DE ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_mFF7E669AB72703D9E0C341B705834473C187608A (ReadOnlyCollection_1_tE86375B1668A6FBD2D1ABEFD277DA7ED73EF5088* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m389A6F55F75F8D0F1FF361984D8A460829ABE096 (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_mA1A790C06B92930F5819430B17FE2807298BBCF3 (ReadOnlyCollection_1_tE86375B1668A6FBD2D1ABEFD277DA7ED73EF5088* __this, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_mB40E1CC7BD75A6AEF6786E92AD11A2F5AF991B64 (ReadOnlyCollection_1_tE86375B1668A6FBD2D1ABEFD277DA7ED73EF5088* __this, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m496BD7BFA76410E273E090815D701C135B2E0C18 (ReadOnlyCollection_1_t4A4298CBF971053B7107BCB3172698E18C4C4C78* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_mDB14D7889E01F89EF4D73BAAE5AEC51F7B239BCC (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m5A098FDA7112021261C8C7F743127D421017FADB (ReadOnlyCollection_1_t4A4298CBF971053B7107BCB3172698E18C4C4C78* __this, StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_mEEDB8DA92C276721AE87583DC4E0564936B9E55F (ReadOnlyCollection_1_t4A4298CBF971053B7107BCB3172698E18C4C4C78* __this, StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_mD6B7461CB6FCF06FACC658DC289D497C90018333 (ReadOnlyCollection_1_tFF93E8D08323FE0D47D1EDFE961D186F7E3C9AEE* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m46E76F2FA7D7FFCCBB200D66E85823E5E3C1E831 (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m0AE0D9C4E6071DC1275906F2D88A3EF83EB221F3 (ReadOnlyCollection_1_tFF93E8D08323FE0D47D1EDFE961D186F7E3C9AEE* __this, StyleValue_t56307594EC04E04EFBCC3220595B4AAD66FF93C5 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_mCEF9826545BDA2E8E530F48F9EA451D6D2307419 (ReadOnlyCollection_1_tFF93E8D08323FE0D47D1EDFE961D186F7E3C9AEE* __this, StyleValue_t56307594EC04E04EFBCC3220595B4AAD66FF93C5 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m34F00F477064F0070BE76383370D2D841DCB7256 (ReadOnlyCollection_1_tE93D7970A5840C0077489CEA45621B02483FABC9* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m5DFF5C6A27901428D38857976FFA53E551F76AD1 (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_mD95EE3072842E6AF68C6EB74E74BED2332004F16 (ReadOnlyCollection_1_tE93D7970A5840C0077489CEA45621B02483FABC9* __this, StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m0E438DAB1C5EC5C117A792A204DB597BC63B329D (ReadOnlyCollection_1_tE93D7970A5840C0077489CEA45621B02483FABC9* __this, StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m52CA7994F4FAC8981DF7318B0E18B5484676E392 (ReadOnlyCollection_1_t2401BF20081A5300090A5FC70F287797DBFE10B0* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m069880AD95C6EBF71508C3D0683317C53113800C (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m8E805DDCC9D2CBF698432996185663AF947F2FA0 (ReadOnlyCollection_1_t2401BF20081A5300090A5FC70F287797DBFE10B0* __this, StyleValueManaged_t68DFBEC1594279E4DC56634FD5092318D1E9A5F4 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_mA017774366396F9121936E8529BA288A0E9244CE (ReadOnlyCollection_1_t2401BF20081A5300090A5FC70F287797DBFE10B0* __this, StyleValueManaged_t68DFBEC1594279E4DC56634FD5092318D1E9A5F4 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_mA070C2C4E69ECF4F1658E281C60BF698FD5A5A8F (ReadOnlyCollection_1_tBE445934E4BBFAD9104AC1AFC81C07456740D5B9* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m3C659BC7492D6D23A67860B02DE0D2BF56988CAA (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m79D6B93F48A882214613F65736C4275CCC7FC3FF (ReadOnlyCollection_1_tBE445934E4BBFAD9104AC1AFC81C07456740D5B9* __this, StyleVariable_t5D4DEC936102A13961F4F2C6214B83D6CDC56269 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m59C4EFADD346BE75CA43C56F812E67C011CF75F9 (ReadOnlyCollection_1_tBE445934E4BBFAD9104AC1AFC81C07456740D5B9* __this, StyleVariable_t5D4DEC936102A13961F4F2C6214B83D6CDC56269 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m21B7575FC88C1F0EB39B77529C38A0286A3B575F (ReadOnlyCollection_1_tB270E5CCE3D7607E7CDDBE1B835360A0E7B07DF4* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_mEECB28AFAAAC26A7C6E843A076A43DCE2F55CDCA (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m89291249B5D4B20D9F07C3B162755A25BC44C530 (ReadOnlyCollection_1_tB270E5CCE3D7607E7CDDBE1B835360A0E7B07DF4* __this, Substring_t2E16755269E6716C22074D6BC0A9099915E67849 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_mA817652F7A04A40F42DD4F4F8C12D4E9E4508B51 (ReadOnlyCollection_1_tB270E5CCE3D7607E7CDDBE1B835360A0E7B07DF4* __this, Substring_t2E16755269E6716C22074D6BC0A9099915E67849 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_mCF1102C753FDF5113EF4E5D4C25361982DAFBF85 (ReadOnlyCollection_1_t8597CBFC170B56C5585AD118A321EEE3B225D172* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m5F32A19B95F6BF4ECAABE5C8199A379F4278B3B4 (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m63C69B4D67A2426607107A20654E866917E29572 (ReadOnlyCollection_1_t8597CBFC170B56C5585AD118A321EEE3B225D172* __this, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_mE411C2C33582AA09CA7FA32BBEB6BA1CFC0A286F (ReadOnlyCollection_1_t8597CBFC170B56C5585AD118A321EEE3B225D172* __this, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m1B303B771A898F2B2B6BFC1858958F3256DD3E99 (ReadOnlyCollection_1_tFF6716AACE48FE7B167A53ED10AE04FA2A2AB83A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_mC19A002D4F9915FA70C0B6DE179B36F8B4DA9B87 (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m02DC5E9462836451750318F47E93084247533EE6 (ReadOnlyCollection_1_tFF6716AACE48FE7B167A53ED10AE04FA2A2AB83A* __this, TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m51CDE7C02C2B73BD9913E8FC0ED84A4308672A73 (ReadOnlyCollection_1_tFF6716AACE48FE7B167A53ED10AE04FA2A2AB83A* __this, TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m1FD851DFDFB329BAE117BCC71966C01C2D6AF658 (ReadOnlyCollection_1_tCC240C9BD7F4AF6686AA54B53FAD2BED7C354C7D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m582F5EE1A786B32363472D217A42D888FB6824BE (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_mDC60FC1B56E0FBE92E3C2BAAF6606D537CA78CC0 (ReadOnlyCollection_1_tCC240C9BD7F4AF6686AA54B53FAD2BED7C354C7D* __this, TrackableKey_t5E448EF061013AFD452918EC5232225B4590EB9B ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m18A37130405759393673C8FB52C5DEFDA5916EC8 (ReadOnlyCollection_1_tCC240C9BD7F4AF6686AA54B53FAD2BED7C354C7D* __this, TrackableKey_t5E448EF061013AFD452918EC5232225B4590EB9B ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m208858945002AE69A132CDB66FEABE0C0525AE60 (ReadOnlyCollection_1_t5F8B55EF85E52FBC5F41B42D70D13BC89D4C469A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m7FF4D4B7DB9C5EB381294D17EF153E57E9D90F24 (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m05093008740300A921F7BB341479D97499CF75E0 (ReadOnlyCollection_1_t5F8B55EF85E52FBC5F41B42D70D13BC89D4C469A* __this, UICharInfo_t24C2EA0F2F3A938100C271891D9DEB015ABA5FBD ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m04BB6920B51BCC3A3026DF35719210BF7C503C2C (ReadOnlyCollection_1_t5F8B55EF85E52FBC5F41B42D70D13BC89D4C469A* __this, UICharInfo_t24C2EA0F2F3A938100C271891D9DEB015ABA5FBD ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_mF4F25BF826DF061ED78B82A6595649A22FE54A6A (ReadOnlyCollection_1_tAC9F0ECFFCE3DC3797BE610439BF76ACB015D44E* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m03C42A942F85B4EC168F87B45CA0C1E0B8B991CC (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_mC6D50D96188C20173348A47F5374EBB4820BF7FF (ReadOnlyCollection_1_tAC9F0ECFFCE3DC3797BE610439BF76ACB015D44E* __this, UILineInfo_tC6FF4F85BD2316FADA2148A1789B3FF0B05A6CAC ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m545FFA46CA3E7EED5B63255AD7A4E091B9ABBF0F (ReadOnlyCollection_1_tAC9F0ECFFCE3DC3797BE610439BF76ACB015D44E* __this, UILineInfo_tC6FF4F85BD2316FADA2148A1789B3FF0B05A6CAC ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m1D8F54776E65523E2DFD134DD2FBCB07804B23B5 (ReadOnlyCollection_1_t0279BBDF584EF96177DF75FA7A456E4629B2B09E* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m88E1CA111AE23BF4399AA4FFE4FE8867FE94C854 (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_mAF5A0A69B2F9B8BF257C52A68C9BAA8A29F6CF17 (ReadOnlyCollection_1_t0279BBDF584EF96177DF75FA7A456E4629B2B09E* __this, UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m129FB3AE63A51E593B4BAD57B4A2A9E3104812AC (ReadOnlyCollection_1_t0279BBDF584EF96177DF75FA7A456E4629B2B09E* __this, UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_mDF41F3A59AEF0E185153710405DC66DBA597FC88 (ReadOnlyCollection_1_t068BDAE7D562067D24182EABF4C4C7AA8C7C5812* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m872007057C4E5FFCCB51AE633C44608C4A23189C (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m3F49FD6FEF35A79AA32F604B1CBF711080A80735 (ReadOnlyCollection_1_t068BDAE7D562067D24182EABF4C4C7AA8C7C5812* __this, uint16_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_mDF7DBB43B47AD1AA7E526210C9C76BBA642153DF (ReadOnlyCollection_1_t068BDAE7D562067D24182EABF4C4C7AA8C7C5812* __this, uint16_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_mE5F79F4C569C903ACCF6EA6A986411A6DF3A9CF0 (ReadOnlyCollection_1_tF3F201D52E933A4489A4C06E8B1203099F42FB01* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m1D7518BCBEC6037EB9FF7B400662C83A568F7B26 (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m419531A31381A970A871D90935DF22B6CF3EBFBB (ReadOnlyCollection_1_tF3F201D52E933A4489A4C06E8B1203099F42FB01* __this, uint32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m9A6405BAF7999DFD7A0398A1E931E107FEA5A1A5 (ReadOnlyCollection_1_tF3F201D52E933A4489A4C06E8B1203099F42FB01* __this, uint32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m7CADBE80BAAD2AAA5349395B3E442605E0BFEB95 (ReadOnlyCollection_1_tABD6F7BDD581540C8981BBE5012B221D4701AA0A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_mE726091D2574AA01253129E1832666343C088AA1 (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m785F371F039A4AA57D08627D5B0808885CDEE0AA (ReadOnlyCollection_1_tABD6F7BDD581540C8981BBE5012B221D4701AA0A* __this, uint64_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_mFEF36A399F0FC585064EDABD17E3B3C465AC4F89 (ReadOnlyCollection_1_tABD6F7BDD581540C8981BBE5012B221D4701AA0A* __this, uint64_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_mD76DB4E2C0BC4110F6110E68DA709BD4A503D2F5 (ReadOnlyCollection_1_tC00260BA5B1BEF55EBEF800DF50485F5D9806E4C* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m10AE9280CDD0885F6AE0CED9BC419A220F9EF82C (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_mFACE0C82F64A6D849DD7A5A9D94592654A6D1011 (ReadOnlyCollection_1_tC00260BA5B1BEF55EBEF800DF50485F5D9806E4C* __this, UniqueStyleString_tE980AA033ABB00413A3139B42FF22750952DAECF ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m81F9A69BFD18AC9F3559949FD82DE92A9082B650 (ReadOnlyCollection_1_tC00260BA5B1BEF55EBEF800DF50485F5D9806E4C* __this, UniqueStyleString_tE980AA033ABB00413A3139B42FF22750952DAECF ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m45F7511554AC7932A4E66143EF8772E661046099 (ReadOnlyCollection_1_tDF87C8E26187E1D6C24D2DD02E4716CC5B7ACC34* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m077B2F36B247C4636FFD0370E89515F37F912A64 (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_mDF0074DD4769F53942460C32C27BDB6A7E6E500C (ReadOnlyCollection_1_tDF87C8E26187E1D6C24D2DD02E4716CC5B7ACC34* __this, UsageHint_tFD7259AF9E91500CF1D0CE602394B40FD2397AB1 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_mD7BBE79F62B90B06912D44DAB47B960B9124DA69 (ReadOnlyCollection_1_tDF87C8E26187E1D6C24D2DD02E4716CC5B7ACC34* __this, UsageHint_tFD7259AF9E91500CF1D0CE602394B40FD2397AB1 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m531C72497E9FEB4E99E08837AF225D594D2ED741 (ReadOnlyCollection_1_tF64E6ECDE29B9EE2538F5A045045DF7774BB8466* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_mE21DFAB52F1CF90200F86CA74489FE40660D0FA5 (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_mFDCA34C8B2D2B075B2F75C43319A5FB2F06EBAB7 (ReadOnlyCollection_1_tF64E6ECDE29B9EE2538F5A045045DF7774BB8466* __this, UxmlNamespaceDefinition_t6B70CA125A4C1D5F74F1C901A6F4F72637F6621B ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m3C139BA080D9F8D44C2E3F09CDF4AF7AB91BCD06 (ReadOnlyCollection_1_tF64E6ECDE29B9EE2538F5A045045DF7774BB8466* __this, UxmlNamespaceDefinition_t6B70CA125A4C1D5F74F1C901A6F4F72637F6621B ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_mBFE65873D7F80153840E0C74D836129E3847B9A6 (ReadOnlyCollection_1_tAE114E8C18E180A65629D9DF0D8911860274551C* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m7575D658F2FFB26CF20770C4D9570925DCAE4CBC (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m78939760646E138755B3431CC00567C373C50303 (ReadOnlyCollection_1_tAE114E8C18E180A65629D9DF0D8911860274551C* __this, UxmlProperty_t98965D0AC619F23715A51F072A885C7F07F15FE4 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m7523B4A1B54F01EEC15D4503072D2D24F0941740 (ReadOnlyCollection_1_tAE114E8C18E180A65629D9DF0D8911860274551C* __this, UxmlProperty_t98965D0AC619F23715A51F072A885C7F07F15FE4 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_mAA7CC5A5A5CC07977C0D39FB6F9B5718A6CC44A7 (ReadOnlyCollection_1_tC5795E68B14E438B5B65AF3F4C3F50CA0F951647* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_mD05613BFB996238A2515ABAE9DD8DAA1490B499E (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_mE2B1A47E7F72DD933A5A1CBC95D4F517C3236FEE (ReadOnlyCollection_1_tC5795E68B14E438B5B65AF3F4C3F50CA0F951647* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m2C9AF85BBA3C92FF44F5ABAD91CE9CFF5AD52FCC (ReadOnlyCollection_1_tC5795E68B14E438B5B65AF3F4C3F50CA0F951647* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m986EBFDE8CE6355B85CD8A03AC640405D2A43CE7 (ReadOnlyCollection_1_t9E2776C66EA6797EAB405FB5507CCFDAA18084F6* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m9D0C44744D57EEB523A3A4775550761A5F80C9C3 (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m6BD386DDD80866871280629115122A6313FAE337 (ReadOnlyCollection_1_t9E2776C66EA6797EAB405FB5507CCFDAA18084F6* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m90B344A9EBAC54E2AA81B15D0FBA3498EE0603A3 (ReadOnlyCollection_1_t9E2776C66EA6797EAB405FB5507CCFDAA18084F6* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m1B55A97A91F66DF4081BC160ACBA11A20C0C3D12 (ReadOnlyCollection_1_tC097ADAD4728DA15D13F639EC263BD398D57B04F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m15FC7DD980CED28245F768674D29D0E3F992837E (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m36DC3D6E48A3DBD5B36F8782060E21142784D828 (ReadOnlyCollection_1_tC097ADAD4728DA15D13F639EC263BD398D57B04F* __this, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m2765659E739B29A777CECAA80AEDF4D3A21FE0CE (ReadOnlyCollection_1_tC097ADAD4728DA15D13F639EC263BD398D57B04F* __this, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_mBCE75651A133F9CCD9FC4C86CBDE6E6076255728 (ReadOnlyCollection_1_tA87EA4F23BAC952A78BDE9A5B94F3091DB5C7861* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m6E114ABEDEECA9C3CA16E3E503B90E12AD4EF0B7 (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_mC1DD398028830B9B33CD32417B797F7AD988C1CE (ReadOnlyCollection_1_tA87EA4F23BAC952A78BDE9A5B94F3091DB5C7861* __this, VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m1CB37BA54919F404E908CDFE7022CC6D1F0E5954 (ReadOnlyCollection_1_tA87EA4F23BAC952A78BDE9A5B94F3091DB5C7861* __this, VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_mE3C5DAF414445B20B6B036B8BFDAB1BDDDC8E206 (ReadOnlyCollection_1_tB6FD6BA75C6F479B6860FCBA235488206BF20E52* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m733A0F976869D4EB1A0B40A0CCCD60B582572C4A (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m6071D5F75047625A3D94C37160C90859A4969B24 (ReadOnlyCollection_1_tB6FD6BA75C6F479B6860FCBA235488206BF20E52* __this, X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m1A4EBD2A29E3D8135601CD299CF5B0B2595BD7E9 (ReadOnlyCollection_1_tB6FD6BA75C6F479B6860FCBA235488206BF20E52* __this, X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m32DA3B360C59EA0ACEB0CFE11E2942D2BD5B7749 (ReadOnlyCollection_1_tCE850EF6D2887B695661E22343E54F58D576C0E3* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m60A18ED6B809F36A8838776C9E2036303D89F82C (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_mADAB79033289718AA2279820CBCE19BC4CEFFC9C (ReadOnlyCollection_1_tCE850EF6D2887B695661E22343E54F58D576C0E3* __this, XREraseAnchorResult_t2B44248D283942660C5CE02ECEE6843F60055B2E ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m3283306131A18B452A59628C57FF392860005F1D (ReadOnlyCollection_1_tCE850EF6D2887B695661E22343E54F58D576C0E3* __this, XREraseAnchorResult_t2B44248D283942660C5CE02ECEE6843F60055B2E ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m21CADB99DB74429FF3CAF70BAB078191A03241E3 (ReadOnlyCollection_1_t803A81BE343B15275BCD30A219ACAC97F0B9A1C8* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_mB8637EFA6E7DC55A186C227F3D362EEF524D9FAD (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m7F9F1C288B16CFD896954561CBA914AB70CA3C42 (ReadOnlyCollection_1_t803A81BE343B15275BCD30A219ACAC97F0B9A1C8* __this, XRFeatureDescriptor_t690E672A6BBBEFBB8AF221485C1884507EAFB5B2 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m12E94AAF0808183AA148780A69482224EAE1EACF (ReadOnlyCollection_1_t803A81BE343B15275BCD30A219ACAC97F0B9A1C8* __this, XRFeatureDescriptor_t690E672A6BBBEFBB8AF221485C1884507EAFB5B2 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m0E756C8233737C98226C39BAD3A614485ECF7891 (ReadOnlyCollection_1_t90B1C0D935E236955963E2FEDC049B30EB5DFA1E* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m02EF1E7C52E7F257498AE25CB4A906EFB29DFA86 (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_mE9129466044C35992F92CCF5C5728DCEAEE825FD (ReadOnlyCollection_1_t90B1C0D935E236955963E2FEDC049B30EB5DFA1E* __this, XRFov_t51E4BB7B76304E61CF064687586D096CE585817A ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_mD77043243BC47E4A0BE97DED2733EAC403026401 (ReadOnlyCollection_1_t90B1C0D935E236955963E2FEDC049B30EB5DFA1E* __this, XRFov_t51E4BB7B76304E61CF064687586D096CE585817A ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m5B74FE4C19661ED5BF7BE1E4FA9D2BD299C927DD (ReadOnlyCollection_1_t283D5D7D9E3DE9783937ADBA3BF6BEE67BCBFDCE* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_mE5091EB4D5EC7DFEB477CDCC6E0A475DF43CCE4C (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m542B07DF3DDF2E3C5AD80A17CF9648688198D0BD (ReadOnlyCollection_1_t283D5D7D9E3DE9783937ADBA3BF6BEE67BCBFDCE* __this, XRLoadAnchorResult_t56374A5E6B313EC113CCA50D43ACFC75B66E95B5 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m28C666EB07406A9369183E50C9391C95C9F284F9 (ReadOnlyCollection_1_t283D5D7D9E3DE9783937ADBA3BF6BEE67BCBFDCE* __this, XRLoadAnchorResult_t56374A5E6B313EC113CCA50D43ACFC75B66E95B5 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m0BCE304E7E37CC4177CC1E19A982FDBB3624BB11 (ReadOnlyCollection_1_t9ED77C33BF650F562B350CE0279E194D11C3611C* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_mDEF86102A0BBAFA934465B6A13BEFCA585BA3086 (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_mE23598B242FA77FE8C32C4E003738CF735083998 (ReadOnlyCollection_1_t9ED77C33BF650F562B350CE0279E194D11C3611C* __this, XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m009EB6D087F95648DB4B1C4CA56C750BBCE6254A (ReadOnlyCollection_1_t9ED77C33BF650F562B350CE0279E194D11C3611C* __this, XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m4DC34510C1965128569E730B346F3717C0DDD487 (ReadOnlyCollection_1_t64CE92B3FF66059503B90BF1A065847EB7B4D4E1* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m6C3133FA5DFBF42DE147E8ABCB12FBAACDF49A48 (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m3F38B033A85A1348781A404A2A5725AAEBB9A31D (ReadOnlyCollection_1_t64CE92B3FF66059503B90BF1A065847EB7B4D4E1* __this, XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m3C5C29E8F20E663C99E22DCFBBE32C9963982021 (ReadOnlyCollection_1_t64CE92B3FF66059503B90BF1A065847EB7B4D4E1* __this, XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_mA6D4CD7E6EED6D81DF06E4CA2A3FAACCB4158CB8 (ReadOnlyCollection_1_t3BF272D45B9E5E8E67E09C9D4C9A00BF19EE2852* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m72E09B9C156358D3F491FD14203C869DED2917BC (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m5BBF32CB6EEA7058D840EF833F1F5CDA5154AC1A (ReadOnlyCollection_1_t3BF272D45B9E5E8E67E09C9D4C9A00BF19EE2852* __this, XRReferenceObject_tDC04E77BBDCC6428C8B852A7CF1208DD2AF9AE14 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m3476C31355B13FC61F4EDEBC1CC1267BB56EF6F6 (ReadOnlyCollection_1_t3BF272D45B9E5E8E67E09C9D4C9A00BF19EE2852* __this, XRReferenceObject_tDC04E77BBDCC6428C8B852A7CF1208DD2AF9AE14 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_mB98C38D2E69C0937FA2F0C8494D7EFDECDA1992D (ReadOnlyCollection_1_t95C4CE7A3281F650247DAD055168AC75CA2E0D94* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_mBBF52CC85D738F114987C654B0B3E2F4C1AE696A (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m332A74A4BF707ACE74A3A01578A1D5781F7A9F6C (ReadOnlyCollection_1_t95C4CE7A3281F650247DAD055168AC75CA2E0D94* __this, XRView_t70E23918C68E24DB22A8614AA8717B3BA213FAB5 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_mBBC67B329E7A47849082B0A54D1039AB99E5B231 (ReadOnlyCollection_1_t95C4CE7A3281F650247DAD055168AC75CA2E0D94* __this, XRView_t70E23918C68E24DB22A8614AA8717B3BA213FAB5 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m9AF1774FE249CFF994683344F3395D6C45BA74EB_gshared (ReadOnlyCollection_1_t06F71F2F3EBC6E0A34714E0A7EB3367B6D248263* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m6524BB7810330224C17351742769CA098CC80929_gshared (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_mCA382B62077A4FA1B0D0F387651E41770EC39690_gshared (ReadOnlyCollection_1_t06F71F2F3EBC6E0A34714E0A7EB3367B6D248263* __this, Il2CppSharedGenericObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_mFC9BAC0925D44B0206E5F9250E502C86E0FE33EC_gshared (ReadOnlyCollection_1_t06F71F2F3EBC6E0A34714E0A7EB3367B6D248263* __this, Il2CppSharedGenericObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m42EA0DCED53E60AEB0F8E87B85BAAFF7E3339250_gshared (ReadOnlyCollection_1_tD86E076A19D3DF6CFD1AC3FEE937BD0FB0B39AF7* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m0B1D25730B9DD494FCA9E772786682534DB20B70_gshared (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m5942EC87898E487139915D67666E73C2C5720BBE_gshared (ReadOnlyCollection_1_tD86E076A19D3DF6CFD1AC3FEE937BD0FB0B39AF7* __this, uint8_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m086BD8A3EC781D359798BDF4EFCB669640D8669B_gshared (ReadOnlyCollection_1_tD86E076A19D3DF6CFD1AC3FEE937BD0FB0B39AF7* __this, uint8_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_mE688C15AB77A4844B3FE1700E2713247F0B0DF9D_gshared (ReadOnlyCollection_1_tA097AD399F1ED95CBDEFC0663790A10C4A43DFB8* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_mCA01E7A251A192A7B0A1CBC8613CCCFE6CCDBDD0_gshared (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m735114B46C15E226E1ACA6FCFFCB0AB14ADBFC87_gshared (ReadOnlyCollection_1_tA097AD399F1ED95CBDEFC0663790A10C4A43DFB8* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m961F572B556854820B626EDF68D43EB20197152F_gshared (ReadOnlyCollection_1_tA097AD399F1ED95CBDEFC0663790A10C4A43DFB8* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_mA8EA6EA02972D7BF8CB6FA0098132350D435F55A_gshared (ReadOnlyCollection_1_t57A9EA1D0B6B2A5908DD58EA8C84F29F53D509A1* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m0004547519D968FF5DA50C0A87FC7BC11E04578A_gshared (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_mE1C0EA44DEB639FE3F1ED4D33CDDC26D71844898_gshared (ReadOnlyCollection_1_t57A9EA1D0B6B2A5908DD58EA8C84F29F53D509A1* __this, uint32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m1FD6AD4EBF448B0138CA00EE76420826A1285714_gshared (ReadOnlyCollection_1_t57A9EA1D0B6B2A5908DD58EA8C84F29F53D509A1* __this, uint32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m6C0A093B331DA8B9A784CF3C61AFBB1006D6BB6E (ReadOnlyCollection_1_tDA9EBC2C2934508604BBB2BA544E97C8DA1907BF* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m2B66B388A947DDA65092ACB0015716D7B55E6504 (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_mA2E681DDC1D0CB4B3A55B8895EDF2B7F073A417C (ReadOnlyCollection_1_tDA9EBC2C2934508604BBB2BA544E97C8DA1907BF* __this, float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_mDC6A3B52E8647FB457B77CF3CCF4B133C84B646B (ReadOnlyCollection_1_tDA9EBC2C2934508604BBB2BA544E97C8DA1907BF* __this, float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_mA1936FD531DD97BDB2429883FCC9C9D00CBEA932 (ReadOnlyCollection_1_t502D44622D39E2DFE6DABEFCEA766AC61E338C30* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m86717E0B268FC5F5BE5EEA037F882F913717BC36 (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m61F61AD9BAE1A26C4A745A9C53C30BD2CD4D2725 (ReadOnlyCollection_1_t502D44622D39E2DFE6DABEFCEA766AC61E338C30* __this, IdsOfInstances_t4412C0FA3A4CE4CBFCB20E15BAB081BAC990B350 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_mC70C67627A847C94D99F61E69307F6115DB32AC3 (ReadOnlyCollection_1_t502D44622D39E2DFE6DABEFCEA766AC61E338C30* __this, IdsOfInstances_t4412C0FA3A4CE4CBFCB20E15BAB081BAC990B350 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m8BBBA71F7E653FD881BAB6DBA0B7491E201F4A1A (ReadOnlyCollection_1_t6902277BA0F804A3B22466CBEF4B07E1FB12E479* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m2C114C70F2EA92C114400CDE3FC98781109BFFE2 (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_mE965B78D4C7A68816A24B72AAB973616BE9D18E0 (ReadOnlyCollection_1_t6902277BA0F804A3B22466CBEF4B07E1FB12E479* __this, ShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m9C7502E77592EEE40AFD08845CBA291A2EA1DE24 (ReadOnlyCollection_1_t6902277BA0F804A3B22466CBEF4B07E1FB12E479* __this, ShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE ___0_value, const RuntimeMethod* method) ;

IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC (int32_t ___0_argument, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA (int32_t ___0_resource, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC (RuntimeArray* __this, int32_t ___0_dimension, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_mC2DE5125863C866A36E96B0435C1CE3267D57641 (ReadOnlyCollection_1_t5439F37121A216F441FC4896558C7D05C6CB0730* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_mA52C70C8A21853D5DBB552E2C2A72BC214F2B76F (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m74F4C2A8BF2605D73D007839E2D98F4A376F2552 (ReadOnlyCollection_1_t5439F37121A216F441FC4896558C7D05C6CB0730* __this, StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_mD61A01DE3E2EA656BD6DE679CC9E4FAB59B9FBF3 (ReadOnlyCollection_1_t5439F37121A216F441FC4896558C7D05C6CB0730* __this, StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_mA820E69F0ACE5C10485BDA2D9403C9FE92A5A685 (ReadOnlyCollection_1_t23F8C5D5ADD49EC309D753255852410BFE1BB4EC* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m57C36A631CA969171961A9F5081E07EAE88F3D71 (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m7E2E6E4CDEB961B485773CFAB0D1CFB7A13ADA0D (ReadOnlyCollection_1_t23F8C5D5ADD49EC309D753255852410BFE1BB4EC* __this, StyleSelectorMatch_tA4C195A8F23EE7E672CEE7042BA64189DBC2E6DE ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_mA0A1A670468F470E5C834117D075E967979682FB (ReadOnlyCollection_1_t23F8C5D5ADD49EC309D753255852410BFE1BB4EC* __this, StyleSelectorMatch_tA4C195A8F23EE7E672CEE7042BA64189DBC2E6DE ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_mFF7E669AB72703D9E0C341B705834473C187608A (ReadOnlyCollection_1_tE86375B1668A6FBD2D1ABEFD277DA7ED73EF5088* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m389A6F55F75F8D0F1FF361984D8A460829ABE096 (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_mA1A790C06B92930F5819430B17FE2807298BBCF3 (ReadOnlyCollection_1_tE86375B1668A6FBD2D1ABEFD277DA7ED73EF5088* __this, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_mB40E1CC7BD75A6AEF6786E92AD11A2F5AF991B64 (ReadOnlyCollection_1_tE86375B1668A6FBD2D1ABEFD277DA7ED73EF5088* __this, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m496BD7BFA76410E273E090815D701C135B2E0C18 (ReadOnlyCollection_1_t4A4298CBF971053B7107BCB3172698E18C4C4C78* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_mDB14D7889E01F89EF4D73BAAE5AEC51F7B239BCC (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m5A098FDA7112021261C8C7F743127D421017FADB (ReadOnlyCollection_1_t4A4298CBF971053B7107BCB3172698E18C4C4C78* __this, StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_mEEDB8DA92C276721AE87583DC4E0564936B9E55F (ReadOnlyCollection_1_t4A4298CBF971053B7107BCB3172698E18C4C4C78* __this, StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_mD6B7461CB6FCF06FACC658DC289D497C90018333 (ReadOnlyCollection_1_tFF93E8D08323FE0D47D1EDFE961D186F7E3C9AEE* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m46E76F2FA7D7FFCCBB200D66E85823E5E3C1E831 (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m0AE0D9C4E6071DC1275906F2D88A3EF83EB221F3 (ReadOnlyCollection_1_tFF93E8D08323FE0D47D1EDFE961D186F7E3C9AEE* __this, StyleValue_t56307594EC04E04EFBCC3220595B4AAD66FF93C5 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_mCEF9826545BDA2E8E530F48F9EA451D6D2307419 (ReadOnlyCollection_1_tFF93E8D08323FE0D47D1EDFE961D186F7E3C9AEE* __this, StyleValue_t56307594EC04E04EFBCC3220595B4AAD66FF93C5 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m34F00F477064F0070BE76383370D2D841DCB7256 (ReadOnlyCollection_1_tE93D7970A5840C0077489CEA45621B02483FABC9* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m5DFF5C6A27901428D38857976FFA53E551F76AD1 (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_mD95EE3072842E6AF68C6EB74E74BED2332004F16 (ReadOnlyCollection_1_tE93D7970A5840C0077489CEA45621B02483FABC9* __this, StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m0E438DAB1C5EC5C117A792A204DB597BC63B329D (ReadOnlyCollection_1_tE93D7970A5840C0077489CEA45621B02483FABC9* __this, StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m52CA7994F4FAC8981DF7318B0E18B5484676E392 (ReadOnlyCollection_1_t2401BF20081A5300090A5FC70F287797DBFE10B0* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m069880AD95C6EBF71508C3D0683317C53113800C (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m8E805DDCC9D2CBF698432996185663AF947F2FA0 (ReadOnlyCollection_1_t2401BF20081A5300090A5FC70F287797DBFE10B0* __this, StyleValueManaged_t68DFBEC1594279E4DC56634FD5092318D1E9A5F4 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_mA017774366396F9121936E8529BA288A0E9244CE (ReadOnlyCollection_1_t2401BF20081A5300090A5FC70F287797DBFE10B0* __this, StyleValueManaged_t68DFBEC1594279E4DC56634FD5092318D1E9A5F4 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_mA070C2C4E69ECF4F1658E281C60BF698FD5A5A8F (ReadOnlyCollection_1_tBE445934E4BBFAD9104AC1AFC81C07456740D5B9* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m3C659BC7492D6D23A67860B02DE0D2BF56988CAA (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m79D6B93F48A882214613F65736C4275CCC7FC3FF (ReadOnlyCollection_1_tBE445934E4BBFAD9104AC1AFC81C07456740D5B9* __this, StyleVariable_t5D4DEC936102A13961F4F2C6214B83D6CDC56269 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m59C4EFADD346BE75CA43C56F812E67C011CF75F9 (ReadOnlyCollection_1_tBE445934E4BBFAD9104AC1AFC81C07456740D5B9* __this, StyleVariable_t5D4DEC936102A13961F4F2C6214B83D6CDC56269 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m21B7575FC88C1F0EB39B77529C38A0286A3B575F (ReadOnlyCollection_1_tB270E5CCE3D7607E7CDDBE1B835360A0E7B07DF4* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_mEECB28AFAAAC26A7C6E843A076A43DCE2F55CDCA (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m89291249B5D4B20D9F07C3B162755A25BC44C530 (ReadOnlyCollection_1_tB270E5CCE3D7607E7CDDBE1B835360A0E7B07DF4* __this, Substring_t2E16755269E6716C22074D6BC0A9099915E67849 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_mA817652F7A04A40F42DD4F4F8C12D4E9E4508B51 (ReadOnlyCollection_1_tB270E5CCE3D7607E7CDDBE1B835360A0E7B07DF4* __this, Substring_t2E16755269E6716C22074D6BC0A9099915E67849 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_mCF1102C753FDF5113EF4E5D4C25361982DAFBF85 (ReadOnlyCollection_1_t8597CBFC170B56C5585AD118A321EEE3B225D172* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m5F32A19B95F6BF4ECAABE5C8199A379F4278B3B4 (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m63C69B4D67A2426607107A20654E866917E29572 (ReadOnlyCollection_1_t8597CBFC170B56C5585AD118A321EEE3B225D172* __this, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_mE411C2C33582AA09CA7FA32BBEB6BA1CFC0A286F (ReadOnlyCollection_1_t8597CBFC170B56C5585AD118A321EEE3B225D172* __this, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m1B303B771A898F2B2B6BFC1858958F3256DD3E99 (ReadOnlyCollection_1_tFF6716AACE48FE7B167A53ED10AE04FA2A2AB83A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_mC19A002D4F9915FA70C0B6DE179B36F8B4DA9B87 (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m02DC5E9462836451750318F47E93084247533EE6 (ReadOnlyCollection_1_tFF6716AACE48FE7B167A53ED10AE04FA2A2AB83A* __this, TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m51CDE7C02C2B73BD9913E8FC0ED84A4308672A73 (ReadOnlyCollection_1_tFF6716AACE48FE7B167A53ED10AE04FA2A2AB83A* __this, TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m1FD851DFDFB329BAE117BCC71966C01C2D6AF658 (ReadOnlyCollection_1_tCC240C9BD7F4AF6686AA54B53FAD2BED7C354C7D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m582F5EE1A786B32363472D217A42D888FB6824BE (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_mDC60FC1B56E0FBE92E3C2BAAF6606D537CA78CC0 (ReadOnlyCollection_1_tCC240C9BD7F4AF6686AA54B53FAD2BED7C354C7D* __this, TrackableKey_t5E448EF061013AFD452918EC5232225B4590EB9B ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m18A37130405759393673C8FB52C5DEFDA5916EC8 (ReadOnlyCollection_1_tCC240C9BD7F4AF6686AA54B53FAD2BED7C354C7D* __this, TrackableKey_t5E448EF061013AFD452918EC5232225B4590EB9B ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m208858945002AE69A132CDB66FEABE0C0525AE60 (ReadOnlyCollection_1_t5F8B55EF85E52FBC5F41B42D70D13BC89D4C469A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m7FF4D4B7DB9C5EB381294D17EF153E57E9D90F24 (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m05093008740300A921F7BB341479D97499CF75E0 (ReadOnlyCollection_1_t5F8B55EF85E52FBC5F41B42D70D13BC89D4C469A* __this, UICharInfo_t24C2EA0F2F3A938100C271891D9DEB015ABA5FBD ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m04BB6920B51BCC3A3026DF35719210BF7C503C2C (ReadOnlyCollection_1_t5F8B55EF85E52FBC5F41B42D70D13BC89D4C469A* __this, UICharInfo_t24C2EA0F2F3A938100C271891D9DEB015ABA5FBD ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_mF4F25BF826DF061ED78B82A6595649A22FE54A6A (ReadOnlyCollection_1_tAC9F0ECFFCE3DC3797BE610439BF76ACB015D44E* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m03C42A942F85B4EC168F87B45CA0C1E0B8B991CC (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_mC6D50D96188C20173348A47F5374EBB4820BF7FF (ReadOnlyCollection_1_tAC9F0ECFFCE3DC3797BE610439BF76ACB015D44E* __this, UILineInfo_tC6FF4F85BD2316FADA2148A1789B3FF0B05A6CAC ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m545FFA46CA3E7EED5B63255AD7A4E091B9ABBF0F (ReadOnlyCollection_1_tAC9F0ECFFCE3DC3797BE610439BF76ACB015D44E* __this, UILineInfo_tC6FF4F85BD2316FADA2148A1789B3FF0B05A6CAC ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m1D8F54776E65523E2DFD134DD2FBCB07804B23B5 (ReadOnlyCollection_1_t0279BBDF584EF96177DF75FA7A456E4629B2B09E* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m88E1CA111AE23BF4399AA4FFE4FE8867FE94C854 (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_mAF5A0A69B2F9B8BF257C52A68C9BAA8A29F6CF17 (ReadOnlyCollection_1_t0279BBDF584EF96177DF75FA7A456E4629B2B09E* __this, UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m129FB3AE63A51E593B4BAD57B4A2A9E3104812AC (ReadOnlyCollection_1_t0279BBDF584EF96177DF75FA7A456E4629B2B09E* __this, UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_mDF41F3A59AEF0E185153710405DC66DBA597FC88 (ReadOnlyCollection_1_t068BDAE7D562067D24182EABF4C4C7AA8C7C5812* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m872007057C4E5FFCCB51AE633C44608C4A23189C (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m3F49FD6FEF35A79AA32F604B1CBF711080A80735 (ReadOnlyCollection_1_t068BDAE7D562067D24182EABF4C4C7AA8C7C5812* __this, uint16_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_mDF7DBB43B47AD1AA7E526210C9C76BBA642153DF (ReadOnlyCollection_1_t068BDAE7D562067D24182EABF4C4C7AA8C7C5812* __this, uint16_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_mE5F79F4C569C903ACCF6EA6A986411A6DF3A9CF0 (ReadOnlyCollection_1_tF3F201D52E933A4489A4C06E8B1203099F42FB01* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m1D7518BCBEC6037EB9FF7B400662C83A568F7B26 (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m419531A31381A970A871D90935DF22B6CF3EBFBB (ReadOnlyCollection_1_tF3F201D52E933A4489A4C06E8B1203099F42FB01* __this, uint32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m9A6405BAF7999DFD7A0398A1E931E107FEA5A1A5 (ReadOnlyCollection_1_tF3F201D52E933A4489A4C06E8B1203099F42FB01* __this, uint32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m7CADBE80BAAD2AAA5349395B3E442605E0BFEB95 (ReadOnlyCollection_1_tABD6F7BDD581540C8981BBE5012B221D4701AA0A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_mE726091D2574AA01253129E1832666343C088AA1 (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m785F371F039A4AA57D08627D5B0808885CDEE0AA (ReadOnlyCollection_1_tABD6F7BDD581540C8981BBE5012B221D4701AA0A* __this, uint64_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_mFEF36A399F0FC585064EDABD17E3B3C465AC4F89 (ReadOnlyCollection_1_tABD6F7BDD581540C8981BBE5012B221D4701AA0A* __this, uint64_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_mD76DB4E2C0BC4110F6110E68DA709BD4A503D2F5 (ReadOnlyCollection_1_tC00260BA5B1BEF55EBEF800DF50485F5D9806E4C* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m10AE9280CDD0885F6AE0CED9BC419A220F9EF82C (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_mFACE0C82F64A6D849DD7A5A9D94592654A6D1011 (ReadOnlyCollection_1_tC00260BA5B1BEF55EBEF800DF50485F5D9806E4C* __this, UniqueStyleString_tE980AA033ABB00413A3139B42FF22750952DAECF ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m81F9A69BFD18AC9F3559949FD82DE92A9082B650 (ReadOnlyCollection_1_tC00260BA5B1BEF55EBEF800DF50485F5D9806E4C* __this, UniqueStyleString_tE980AA033ABB00413A3139B42FF22750952DAECF ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m45F7511554AC7932A4E66143EF8772E661046099 (ReadOnlyCollection_1_tDF87C8E26187E1D6C24D2DD02E4716CC5B7ACC34* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m077B2F36B247C4636FFD0370E89515F37F912A64 (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_mDF0074DD4769F53942460C32C27BDB6A7E6E500C (ReadOnlyCollection_1_tDF87C8E26187E1D6C24D2DD02E4716CC5B7ACC34* __this, UsageHint_tFD7259AF9E91500CF1D0CE602394B40FD2397AB1 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_mD7BBE79F62B90B06912D44DAB47B960B9124DA69 (ReadOnlyCollection_1_tDF87C8E26187E1D6C24D2DD02E4716CC5B7ACC34* __this, UsageHint_tFD7259AF9E91500CF1D0CE602394B40FD2397AB1 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m531C72497E9FEB4E99E08837AF225D594D2ED741 (ReadOnlyCollection_1_tF64E6ECDE29B9EE2538F5A045045DF7774BB8466* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_mE21DFAB52F1CF90200F86CA74489FE40660D0FA5 (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_mFDCA34C8B2D2B075B2F75C43319A5FB2F06EBAB7 (ReadOnlyCollection_1_tF64E6ECDE29B9EE2538F5A045045DF7774BB8466* __this, UxmlNamespaceDefinition_t6B70CA125A4C1D5F74F1C901A6F4F72637F6621B ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m3C139BA080D9F8D44C2E3F09CDF4AF7AB91BCD06 (ReadOnlyCollection_1_tF64E6ECDE29B9EE2538F5A045045DF7774BB8466* __this, UxmlNamespaceDefinition_t6B70CA125A4C1D5F74F1C901A6F4F72637F6621B ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_mBFE65873D7F80153840E0C74D836129E3847B9A6 (ReadOnlyCollection_1_tAE114E8C18E180A65629D9DF0D8911860274551C* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m7575D658F2FFB26CF20770C4D9570925DCAE4CBC (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m78939760646E138755B3431CC00567C373C50303 (ReadOnlyCollection_1_tAE114E8C18E180A65629D9DF0D8911860274551C* __this, UxmlProperty_t98965D0AC619F23715A51F072A885C7F07F15FE4 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m7523B4A1B54F01EEC15D4503072D2D24F0941740 (ReadOnlyCollection_1_tAE114E8C18E180A65629D9DF0D8911860274551C* __this, UxmlProperty_t98965D0AC619F23715A51F072A885C7F07F15FE4 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_mAA7CC5A5A5CC07977C0D39FB6F9B5718A6CC44A7 (ReadOnlyCollection_1_tC5795E68B14E438B5B65AF3F4C3F50CA0F951647* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_mD05613BFB996238A2515ABAE9DD8DAA1490B499E (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_mE2B1A47E7F72DD933A5A1CBC95D4F517C3236FEE (ReadOnlyCollection_1_tC5795E68B14E438B5B65AF3F4C3F50CA0F951647* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m2C9AF85BBA3C92FF44F5ABAD91CE9CFF5AD52FCC (ReadOnlyCollection_1_tC5795E68B14E438B5B65AF3F4C3F50CA0F951647* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m986EBFDE8CE6355B85CD8A03AC640405D2A43CE7 (ReadOnlyCollection_1_t9E2776C66EA6797EAB405FB5507CCFDAA18084F6* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m9D0C44744D57EEB523A3A4775550761A5F80C9C3 (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m6BD386DDD80866871280629115122A6313FAE337 (ReadOnlyCollection_1_t9E2776C66EA6797EAB405FB5507CCFDAA18084F6* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m90B344A9EBAC54E2AA81B15D0FBA3498EE0603A3 (ReadOnlyCollection_1_t9E2776C66EA6797EAB405FB5507CCFDAA18084F6* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m1B55A97A91F66DF4081BC160ACBA11A20C0C3D12 (ReadOnlyCollection_1_tC097ADAD4728DA15D13F639EC263BD398D57B04F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m15FC7DD980CED28245F768674D29D0E3F992837E (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m36DC3D6E48A3DBD5B36F8782060E21142784D828 (ReadOnlyCollection_1_tC097ADAD4728DA15D13F639EC263BD398D57B04F* __this, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m2765659E739B29A777CECAA80AEDF4D3A21FE0CE (ReadOnlyCollection_1_tC097ADAD4728DA15D13F639EC263BD398D57B04F* __this, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_mBCE75651A133F9CCD9FC4C86CBDE6E6076255728 (ReadOnlyCollection_1_tA87EA4F23BAC952A78BDE9A5B94F3091DB5C7861* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m6E114ABEDEECA9C3CA16E3E503B90E12AD4EF0B7 (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_mC1DD398028830B9B33CD32417B797F7AD988C1CE (ReadOnlyCollection_1_tA87EA4F23BAC952A78BDE9A5B94F3091DB5C7861* __this, VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m1CB37BA54919F404E908CDFE7022CC6D1F0E5954 (ReadOnlyCollection_1_tA87EA4F23BAC952A78BDE9A5B94F3091DB5C7861* __this, VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_mE3C5DAF414445B20B6B036B8BFDAB1BDDDC8E206 (ReadOnlyCollection_1_tB6FD6BA75C6F479B6860FCBA235488206BF20E52* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m733A0F976869D4EB1A0B40A0CCCD60B582572C4A (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m6071D5F75047625A3D94C37160C90859A4969B24 (ReadOnlyCollection_1_tB6FD6BA75C6F479B6860FCBA235488206BF20E52* __this, X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m1A4EBD2A29E3D8135601CD299CF5B0B2595BD7E9 (ReadOnlyCollection_1_tB6FD6BA75C6F479B6860FCBA235488206BF20E52* __this, X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m32DA3B360C59EA0ACEB0CFE11E2942D2BD5B7749 (ReadOnlyCollection_1_tCE850EF6D2887B695661E22343E54F58D576C0E3* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m60A18ED6B809F36A8838776C9E2036303D89F82C (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_mADAB79033289718AA2279820CBCE19BC4CEFFC9C (ReadOnlyCollection_1_tCE850EF6D2887B695661E22343E54F58D576C0E3* __this, XREraseAnchorResult_t2B44248D283942660C5CE02ECEE6843F60055B2E ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m3283306131A18B452A59628C57FF392860005F1D (ReadOnlyCollection_1_tCE850EF6D2887B695661E22343E54F58D576C0E3* __this, XREraseAnchorResult_t2B44248D283942660C5CE02ECEE6843F60055B2E ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m21CADB99DB74429FF3CAF70BAB078191A03241E3 (ReadOnlyCollection_1_t803A81BE343B15275BCD30A219ACAC97F0B9A1C8* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_mB8637EFA6E7DC55A186C227F3D362EEF524D9FAD (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m7F9F1C288B16CFD896954561CBA914AB70CA3C42 (ReadOnlyCollection_1_t803A81BE343B15275BCD30A219ACAC97F0B9A1C8* __this, XRFeatureDescriptor_t690E672A6BBBEFBB8AF221485C1884507EAFB5B2 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m12E94AAF0808183AA148780A69482224EAE1EACF (ReadOnlyCollection_1_t803A81BE343B15275BCD30A219ACAC97F0B9A1C8* __this, XRFeatureDescriptor_t690E672A6BBBEFBB8AF221485C1884507EAFB5B2 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m0E756C8233737C98226C39BAD3A614485ECF7891 (ReadOnlyCollection_1_t90B1C0D935E236955963E2FEDC049B30EB5DFA1E* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m02EF1E7C52E7F257498AE25CB4A906EFB29DFA86 (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_mE9129466044C35992F92CCF5C5728DCEAEE825FD (ReadOnlyCollection_1_t90B1C0D935E236955963E2FEDC049B30EB5DFA1E* __this, XRFov_t51E4BB7B76304E61CF064687586D096CE585817A ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_mD77043243BC47E4A0BE97DED2733EAC403026401 (ReadOnlyCollection_1_t90B1C0D935E236955963E2FEDC049B30EB5DFA1E* __this, XRFov_t51E4BB7B76304E61CF064687586D096CE585817A ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m5B74FE4C19661ED5BF7BE1E4FA9D2BD299C927DD (ReadOnlyCollection_1_t283D5D7D9E3DE9783937ADBA3BF6BEE67BCBFDCE* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_mE5091EB4D5EC7DFEB477CDCC6E0A475DF43CCE4C (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m542B07DF3DDF2E3C5AD80A17CF9648688198D0BD (ReadOnlyCollection_1_t283D5D7D9E3DE9783937ADBA3BF6BEE67BCBFDCE* __this, XRLoadAnchorResult_t56374A5E6B313EC113CCA50D43ACFC75B66E95B5 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m28C666EB07406A9369183E50C9391C95C9F284F9 (ReadOnlyCollection_1_t283D5D7D9E3DE9783937ADBA3BF6BEE67BCBFDCE* __this, XRLoadAnchorResult_t56374A5E6B313EC113CCA50D43ACFC75B66E95B5 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m0BCE304E7E37CC4177CC1E19A982FDBB3624BB11 (ReadOnlyCollection_1_t9ED77C33BF650F562B350CE0279E194D11C3611C* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_mDEF86102A0BBAFA934465B6A13BEFCA585BA3086 (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_mE23598B242FA77FE8C32C4E003738CF735083998 (ReadOnlyCollection_1_t9ED77C33BF650F562B350CE0279E194D11C3611C* __this, XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m009EB6D087F95648DB4B1C4CA56C750BBCE6254A (ReadOnlyCollection_1_t9ED77C33BF650F562B350CE0279E194D11C3611C* __this, XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m4DC34510C1965128569E730B346F3717C0DDD487 (ReadOnlyCollection_1_t64CE92B3FF66059503B90BF1A065847EB7B4D4E1* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m6C3133FA5DFBF42DE147E8ABCB12FBAACDF49A48 (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m3F38B033A85A1348781A404A2A5725AAEBB9A31D (ReadOnlyCollection_1_t64CE92B3FF66059503B90BF1A065847EB7B4D4E1* __this, XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m3C5C29E8F20E663C99E22DCFBBE32C9963982021 (ReadOnlyCollection_1_t64CE92B3FF66059503B90BF1A065847EB7B4D4E1* __this, XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_mA6D4CD7E6EED6D81DF06E4CA2A3FAACCB4158CB8 (ReadOnlyCollection_1_t3BF272D45B9E5E8E67E09C9D4C9A00BF19EE2852* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m72E09B9C156358D3F491FD14203C869DED2917BC (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m5BBF32CB6EEA7058D840EF833F1F5CDA5154AC1A (ReadOnlyCollection_1_t3BF272D45B9E5E8E67E09C9D4C9A00BF19EE2852* __this, XRReferenceObject_tDC04E77BBDCC6428C8B852A7CF1208DD2AF9AE14 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m3476C31355B13FC61F4EDEBC1CC1267BB56EF6F6 (ReadOnlyCollection_1_t3BF272D45B9E5E8E67E09C9D4C9A00BF19EE2852* __this, XRReferenceObject_tDC04E77BBDCC6428C8B852A7CF1208DD2AF9AE14 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_mB98C38D2E69C0937FA2F0C8494D7EFDECDA1992D (ReadOnlyCollection_1_t95C4CE7A3281F650247DAD055168AC75CA2E0D94* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_mBBF52CC85D738F114987C654B0B3E2F4C1AE696A (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m332A74A4BF707ACE74A3A01578A1D5781F7A9F6C (ReadOnlyCollection_1_t95C4CE7A3281F650247DAD055168AC75CA2E0D94* __this, XRView_t70E23918C68E24DB22A8614AA8717B3BA213FAB5 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_mBBC67B329E7A47849082B0A54D1039AB99E5B231 (ReadOnlyCollection_1_t95C4CE7A3281F650247DAD055168AC75CA2E0D94* __this, XRView_t70E23918C68E24DB22A8614AA8717B3BA213FAB5 ___0_value, const RuntimeMethod* method) ;
inline int32_t ReadOnlyCollection_1_get_Count_m9AF1774FE249CFF994683344F3395D6C45BA74EB (ReadOnlyCollection_1_t06F71F2F3EBC6E0A34714E0A7EB3367B6D248263* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ReadOnlyCollection_1_t06F71F2F3EBC6E0A34714E0A7EB3367B6D248263*, const RuntimeMethod*))ReadOnlyCollection_1_get_Count_m9AF1774FE249CFF994683344F3395D6C45BA74EB_gshared)(__this, method);
}
inline bool ReadOnlyCollection_1_IsCompatibleObject_m6524BB7810330224C17351742769CA098CC80929 (RuntimeObject* ___0_value, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))ReadOnlyCollection_1_IsCompatibleObject_m6524BB7810330224C17351742769CA098CC80929_gshared)(___0_value, method);
}
inline bool ReadOnlyCollection_1_Contains_mCA382B62077A4FA1B0D0F387651E41770EC39690 (ReadOnlyCollection_1_t06F71F2F3EBC6E0A34714E0A7EB3367B6D248263* __this, Il2CppSharedGenericObject* ___0_value, const RuntimeMethod* method)
{
	return ((  bool (*) (ReadOnlyCollection_1_t06F71F2F3EBC6E0A34714E0A7EB3367B6D248263*, Il2CppSharedGenericObject*, const RuntimeMethod*))ReadOnlyCollection_1_Contains_mCA382B62077A4FA1B0D0F387651E41770EC39690_gshared)(__this, ___0_value, method);
}
inline int32_t ReadOnlyCollection_1_IndexOf_mFC9BAC0925D44B0206E5F9250E502C86E0FE33EC (ReadOnlyCollection_1_t06F71F2F3EBC6E0A34714E0A7EB3367B6D248263* __this, Il2CppSharedGenericObject* ___0_value, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ReadOnlyCollection_1_t06F71F2F3EBC6E0A34714E0A7EB3367B6D248263*, Il2CppSharedGenericObject*, const RuntimeMethod*))ReadOnlyCollection_1_IndexOf_mFC9BAC0925D44B0206E5F9250E502C86E0FE33EC_gshared)(__this, ___0_value, method);
}
inline int32_t ReadOnlyCollection_1_get_Count_m42EA0DCED53E60AEB0F8E87B85BAAFF7E3339250 (ReadOnlyCollection_1_tD86E076A19D3DF6CFD1AC3FEE937BD0FB0B39AF7* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ReadOnlyCollection_1_tD86E076A19D3DF6CFD1AC3FEE937BD0FB0B39AF7*, const RuntimeMethod*))ReadOnlyCollection_1_get_Count_m42EA0DCED53E60AEB0F8E87B85BAAFF7E3339250_gshared)(__this, method);
}
inline bool ReadOnlyCollection_1_IsCompatibleObject_m0B1D25730B9DD494FCA9E772786682534DB20B70 (RuntimeObject* ___0_value, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))ReadOnlyCollection_1_IsCompatibleObject_m0B1D25730B9DD494FCA9E772786682534DB20B70_gshared)(___0_value, method);
}
inline bool ReadOnlyCollection_1_Contains_m5942EC87898E487139915D67666E73C2C5720BBE (ReadOnlyCollection_1_tD86E076A19D3DF6CFD1AC3FEE937BD0FB0B39AF7* __this, uint8_t ___0_value, const RuntimeMethod* method)
{
	return ((  bool (*) (ReadOnlyCollection_1_tD86E076A19D3DF6CFD1AC3FEE937BD0FB0B39AF7*, uint8_t, const RuntimeMethod*))ReadOnlyCollection_1_Contains_m5942EC87898E487139915D67666E73C2C5720BBE_gshared)(__this, ___0_value, method);
}
inline int32_t ReadOnlyCollection_1_IndexOf_m086BD8A3EC781D359798BDF4EFCB669640D8669B (ReadOnlyCollection_1_tD86E076A19D3DF6CFD1AC3FEE937BD0FB0B39AF7* __this, uint8_t ___0_value, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ReadOnlyCollection_1_tD86E076A19D3DF6CFD1AC3FEE937BD0FB0B39AF7*, uint8_t, const RuntimeMethod*))ReadOnlyCollection_1_IndexOf_m086BD8A3EC781D359798BDF4EFCB669640D8669B_gshared)(__this, ___0_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowNotSupportedException_mB51B0F3A42F31B455852E713F424D47333326023 (int32_t ___0_resource, const RuntimeMethod* method) ;
inline int32_t ReadOnlyCollection_1_get_Count_mE688C15AB77A4844B3FE1700E2713247F0B0DF9D (ReadOnlyCollection_1_tA097AD399F1ED95CBDEFC0663790A10C4A43DFB8* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ReadOnlyCollection_1_tA097AD399F1ED95CBDEFC0663790A10C4A43DFB8*, const RuntimeMethod*))ReadOnlyCollection_1_get_Count_mE688C15AB77A4844B3FE1700E2713247F0B0DF9D_gshared)(__this, method);
}
inline bool ReadOnlyCollection_1_IsCompatibleObject_mCA01E7A251A192A7B0A1CBC8613CCCFE6CCDBDD0 (RuntimeObject* ___0_value, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))ReadOnlyCollection_1_IsCompatibleObject_mCA01E7A251A192A7B0A1CBC8613CCCFE6CCDBDD0_gshared)(___0_value, method);
}
inline bool ReadOnlyCollection_1_Contains_m735114B46C15E226E1ACA6FCFFCB0AB14ADBFC87 (ReadOnlyCollection_1_tA097AD399F1ED95CBDEFC0663790A10C4A43DFB8* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	return ((  bool (*) (ReadOnlyCollection_1_tA097AD399F1ED95CBDEFC0663790A10C4A43DFB8*, int32_t, const RuntimeMethod*))ReadOnlyCollection_1_Contains_m735114B46C15E226E1ACA6FCFFCB0AB14ADBFC87_gshared)(__this, ___0_value, method);
}
inline int32_t ReadOnlyCollection_1_IndexOf_m961F572B556854820B626EDF68D43EB20197152F (ReadOnlyCollection_1_tA097AD399F1ED95CBDEFC0663790A10C4A43DFB8* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ReadOnlyCollection_1_tA097AD399F1ED95CBDEFC0663790A10C4A43DFB8*, int32_t, const RuntimeMethod*))ReadOnlyCollection_1_IndexOf_m961F572B556854820B626EDF68D43EB20197152F_gshared)(__this, ___0_value, method);
}
inline int32_t ReadOnlyCollection_1_get_Count_mA8EA6EA02972D7BF8CB6FA0098132350D435F55A (ReadOnlyCollection_1_t57A9EA1D0B6B2A5908DD58EA8C84F29F53D509A1* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ReadOnlyCollection_1_t57A9EA1D0B6B2A5908DD58EA8C84F29F53D509A1*, const RuntimeMethod*))ReadOnlyCollection_1_get_Count_mA8EA6EA02972D7BF8CB6FA0098132350D435F55A_gshared)(__this, method);
}
inline bool ReadOnlyCollection_1_IsCompatibleObject_m0004547519D968FF5DA50C0A87FC7BC11E04578A (RuntimeObject* ___0_value, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))ReadOnlyCollection_1_IsCompatibleObject_m0004547519D968FF5DA50C0A87FC7BC11E04578A_gshared)(___0_value, method);
}
inline bool ReadOnlyCollection_1_Contains_mE1C0EA44DEB639FE3F1ED4D33CDDC26D71844898 (ReadOnlyCollection_1_t57A9EA1D0B6B2A5908DD58EA8C84F29F53D509A1* __this, uint32_t ___0_value, const RuntimeMethod* method)
{
	return ((  bool (*) (ReadOnlyCollection_1_t57A9EA1D0B6B2A5908DD58EA8C84F29F53D509A1*, uint32_t, const RuntimeMethod*))ReadOnlyCollection_1_Contains_mE1C0EA44DEB639FE3F1ED4D33CDDC26D71844898_gshared)(__this, ___0_value, method);
}
inline int32_t ReadOnlyCollection_1_IndexOf_m1FD6AD4EBF448B0138CA00EE76420826A1285714 (ReadOnlyCollection_1_t57A9EA1D0B6B2A5908DD58EA8C84F29F53D509A1* __this, uint32_t ___0_value, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ReadOnlyCollection_1_t57A9EA1D0B6B2A5908DD58EA8C84F29F53D509A1*, uint32_t, const RuntimeMethod*))ReadOnlyCollection_1_IndexOf_m1FD6AD4EBF448B0138CA00EE76420826A1285714_gshared)(__this, ___0_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m6C0A093B331DA8B9A784CF3C61AFBB1006D6BB6E (ReadOnlyCollection_1_tDA9EBC2C2934508604BBB2BA544E97C8DA1907BF* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m2B66B388A947DDA65092ACB0015716D7B55E6504 (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_mA2E681DDC1D0CB4B3A55B8895EDF2B7F073A417C (ReadOnlyCollection_1_tDA9EBC2C2934508604BBB2BA544E97C8DA1907BF* __this, float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_mDC6A3B52E8647FB457B77CF3CCF4B133C84B646B (ReadOnlyCollection_1_tDA9EBC2C2934508604BBB2BA544E97C8DA1907BF* __this, float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_mA1936FD531DD97BDB2429883FCC9C9D00CBEA932 (ReadOnlyCollection_1_t502D44622D39E2DFE6DABEFCEA766AC61E338C30* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m86717E0B268FC5F5BE5EEA037F882F913717BC36 (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m61F61AD9BAE1A26C4A745A9C53C30BD2CD4D2725 (ReadOnlyCollection_1_t502D44622D39E2DFE6DABEFCEA766AC61E338C30* __this, IdsOfInstances_t4412C0FA3A4CE4CBFCB20E15BAB081BAC990B350 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_mC70C67627A847C94D99F61E69307F6115DB32AC3 (ReadOnlyCollection_1_t502D44622D39E2DFE6DABEFCEA766AC61E338C30* __this, IdsOfInstances_t4412C0FA3A4CE4CBFCB20E15BAB081BAC990B350 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m8BBBA71F7E653FD881BAB6DBA0B7491E201F4A1A (ReadOnlyCollection_1_t6902277BA0F804A3B22466CBEF4B07E1FB12E479* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m2C114C70F2EA92C114400CDE3FC98781109BFFE2 (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_mE965B78D4C7A68816A24B72AAB973616BE9D18E0 (ReadOnlyCollection_1_t6902277BA0F804A3B22466CBEF4B07E1FB12E479* __this, ShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m9C7502E77592EEE40AFD08845CBA291A2EA1DE24 (ReadOnlyCollection_1_t6902277BA0F804A3B22466CBEF4B07E1FB12E479* __this, ShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE ___0_value, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 10449
// Method Definition Index: 10450
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_mC2DE5125863C866A36E96B0435C1CE3267D57641 (ReadOnlyCollection_1_t5439F37121A216F441FC4896558C7D05C6CB0730* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0);
		return L_1;
	}
}
// Method Definition Index: 10451
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2 ReadOnlyCollection_1_get_Item_m44AC05E1894566BC894B7A5493A1F39396DD34CB (ReadOnlyCollection_1_t5439F37121A216F441FC4896558C7D05C6CB0730* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2 L_2;
		L_2 = InterfaceFuncInvoker1< StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10452
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m74F4C2A8BF2605D73D007839E2D98F4A376F2552 (ReadOnlyCollection_1_t5439F37121A216F441FC4896558C7D05C6CB0730* __this, StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2 ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2 L_1 = ___0_value;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2 >::Invoke(4, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10453
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_CopyTo_m84C92D9ACA549B710A595A754DE797F8BE1B6660 (ReadOnlyCollection_1_t5439F37121A216F441FC4896558C7D05C6CB0730* __this, StylePropertyValueU5BU5D_t4DE6509822A9A487529DC8DC8C08CB8822CE8688* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		StylePropertyValueU5BU5D_t4DE6509822A9A487529DC8DC8C08CB8822CE8688* L_1 = ___0_array;
		int32_t L_2 = ___1_index;
		NullCheck(L_0);
		InterfaceActionInvoker2< StylePropertyValueU5BU5D_t4DE6509822A9A487529DC8DC8C08CB8822CE8688*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1, L_2);
		return;
	}
}
// Method Definition Index: 10454
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_GetEnumerator_m9CE1188F1E7F2434A36C26423AF6F08B73F2509B (ReadOnlyCollection_1_t5439F37121A216F441FC4896558C7D05C6CB0730* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 7), L_0);
		return L_1;
	}
}
// Method Definition Index: 10455
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_mD61A01DE3E2EA656BD6DE679CC9E4FAB59B9FBF3 (ReadOnlyCollection_1_t5439F37121A216F441FC4896558C7D05C6CB0730* __this, StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2 ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2 L_1 = ___0_value;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2 >::Invoke(2, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10456
// Method Definition Index: 10457
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2 ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_mE5CAAF24BBA620D318E7A3723C3D8F20EC24E893 (ReadOnlyCollection_1_t5439F37121A216F441FC4896558C7D05C6CB0730* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2 L_2;
		L_2 = InterfaceFuncInvoker1< StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10458
// Method Definition Index: 10459
// Method Definition Index: 10460
// Method Definition Index: 10461
// Method Definition Index: 10462
// Method Definition Index: 10463
// Method Definition Index: 10464
// Method Definition Index: 10465
// Method Definition Index: 10466
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m21CD7A8FD7C4F60B119D724CCB8B342311F2CCF0 (ReadOnlyCollection_1_t5439F37121A216F441FC4896558C7D05C6CB0730* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	StylePropertyValueU5BU5D_t4DE6509822A9A487529DC8DC8C08CB8822CE8688* V_0 = NULL;
	Type_t* V_1 = NULL;
	Type_t* V_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = il2cpp_codegen_array_get_rank(L_1);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0030:
	{
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = il2cpp_codegen_array_get_length(L_6);
		int32_t L_8 = ___1_index;
		int32_t L_9;
		L_9 = ReadOnlyCollection_1_get_Count_mC2DE5125863C866A36E96B0435C1CE3267D57641(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, L_8))) >= ((int32_t)L_9)))
		{
			goto IL_0046;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(5, NULL);
	}

IL_0046:
	{
		RuntimeArray* L_10 = ___0_array;
		V_0 = ((StylePropertyValueU5BU5D_t4DE6509822A9A487529DC8DC8C08CB8822CE8688*)IsInstSealed((RuntimeObject*)L_10, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)));
		StylePropertyValueU5BU5D_t4DE6509822A9A487529DC8DC8C08CB8822CE8688* L_11 = V_0;
		if (!L_11)
		{
			goto IL_005e;
		}
	}
	{
		RuntimeObject* L_12 = __this->___list;
		StylePropertyValueU5BU5D_t4DE6509822A9A487529DC8DC8C08CB8822CE8688* L_13 = V_0;
		int32_t L_14 = ___1_index;
		NullCheck(L_12);
		InterfaceActionInvoker2< StylePropertyValueU5BU5D_t4DE6509822A9A487529DC8DC8C08CB8822CE8688*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_12, L_13, L_14);
		return;
	}

IL_005e:
	{
		RuntimeArray* L_15 = ___0_array;
		NullCheck(L_15);
		Type_t* L_16;
		L_16 = il2cpp_codegen_object_get_type(L_15);
		NullCheck(L_16);
		Type_t* L_17;
		L_17 = VirtualFuncInvoker0< Type_t* >::Invoke(46, L_16);
		V_1 = L_17;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 12)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		V_2 = L_19;
		Type_t* L_20 = V_1;
		Type_t* L_21 = V_2;
		NullCheck(L_20);
		bool L_22;
		L_22 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_20, L_21);
		if (L_22)
		{
			goto IL_008c;
		}
	}
	{
		Type_t* L_23 = V_2;
		Type_t* L_24 = V_1;
		NullCheck(L_23);
		bool L_25;
		L_25 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_23, L_24);
		if (L_25)
		{
			goto IL_008c;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_008c:
	{
		RuntimeArray* L_26 = ___0_array;
		V_3 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_26, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = V_3;
		if (L_27)
		{
			goto IL_009b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_009b:
	{
		RuntimeObject* L_28 = __this->___list;
		NullCheck(L_28);
		int32_t L_29;
		L_29 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_28);
		V_4 = L_29;
	}
	try
	{
		{
			V_5 = 0;
			goto IL_00cd_1;
		}

IL_00ad_1:
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_30 = V_3;
			int32_t L_31 = ___1_index;
			int32_t L_32 = L_31;
			___1_index = ((int32_t)il2cpp_codegen_add(L_32, 1));
			RuntimeObject* L_33 = __this->___list;
			int32_t L_34 = V_5;
			NullCheck(L_33);
			StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2 L_35;
			L_35 = InterfaceFuncInvoker1< StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_33, L_34);
			StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2 L_36 = L_35;
			RuntimeObject* L_37 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_36);
			NullCheck(L_30);
			ArrayElementTypeCheck (L_30, L_37);
			(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (RuntimeObject*)L_37);
			int32_t L_38 = V_5;
			V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
		}

IL_00cd_1:
		{
			int32_t L_39 = V_5;
			int32_t L_40 = V_4;
			if ((((int32_t)L_39) < ((int32_t)L_40)))
			{
				goto IL_00ad_1;
			}
		}
		{
			goto IL_00dd;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00d5;
		}
		throw e;
	}

CATCH_00d5:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_41 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_00dd;
	}

IL_00dd:
	{
		return;
	}
}
// Method Definition Index: 10467
// Method Definition Index: 10468
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_System_Collections_IList_get_Item_mD20FD7E9AF72B5AF057137D1ECD7FA1F122F00FC (ReadOnlyCollection_1_t5439F37121A216F441FC4896558C7D05C6CB0730* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2 L_2;
		L_2 = InterfaceFuncInvoker1< StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2 L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_3);
		return L_4;
	}
}
// Method Definition Index: 10469
// Method Definition Index: 10470
// Method Definition Index: 10471
// Method Definition Index: 10472
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_mA52C70C8A21853D5DBB552E2C2A72BC214F2B76F (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2));
		StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2 L_2 = V_0;
		return false;
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
// Method Definition Index: 10473
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_System_Collections_IList_Contains_m09107FBFCD7B8808AF7E7FE0342C9E6AB3AC2E2B (ReadOnlyCollection_1_t5439F37121A216F441FC4896558C7D05C6CB0730* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_mA52C70C8A21853D5DBB552E2C2A72BC214F2B76F(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		bool L_3;
		L_3 = ReadOnlyCollection_1_Contains_m74F4C2A8BF2605D73D007839E2D98F4A376F2552(__this, ((*(StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// Method Definition Index: 10474
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_System_Collections_IList_IndexOf_mB44CFC2E537563A217C388C43388B5963E50D7E2 (ReadOnlyCollection_1_t5439F37121A216F441FC4896558C7D05C6CB0730* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_mA52C70C8A21853D5DBB552E2C2A72BC214F2B76F(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		int32_t L_3;
		L_3 = ReadOnlyCollection_1_IndexOf_mD61A01DE3E2EA656BD6DE679CC9E4FAB59B9FBF3(__this, ((*(StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15));
		return L_3;
	}

IL_0015:
	{
		return (-1);
	}
}
// Method Definition Index: 10475
// Method Definition Index: 10476
// Method Definition Index: 10477
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 10449
// Method Definition Index: 10450
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_mA820E69F0ACE5C10485BDA2D9403C9FE92A5A685 (ReadOnlyCollection_1_t23F8C5D5ADD49EC309D753255852410BFE1BB4EC* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0);
		return L_1;
	}
}
// Method Definition Index: 10451
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleSelectorMatch_tA4C195A8F23EE7E672CEE7042BA64189DBC2E6DE ReadOnlyCollection_1_get_Item_m99CCD8D7E1569C25EFE441512BE16EB2EFEDD84D (ReadOnlyCollection_1_t23F8C5D5ADD49EC309D753255852410BFE1BB4EC* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		StyleSelectorMatch_tA4C195A8F23EE7E672CEE7042BA64189DBC2E6DE L_2;
		L_2 = InterfaceFuncInvoker1< StyleSelectorMatch_tA4C195A8F23EE7E672CEE7042BA64189DBC2E6DE, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10452
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m7E2E6E4CDEB961B485773CFAB0D1CFB7A13ADA0D (ReadOnlyCollection_1_t23F8C5D5ADD49EC309D753255852410BFE1BB4EC* __this, StyleSelectorMatch_tA4C195A8F23EE7E672CEE7042BA64189DBC2E6DE ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		StyleSelectorMatch_tA4C195A8F23EE7E672CEE7042BA64189DBC2E6DE L_1 = ___0_value;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, StyleSelectorMatch_tA4C195A8F23EE7E672CEE7042BA64189DBC2E6DE >::Invoke(4, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10453
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_CopyTo_mAE9B298F94F510B178E5FDA084A9CE42A9399AF1 (ReadOnlyCollection_1_t23F8C5D5ADD49EC309D753255852410BFE1BB4EC* __this, StyleSelectorMatchU5BU5D_t12881F27D31A0176A4653E10BD3A544A534CFE5F* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		StyleSelectorMatchU5BU5D_t12881F27D31A0176A4653E10BD3A544A534CFE5F* L_1 = ___0_array;
		int32_t L_2 = ___1_index;
		NullCheck(L_0);
		InterfaceActionInvoker2< StyleSelectorMatchU5BU5D_t12881F27D31A0176A4653E10BD3A544A534CFE5F*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1, L_2);
		return;
	}
}
// Method Definition Index: 10454
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_GetEnumerator_m57F176B18EFD42E180FB7AF99605364BDEE71AD4 (ReadOnlyCollection_1_t23F8C5D5ADD49EC309D753255852410BFE1BB4EC* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 7), L_0);
		return L_1;
	}
}
// Method Definition Index: 10455
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_mA0A1A670468F470E5C834117D075E967979682FB (ReadOnlyCollection_1_t23F8C5D5ADD49EC309D753255852410BFE1BB4EC* __this, StyleSelectorMatch_tA4C195A8F23EE7E672CEE7042BA64189DBC2E6DE ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		StyleSelectorMatch_tA4C195A8F23EE7E672CEE7042BA64189DBC2E6DE L_1 = ___0_value;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, StyleSelectorMatch_tA4C195A8F23EE7E672CEE7042BA64189DBC2E6DE >::Invoke(2, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10456
// Method Definition Index: 10457
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleSelectorMatch_tA4C195A8F23EE7E672CEE7042BA64189DBC2E6DE ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m14B754B40A8AF943042557DBB6843E90A541FB80 (ReadOnlyCollection_1_t23F8C5D5ADD49EC309D753255852410BFE1BB4EC* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		StyleSelectorMatch_tA4C195A8F23EE7E672CEE7042BA64189DBC2E6DE L_2;
		L_2 = InterfaceFuncInvoker1< StyleSelectorMatch_tA4C195A8F23EE7E672CEE7042BA64189DBC2E6DE, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10458
// Method Definition Index: 10459
// Method Definition Index: 10460
// Method Definition Index: 10461
// Method Definition Index: 10462
// Method Definition Index: 10463
// Method Definition Index: 10464
// Method Definition Index: 10465
// Method Definition Index: 10466
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m65590E66CD74ACF82F0092C7798EAACC97AB6333 (ReadOnlyCollection_1_t23F8C5D5ADD49EC309D753255852410BFE1BB4EC* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	StyleSelectorMatchU5BU5D_t12881F27D31A0176A4653E10BD3A544A534CFE5F* V_0 = NULL;
	Type_t* V_1 = NULL;
	Type_t* V_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = il2cpp_codegen_array_get_rank(L_1);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0030:
	{
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = il2cpp_codegen_array_get_length(L_6);
		int32_t L_8 = ___1_index;
		int32_t L_9;
		L_9 = ReadOnlyCollection_1_get_Count_mA820E69F0ACE5C10485BDA2D9403C9FE92A5A685(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, L_8))) >= ((int32_t)L_9)))
		{
			goto IL_0046;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(5, NULL);
	}

IL_0046:
	{
		RuntimeArray* L_10 = ___0_array;
		V_0 = ((StyleSelectorMatchU5BU5D_t12881F27D31A0176A4653E10BD3A544A534CFE5F*)IsInstSealed((RuntimeObject*)L_10, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)));
		StyleSelectorMatchU5BU5D_t12881F27D31A0176A4653E10BD3A544A534CFE5F* L_11 = V_0;
		if (!L_11)
		{
			goto IL_005e;
		}
	}
	{
		RuntimeObject* L_12 = __this->___list;
		StyleSelectorMatchU5BU5D_t12881F27D31A0176A4653E10BD3A544A534CFE5F* L_13 = V_0;
		int32_t L_14 = ___1_index;
		NullCheck(L_12);
		InterfaceActionInvoker2< StyleSelectorMatchU5BU5D_t12881F27D31A0176A4653E10BD3A544A534CFE5F*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_12, L_13, L_14);
		return;
	}

IL_005e:
	{
		RuntimeArray* L_15 = ___0_array;
		NullCheck(L_15);
		Type_t* L_16;
		L_16 = il2cpp_codegen_object_get_type(L_15);
		NullCheck(L_16);
		Type_t* L_17;
		L_17 = VirtualFuncInvoker0< Type_t* >::Invoke(46, L_16);
		V_1 = L_17;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 12)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		V_2 = L_19;
		Type_t* L_20 = V_1;
		Type_t* L_21 = V_2;
		NullCheck(L_20);
		bool L_22;
		L_22 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_20, L_21);
		if (L_22)
		{
			goto IL_008c;
		}
	}
	{
		Type_t* L_23 = V_2;
		Type_t* L_24 = V_1;
		NullCheck(L_23);
		bool L_25;
		L_25 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_23, L_24);
		if (L_25)
		{
			goto IL_008c;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_008c:
	{
		RuntimeArray* L_26 = ___0_array;
		V_3 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_26, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = V_3;
		if (L_27)
		{
			goto IL_009b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_009b:
	{
		RuntimeObject* L_28 = __this->___list;
		NullCheck(L_28);
		int32_t L_29;
		L_29 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_28);
		V_4 = L_29;
	}
	try
	{
		{
			V_5 = 0;
			goto IL_00cd_1;
		}

IL_00ad_1:
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_30 = V_3;
			int32_t L_31 = ___1_index;
			int32_t L_32 = L_31;
			___1_index = ((int32_t)il2cpp_codegen_add(L_32, 1));
			RuntimeObject* L_33 = __this->___list;
			int32_t L_34 = V_5;
			NullCheck(L_33);
			StyleSelectorMatch_tA4C195A8F23EE7E672CEE7042BA64189DBC2E6DE L_35;
			L_35 = InterfaceFuncInvoker1< StyleSelectorMatch_tA4C195A8F23EE7E672CEE7042BA64189DBC2E6DE, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_33, L_34);
			StyleSelectorMatch_tA4C195A8F23EE7E672CEE7042BA64189DBC2E6DE L_36 = L_35;
			RuntimeObject* L_37 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_36);
			NullCheck(L_30);
			ArrayElementTypeCheck (L_30, L_37);
			(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (RuntimeObject*)L_37);
			int32_t L_38 = V_5;
			V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
		}

IL_00cd_1:
		{
			int32_t L_39 = V_5;
			int32_t L_40 = V_4;
			if ((((int32_t)L_39) < ((int32_t)L_40)))
			{
				goto IL_00ad_1;
			}
		}
		{
			goto IL_00dd;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00d5;
		}
		throw e;
	}

CATCH_00d5:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_41 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_00dd;
	}

IL_00dd:
	{
		return;
	}
}
// Method Definition Index: 10467
// Method Definition Index: 10468
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_System_Collections_IList_get_Item_m039927CEE310ADF845E22F0A0E80EAF86AF790B9 (ReadOnlyCollection_1_t23F8C5D5ADD49EC309D753255852410BFE1BB4EC* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		StyleSelectorMatch_tA4C195A8F23EE7E672CEE7042BA64189DBC2E6DE L_2;
		L_2 = InterfaceFuncInvoker1< StyleSelectorMatch_tA4C195A8F23EE7E672CEE7042BA64189DBC2E6DE, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		StyleSelectorMatch_tA4C195A8F23EE7E672CEE7042BA64189DBC2E6DE L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_3);
		return L_4;
	}
}
// Method Definition Index: 10469
// Method Definition Index: 10470
// Method Definition Index: 10471
// Method Definition Index: 10472
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m57C36A631CA969171961A9F5081E07EAE88F3D71 (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	StyleSelectorMatch_tA4C195A8F23EE7E672CEE7042BA64189DBC2E6DE V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(StyleSelectorMatch_tA4C195A8F23EE7E672CEE7042BA64189DBC2E6DE));
		StyleSelectorMatch_tA4C195A8F23EE7E672CEE7042BA64189DBC2E6DE L_2 = V_0;
		return false;
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
// Method Definition Index: 10473
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_System_Collections_IList_Contains_m6F9D3D51CDCCECDDEED909FC36DE38625A29DA03 (ReadOnlyCollection_1_t23F8C5D5ADD49EC309D753255852410BFE1BB4EC* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_m57C36A631CA969171961A9F5081E07EAE88F3D71(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		bool L_3;
		L_3 = ReadOnlyCollection_1_Contains_m7E2E6E4CDEB961B485773CFAB0D1CFB7A13ADA0D(__this, ((*(StyleSelectorMatch_tA4C195A8F23EE7E672CEE7042BA64189DBC2E6DE*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// Method Definition Index: 10474
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_System_Collections_IList_IndexOf_m859D047098D73CAF18F8F89983350A6C9989D404 (ReadOnlyCollection_1_t23F8C5D5ADD49EC309D753255852410BFE1BB4EC* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_m57C36A631CA969171961A9F5081E07EAE88F3D71(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		int32_t L_3;
		L_3 = ReadOnlyCollection_1_IndexOf_mA0A1A670468F470E5C834117D075E967979682FB(__this, ((*(StyleSelectorMatch_tA4C195A8F23EE7E672CEE7042BA64189DBC2E6DE*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15));
		return L_3;
	}

IL_0015:
	{
		return (-1);
	}
}
// Method Definition Index: 10475
// Method Definition Index: 10476
// Method Definition Index: 10477
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 10449
// Method Definition Index: 10450
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_mFF7E669AB72703D9E0C341B705834473C187608A (ReadOnlyCollection_1_tE86375B1668A6FBD2D1ABEFD277DA7ED73EF5088* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0);
		return L_1;
	}
}
// Method Definition Index: 10451
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 ReadOnlyCollection_1_get_Item_mCAC757999A17AD9BE159AB2AD34E450AC948E26D (ReadOnlyCollection_1_tE86375B1668A6FBD2D1ABEFD277DA7ED73EF5088* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 L_2;
		L_2 = InterfaceFuncInvoker1< StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10452
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_mA1A790C06B92930F5819430B17FE2807298BBCF3 (ReadOnlyCollection_1_tE86375B1668A6FBD2D1ABEFD277DA7ED73EF5088* __this, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 L_1 = ___0_value;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 >::Invoke(4, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10453
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_CopyTo_m40E93C41947E4DC3F3B2A108E112155FFEE5CE1D (ReadOnlyCollection_1_tE86375B1668A6FBD2D1ABEFD277DA7ED73EF5088* __this, StyleSelectorPartU5BU5D_tBA574FB3E75E94E52874FDB7B05B9048E8A5421B* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		StyleSelectorPartU5BU5D_tBA574FB3E75E94E52874FDB7B05B9048E8A5421B* L_1 = ___0_array;
		int32_t L_2 = ___1_index;
		NullCheck(L_0);
		InterfaceActionInvoker2< StyleSelectorPartU5BU5D_tBA574FB3E75E94E52874FDB7B05B9048E8A5421B*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1, L_2);
		return;
	}
}
// Method Definition Index: 10454
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_GetEnumerator_m23B89EF489CFF82F5A0438261E15311A628D4116 (ReadOnlyCollection_1_tE86375B1668A6FBD2D1ABEFD277DA7ED73EF5088* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 7), L_0);
		return L_1;
	}
}
// Method Definition Index: 10455
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_mB40E1CC7BD75A6AEF6786E92AD11A2F5AF991B64 (ReadOnlyCollection_1_tE86375B1668A6FBD2D1ABEFD277DA7ED73EF5088* __this, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 L_1 = ___0_value;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 >::Invoke(2, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10456
// Method Definition Index: 10457
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m256ABCA2D4ABE00C22F3095F619C023AD7EFF636 (ReadOnlyCollection_1_tE86375B1668A6FBD2D1ABEFD277DA7ED73EF5088* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 L_2;
		L_2 = InterfaceFuncInvoker1< StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10458
// Method Definition Index: 10459
// Method Definition Index: 10460
// Method Definition Index: 10461
// Method Definition Index: 10462
// Method Definition Index: 10463
// Method Definition Index: 10464
// Method Definition Index: 10465
// Method Definition Index: 10466
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_mC2D43CCFAE6440DEF4FC4F1B77D77ED18631C1E7 (ReadOnlyCollection_1_tE86375B1668A6FBD2D1ABEFD277DA7ED73EF5088* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	StyleSelectorPartU5BU5D_tBA574FB3E75E94E52874FDB7B05B9048E8A5421B* V_0 = NULL;
	Type_t* V_1 = NULL;
	Type_t* V_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = il2cpp_codegen_array_get_rank(L_1);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0030:
	{
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = il2cpp_codegen_array_get_length(L_6);
		int32_t L_8 = ___1_index;
		int32_t L_9;
		L_9 = ReadOnlyCollection_1_get_Count_mFF7E669AB72703D9E0C341B705834473C187608A(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, L_8))) >= ((int32_t)L_9)))
		{
			goto IL_0046;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(5, NULL);
	}

IL_0046:
	{
		RuntimeArray* L_10 = ___0_array;
		V_0 = ((StyleSelectorPartU5BU5D_tBA574FB3E75E94E52874FDB7B05B9048E8A5421B*)IsInstSealed((RuntimeObject*)L_10, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)));
		StyleSelectorPartU5BU5D_tBA574FB3E75E94E52874FDB7B05B9048E8A5421B* L_11 = V_0;
		if (!L_11)
		{
			goto IL_005e;
		}
	}
	{
		RuntimeObject* L_12 = __this->___list;
		StyleSelectorPartU5BU5D_tBA574FB3E75E94E52874FDB7B05B9048E8A5421B* L_13 = V_0;
		int32_t L_14 = ___1_index;
		NullCheck(L_12);
		InterfaceActionInvoker2< StyleSelectorPartU5BU5D_tBA574FB3E75E94E52874FDB7B05B9048E8A5421B*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_12, L_13, L_14);
		return;
	}

IL_005e:
	{
		RuntimeArray* L_15 = ___0_array;
		NullCheck(L_15);
		Type_t* L_16;
		L_16 = il2cpp_codegen_object_get_type(L_15);
		NullCheck(L_16);
		Type_t* L_17;
		L_17 = VirtualFuncInvoker0< Type_t* >::Invoke(46, L_16);
		V_1 = L_17;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 12)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		V_2 = L_19;
		Type_t* L_20 = V_1;
		Type_t* L_21 = V_2;
		NullCheck(L_20);
		bool L_22;
		L_22 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_20, L_21);
		if (L_22)
		{
			goto IL_008c;
		}
	}
	{
		Type_t* L_23 = V_2;
		Type_t* L_24 = V_1;
		NullCheck(L_23);
		bool L_25;
		L_25 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_23, L_24);
		if (L_25)
		{
			goto IL_008c;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_008c:
	{
		RuntimeArray* L_26 = ___0_array;
		V_3 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_26, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = V_3;
		if (L_27)
		{
			goto IL_009b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_009b:
	{
		RuntimeObject* L_28 = __this->___list;
		NullCheck(L_28);
		int32_t L_29;
		L_29 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_28);
		V_4 = L_29;
	}
	try
	{
		{
			V_5 = 0;
			goto IL_00cd_1;
		}

IL_00ad_1:
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_30 = V_3;
			int32_t L_31 = ___1_index;
			int32_t L_32 = L_31;
			___1_index = ((int32_t)il2cpp_codegen_add(L_32, 1));
			RuntimeObject* L_33 = __this->___list;
			int32_t L_34 = V_5;
			NullCheck(L_33);
			StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 L_35;
			L_35 = InterfaceFuncInvoker1< StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_33, L_34);
			StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 L_36 = L_35;
			RuntimeObject* L_37 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_36);
			NullCheck(L_30);
			ArrayElementTypeCheck (L_30, L_37);
			(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (RuntimeObject*)L_37);
			int32_t L_38 = V_5;
			V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
		}

IL_00cd_1:
		{
			int32_t L_39 = V_5;
			int32_t L_40 = V_4;
			if ((((int32_t)L_39) < ((int32_t)L_40)))
			{
				goto IL_00ad_1;
			}
		}
		{
			goto IL_00dd;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00d5;
		}
		throw e;
	}

CATCH_00d5:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_41 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_00dd;
	}

IL_00dd:
	{
		return;
	}
}
// Method Definition Index: 10467
// Method Definition Index: 10468
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_System_Collections_IList_get_Item_mC58EB3DBA5AC626AB92DB4C94E21827B01139E6A (ReadOnlyCollection_1_tE86375B1668A6FBD2D1ABEFD277DA7ED73EF5088* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 L_2;
		L_2 = InterfaceFuncInvoker1< StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_3);
		return L_4;
	}
}
// Method Definition Index: 10469
// Method Definition Index: 10470
// Method Definition Index: 10471
// Method Definition Index: 10472
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m389A6F55F75F8D0F1FF361984D8A460829ABE096 (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470));
		StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 L_2 = V_0;
		return false;
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
// Method Definition Index: 10473
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_System_Collections_IList_Contains_mAE472FAF0A360D2FFF370EEF91380A3D20078872 (ReadOnlyCollection_1_tE86375B1668A6FBD2D1ABEFD277DA7ED73EF5088* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_m389A6F55F75F8D0F1FF361984D8A460829ABE096(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		bool L_3;
		L_3 = ReadOnlyCollection_1_Contains_mA1A790C06B92930F5819430B17FE2807298BBCF3(__this, ((*(StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// Method Definition Index: 10474
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_System_Collections_IList_IndexOf_mE06E406FDFF68622D21FB23323D3A2EFA8D45DFC (ReadOnlyCollection_1_tE86375B1668A6FBD2D1ABEFD277DA7ED73EF5088* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_m389A6F55F75F8D0F1FF361984D8A460829ABE096(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		int32_t L_3;
		L_3 = ReadOnlyCollection_1_IndexOf_mB40E1CC7BD75A6AEF6786E92AD11A2F5AF991B64(__this, ((*(StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15));
		return L_3;
	}

IL_0015:
	{
		return (-1);
	}
}
// Method Definition Index: 10475
// Method Definition Index: 10476
// Method Definition Index: 10477
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 10449
// Method Definition Index: 10450
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m496BD7BFA76410E273E090815D701C135B2E0C18 (ReadOnlyCollection_1_t4A4298CBF971053B7107BCB3172698E18C4C4C78* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0);
		return L_1;
	}
}
// Method Definition Index: 10451
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C ReadOnlyCollection_1_get_Item_m0111B607DBF8F8CF17C9B40F019F74BEB7B8FE77 (ReadOnlyCollection_1_t4A4298CBF971053B7107BCB3172698E18C4C4C78* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C L_2;
		L_2 = InterfaceFuncInvoker1< StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10452
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m5A098FDA7112021261C8C7F743127D421017FADB (ReadOnlyCollection_1_t4A4298CBF971053B7107BCB3172698E18C4C4C78* __this, StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C L_1 = ___0_value;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C >::Invoke(4, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10453
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_CopyTo_m55532FA603FF9A253A8C0F1B54036D22F353DF5E (ReadOnlyCollection_1_t4A4298CBF971053B7107BCB3172698E18C4C4C78* __this, StyleSyntaxTokenU5BU5D_t47245051E1F0EBD45B56D9E0ED113E9586B33CD8* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		StyleSyntaxTokenU5BU5D_t47245051E1F0EBD45B56D9E0ED113E9586B33CD8* L_1 = ___0_array;
		int32_t L_2 = ___1_index;
		NullCheck(L_0);
		InterfaceActionInvoker2< StyleSyntaxTokenU5BU5D_t47245051E1F0EBD45B56D9E0ED113E9586B33CD8*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1, L_2);
		return;
	}
}
// Method Definition Index: 10454
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_GetEnumerator_mAE3CB7562AE39C9FA5C87B6D92B1B493A0F78C1A (ReadOnlyCollection_1_t4A4298CBF971053B7107BCB3172698E18C4C4C78* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 7), L_0);
		return L_1;
	}
}
// Method Definition Index: 10455
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_mEEDB8DA92C276721AE87583DC4E0564936B9E55F (ReadOnlyCollection_1_t4A4298CBF971053B7107BCB3172698E18C4C4C78* __this, StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C L_1 = ___0_value;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C >::Invoke(2, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10456
// Method Definition Index: 10457
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_mE70B84DF2C2B4206BBCC586402450ECE53E8CBA6 (ReadOnlyCollection_1_t4A4298CBF971053B7107BCB3172698E18C4C4C78* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C L_2;
		L_2 = InterfaceFuncInvoker1< StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10458
// Method Definition Index: 10459
// Method Definition Index: 10460
// Method Definition Index: 10461
// Method Definition Index: 10462
// Method Definition Index: 10463
// Method Definition Index: 10464
// Method Definition Index: 10465
// Method Definition Index: 10466
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m0687D410D41E6A82BF5E04E62D34C116EA3B8013 (ReadOnlyCollection_1_t4A4298CBF971053B7107BCB3172698E18C4C4C78* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	StyleSyntaxTokenU5BU5D_t47245051E1F0EBD45B56D9E0ED113E9586B33CD8* V_0 = NULL;
	Type_t* V_1 = NULL;
	Type_t* V_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = il2cpp_codegen_array_get_rank(L_1);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0030:
	{
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = il2cpp_codegen_array_get_length(L_6);
		int32_t L_8 = ___1_index;
		int32_t L_9;
		L_9 = ReadOnlyCollection_1_get_Count_m496BD7BFA76410E273E090815D701C135B2E0C18(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, L_8))) >= ((int32_t)L_9)))
		{
			goto IL_0046;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(5, NULL);
	}

IL_0046:
	{
		RuntimeArray* L_10 = ___0_array;
		V_0 = ((StyleSyntaxTokenU5BU5D_t47245051E1F0EBD45B56D9E0ED113E9586B33CD8*)IsInstSealed((RuntimeObject*)L_10, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)));
		StyleSyntaxTokenU5BU5D_t47245051E1F0EBD45B56D9E0ED113E9586B33CD8* L_11 = V_0;
		if (!L_11)
		{
			goto IL_005e;
		}
	}
	{
		RuntimeObject* L_12 = __this->___list;
		StyleSyntaxTokenU5BU5D_t47245051E1F0EBD45B56D9E0ED113E9586B33CD8* L_13 = V_0;
		int32_t L_14 = ___1_index;
		NullCheck(L_12);
		InterfaceActionInvoker2< StyleSyntaxTokenU5BU5D_t47245051E1F0EBD45B56D9E0ED113E9586B33CD8*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_12, L_13, L_14);
		return;
	}

IL_005e:
	{
		RuntimeArray* L_15 = ___0_array;
		NullCheck(L_15);
		Type_t* L_16;
		L_16 = il2cpp_codegen_object_get_type(L_15);
		NullCheck(L_16);
		Type_t* L_17;
		L_17 = VirtualFuncInvoker0< Type_t* >::Invoke(46, L_16);
		V_1 = L_17;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 12)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		V_2 = L_19;
		Type_t* L_20 = V_1;
		Type_t* L_21 = V_2;
		NullCheck(L_20);
		bool L_22;
		L_22 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_20, L_21);
		if (L_22)
		{
			goto IL_008c;
		}
	}
	{
		Type_t* L_23 = V_2;
		Type_t* L_24 = V_1;
		NullCheck(L_23);
		bool L_25;
		L_25 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_23, L_24);
		if (L_25)
		{
			goto IL_008c;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_008c:
	{
		RuntimeArray* L_26 = ___0_array;
		V_3 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_26, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = V_3;
		if (L_27)
		{
			goto IL_009b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_009b:
	{
		RuntimeObject* L_28 = __this->___list;
		NullCheck(L_28);
		int32_t L_29;
		L_29 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_28);
		V_4 = L_29;
	}
	try
	{
		{
			V_5 = 0;
			goto IL_00cd_1;
		}

IL_00ad_1:
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_30 = V_3;
			int32_t L_31 = ___1_index;
			int32_t L_32 = L_31;
			___1_index = ((int32_t)il2cpp_codegen_add(L_32, 1));
			RuntimeObject* L_33 = __this->___list;
			int32_t L_34 = V_5;
			NullCheck(L_33);
			StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C L_35;
			L_35 = InterfaceFuncInvoker1< StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_33, L_34);
			StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C L_36 = L_35;
			RuntimeObject* L_37 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_36);
			NullCheck(L_30);
			ArrayElementTypeCheck (L_30, L_37);
			(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (RuntimeObject*)L_37);
			int32_t L_38 = V_5;
			V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
		}

IL_00cd_1:
		{
			int32_t L_39 = V_5;
			int32_t L_40 = V_4;
			if ((((int32_t)L_39) < ((int32_t)L_40)))
			{
				goto IL_00ad_1;
			}
		}
		{
			goto IL_00dd;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00d5;
		}
		throw e;
	}

CATCH_00d5:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_41 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_00dd;
	}

IL_00dd:
	{
		return;
	}
}
// Method Definition Index: 10467
// Method Definition Index: 10468
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_System_Collections_IList_get_Item_m7235D98E2829E4A06C8878F1515880E72886AFA9 (ReadOnlyCollection_1_t4A4298CBF971053B7107BCB3172698E18C4C4C78* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C L_2;
		L_2 = InterfaceFuncInvoker1< StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_3);
		return L_4;
	}
}
// Method Definition Index: 10469
// Method Definition Index: 10470
// Method Definition Index: 10471
// Method Definition Index: 10472
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_mDB14D7889E01F89EF4D73BAAE5AEC51F7B239BCC (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C));
		StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C L_2 = V_0;
		return false;
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
// Method Definition Index: 10473
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_System_Collections_IList_Contains_m5B2A42F89D9E64C46E34109AB5D4628EA6E630A2 (ReadOnlyCollection_1_t4A4298CBF971053B7107BCB3172698E18C4C4C78* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_mDB14D7889E01F89EF4D73BAAE5AEC51F7B239BCC(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		bool L_3;
		L_3 = ReadOnlyCollection_1_Contains_m5A098FDA7112021261C8C7F743127D421017FADB(__this, ((*(StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// Method Definition Index: 10474
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_System_Collections_IList_IndexOf_m8F50289E52142AC0549F9C8E8D327AE10B9FB6F5 (ReadOnlyCollection_1_t4A4298CBF971053B7107BCB3172698E18C4C4C78* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_mDB14D7889E01F89EF4D73BAAE5AEC51F7B239BCC(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		int32_t L_3;
		L_3 = ReadOnlyCollection_1_IndexOf_mEEDB8DA92C276721AE87583DC4E0564936B9E55F(__this, ((*(StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15));
		return L_3;
	}

IL_0015:
	{
		return (-1);
	}
}
// Method Definition Index: 10475
// Method Definition Index: 10476
// Method Definition Index: 10477
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 10449
// Method Definition Index: 10450
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_mD6B7461CB6FCF06FACC658DC289D497C90018333 (ReadOnlyCollection_1_tFF93E8D08323FE0D47D1EDFE961D186F7E3C9AEE* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0);
		return L_1;
	}
}
// Method Definition Index: 10451
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleValue_t56307594EC04E04EFBCC3220595B4AAD66FF93C5 ReadOnlyCollection_1_get_Item_m4CE1CA70D206FE47F69ACD0EB881AC5EA066A2D0 (ReadOnlyCollection_1_tFF93E8D08323FE0D47D1EDFE961D186F7E3C9AEE* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		StyleValue_t56307594EC04E04EFBCC3220595B4AAD66FF93C5 L_2;
		L_2 = InterfaceFuncInvoker1< StyleValue_t56307594EC04E04EFBCC3220595B4AAD66FF93C5, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10452
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m0AE0D9C4E6071DC1275906F2D88A3EF83EB221F3 (ReadOnlyCollection_1_tFF93E8D08323FE0D47D1EDFE961D186F7E3C9AEE* __this, StyleValue_t56307594EC04E04EFBCC3220595B4AAD66FF93C5 ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		StyleValue_t56307594EC04E04EFBCC3220595B4AAD66FF93C5 L_1 = ___0_value;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, StyleValue_t56307594EC04E04EFBCC3220595B4AAD66FF93C5 >::Invoke(4, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10453
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_CopyTo_m491D1BBA842799557B66A44DB5D3CACFB129F713 (ReadOnlyCollection_1_tFF93E8D08323FE0D47D1EDFE961D186F7E3C9AEE* __this, StyleValueU5BU5D_t544D1F13B44DC23CA765A18E32B7779768FDF0C8* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		StyleValueU5BU5D_t544D1F13B44DC23CA765A18E32B7779768FDF0C8* L_1 = ___0_array;
		int32_t L_2 = ___1_index;
		NullCheck(L_0);
		InterfaceActionInvoker2< StyleValueU5BU5D_t544D1F13B44DC23CA765A18E32B7779768FDF0C8*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1, L_2);
		return;
	}
}
// Method Definition Index: 10454
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_GetEnumerator_m11E5DD435D02E7BA3B319ECE6B2E95F54B3B2308 (ReadOnlyCollection_1_tFF93E8D08323FE0D47D1EDFE961D186F7E3C9AEE* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 7), L_0);
		return L_1;
	}
}
// Method Definition Index: 10455
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_mCEF9826545BDA2E8E530F48F9EA451D6D2307419 (ReadOnlyCollection_1_tFF93E8D08323FE0D47D1EDFE961D186F7E3C9AEE* __this, StyleValue_t56307594EC04E04EFBCC3220595B4AAD66FF93C5 ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		StyleValue_t56307594EC04E04EFBCC3220595B4AAD66FF93C5 L_1 = ___0_value;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, StyleValue_t56307594EC04E04EFBCC3220595B4AAD66FF93C5 >::Invoke(2, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10456
// Method Definition Index: 10457
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleValue_t56307594EC04E04EFBCC3220595B4AAD66FF93C5 ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_mB3DF6453CA2BBA36EE3BB2826B8189CA411CEE0C (ReadOnlyCollection_1_tFF93E8D08323FE0D47D1EDFE961D186F7E3C9AEE* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		StyleValue_t56307594EC04E04EFBCC3220595B4AAD66FF93C5 L_2;
		L_2 = InterfaceFuncInvoker1< StyleValue_t56307594EC04E04EFBCC3220595B4AAD66FF93C5, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10458
// Method Definition Index: 10459
// Method Definition Index: 10460
// Method Definition Index: 10461
// Method Definition Index: 10462
// Method Definition Index: 10463
// Method Definition Index: 10464
// Method Definition Index: 10465
// Method Definition Index: 10466
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m23246D1D7D9CDAC2EC481A477BF928A1328A7C12 (ReadOnlyCollection_1_tFF93E8D08323FE0D47D1EDFE961D186F7E3C9AEE* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	StyleValueU5BU5D_t544D1F13B44DC23CA765A18E32B7779768FDF0C8* V_0 = NULL;
	Type_t* V_1 = NULL;
	Type_t* V_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = il2cpp_codegen_array_get_rank(L_1);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0030:
	{
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = il2cpp_codegen_array_get_length(L_6);
		int32_t L_8 = ___1_index;
		int32_t L_9;
		L_9 = ReadOnlyCollection_1_get_Count_mD6B7461CB6FCF06FACC658DC289D497C90018333(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, L_8))) >= ((int32_t)L_9)))
		{
			goto IL_0046;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(5, NULL);
	}

IL_0046:
	{
		RuntimeArray* L_10 = ___0_array;
		V_0 = ((StyleValueU5BU5D_t544D1F13B44DC23CA765A18E32B7779768FDF0C8*)IsInstSealed((RuntimeObject*)L_10, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)));
		StyleValueU5BU5D_t544D1F13B44DC23CA765A18E32B7779768FDF0C8* L_11 = V_0;
		if (!L_11)
		{
			goto IL_005e;
		}
	}
	{
		RuntimeObject* L_12 = __this->___list;
		StyleValueU5BU5D_t544D1F13B44DC23CA765A18E32B7779768FDF0C8* L_13 = V_0;
		int32_t L_14 = ___1_index;
		NullCheck(L_12);
		InterfaceActionInvoker2< StyleValueU5BU5D_t544D1F13B44DC23CA765A18E32B7779768FDF0C8*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_12, L_13, L_14);
		return;
	}

IL_005e:
	{
		RuntimeArray* L_15 = ___0_array;
		NullCheck(L_15);
		Type_t* L_16;
		L_16 = il2cpp_codegen_object_get_type(L_15);
		NullCheck(L_16);
		Type_t* L_17;
		L_17 = VirtualFuncInvoker0< Type_t* >::Invoke(46, L_16);
		V_1 = L_17;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 12)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		V_2 = L_19;
		Type_t* L_20 = V_1;
		Type_t* L_21 = V_2;
		NullCheck(L_20);
		bool L_22;
		L_22 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_20, L_21);
		if (L_22)
		{
			goto IL_008c;
		}
	}
	{
		Type_t* L_23 = V_2;
		Type_t* L_24 = V_1;
		NullCheck(L_23);
		bool L_25;
		L_25 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_23, L_24);
		if (L_25)
		{
			goto IL_008c;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_008c:
	{
		RuntimeArray* L_26 = ___0_array;
		V_3 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_26, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = V_3;
		if (L_27)
		{
			goto IL_009b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_009b:
	{
		RuntimeObject* L_28 = __this->___list;
		NullCheck(L_28);
		int32_t L_29;
		L_29 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_28);
		V_4 = L_29;
	}
	try
	{
		{
			V_5 = 0;
			goto IL_00cd_1;
		}

IL_00ad_1:
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_30 = V_3;
			int32_t L_31 = ___1_index;
			int32_t L_32 = L_31;
			___1_index = ((int32_t)il2cpp_codegen_add(L_32, 1));
			RuntimeObject* L_33 = __this->___list;
			int32_t L_34 = V_5;
			NullCheck(L_33);
			StyleValue_t56307594EC04E04EFBCC3220595B4AAD66FF93C5 L_35;
			L_35 = InterfaceFuncInvoker1< StyleValue_t56307594EC04E04EFBCC3220595B4AAD66FF93C5, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_33, L_34);
			StyleValue_t56307594EC04E04EFBCC3220595B4AAD66FF93C5 L_36 = L_35;
			RuntimeObject* L_37 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_36);
			NullCheck(L_30);
			ArrayElementTypeCheck (L_30, L_37);
			(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (RuntimeObject*)L_37);
			int32_t L_38 = V_5;
			V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
		}

IL_00cd_1:
		{
			int32_t L_39 = V_5;
			int32_t L_40 = V_4;
			if ((((int32_t)L_39) < ((int32_t)L_40)))
			{
				goto IL_00ad_1;
			}
		}
		{
			goto IL_00dd;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00d5;
		}
		throw e;
	}

CATCH_00d5:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_41 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_00dd;
	}

IL_00dd:
	{
		return;
	}
}
// Method Definition Index: 10467
// Method Definition Index: 10468
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_System_Collections_IList_get_Item_mFA82688858A50C1573BA01F6E4A16D172FF671C4 (ReadOnlyCollection_1_tFF93E8D08323FE0D47D1EDFE961D186F7E3C9AEE* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		StyleValue_t56307594EC04E04EFBCC3220595B4AAD66FF93C5 L_2;
		L_2 = InterfaceFuncInvoker1< StyleValue_t56307594EC04E04EFBCC3220595B4AAD66FF93C5, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		StyleValue_t56307594EC04E04EFBCC3220595B4AAD66FF93C5 L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_3);
		return L_4;
	}
}
// Method Definition Index: 10469
// Method Definition Index: 10470
// Method Definition Index: 10471
// Method Definition Index: 10472
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m46E76F2FA7D7FFCCBB200D66E85823E5E3C1E831 (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	StyleValue_t56307594EC04E04EFBCC3220595B4AAD66FF93C5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(StyleValue_t56307594EC04E04EFBCC3220595B4AAD66FF93C5));
		StyleValue_t56307594EC04E04EFBCC3220595B4AAD66FF93C5 L_2 = V_0;
		return false;
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
// Method Definition Index: 10473
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_System_Collections_IList_Contains_mA65E0C3C9373390807109FAC13A7D711AE516C27 (ReadOnlyCollection_1_tFF93E8D08323FE0D47D1EDFE961D186F7E3C9AEE* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_m46E76F2FA7D7FFCCBB200D66E85823E5E3C1E831(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		bool L_3;
		L_3 = ReadOnlyCollection_1_Contains_m0AE0D9C4E6071DC1275906F2D88A3EF83EB221F3(__this, ((*(StyleValue_t56307594EC04E04EFBCC3220595B4AAD66FF93C5*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// Method Definition Index: 10474
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_System_Collections_IList_IndexOf_m781E97C7DD1DC4B536354332EE9111B2D0137085 (ReadOnlyCollection_1_tFF93E8D08323FE0D47D1EDFE961D186F7E3C9AEE* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_m46E76F2FA7D7FFCCBB200D66E85823E5E3C1E831(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		int32_t L_3;
		L_3 = ReadOnlyCollection_1_IndexOf_mCEF9826545BDA2E8E530F48F9EA451D6D2307419(__this, ((*(StyleValue_t56307594EC04E04EFBCC3220595B4AAD66FF93C5*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15));
		return L_3;
	}

IL_0015:
	{
		return (-1);
	}
}
// Method Definition Index: 10475
// Method Definition Index: 10476
// Method Definition Index: 10477
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 10449
// Method Definition Index: 10450
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m34F00F477064F0070BE76383370D2D841DCB7256 (ReadOnlyCollection_1_tE93D7970A5840C0077489CEA45621B02483FABC9* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0);
		return L_1;
	}
}
// Method Definition Index: 10451
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D ReadOnlyCollection_1_get_Item_m624664CB2745AF9C3141B116F2B47705ADC4070F (ReadOnlyCollection_1_tE93D7970A5840C0077489CEA45621B02483FABC9* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D L_2;
		L_2 = InterfaceFuncInvoker1< StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10452
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_mD95EE3072842E6AF68C6EB74E74BED2332004F16 (ReadOnlyCollection_1_tE93D7970A5840C0077489CEA45621B02483FABC9* __this, StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D L_1 = ___0_value;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D >::Invoke(4, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10453
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_CopyTo_mA6C5759CBAE9EB4C287C313C19AD7EC550D83C60 (ReadOnlyCollection_1_tE93D7970A5840C0077489CEA45621B02483FABC9* __this, StyleValueHandleU5BU5D_t66B7732469E9E30B1FB9A6E386315DAB36914ADE* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		StyleValueHandleU5BU5D_t66B7732469E9E30B1FB9A6E386315DAB36914ADE* L_1 = ___0_array;
		int32_t L_2 = ___1_index;
		NullCheck(L_0);
		InterfaceActionInvoker2< StyleValueHandleU5BU5D_t66B7732469E9E30B1FB9A6E386315DAB36914ADE*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1, L_2);
		return;
	}
}
// Method Definition Index: 10454
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_GetEnumerator_m4083069EB3B45E290D043F7437AB5C02EDEFD6B2 (ReadOnlyCollection_1_tE93D7970A5840C0077489CEA45621B02483FABC9* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 7), L_0);
		return L_1;
	}
}
// Method Definition Index: 10455
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m0E438DAB1C5EC5C117A792A204DB597BC63B329D (ReadOnlyCollection_1_tE93D7970A5840C0077489CEA45621B02483FABC9* __this, StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D L_1 = ___0_value;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D >::Invoke(2, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10456
// Method Definition Index: 10457
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m72776E09DA98CB6A5049F8787CF995149D514271 (ReadOnlyCollection_1_tE93D7970A5840C0077489CEA45621B02483FABC9* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D L_2;
		L_2 = InterfaceFuncInvoker1< StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10458
// Method Definition Index: 10459
// Method Definition Index: 10460
// Method Definition Index: 10461
// Method Definition Index: 10462
// Method Definition Index: 10463
// Method Definition Index: 10464
// Method Definition Index: 10465
// Method Definition Index: 10466
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_mD702C82D5A24475024F9589F8D69DB1E13B1446F (ReadOnlyCollection_1_tE93D7970A5840C0077489CEA45621B02483FABC9* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	StyleValueHandleU5BU5D_t66B7732469E9E30B1FB9A6E386315DAB36914ADE* V_0 = NULL;
	Type_t* V_1 = NULL;
	Type_t* V_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = il2cpp_codegen_array_get_rank(L_1);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0030:
	{
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = il2cpp_codegen_array_get_length(L_6);
		int32_t L_8 = ___1_index;
		int32_t L_9;
		L_9 = ReadOnlyCollection_1_get_Count_m34F00F477064F0070BE76383370D2D841DCB7256(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, L_8))) >= ((int32_t)L_9)))
		{
			goto IL_0046;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(5, NULL);
	}

IL_0046:
	{
		RuntimeArray* L_10 = ___0_array;
		V_0 = ((StyleValueHandleU5BU5D_t66B7732469E9E30B1FB9A6E386315DAB36914ADE*)IsInstSealed((RuntimeObject*)L_10, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)));
		StyleValueHandleU5BU5D_t66B7732469E9E30B1FB9A6E386315DAB36914ADE* L_11 = V_0;
		if (!L_11)
		{
			goto IL_005e;
		}
	}
	{
		RuntimeObject* L_12 = __this->___list;
		StyleValueHandleU5BU5D_t66B7732469E9E30B1FB9A6E386315DAB36914ADE* L_13 = V_0;
		int32_t L_14 = ___1_index;
		NullCheck(L_12);
		InterfaceActionInvoker2< StyleValueHandleU5BU5D_t66B7732469E9E30B1FB9A6E386315DAB36914ADE*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_12, L_13, L_14);
		return;
	}

IL_005e:
	{
		RuntimeArray* L_15 = ___0_array;
		NullCheck(L_15);
		Type_t* L_16;
		L_16 = il2cpp_codegen_object_get_type(L_15);
		NullCheck(L_16);
		Type_t* L_17;
		L_17 = VirtualFuncInvoker0< Type_t* >::Invoke(46, L_16);
		V_1 = L_17;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 12)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		V_2 = L_19;
		Type_t* L_20 = V_1;
		Type_t* L_21 = V_2;
		NullCheck(L_20);
		bool L_22;
		L_22 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_20, L_21);
		if (L_22)
		{
			goto IL_008c;
		}
	}
	{
		Type_t* L_23 = V_2;
		Type_t* L_24 = V_1;
		NullCheck(L_23);
		bool L_25;
		L_25 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_23, L_24);
		if (L_25)
		{
			goto IL_008c;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_008c:
	{
		RuntimeArray* L_26 = ___0_array;
		V_3 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_26, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = V_3;
		if (L_27)
		{
			goto IL_009b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_009b:
	{
		RuntimeObject* L_28 = __this->___list;
		NullCheck(L_28);
		int32_t L_29;
		L_29 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_28);
		V_4 = L_29;
	}
	try
	{
		{
			V_5 = 0;
			goto IL_00cd_1;
		}

IL_00ad_1:
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_30 = V_3;
			int32_t L_31 = ___1_index;
			int32_t L_32 = L_31;
			___1_index = ((int32_t)il2cpp_codegen_add(L_32, 1));
			RuntimeObject* L_33 = __this->___list;
			int32_t L_34 = V_5;
			NullCheck(L_33);
			StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D L_35;
			L_35 = InterfaceFuncInvoker1< StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_33, L_34);
			StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D L_36 = L_35;
			RuntimeObject* L_37 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_36);
			NullCheck(L_30);
			ArrayElementTypeCheck (L_30, L_37);
			(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (RuntimeObject*)L_37);
			int32_t L_38 = V_5;
			V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
		}

IL_00cd_1:
		{
			int32_t L_39 = V_5;
			int32_t L_40 = V_4;
			if ((((int32_t)L_39) < ((int32_t)L_40)))
			{
				goto IL_00ad_1;
			}
		}
		{
			goto IL_00dd;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00d5;
		}
		throw e;
	}

CATCH_00d5:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_41 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_00dd;
	}

IL_00dd:
	{
		return;
	}
}
// Method Definition Index: 10467
// Method Definition Index: 10468
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_System_Collections_IList_get_Item_m7D15EC9754BBED53BC4F692E68B8A4CEA4E8EEF0 (ReadOnlyCollection_1_tE93D7970A5840C0077489CEA45621B02483FABC9* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D L_2;
		L_2 = InterfaceFuncInvoker1< StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_3);
		return L_4;
	}
}
// Method Definition Index: 10469
// Method Definition Index: 10470
// Method Definition Index: 10471
// Method Definition Index: 10472
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m5DFF5C6A27901428D38857976FFA53E551F76AD1 (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D));
		StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D L_2 = V_0;
		return false;
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
// Method Definition Index: 10473
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_System_Collections_IList_Contains_mDDD1DD2840B4611AAF9F464457DB8251B153E5C2 (ReadOnlyCollection_1_tE93D7970A5840C0077489CEA45621B02483FABC9* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_m5DFF5C6A27901428D38857976FFA53E551F76AD1(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		bool L_3;
		L_3 = ReadOnlyCollection_1_Contains_mD95EE3072842E6AF68C6EB74E74BED2332004F16(__this, ((*(StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// Method Definition Index: 10474
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_System_Collections_IList_IndexOf_m2173F68DDD15F0591D25EED5A91A93A89736D9CB (ReadOnlyCollection_1_tE93D7970A5840C0077489CEA45621B02483FABC9* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_m5DFF5C6A27901428D38857976FFA53E551F76AD1(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		int32_t L_3;
		L_3 = ReadOnlyCollection_1_IndexOf_m0E438DAB1C5EC5C117A792A204DB597BC63B329D(__this, ((*(StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15));
		return L_3;
	}

IL_0015:
	{
		return (-1);
	}
}
// Method Definition Index: 10475
// Method Definition Index: 10476
// Method Definition Index: 10477
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 10449
// Method Definition Index: 10450
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m52CA7994F4FAC8981DF7318B0E18B5484676E392 (ReadOnlyCollection_1_t2401BF20081A5300090A5FC70F287797DBFE10B0* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0);
		return L_1;
	}
}
// Method Definition Index: 10451
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleValueManaged_t68DFBEC1594279E4DC56634FD5092318D1E9A5F4 ReadOnlyCollection_1_get_Item_mA3CB1C6FE6ED55A7B15316A0E7269242124994A9 (ReadOnlyCollection_1_t2401BF20081A5300090A5FC70F287797DBFE10B0* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		StyleValueManaged_t68DFBEC1594279E4DC56634FD5092318D1E9A5F4 L_2;
		L_2 = InterfaceFuncInvoker1< StyleValueManaged_t68DFBEC1594279E4DC56634FD5092318D1E9A5F4, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10452
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m8E805DDCC9D2CBF698432996185663AF947F2FA0 (ReadOnlyCollection_1_t2401BF20081A5300090A5FC70F287797DBFE10B0* __this, StyleValueManaged_t68DFBEC1594279E4DC56634FD5092318D1E9A5F4 ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		StyleValueManaged_t68DFBEC1594279E4DC56634FD5092318D1E9A5F4 L_1 = ___0_value;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, StyleValueManaged_t68DFBEC1594279E4DC56634FD5092318D1E9A5F4 >::Invoke(4, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10453
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_CopyTo_m70A3FBABB047C253A8925B718E9A757EE6A54FF2 (ReadOnlyCollection_1_t2401BF20081A5300090A5FC70F287797DBFE10B0* __this, StyleValueManagedU5BU5D_tA36DD573E215D5C8EE43B4BD109BE2AA3902E1E9* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		StyleValueManagedU5BU5D_tA36DD573E215D5C8EE43B4BD109BE2AA3902E1E9* L_1 = ___0_array;
		int32_t L_2 = ___1_index;
		NullCheck(L_0);
		InterfaceActionInvoker2< StyleValueManagedU5BU5D_tA36DD573E215D5C8EE43B4BD109BE2AA3902E1E9*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1, L_2);
		return;
	}
}
// Method Definition Index: 10454
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_GetEnumerator_m36B62FED8950168D2BB84563DFDB860352860BC2 (ReadOnlyCollection_1_t2401BF20081A5300090A5FC70F287797DBFE10B0* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 7), L_0);
		return L_1;
	}
}
// Method Definition Index: 10455
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_mA017774366396F9121936E8529BA288A0E9244CE (ReadOnlyCollection_1_t2401BF20081A5300090A5FC70F287797DBFE10B0* __this, StyleValueManaged_t68DFBEC1594279E4DC56634FD5092318D1E9A5F4 ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		StyleValueManaged_t68DFBEC1594279E4DC56634FD5092318D1E9A5F4 L_1 = ___0_value;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, StyleValueManaged_t68DFBEC1594279E4DC56634FD5092318D1E9A5F4 >::Invoke(2, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10456
// Method Definition Index: 10457
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleValueManaged_t68DFBEC1594279E4DC56634FD5092318D1E9A5F4 ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_mCF30EE6AE40342BAA0A61C4EB7FC81D360E83B61 (ReadOnlyCollection_1_t2401BF20081A5300090A5FC70F287797DBFE10B0* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		StyleValueManaged_t68DFBEC1594279E4DC56634FD5092318D1E9A5F4 L_2;
		L_2 = InterfaceFuncInvoker1< StyleValueManaged_t68DFBEC1594279E4DC56634FD5092318D1E9A5F4, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10458
// Method Definition Index: 10459
// Method Definition Index: 10460
// Method Definition Index: 10461
// Method Definition Index: 10462
// Method Definition Index: 10463
// Method Definition Index: 10464
// Method Definition Index: 10465
// Method Definition Index: 10466
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m81EC3EA61102FB4C6B1365EBB44F077DB492F667 (ReadOnlyCollection_1_t2401BF20081A5300090A5FC70F287797DBFE10B0* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	StyleValueManagedU5BU5D_tA36DD573E215D5C8EE43B4BD109BE2AA3902E1E9* V_0 = NULL;
	Type_t* V_1 = NULL;
	Type_t* V_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = il2cpp_codegen_array_get_rank(L_1);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0030:
	{
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = il2cpp_codegen_array_get_length(L_6);
		int32_t L_8 = ___1_index;
		int32_t L_9;
		L_9 = ReadOnlyCollection_1_get_Count_m52CA7994F4FAC8981DF7318B0E18B5484676E392(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, L_8))) >= ((int32_t)L_9)))
		{
			goto IL_0046;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(5, NULL);
	}

IL_0046:
	{
		RuntimeArray* L_10 = ___0_array;
		V_0 = ((StyleValueManagedU5BU5D_tA36DD573E215D5C8EE43B4BD109BE2AA3902E1E9*)IsInstSealed((RuntimeObject*)L_10, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)));
		StyleValueManagedU5BU5D_tA36DD573E215D5C8EE43B4BD109BE2AA3902E1E9* L_11 = V_0;
		if (!L_11)
		{
			goto IL_005e;
		}
	}
	{
		RuntimeObject* L_12 = __this->___list;
		StyleValueManagedU5BU5D_tA36DD573E215D5C8EE43B4BD109BE2AA3902E1E9* L_13 = V_0;
		int32_t L_14 = ___1_index;
		NullCheck(L_12);
		InterfaceActionInvoker2< StyleValueManagedU5BU5D_tA36DD573E215D5C8EE43B4BD109BE2AA3902E1E9*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_12, L_13, L_14);
		return;
	}

IL_005e:
	{
		RuntimeArray* L_15 = ___0_array;
		NullCheck(L_15);
		Type_t* L_16;
		L_16 = il2cpp_codegen_object_get_type(L_15);
		NullCheck(L_16);
		Type_t* L_17;
		L_17 = VirtualFuncInvoker0< Type_t* >::Invoke(46, L_16);
		V_1 = L_17;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 12)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		V_2 = L_19;
		Type_t* L_20 = V_1;
		Type_t* L_21 = V_2;
		NullCheck(L_20);
		bool L_22;
		L_22 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_20, L_21);
		if (L_22)
		{
			goto IL_008c;
		}
	}
	{
		Type_t* L_23 = V_2;
		Type_t* L_24 = V_1;
		NullCheck(L_23);
		bool L_25;
		L_25 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_23, L_24);
		if (L_25)
		{
			goto IL_008c;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_008c:
	{
		RuntimeArray* L_26 = ___0_array;
		V_3 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_26, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = V_3;
		if (L_27)
		{
			goto IL_009b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_009b:
	{
		RuntimeObject* L_28 = __this->___list;
		NullCheck(L_28);
		int32_t L_29;
		L_29 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_28);
		V_4 = L_29;
	}
	try
	{
		{
			V_5 = 0;
			goto IL_00cd_1;
		}

IL_00ad_1:
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_30 = V_3;
			int32_t L_31 = ___1_index;
			int32_t L_32 = L_31;
			___1_index = ((int32_t)il2cpp_codegen_add(L_32, 1));
			RuntimeObject* L_33 = __this->___list;
			int32_t L_34 = V_5;
			NullCheck(L_33);
			StyleValueManaged_t68DFBEC1594279E4DC56634FD5092318D1E9A5F4 L_35;
			L_35 = InterfaceFuncInvoker1< StyleValueManaged_t68DFBEC1594279E4DC56634FD5092318D1E9A5F4, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_33, L_34);
			StyleValueManaged_t68DFBEC1594279E4DC56634FD5092318D1E9A5F4 L_36 = L_35;
			RuntimeObject* L_37 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_36);
			NullCheck(L_30);
			ArrayElementTypeCheck (L_30, L_37);
			(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (RuntimeObject*)L_37);
			int32_t L_38 = V_5;
			V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
		}

IL_00cd_1:
		{
			int32_t L_39 = V_5;
			int32_t L_40 = V_4;
			if ((((int32_t)L_39) < ((int32_t)L_40)))
			{
				goto IL_00ad_1;
			}
		}
		{
			goto IL_00dd;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00d5;
		}
		throw e;
	}

CATCH_00d5:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_41 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_00dd;
	}

IL_00dd:
	{
		return;
	}
}
// Method Definition Index: 10467
// Method Definition Index: 10468
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_System_Collections_IList_get_Item_m7F5A12B7B610BFAE03862B8ACC4056CC5FF4A5F9 (ReadOnlyCollection_1_t2401BF20081A5300090A5FC70F287797DBFE10B0* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		StyleValueManaged_t68DFBEC1594279E4DC56634FD5092318D1E9A5F4 L_2;
		L_2 = InterfaceFuncInvoker1< StyleValueManaged_t68DFBEC1594279E4DC56634FD5092318D1E9A5F4, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		StyleValueManaged_t68DFBEC1594279E4DC56634FD5092318D1E9A5F4 L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_3);
		return L_4;
	}
}
// Method Definition Index: 10469
// Method Definition Index: 10470
// Method Definition Index: 10471
// Method Definition Index: 10472
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m069880AD95C6EBF71508C3D0683317C53113800C (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	StyleValueManaged_t68DFBEC1594279E4DC56634FD5092318D1E9A5F4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(StyleValueManaged_t68DFBEC1594279E4DC56634FD5092318D1E9A5F4));
		StyleValueManaged_t68DFBEC1594279E4DC56634FD5092318D1E9A5F4 L_2 = V_0;
		return false;
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
// Method Definition Index: 10473
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_System_Collections_IList_Contains_m8B79899A2266E5BC8521CA1807F2FA9D66D117D7 (ReadOnlyCollection_1_t2401BF20081A5300090A5FC70F287797DBFE10B0* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_m069880AD95C6EBF71508C3D0683317C53113800C(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		bool L_3;
		L_3 = ReadOnlyCollection_1_Contains_m8E805DDCC9D2CBF698432996185663AF947F2FA0(__this, ((*(StyleValueManaged_t68DFBEC1594279E4DC56634FD5092318D1E9A5F4*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// Method Definition Index: 10474
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_System_Collections_IList_IndexOf_mCEE63DDB69B2385C9DC8018C090179CADF9A100D (ReadOnlyCollection_1_t2401BF20081A5300090A5FC70F287797DBFE10B0* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_m069880AD95C6EBF71508C3D0683317C53113800C(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		int32_t L_3;
		L_3 = ReadOnlyCollection_1_IndexOf_mA017774366396F9121936E8529BA288A0E9244CE(__this, ((*(StyleValueManaged_t68DFBEC1594279E4DC56634FD5092318D1E9A5F4*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15));
		return L_3;
	}

IL_0015:
	{
		return (-1);
	}
}
// Method Definition Index: 10475
// Method Definition Index: 10476
// Method Definition Index: 10477
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 10449
// Method Definition Index: 10450
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_mA070C2C4E69ECF4F1658E281C60BF698FD5A5A8F (ReadOnlyCollection_1_tBE445934E4BBFAD9104AC1AFC81C07456740D5B9* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0);
		return L_1;
	}
}
// Method Definition Index: 10451
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleVariable_t5D4DEC936102A13961F4F2C6214B83D6CDC56269 ReadOnlyCollection_1_get_Item_m83AA77977B4061612400F954B4FD218E27454399 (ReadOnlyCollection_1_tBE445934E4BBFAD9104AC1AFC81C07456740D5B9* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		StyleVariable_t5D4DEC936102A13961F4F2C6214B83D6CDC56269 L_2;
		L_2 = InterfaceFuncInvoker1< StyleVariable_t5D4DEC936102A13961F4F2C6214B83D6CDC56269, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10452
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m79D6B93F48A882214613F65736C4275CCC7FC3FF (ReadOnlyCollection_1_tBE445934E4BBFAD9104AC1AFC81C07456740D5B9* __this, StyleVariable_t5D4DEC936102A13961F4F2C6214B83D6CDC56269 ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		StyleVariable_t5D4DEC936102A13961F4F2C6214B83D6CDC56269 L_1 = ___0_value;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, StyleVariable_t5D4DEC936102A13961F4F2C6214B83D6CDC56269 >::Invoke(4, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10453
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_CopyTo_m91ACEEAA8B515252D55281077107BA65FA633B21 (ReadOnlyCollection_1_tBE445934E4BBFAD9104AC1AFC81C07456740D5B9* __this, StyleVariableU5BU5D_tFE786BD2C1F914C1605C072F0BB10C405C0B4D96* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		StyleVariableU5BU5D_tFE786BD2C1F914C1605C072F0BB10C405C0B4D96* L_1 = ___0_array;
		int32_t L_2 = ___1_index;
		NullCheck(L_0);
		InterfaceActionInvoker2< StyleVariableU5BU5D_tFE786BD2C1F914C1605C072F0BB10C405C0B4D96*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1, L_2);
		return;
	}
}
// Method Definition Index: 10454
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_GetEnumerator_m78E323E309901995C969130D746F6BE9F499EB54 (ReadOnlyCollection_1_tBE445934E4BBFAD9104AC1AFC81C07456740D5B9* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 7), L_0);
		return L_1;
	}
}
// Method Definition Index: 10455
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m59C4EFADD346BE75CA43C56F812E67C011CF75F9 (ReadOnlyCollection_1_tBE445934E4BBFAD9104AC1AFC81C07456740D5B9* __this, StyleVariable_t5D4DEC936102A13961F4F2C6214B83D6CDC56269 ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		StyleVariable_t5D4DEC936102A13961F4F2C6214B83D6CDC56269 L_1 = ___0_value;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, StyleVariable_t5D4DEC936102A13961F4F2C6214B83D6CDC56269 >::Invoke(2, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10456
// Method Definition Index: 10457
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleVariable_t5D4DEC936102A13961F4F2C6214B83D6CDC56269 ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_mF4D69089BD265A3A80C3A320FBAC1679562B41B5 (ReadOnlyCollection_1_tBE445934E4BBFAD9104AC1AFC81C07456740D5B9* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		StyleVariable_t5D4DEC936102A13961F4F2C6214B83D6CDC56269 L_2;
		L_2 = InterfaceFuncInvoker1< StyleVariable_t5D4DEC936102A13961F4F2C6214B83D6CDC56269, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10458
// Method Definition Index: 10459
// Method Definition Index: 10460
// Method Definition Index: 10461
// Method Definition Index: 10462
// Method Definition Index: 10463
// Method Definition Index: 10464
// Method Definition Index: 10465
// Method Definition Index: 10466
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m07EE168A8E59010DC8F4BC3E2FA54C332C247E41 (ReadOnlyCollection_1_tBE445934E4BBFAD9104AC1AFC81C07456740D5B9* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	StyleVariableU5BU5D_tFE786BD2C1F914C1605C072F0BB10C405C0B4D96* V_0 = NULL;
	Type_t* V_1 = NULL;
	Type_t* V_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = il2cpp_codegen_array_get_rank(L_1);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0030:
	{
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = il2cpp_codegen_array_get_length(L_6);
		int32_t L_8 = ___1_index;
		int32_t L_9;
		L_9 = ReadOnlyCollection_1_get_Count_mA070C2C4E69ECF4F1658E281C60BF698FD5A5A8F(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, L_8))) >= ((int32_t)L_9)))
		{
			goto IL_0046;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(5, NULL);
	}

IL_0046:
	{
		RuntimeArray* L_10 = ___0_array;
		V_0 = ((StyleVariableU5BU5D_tFE786BD2C1F914C1605C072F0BB10C405C0B4D96*)IsInstSealed((RuntimeObject*)L_10, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)));
		StyleVariableU5BU5D_tFE786BD2C1F914C1605C072F0BB10C405C0B4D96* L_11 = V_0;
		if (!L_11)
		{
			goto IL_005e;
		}
	}
	{
		RuntimeObject* L_12 = __this->___list;
		StyleVariableU5BU5D_tFE786BD2C1F914C1605C072F0BB10C405C0B4D96* L_13 = V_0;
		int32_t L_14 = ___1_index;
		NullCheck(L_12);
		InterfaceActionInvoker2< StyleVariableU5BU5D_tFE786BD2C1F914C1605C072F0BB10C405C0B4D96*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_12, L_13, L_14);
		return;
	}

IL_005e:
	{
		RuntimeArray* L_15 = ___0_array;
		NullCheck(L_15);
		Type_t* L_16;
		L_16 = il2cpp_codegen_object_get_type(L_15);
		NullCheck(L_16);
		Type_t* L_17;
		L_17 = VirtualFuncInvoker0< Type_t* >::Invoke(46, L_16);
		V_1 = L_17;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 12)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		V_2 = L_19;
		Type_t* L_20 = V_1;
		Type_t* L_21 = V_2;
		NullCheck(L_20);
		bool L_22;
		L_22 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_20, L_21);
		if (L_22)
		{
			goto IL_008c;
		}
	}
	{
		Type_t* L_23 = V_2;
		Type_t* L_24 = V_1;
		NullCheck(L_23);
		bool L_25;
		L_25 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_23, L_24);
		if (L_25)
		{
			goto IL_008c;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_008c:
	{
		RuntimeArray* L_26 = ___0_array;
		V_3 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_26, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = V_3;
		if (L_27)
		{
			goto IL_009b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_009b:
	{
		RuntimeObject* L_28 = __this->___list;
		NullCheck(L_28);
		int32_t L_29;
		L_29 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_28);
		V_4 = L_29;
	}
	try
	{
		{
			V_5 = 0;
			goto IL_00cd_1;
		}

IL_00ad_1:
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_30 = V_3;
			int32_t L_31 = ___1_index;
			int32_t L_32 = L_31;
			___1_index = ((int32_t)il2cpp_codegen_add(L_32, 1));
			RuntimeObject* L_33 = __this->___list;
			int32_t L_34 = V_5;
			NullCheck(L_33);
			StyleVariable_t5D4DEC936102A13961F4F2C6214B83D6CDC56269 L_35;
			L_35 = InterfaceFuncInvoker1< StyleVariable_t5D4DEC936102A13961F4F2C6214B83D6CDC56269, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_33, L_34);
			StyleVariable_t5D4DEC936102A13961F4F2C6214B83D6CDC56269 L_36 = L_35;
			RuntimeObject* L_37 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_36);
			NullCheck(L_30);
			ArrayElementTypeCheck (L_30, L_37);
			(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (RuntimeObject*)L_37);
			int32_t L_38 = V_5;
			V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
		}

IL_00cd_1:
		{
			int32_t L_39 = V_5;
			int32_t L_40 = V_4;
			if ((((int32_t)L_39) < ((int32_t)L_40)))
			{
				goto IL_00ad_1;
			}
		}
		{
			goto IL_00dd;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00d5;
		}
		throw e;
	}

CATCH_00d5:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_41 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_00dd;
	}

IL_00dd:
	{
		return;
	}
}
// Method Definition Index: 10467
// Method Definition Index: 10468
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_System_Collections_IList_get_Item_m76054C53EE82A425A55444309C6B8DC6B396F93C (ReadOnlyCollection_1_tBE445934E4BBFAD9104AC1AFC81C07456740D5B9* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		StyleVariable_t5D4DEC936102A13961F4F2C6214B83D6CDC56269 L_2;
		L_2 = InterfaceFuncInvoker1< StyleVariable_t5D4DEC936102A13961F4F2C6214B83D6CDC56269, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		StyleVariable_t5D4DEC936102A13961F4F2C6214B83D6CDC56269 L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_3);
		return L_4;
	}
}
// Method Definition Index: 10469
// Method Definition Index: 10470
// Method Definition Index: 10471
// Method Definition Index: 10472
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m3C659BC7492D6D23A67860B02DE0D2BF56988CAA (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	StyleVariable_t5D4DEC936102A13961F4F2C6214B83D6CDC56269 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(StyleVariable_t5D4DEC936102A13961F4F2C6214B83D6CDC56269));
		StyleVariable_t5D4DEC936102A13961F4F2C6214B83D6CDC56269 L_2 = V_0;
		return false;
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
// Method Definition Index: 10473
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_System_Collections_IList_Contains_m299DC05E2277A750755AFC7467EBC2E31323FD70 (ReadOnlyCollection_1_tBE445934E4BBFAD9104AC1AFC81C07456740D5B9* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_m3C659BC7492D6D23A67860B02DE0D2BF56988CAA(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		bool L_3;
		L_3 = ReadOnlyCollection_1_Contains_m79D6B93F48A882214613F65736C4275CCC7FC3FF(__this, ((*(StyleVariable_t5D4DEC936102A13961F4F2C6214B83D6CDC56269*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// Method Definition Index: 10474
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_System_Collections_IList_IndexOf_mC89F7429FBDA4F11F098354AAAB9F7E36C386637 (ReadOnlyCollection_1_tBE445934E4BBFAD9104AC1AFC81C07456740D5B9* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_m3C659BC7492D6D23A67860B02DE0D2BF56988CAA(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		int32_t L_3;
		L_3 = ReadOnlyCollection_1_IndexOf_m59C4EFADD346BE75CA43C56F812E67C011CF75F9(__this, ((*(StyleVariable_t5D4DEC936102A13961F4F2C6214B83D6CDC56269*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15));
		return L_3;
	}

IL_0015:
	{
		return (-1);
	}
}
// Method Definition Index: 10475
// Method Definition Index: 10476
// Method Definition Index: 10477
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 10449
// Method Definition Index: 10450
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m21B7575FC88C1F0EB39B77529C38A0286A3B575F (ReadOnlyCollection_1_tB270E5CCE3D7607E7CDDBE1B835360A0E7B07DF4* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0);
		return L_1;
	}
}
// Method Definition Index: 10451
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Substring_t2E16755269E6716C22074D6BC0A9099915E67849 ReadOnlyCollection_1_get_Item_m6C7D2E0028439F81A27ABAF4929EE388D95C8560 (ReadOnlyCollection_1_tB270E5CCE3D7607E7CDDBE1B835360A0E7B07DF4* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		Substring_t2E16755269E6716C22074D6BC0A9099915E67849 L_2;
		L_2 = InterfaceFuncInvoker1< Substring_t2E16755269E6716C22074D6BC0A9099915E67849, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10452
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m89291249B5D4B20D9F07C3B162755A25BC44C530 (ReadOnlyCollection_1_tB270E5CCE3D7607E7CDDBE1B835360A0E7B07DF4* __this, Substring_t2E16755269E6716C22074D6BC0A9099915E67849 ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		Substring_t2E16755269E6716C22074D6BC0A9099915E67849 L_1 = ___0_value;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, Substring_t2E16755269E6716C22074D6BC0A9099915E67849 >::Invoke(4, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10453
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_CopyTo_m527D02C763E4EFC677AA553F0EFB5CCE824C6B9D (ReadOnlyCollection_1_tB270E5CCE3D7607E7CDDBE1B835360A0E7B07DF4* __this, SubstringU5BU5D_t9973080FDB519ED771E9FB3E6FDC90DF45211B77* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		SubstringU5BU5D_t9973080FDB519ED771E9FB3E6FDC90DF45211B77* L_1 = ___0_array;
		int32_t L_2 = ___1_index;
		NullCheck(L_0);
		InterfaceActionInvoker2< SubstringU5BU5D_t9973080FDB519ED771E9FB3E6FDC90DF45211B77*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1, L_2);
		return;
	}
}
// Method Definition Index: 10454
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_GetEnumerator_mD3078BB46A097F19E331A0D2F3FE12161024D77A (ReadOnlyCollection_1_tB270E5CCE3D7607E7CDDBE1B835360A0E7B07DF4* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 7), L_0);
		return L_1;
	}
}
// Method Definition Index: 10455
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_mA817652F7A04A40F42DD4F4F8C12D4E9E4508B51 (ReadOnlyCollection_1_tB270E5CCE3D7607E7CDDBE1B835360A0E7B07DF4* __this, Substring_t2E16755269E6716C22074D6BC0A9099915E67849 ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		Substring_t2E16755269E6716C22074D6BC0A9099915E67849 L_1 = ___0_value;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, Substring_t2E16755269E6716C22074D6BC0A9099915E67849 >::Invoke(2, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10456
// Method Definition Index: 10457
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Substring_t2E16755269E6716C22074D6BC0A9099915E67849 ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m37C85E654D15BC8DE315159C72325DE13ADD91AF (ReadOnlyCollection_1_tB270E5CCE3D7607E7CDDBE1B835360A0E7B07DF4* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		Substring_t2E16755269E6716C22074D6BC0A9099915E67849 L_2;
		L_2 = InterfaceFuncInvoker1< Substring_t2E16755269E6716C22074D6BC0A9099915E67849, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10458
// Method Definition Index: 10459
// Method Definition Index: 10460
// Method Definition Index: 10461
// Method Definition Index: 10462
// Method Definition Index: 10463
// Method Definition Index: 10464
// Method Definition Index: 10465
// Method Definition Index: 10466
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_mE1846373CA88A6133FF4112EFD7CEF3D7E247FC9 (ReadOnlyCollection_1_tB270E5CCE3D7607E7CDDBE1B835360A0E7B07DF4* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	SubstringU5BU5D_t9973080FDB519ED771E9FB3E6FDC90DF45211B77* V_0 = NULL;
	Type_t* V_1 = NULL;
	Type_t* V_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = il2cpp_codegen_array_get_rank(L_1);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0030:
	{
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = il2cpp_codegen_array_get_length(L_6);
		int32_t L_8 = ___1_index;
		int32_t L_9;
		L_9 = ReadOnlyCollection_1_get_Count_m21B7575FC88C1F0EB39B77529C38A0286A3B575F(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, L_8))) >= ((int32_t)L_9)))
		{
			goto IL_0046;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(5, NULL);
	}

IL_0046:
	{
		RuntimeArray* L_10 = ___0_array;
		V_0 = ((SubstringU5BU5D_t9973080FDB519ED771E9FB3E6FDC90DF45211B77*)IsInstSealed((RuntimeObject*)L_10, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)));
		SubstringU5BU5D_t9973080FDB519ED771E9FB3E6FDC90DF45211B77* L_11 = V_0;
		if (!L_11)
		{
			goto IL_005e;
		}
	}
	{
		RuntimeObject* L_12 = __this->___list;
		SubstringU5BU5D_t9973080FDB519ED771E9FB3E6FDC90DF45211B77* L_13 = V_0;
		int32_t L_14 = ___1_index;
		NullCheck(L_12);
		InterfaceActionInvoker2< SubstringU5BU5D_t9973080FDB519ED771E9FB3E6FDC90DF45211B77*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_12, L_13, L_14);
		return;
	}

IL_005e:
	{
		RuntimeArray* L_15 = ___0_array;
		NullCheck(L_15);
		Type_t* L_16;
		L_16 = il2cpp_codegen_object_get_type(L_15);
		NullCheck(L_16);
		Type_t* L_17;
		L_17 = VirtualFuncInvoker0< Type_t* >::Invoke(46, L_16);
		V_1 = L_17;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 12)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		V_2 = L_19;
		Type_t* L_20 = V_1;
		Type_t* L_21 = V_2;
		NullCheck(L_20);
		bool L_22;
		L_22 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_20, L_21);
		if (L_22)
		{
			goto IL_008c;
		}
	}
	{
		Type_t* L_23 = V_2;
		Type_t* L_24 = V_1;
		NullCheck(L_23);
		bool L_25;
		L_25 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_23, L_24);
		if (L_25)
		{
			goto IL_008c;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_008c:
	{
		RuntimeArray* L_26 = ___0_array;
		V_3 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_26, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = V_3;
		if (L_27)
		{
			goto IL_009b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_009b:
	{
		RuntimeObject* L_28 = __this->___list;
		NullCheck(L_28);
		int32_t L_29;
		L_29 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_28);
		V_4 = L_29;
	}
	try
	{
		{
			V_5 = 0;
			goto IL_00cd_1;
		}

IL_00ad_1:
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_30 = V_3;
			int32_t L_31 = ___1_index;
			int32_t L_32 = L_31;
			___1_index = ((int32_t)il2cpp_codegen_add(L_32, 1));
			RuntimeObject* L_33 = __this->___list;
			int32_t L_34 = V_5;
			NullCheck(L_33);
			Substring_t2E16755269E6716C22074D6BC0A9099915E67849 L_35;
			L_35 = InterfaceFuncInvoker1< Substring_t2E16755269E6716C22074D6BC0A9099915E67849, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_33, L_34);
			Substring_t2E16755269E6716C22074D6BC0A9099915E67849 L_36 = L_35;
			RuntimeObject* L_37 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_36);
			NullCheck(L_30);
			ArrayElementTypeCheck (L_30, L_37);
			(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (RuntimeObject*)L_37);
			int32_t L_38 = V_5;
			V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
		}

IL_00cd_1:
		{
			int32_t L_39 = V_5;
			int32_t L_40 = V_4;
			if ((((int32_t)L_39) < ((int32_t)L_40)))
			{
				goto IL_00ad_1;
			}
		}
		{
			goto IL_00dd;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00d5;
		}
		throw e;
	}

CATCH_00d5:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_41 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_00dd;
	}

IL_00dd:
	{
		return;
	}
}
// Method Definition Index: 10467
// Method Definition Index: 10468
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_System_Collections_IList_get_Item_m6AC2C3A0CC2A9CDFCD53A21A7C599B0145AC93B5 (ReadOnlyCollection_1_tB270E5CCE3D7607E7CDDBE1B835360A0E7B07DF4* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		Substring_t2E16755269E6716C22074D6BC0A9099915E67849 L_2;
		L_2 = InterfaceFuncInvoker1< Substring_t2E16755269E6716C22074D6BC0A9099915E67849, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		Substring_t2E16755269E6716C22074D6BC0A9099915E67849 L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_3);
		return L_4;
	}
}
// Method Definition Index: 10469
// Method Definition Index: 10470
// Method Definition Index: 10471
// Method Definition Index: 10472
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_mEECB28AFAAAC26A7C6E843A076A43DCE2F55CDCA (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	Substring_t2E16755269E6716C22074D6BC0A9099915E67849 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Substring_t2E16755269E6716C22074D6BC0A9099915E67849));
		Substring_t2E16755269E6716C22074D6BC0A9099915E67849 L_2 = V_0;
		return false;
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
// Method Definition Index: 10473
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_System_Collections_IList_Contains_m12FE6B60D06125FB981A831339817D94736C0229 (ReadOnlyCollection_1_tB270E5CCE3D7607E7CDDBE1B835360A0E7B07DF4* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_mEECB28AFAAAC26A7C6E843A076A43DCE2F55CDCA(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		bool L_3;
		L_3 = ReadOnlyCollection_1_Contains_m89291249B5D4B20D9F07C3B162755A25BC44C530(__this, ((*(Substring_t2E16755269E6716C22074D6BC0A9099915E67849*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// Method Definition Index: 10474
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_System_Collections_IList_IndexOf_mA017823D73B9D0970F14FF3F16410DCDB45B44A8 (ReadOnlyCollection_1_tB270E5CCE3D7607E7CDDBE1B835360A0E7B07DF4* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_mEECB28AFAAAC26A7C6E843A076A43DCE2F55CDCA(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		int32_t L_3;
		L_3 = ReadOnlyCollection_1_IndexOf_mA817652F7A04A40F42DD4F4F8C12D4E9E4508B51(__this, ((*(Substring_t2E16755269E6716C22074D6BC0A9099915E67849*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15));
		return L_3;
	}

IL_0015:
	{
		return (-1);
	}
}
// Method Definition Index: 10475
// Method Definition Index: 10476
// Method Definition Index: 10477
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 10449
// Method Definition Index: 10450
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_mCF1102C753FDF5113EF4E5D4C25361982DAFBF85 (ReadOnlyCollection_1_t8597CBFC170B56C5585AD118A321EEE3B225D172* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0);
		return L_1;
	}
}
// Method Definition Index: 10451
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ReadOnlyCollection_1_get_Item_mD0C687461389CBD60EFAB4015ADFE13F3C6F4D20 (ReadOnlyCollection_1_t8597CBFC170B56C5585AD118A321EEE3B225D172* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_2;
		L_2 = InterfaceFuncInvoker1< TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10452
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m63C69B4D67A2426607107A20654E866917E29572 (ReadOnlyCollection_1_t8597CBFC170B56C5585AD118A321EEE3B225D172* __this, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_1 = ___0_value;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A >::Invoke(4, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10453
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_CopyTo_mE0B2B46284246E441768A10C86EA21FA2919EC4D (ReadOnlyCollection_1_t8597CBFC170B56C5585AD118A321EEE3B225D172* __this, TimeSpanU5BU5D_tC920B81B0E6DCA110DB9D62B5C3850B4BECB87E6* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		TimeSpanU5BU5D_tC920B81B0E6DCA110DB9D62B5C3850B4BECB87E6* L_1 = ___0_array;
		int32_t L_2 = ___1_index;
		NullCheck(L_0);
		InterfaceActionInvoker2< TimeSpanU5BU5D_tC920B81B0E6DCA110DB9D62B5C3850B4BECB87E6*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1, L_2);
		return;
	}
}
// Method Definition Index: 10454
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_GetEnumerator_m9C1163962D922A58620E97E0A50E9BE059AECF3A (ReadOnlyCollection_1_t8597CBFC170B56C5585AD118A321EEE3B225D172* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 7), L_0);
		return L_1;
	}
}
// Method Definition Index: 10455
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_mE411C2C33582AA09CA7FA32BBEB6BA1CFC0A286F (ReadOnlyCollection_1_t8597CBFC170B56C5585AD118A321EEE3B225D172* __this, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_1 = ___0_value;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A >::Invoke(2, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10456
// Method Definition Index: 10457
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_mBC4B8828D9283751AE2E74CC07E24AC877A8EFCB (ReadOnlyCollection_1_t8597CBFC170B56C5585AD118A321EEE3B225D172* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_2;
		L_2 = InterfaceFuncInvoker1< TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10458
// Method Definition Index: 10459
// Method Definition Index: 10460
// Method Definition Index: 10461
// Method Definition Index: 10462
// Method Definition Index: 10463
// Method Definition Index: 10464
// Method Definition Index: 10465
// Method Definition Index: 10466
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_mFA4B889B79C7CA256B3D8247ADD4B0CFEA5237CB (ReadOnlyCollection_1_t8597CBFC170B56C5585AD118A321EEE3B225D172* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	TimeSpanU5BU5D_tC920B81B0E6DCA110DB9D62B5C3850B4BECB87E6* V_0 = NULL;
	Type_t* V_1 = NULL;
	Type_t* V_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = il2cpp_codegen_array_get_rank(L_1);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0030:
	{
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = il2cpp_codegen_array_get_length(L_6);
		int32_t L_8 = ___1_index;
		int32_t L_9;
		L_9 = ReadOnlyCollection_1_get_Count_mCF1102C753FDF5113EF4E5D4C25361982DAFBF85(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, L_8))) >= ((int32_t)L_9)))
		{
			goto IL_0046;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(5, NULL);
	}

IL_0046:
	{
		RuntimeArray* L_10 = ___0_array;
		V_0 = ((TimeSpanU5BU5D_tC920B81B0E6DCA110DB9D62B5C3850B4BECB87E6*)IsInstSealed((RuntimeObject*)L_10, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)));
		TimeSpanU5BU5D_tC920B81B0E6DCA110DB9D62B5C3850B4BECB87E6* L_11 = V_0;
		if (!L_11)
		{
			goto IL_005e;
		}
	}
	{
		RuntimeObject* L_12 = __this->___list;
		TimeSpanU5BU5D_tC920B81B0E6DCA110DB9D62B5C3850B4BECB87E6* L_13 = V_0;
		int32_t L_14 = ___1_index;
		NullCheck(L_12);
		InterfaceActionInvoker2< TimeSpanU5BU5D_tC920B81B0E6DCA110DB9D62B5C3850B4BECB87E6*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_12, L_13, L_14);
		return;
	}

IL_005e:
	{
		RuntimeArray* L_15 = ___0_array;
		NullCheck(L_15);
		Type_t* L_16;
		L_16 = il2cpp_codegen_object_get_type(L_15);
		NullCheck(L_16);
		Type_t* L_17;
		L_17 = VirtualFuncInvoker0< Type_t* >::Invoke(46, L_16);
		V_1 = L_17;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 12)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		V_2 = L_19;
		Type_t* L_20 = V_1;
		Type_t* L_21 = V_2;
		NullCheck(L_20);
		bool L_22;
		L_22 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_20, L_21);
		if (L_22)
		{
			goto IL_008c;
		}
	}
	{
		Type_t* L_23 = V_2;
		Type_t* L_24 = V_1;
		NullCheck(L_23);
		bool L_25;
		L_25 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_23, L_24);
		if (L_25)
		{
			goto IL_008c;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_008c:
	{
		RuntimeArray* L_26 = ___0_array;
		V_3 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_26, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = V_3;
		if (L_27)
		{
			goto IL_009b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_009b:
	{
		RuntimeObject* L_28 = __this->___list;
		NullCheck(L_28);
		int32_t L_29;
		L_29 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_28);
		V_4 = L_29;
	}
	try
	{
		{
			V_5 = 0;
			goto IL_00cd_1;
		}

IL_00ad_1:
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_30 = V_3;
			int32_t L_31 = ___1_index;
			int32_t L_32 = L_31;
			___1_index = ((int32_t)il2cpp_codegen_add(L_32, 1));
			RuntimeObject* L_33 = __this->___list;
			int32_t L_34 = V_5;
			NullCheck(L_33);
			TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_35;
			L_35 = InterfaceFuncInvoker1< TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_33, L_34);
			TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_36 = L_35;
			RuntimeObject* L_37 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_36);
			NullCheck(L_30);
			ArrayElementTypeCheck (L_30, L_37);
			(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (RuntimeObject*)L_37);
			int32_t L_38 = V_5;
			V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
		}

IL_00cd_1:
		{
			int32_t L_39 = V_5;
			int32_t L_40 = V_4;
			if ((((int32_t)L_39) < ((int32_t)L_40)))
			{
				goto IL_00ad_1;
			}
		}
		{
			goto IL_00dd;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00d5;
		}
		throw e;
	}

CATCH_00d5:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_41 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_00dd;
	}

IL_00dd:
	{
		return;
	}
}
// Method Definition Index: 10467
// Method Definition Index: 10468
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_System_Collections_IList_get_Item_m2454305A356264966D05D20E3A1FA171C6B525C3 (ReadOnlyCollection_1_t8597CBFC170B56C5585AD118A321EEE3B225D172* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_2;
		L_2 = InterfaceFuncInvoker1< TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_3);
		return L_4;
	}
}
// Method Definition Index: 10469
// Method Definition Index: 10470
// Method Definition Index: 10471
// Method Definition Index: 10472
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m5F32A19B95F6BF4ECAABE5C8199A379F4278B3B4 (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A));
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_2 = V_0;
		return false;
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
// Method Definition Index: 10473
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_System_Collections_IList_Contains_m36195F454AEE5A7297555AECD36C7FAE48FEC2B6 (ReadOnlyCollection_1_t8597CBFC170B56C5585AD118A321EEE3B225D172* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_m5F32A19B95F6BF4ECAABE5C8199A379F4278B3B4(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		bool L_3;
		L_3 = ReadOnlyCollection_1_Contains_m63C69B4D67A2426607107A20654E866917E29572(__this, ((*(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// Method Definition Index: 10474
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_System_Collections_IList_IndexOf_m206C9C767E7D0B8DE51595E9426551ABD5F35819 (ReadOnlyCollection_1_t8597CBFC170B56C5585AD118A321EEE3B225D172* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_m5F32A19B95F6BF4ECAABE5C8199A379F4278B3B4(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		int32_t L_3;
		L_3 = ReadOnlyCollection_1_IndexOf_mE411C2C33582AA09CA7FA32BBEB6BA1CFC0A286F(__this, ((*(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15));
		return L_3;
	}

IL_0015:
	{
		return (-1);
	}
}
// Method Definition Index: 10475
// Method Definition Index: 10476
// Method Definition Index: 10477
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 10449
// Method Definition Index: 10450
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m1B303B771A898F2B2B6BFC1858958F3256DD3E99 (ReadOnlyCollection_1_tFF6716AACE48FE7B167A53ED10AE04FA2A2AB83A* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0);
		return L_1;
	}
}
// Method Definition Index: 10451
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E ReadOnlyCollection_1_get_Item_m2DD6648DB48F70A8842B2436A7332311A6626F1A (ReadOnlyCollection_1_tFF6716AACE48FE7B167A53ED10AE04FA2A2AB83A* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E L_2;
		L_2 = InterfaceFuncInvoker1< TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10452
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m02DC5E9462836451750318F47E93084247533EE6 (ReadOnlyCollection_1_tFF6716AACE48FE7B167A53ED10AE04FA2A2AB83A* __this, TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E L_1 = ___0_value;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E >::Invoke(4, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10453
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_CopyTo_m95C34D407976A5EC5CEC9903E8CAB9AD36305784 (ReadOnlyCollection_1_tFF6716AACE48FE7B167A53ED10AE04FA2A2AB83A* __this, TimeValueU5BU5D_t3EB79C5975D39A0E711250FD8A9547F5312746DE* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		TimeValueU5BU5D_t3EB79C5975D39A0E711250FD8A9547F5312746DE* L_1 = ___0_array;
		int32_t L_2 = ___1_index;
		NullCheck(L_0);
		InterfaceActionInvoker2< TimeValueU5BU5D_t3EB79C5975D39A0E711250FD8A9547F5312746DE*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1, L_2);
		return;
	}
}
// Method Definition Index: 10454
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_GetEnumerator_m9C3388542BEF3E97FD35E3ECF6725440A0FEFFE9 (ReadOnlyCollection_1_tFF6716AACE48FE7B167A53ED10AE04FA2A2AB83A* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 7), L_0);
		return L_1;
	}
}
// Method Definition Index: 10455
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m51CDE7C02C2B73BD9913E8FC0ED84A4308672A73 (ReadOnlyCollection_1_tFF6716AACE48FE7B167A53ED10AE04FA2A2AB83A* __this, TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E L_1 = ___0_value;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E >::Invoke(2, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10456
// Method Definition Index: 10457
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m91343A614ED61BFB949BB44766BAE2B265DF36BE (ReadOnlyCollection_1_tFF6716AACE48FE7B167A53ED10AE04FA2A2AB83A* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E L_2;
		L_2 = InterfaceFuncInvoker1< TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10458
// Method Definition Index: 10459
// Method Definition Index: 10460
// Method Definition Index: 10461
// Method Definition Index: 10462
// Method Definition Index: 10463
// Method Definition Index: 10464
// Method Definition Index: 10465
// Method Definition Index: 10466
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m6495C38DDBCEFD5E8720DC1909B32418EF32385A (ReadOnlyCollection_1_tFF6716AACE48FE7B167A53ED10AE04FA2A2AB83A* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	TimeValueU5BU5D_t3EB79C5975D39A0E711250FD8A9547F5312746DE* V_0 = NULL;
	Type_t* V_1 = NULL;
	Type_t* V_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = il2cpp_codegen_array_get_rank(L_1);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0030:
	{
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = il2cpp_codegen_array_get_length(L_6);
		int32_t L_8 = ___1_index;
		int32_t L_9;
		L_9 = ReadOnlyCollection_1_get_Count_m1B303B771A898F2B2B6BFC1858958F3256DD3E99(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, L_8))) >= ((int32_t)L_9)))
		{
			goto IL_0046;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(5, NULL);
	}

IL_0046:
	{
		RuntimeArray* L_10 = ___0_array;
		V_0 = ((TimeValueU5BU5D_t3EB79C5975D39A0E711250FD8A9547F5312746DE*)IsInstSealed((RuntimeObject*)L_10, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)));
		TimeValueU5BU5D_t3EB79C5975D39A0E711250FD8A9547F5312746DE* L_11 = V_0;
		if (!L_11)
		{
			goto IL_005e;
		}
	}
	{
		RuntimeObject* L_12 = __this->___list;
		TimeValueU5BU5D_t3EB79C5975D39A0E711250FD8A9547F5312746DE* L_13 = V_0;
		int32_t L_14 = ___1_index;
		NullCheck(L_12);
		InterfaceActionInvoker2< TimeValueU5BU5D_t3EB79C5975D39A0E711250FD8A9547F5312746DE*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_12, L_13, L_14);
		return;
	}

IL_005e:
	{
		RuntimeArray* L_15 = ___0_array;
		NullCheck(L_15);
		Type_t* L_16;
		L_16 = il2cpp_codegen_object_get_type(L_15);
		NullCheck(L_16);
		Type_t* L_17;
		L_17 = VirtualFuncInvoker0< Type_t* >::Invoke(46, L_16);
		V_1 = L_17;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 12)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		V_2 = L_19;
		Type_t* L_20 = V_1;
		Type_t* L_21 = V_2;
		NullCheck(L_20);
		bool L_22;
		L_22 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_20, L_21);
		if (L_22)
		{
			goto IL_008c;
		}
	}
	{
		Type_t* L_23 = V_2;
		Type_t* L_24 = V_1;
		NullCheck(L_23);
		bool L_25;
		L_25 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_23, L_24);
		if (L_25)
		{
			goto IL_008c;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_008c:
	{
		RuntimeArray* L_26 = ___0_array;
		V_3 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_26, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = V_3;
		if (L_27)
		{
			goto IL_009b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_009b:
	{
		RuntimeObject* L_28 = __this->___list;
		NullCheck(L_28);
		int32_t L_29;
		L_29 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_28);
		V_4 = L_29;
	}
	try
	{
		{
			V_5 = 0;
			goto IL_00cd_1;
		}

IL_00ad_1:
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_30 = V_3;
			int32_t L_31 = ___1_index;
			int32_t L_32 = L_31;
			___1_index = ((int32_t)il2cpp_codegen_add(L_32, 1));
			RuntimeObject* L_33 = __this->___list;
			int32_t L_34 = V_5;
			NullCheck(L_33);
			TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E L_35;
			L_35 = InterfaceFuncInvoker1< TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_33, L_34);
			TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E L_36 = L_35;
			RuntimeObject* L_37 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_36);
			NullCheck(L_30);
			ArrayElementTypeCheck (L_30, L_37);
			(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (RuntimeObject*)L_37);
			int32_t L_38 = V_5;
			V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
		}

IL_00cd_1:
		{
			int32_t L_39 = V_5;
			int32_t L_40 = V_4;
			if ((((int32_t)L_39) < ((int32_t)L_40)))
			{
				goto IL_00ad_1;
			}
		}
		{
			goto IL_00dd;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00d5;
		}
		throw e;
	}

CATCH_00d5:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_41 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_00dd;
	}

IL_00dd:
	{
		return;
	}
}
// Method Definition Index: 10467
// Method Definition Index: 10468
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_System_Collections_IList_get_Item_mB458F24B3267DF7C6B254D98602CD21246C83C1C (ReadOnlyCollection_1_tFF6716AACE48FE7B167A53ED10AE04FA2A2AB83A* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E L_2;
		L_2 = InterfaceFuncInvoker1< TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_3);
		return L_4;
	}
}
// Method Definition Index: 10469
// Method Definition Index: 10470
// Method Definition Index: 10471
// Method Definition Index: 10472
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_mC19A002D4F9915FA70C0B6DE179B36F8B4DA9B87 (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E));
		TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E L_2 = V_0;
		return false;
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
// Method Definition Index: 10473
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_System_Collections_IList_Contains_m25451603975E07579B503AD1936529F8DC0EA1DA (ReadOnlyCollection_1_tFF6716AACE48FE7B167A53ED10AE04FA2A2AB83A* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_mC19A002D4F9915FA70C0B6DE179B36F8B4DA9B87(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		bool L_3;
		L_3 = ReadOnlyCollection_1_Contains_m02DC5E9462836451750318F47E93084247533EE6(__this, ((*(TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// Method Definition Index: 10474
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_System_Collections_IList_IndexOf_m2CE8E6FEC4468C3EB5AC567E751F9AC7183AE20B (ReadOnlyCollection_1_tFF6716AACE48FE7B167A53ED10AE04FA2A2AB83A* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_mC19A002D4F9915FA70C0B6DE179B36F8B4DA9B87(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		int32_t L_3;
		L_3 = ReadOnlyCollection_1_IndexOf_m51CDE7C02C2B73BD9913E8FC0ED84A4308672A73(__this, ((*(TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15));
		return L_3;
	}

IL_0015:
	{
		return (-1);
	}
}
// Method Definition Index: 10475
// Method Definition Index: 10476
// Method Definition Index: 10477
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 10449
// Method Definition Index: 10450
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m1FD851DFDFB329BAE117BCC71966C01C2D6AF658 (ReadOnlyCollection_1_tCC240C9BD7F4AF6686AA54B53FAD2BED7C354C7D* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0);
		return L_1;
	}
}
// Method Definition Index: 10451
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TrackableKey_t5E448EF061013AFD452918EC5232225B4590EB9B ReadOnlyCollection_1_get_Item_m39616DBC12ECB31738D549AE1B61A50D4C64EB6F (ReadOnlyCollection_1_tCC240C9BD7F4AF6686AA54B53FAD2BED7C354C7D* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		TrackableKey_t5E448EF061013AFD452918EC5232225B4590EB9B L_2;
		L_2 = InterfaceFuncInvoker1< TrackableKey_t5E448EF061013AFD452918EC5232225B4590EB9B, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10452
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_mDC60FC1B56E0FBE92E3C2BAAF6606D537CA78CC0 (ReadOnlyCollection_1_tCC240C9BD7F4AF6686AA54B53FAD2BED7C354C7D* __this, TrackableKey_t5E448EF061013AFD452918EC5232225B4590EB9B ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		TrackableKey_t5E448EF061013AFD452918EC5232225B4590EB9B L_1 = ___0_value;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, TrackableKey_t5E448EF061013AFD452918EC5232225B4590EB9B >::Invoke(4, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10453
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_CopyTo_m02FEF05833614D31E8F5C839F8F31CCD886B5A2A (ReadOnlyCollection_1_tCC240C9BD7F4AF6686AA54B53FAD2BED7C354C7D* __this, TrackableKeyU5BU5D_t53CCCB5B373E040573C0FF1CF1859279EE0AA858* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		TrackableKeyU5BU5D_t53CCCB5B373E040573C0FF1CF1859279EE0AA858* L_1 = ___0_array;
		int32_t L_2 = ___1_index;
		NullCheck(L_0);
		InterfaceActionInvoker2< TrackableKeyU5BU5D_t53CCCB5B373E040573C0FF1CF1859279EE0AA858*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1, L_2);
		return;
	}
}
// Method Definition Index: 10454
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_GetEnumerator_m0EEA480BE224BDBDC76954BE4F5CAB0181B6977A (ReadOnlyCollection_1_tCC240C9BD7F4AF6686AA54B53FAD2BED7C354C7D* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 7), L_0);
		return L_1;
	}
}
// Method Definition Index: 10455
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m18A37130405759393673C8FB52C5DEFDA5916EC8 (ReadOnlyCollection_1_tCC240C9BD7F4AF6686AA54B53FAD2BED7C354C7D* __this, TrackableKey_t5E448EF061013AFD452918EC5232225B4590EB9B ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		TrackableKey_t5E448EF061013AFD452918EC5232225B4590EB9B L_1 = ___0_value;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, TrackableKey_t5E448EF061013AFD452918EC5232225B4590EB9B >::Invoke(2, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10456
// Method Definition Index: 10457
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TrackableKey_t5E448EF061013AFD452918EC5232225B4590EB9B ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m2DA47780D743A711C8546CB9B9B6AA0688D6EC8F (ReadOnlyCollection_1_tCC240C9BD7F4AF6686AA54B53FAD2BED7C354C7D* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		TrackableKey_t5E448EF061013AFD452918EC5232225B4590EB9B L_2;
		L_2 = InterfaceFuncInvoker1< TrackableKey_t5E448EF061013AFD452918EC5232225B4590EB9B, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10458
// Method Definition Index: 10459
// Method Definition Index: 10460
// Method Definition Index: 10461
// Method Definition Index: 10462
// Method Definition Index: 10463
// Method Definition Index: 10464
// Method Definition Index: 10465
// Method Definition Index: 10466
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_mA74A111C2EA36B28B2B746D275C1A05ABB0CD563 (ReadOnlyCollection_1_tCC240C9BD7F4AF6686AA54B53FAD2BED7C354C7D* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	TrackableKeyU5BU5D_t53CCCB5B373E040573C0FF1CF1859279EE0AA858* V_0 = NULL;
	Type_t* V_1 = NULL;
	Type_t* V_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = il2cpp_codegen_array_get_rank(L_1);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0030:
	{
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = il2cpp_codegen_array_get_length(L_6);
		int32_t L_8 = ___1_index;
		int32_t L_9;
		L_9 = ReadOnlyCollection_1_get_Count_m1FD851DFDFB329BAE117BCC71966C01C2D6AF658(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, L_8))) >= ((int32_t)L_9)))
		{
			goto IL_0046;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(5, NULL);
	}

IL_0046:
	{
		RuntimeArray* L_10 = ___0_array;
		V_0 = ((TrackableKeyU5BU5D_t53CCCB5B373E040573C0FF1CF1859279EE0AA858*)IsInstSealed((RuntimeObject*)L_10, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)));
		TrackableKeyU5BU5D_t53CCCB5B373E040573C0FF1CF1859279EE0AA858* L_11 = V_0;
		if (!L_11)
		{
			goto IL_005e;
		}
	}
	{
		RuntimeObject* L_12 = __this->___list;
		TrackableKeyU5BU5D_t53CCCB5B373E040573C0FF1CF1859279EE0AA858* L_13 = V_0;
		int32_t L_14 = ___1_index;
		NullCheck(L_12);
		InterfaceActionInvoker2< TrackableKeyU5BU5D_t53CCCB5B373E040573C0FF1CF1859279EE0AA858*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_12, L_13, L_14);
		return;
	}

IL_005e:
	{
		RuntimeArray* L_15 = ___0_array;
		NullCheck(L_15);
		Type_t* L_16;
		L_16 = il2cpp_codegen_object_get_type(L_15);
		NullCheck(L_16);
		Type_t* L_17;
		L_17 = VirtualFuncInvoker0< Type_t* >::Invoke(46, L_16);
		V_1 = L_17;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 12)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		V_2 = L_19;
		Type_t* L_20 = V_1;
		Type_t* L_21 = V_2;
		NullCheck(L_20);
		bool L_22;
		L_22 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_20, L_21);
		if (L_22)
		{
			goto IL_008c;
		}
	}
	{
		Type_t* L_23 = V_2;
		Type_t* L_24 = V_1;
		NullCheck(L_23);
		bool L_25;
		L_25 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_23, L_24);
		if (L_25)
		{
			goto IL_008c;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_008c:
	{
		RuntimeArray* L_26 = ___0_array;
		V_3 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_26, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = V_3;
		if (L_27)
		{
			goto IL_009b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_009b:
	{
		RuntimeObject* L_28 = __this->___list;
		NullCheck(L_28);
		int32_t L_29;
		L_29 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_28);
		V_4 = L_29;
	}
	try
	{
		{
			V_5 = 0;
			goto IL_00cd_1;
		}

IL_00ad_1:
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_30 = V_3;
			int32_t L_31 = ___1_index;
			int32_t L_32 = L_31;
			___1_index = ((int32_t)il2cpp_codegen_add(L_32, 1));
			RuntimeObject* L_33 = __this->___list;
			int32_t L_34 = V_5;
			NullCheck(L_33);
			TrackableKey_t5E448EF061013AFD452918EC5232225B4590EB9B L_35;
			L_35 = InterfaceFuncInvoker1< TrackableKey_t5E448EF061013AFD452918EC5232225B4590EB9B, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_33, L_34);
			TrackableKey_t5E448EF061013AFD452918EC5232225B4590EB9B L_36 = L_35;
			RuntimeObject* L_37 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_36);
			NullCheck(L_30);
			ArrayElementTypeCheck (L_30, L_37);
			(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (RuntimeObject*)L_37);
			int32_t L_38 = V_5;
			V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
		}

IL_00cd_1:
		{
			int32_t L_39 = V_5;
			int32_t L_40 = V_4;
			if ((((int32_t)L_39) < ((int32_t)L_40)))
			{
				goto IL_00ad_1;
			}
		}
		{
			goto IL_00dd;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00d5;
		}
		throw e;
	}

CATCH_00d5:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_41 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_00dd;
	}

IL_00dd:
	{
		return;
	}
}
// Method Definition Index: 10467
// Method Definition Index: 10468
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_System_Collections_IList_get_Item_mA00BC45DD34EE78AE381FFA57B9C56F0EAA1D47F (ReadOnlyCollection_1_tCC240C9BD7F4AF6686AA54B53FAD2BED7C354C7D* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		TrackableKey_t5E448EF061013AFD452918EC5232225B4590EB9B L_2;
		L_2 = InterfaceFuncInvoker1< TrackableKey_t5E448EF061013AFD452918EC5232225B4590EB9B, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		TrackableKey_t5E448EF061013AFD452918EC5232225B4590EB9B L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_3);
		return L_4;
	}
}
// Method Definition Index: 10469
// Method Definition Index: 10470
// Method Definition Index: 10471
// Method Definition Index: 10472
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m582F5EE1A786B32363472D217A42D888FB6824BE (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	TrackableKey_t5E448EF061013AFD452918EC5232225B4590EB9B V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(TrackableKey_t5E448EF061013AFD452918EC5232225B4590EB9B));
		TrackableKey_t5E448EF061013AFD452918EC5232225B4590EB9B L_2 = V_0;
		return false;
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
// Method Definition Index: 10473
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_System_Collections_IList_Contains_mF9FEC93A5D234E2A097EEFC1EAB530FC6122B1B3 (ReadOnlyCollection_1_tCC240C9BD7F4AF6686AA54B53FAD2BED7C354C7D* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_m582F5EE1A786B32363472D217A42D888FB6824BE(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		bool L_3;
		L_3 = ReadOnlyCollection_1_Contains_mDC60FC1B56E0FBE92E3C2BAAF6606D537CA78CC0(__this, ((*(TrackableKey_t5E448EF061013AFD452918EC5232225B4590EB9B*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// Method Definition Index: 10474
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_System_Collections_IList_IndexOf_m6EAB431BBC64B93A71B672EE73D765D9C100584D (ReadOnlyCollection_1_tCC240C9BD7F4AF6686AA54B53FAD2BED7C354C7D* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_m582F5EE1A786B32363472D217A42D888FB6824BE(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		int32_t L_3;
		L_3 = ReadOnlyCollection_1_IndexOf_m18A37130405759393673C8FB52C5DEFDA5916EC8(__this, ((*(TrackableKey_t5E448EF061013AFD452918EC5232225B4590EB9B*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15));
		return L_3;
	}

IL_0015:
	{
		return (-1);
	}
}
// Method Definition Index: 10475
// Method Definition Index: 10476
// Method Definition Index: 10477
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 10449
// Method Definition Index: 10450
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m208858945002AE69A132CDB66FEABE0C0525AE60 (ReadOnlyCollection_1_t5F8B55EF85E52FBC5F41B42D70D13BC89D4C469A* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0);
		return L_1;
	}
}
// Method Definition Index: 10451
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UICharInfo_t24C2EA0F2F3A938100C271891D9DEB015ABA5FBD ReadOnlyCollection_1_get_Item_m464759B7B6D10B14FDCD82B024412036E5A2E853 (ReadOnlyCollection_1_t5F8B55EF85E52FBC5F41B42D70D13BC89D4C469A* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		UICharInfo_t24C2EA0F2F3A938100C271891D9DEB015ABA5FBD L_2;
		L_2 = InterfaceFuncInvoker1< UICharInfo_t24C2EA0F2F3A938100C271891D9DEB015ABA5FBD, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10452
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m05093008740300A921F7BB341479D97499CF75E0 (ReadOnlyCollection_1_t5F8B55EF85E52FBC5F41B42D70D13BC89D4C469A* __this, UICharInfo_t24C2EA0F2F3A938100C271891D9DEB015ABA5FBD ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		UICharInfo_t24C2EA0F2F3A938100C271891D9DEB015ABA5FBD L_1 = ___0_value;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, UICharInfo_t24C2EA0F2F3A938100C271891D9DEB015ABA5FBD >::Invoke(4, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10453
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_CopyTo_mB750E13BFD28A469FF9B8FFF7E63D1B3903D1613 (ReadOnlyCollection_1_t5F8B55EF85E52FBC5F41B42D70D13BC89D4C469A* __this, UICharInfoU5BU5D_t98D25C0197327978FA4E11B3518901A4839E086C* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		UICharInfoU5BU5D_t98D25C0197327978FA4E11B3518901A4839E086C* L_1 = ___0_array;
		int32_t L_2 = ___1_index;
		NullCheck(L_0);
		InterfaceActionInvoker2< UICharInfoU5BU5D_t98D25C0197327978FA4E11B3518901A4839E086C*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1, L_2);
		return;
	}
}
// Method Definition Index: 10454
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_GetEnumerator_m5C49EF22E43D0EDE02FF81E69BB1E6C30239C67E (ReadOnlyCollection_1_t5F8B55EF85E52FBC5F41B42D70D13BC89D4C469A* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 7), L_0);
		return L_1;
	}
}
// Method Definition Index: 10455
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m04BB6920B51BCC3A3026DF35719210BF7C503C2C (ReadOnlyCollection_1_t5F8B55EF85E52FBC5F41B42D70D13BC89D4C469A* __this, UICharInfo_t24C2EA0F2F3A938100C271891D9DEB015ABA5FBD ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		UICharInfo_t24C2EA0F2F3A938100C271891D9DEB015ABA5FBD L_1 = ___0_value;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, UICharInfo_t24C2EA0F2F3A938100C271891D9DEB015ABA5FBD >::Invoke(2, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10456
// Method Definition Index: 10457
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UICharInfo_t24C2EA0F2F3A938100C271891D9DEB015ABA5FBD ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_mC115C369A2479BE2EB6B69F8F520E14B1A427A36 (ReadOnlyCollection_1_t5F8B55EF85E52FBC5F41B42D70D13BC89D4C469A* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		UICharInfo_t24C2EA0F2F3A938100C271891D9DEB015ABA5FBD L_2;
		L_2 = InterfaceFuncInvoker1< UICharInfo_t24C2EA0F2F3A938100C271891D9DEB015ABA5FBD, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10458
// Method Definition Index: 10459
// Method Definition Index: 10460
// Method Definition Index: 10461
// Method Definition Index: 10462
// Method Definition Index: 10463
// Method Definition Index: 10464
// Method Definition Index: 10465
// Method Definition Index: 10466
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_mA27083155FEA081D61EDD18977496BFA07BE8B88 (ReadOnlyCollection_1_t5F8B55EF85E52FBC5F41B42D70D13BC89D4C469A* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	UICharInfoU5BU5D_t98D25C0197327978FA4E11B3518901A4839E086C* V_0 = NULL;
	Type_t* V_1 = NULL;
	Type_t* V_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = il2cpp_codegen_array_get_rank(L_1);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0030:
	{
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = il2cpp_codegen_array_get_length(L_6);
		int32_t L_8 = ___1_index;
		int32_t L_9;
		L_9 = ReadOnlyCollection_1_get_Count_m208858945002AE69A132CDB66FEABE0C0525AE60(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, L_8))) >= ((int32_t)L_9)))
		{
			goto IL_0046;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(5, NULL);
	}

IL_0046:
	{
		RuntimeArray* L_10 = ___0_array;
		V_0 = ((UICharInfoU5BU5D_t98D25C0197327978FA4E11B3518901A4839E086C*)IsInstSealed((RuntimeObject*)L_10, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)));
		UICharInfoU5BU5D_t98D25C0197327978FA4E11B3518901A4839E086C* L_11 = V_0;
		if (!L_11)
		{
			goto IL_005e;
		}
	}
	{
		RuntimeObject* L_12 = __this->___list;
		UICharInfoU5BU5D_t98D25C0197327978FA4E11B3518901A4839E086C* L_13 = V_0;
		int32_t L_14 = ___1_index;
		NullCheck(L_12);
		InterfaceActionInvoker2< UICharInfoU5BU5D_t98D25C0197327978FA4E11B3518901A4839E086C*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_12, L_13, L_14);
		return;
	}

IL_005e:
	{
		RuntimeArray* L_15 = ___0_array;
		NullCheck(L_15);
		Type_t* L_16;
		L_16 = il2cpp_codegen_object_get_type(L_15);
		NullCheck(L_16);
		Type_t* L_17;
		L_17 = VirtualFuncInvoker0< Type_t* >::Invoke(46, L_16);
		V_1 = L_17;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 12)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		V_2 = L_19;
		Type_t* L_20 = V_1;
		Type_t* L_21 = V_2;
		NullCheck(L_20);
		bool L_22;
		L_22 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_20, L_21);
		if (L_22)
		{
			goto IL_008c;
		}
	}
	{
		Type_t* L_23 = V_2;
		Type_t* L_24 = V_1;
		NullCheck(L_23);
		bool L_25;
		L_25 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_23, L_24);
		if (L_25)
		{
			goto IL_008c;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_008c:
	{
		RuntimeArray* L_26 = ___0_array;
		V_3 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_26, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = V_3;
		if (L_27)
		{
			goto IL_009b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_009b:
	{
		RuntimeObject* L_28 = __this->___list;
		NullCheck(L_28);
		int32_t L_29;
		L_29 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_28);
		V_4 = L_29;
	}
	try
	{
		{
			V_5 = 0;
			goto IL_00cd_1;
		}

IL_00ad_1:
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_30 = V_3;
			int32_t L_31 = ___1_index;
			int32_t L_32 = L_31;
			___1_index = ((int32_t)il2cpp_codegen_add(L_32, 1));
			RuntimeObject* L_33 = __this->___list;
			int32_t L_34 = V_5;
			NullCheck(L_33);
			UICharInfo_t24C2EA0F2F3A938100C271891D9DEB015ABA5FBD L_35;
			L_35 = InterfaceFuncInvoker1< UICharInfo_t24C2EA0F2F3A938100C271891D9DEB015ABA5FBD, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_33, L_34);
			UICharInfo_t24C2EA0F2F3A938100C271891D9DEB015ABA5FBD L_36 = L_35;
			RuntimeObject* L_37 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_36);
			NullCheck(L_30);
			ArrayElementTypeCheck (L_30, L_37);
			(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (RuntimeObject*)L_37);
			int32_t L_38 = V_5;
			V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
		}

IL_00cd_1:
		{
			int32_t L_39 = V_5;
			int32_t L_40 = V_4;
			if ((((int32_t)L_39) < ((int32_t)L_40)))
			{
				goto IL_00ad_1;
			}
		}
		{
			goto IL_00dd;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00d5;
		}
		throw e;
	}

CATCH_00d5:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_41 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_00dd;
	}

IL_00dd:
	{
		return;
	}
}
// Method Definition Index: 10467
// Method Definition Index: 10468
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_System_Collections_IList_get_Item_mC3EC8CEC04C03F33B8B967145FE765F4787F3A7E (ReadOnlyCollection_1_t5F8B55EF85E52FBC5F41B42D70D13BC89D4C469A* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		UICharInfo_t24C2EA0F2F3A938100C271891D9DEB015ABA5FBD L_2;
		L_2 = InterfaceFuncInvoker1< UICharInfo_t24C2EA0F2F3A938100C271891D9DEB015ABA5FBD, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		UICharInfo_t24C2EA0F2F3A938100C271891D9DEB015ABA5FBD L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_3);
		return L_4;
	}
}
// Method Definition Index: 10469
// Method Definition Index: 10470
// Method Definition Index: 10471
// Method Definition Index: 10472
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m7FF4D4B7DB9C5EB381294D17EF153E57E9D90F24 (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	UICharInfo_t24C2EA0F2F3A938100C271891D9DEB015ABA5FBD V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(UICharInfo_t24C2EA0F2F3A938100C271891D9DEB015ABA5FBD));
		UICharInfo_t24C2EA0F2F3A938100C271891D9DEB015ABA5FBD L_2 = V_0;
		return false;
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
// Method Definition Index: 10473
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_System_Collections_IList_Contains_m8185A72D604471A35D7ABD36C0FB3ADC14078E1B (ReadOnlyCollection_1_t5F8B55EF85E52FBC5F41B42D70D13BC89D4C469A* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_m7FF4D4B7DB9C5EB381294D17EF153E57E9D90F24(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		bool L_3;
		L_3 = ReadOnlyCollection_1_Contains_m05093008740300A921F7BB341479D97499CF75E0(__this, ((*(UICharInfo_t24C2EA0F2F3A938100C271891D9DEB015ABA5FBD*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// Method Definition Index: 10474
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_System_Collections_IList_IndexOf_m8E56ECCE1202DFA4F4B8D882222CB144B24A9B13 (ReadOnlyCollection_1_t5F8B55EF85E52FBC5F41B42D70D13BC89D4C469A* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_m7FF4D4B7DB9C5EB381294D17EF153E57E9D90F24(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		int32_t L_3;
		L_3 = ReadOnlyCollection_1_IndexOf_m04BB6920B51BCC3A3026DF35719210BF7C503C2C(__this, ((*(UICharInfo_t24C2EA0F2F3A938100C271891D9DEB015ABA5FBD*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15));
		return L_3;
	}

IL_0015:
	{
		return (-1);
	}
}
// Method Definition Index: 10475
// Method Definition Index: 10476
// Method Definition Index: 10477
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 10449
// Method Definition Index: 10450
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_mF4F25BF826DF061ED78B82A6595649A22FE54A6A (ReadOnlyCollection_1_tAC9F0ECFFCE3DC3797BE610439BF76ACB015D44E* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0);
		return L_1;
	}
}
// Method Definition Index: 10451
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UILineInfo_tC6FF4F85BD2316FADA2148A1789B3FF0B05A6CAC ReadOnlyCollection_1_get_Item_mD19263BE3FE50F7022FD4FDB1C43665449F7C786 (ReadOnlyCollection_1_tAC9F0ECFFCE3DC3797BE610439BF76ACB015D44E* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		UILineInfo_tC6FF4F85BD2316FADA2148A1789B3FF0B05A6CAC L_2;
		L_2 = InterfaceFuncInvoker1< UILineInfo_tC6FF4F85BD2316FADA2148A1789B3FF0B05A6CAC, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10452
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_mC6D50D96188C20173348A47F5374EBB4820BF7FF (ReadOnlyCollection_1_tAC9F0ECFFCE3DC3797BE610439BF76ACB015D44E* __this, UILineInfo_tC6FF4F85BD2316FADA2148A1789B3FF0B05A6CAC ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		UILineInfo_tC6FF4F85BD2316FADA2148A1789B3FF0B05A6CAC L_1 = ___0_value;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, UILineInfo_tC6FF4F85BD2316FADA2148A1789B3FF0B05A6CAC >::Invoke(4, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10453
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_CopyTo_mB769C81D76D64D52CE3F1702FD0B42068CECF49A (ReadOnlyCollection_1_tAC9F0ECFFCE3DC3797BE610439BF76ACB015D44E* __this, UILineInfoU5BU5D_tDD6C8909B58F997A6FB1A17F360E8DBE387204BC* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		UILineInfoU5BU5D_tDD6C8909B58F997A6FB1A17F360E8DBE387204BC* L_1 = ___0_array;
		int32_t L_2 = ___1_index;
		NullCheck(L_0);
		InterfaceActionInvoker2< UILineInfoU5BU5D_tDD6C8909B58F997A6FB1A17F360E8DBE387204BC*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1, L_2);
		return;
	}
}
// Method Definition Index: 10454
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_GetEnumerator_m94648297A3C23D68B3B48B029A19429B7818E0A4 (ReadOnlyCollection_1_tAC9F0ECFFCE3DC3797BE610439BF76ACB015D44E* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 7), L_0);
		return L_1;
	}
}
// Method Definition Index: 10455
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m545FFA46CA3E7EED5B63255AD7A4E091B9ABBF0F (ReadOnlyCollection_1_tAC9F0ECFFCE3DC3797BE610439BF76ACB015D44E* __this, UILineInfo_tC6FF4F85BD2316FADA2148A1789B3FF0B05A6CAC ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		UILineInfo_tC6FF4F85BD2316FADA2148A1789B3FF0B05A6CAC L_1 = ___0_value;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, UILineInfo_tC6FF4F85BD2316FADA2148A1789B3FF0B05A6CAC >::Invoke(2, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10456
// Method Definition Index: 10457
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UILineInfo_tC6FF4F85BD2316FADA2148A1789B3FF0B05A6CAC ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m0F9E7EBB14001DABF2365BB514C64D4C807B7E6E (ReadOnlyCollection_1_tAC9F0ECFFCE3DC3797BE610439BF76ACB015D44E* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		UILineInfo_tC6FF4F85BD2316FADA2148A1789B3FF0B05A6CAC L_2;
		L_2 = InterfaceFuncInvoker1< UILineInfo_tC6FF4F85BD2316FADA2148A1789B3FF0B05A6CAC, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10458
// Method Definition Index: 10459
// Method Definition Index: 10460
// Method Definition Index: 10461
// Method Definition Index: 10462
// Method Definition Index: 10463
// Method Definition Index: 10464
// Method Definition Index: 10465
// Method Definition Index: 10466
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_mAF3ABD65C0F8117D9ABF93ED0ABA5DAE03983543 (ReadOnlyCollection_1_tAC9F0ECFFCE3DC3797BE610439BF76ACB015D44E* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	UILineInfoU5BU5D_tDD6C8909B58F997A6FB1A17F360E8DBE387204BC* V_0 = NULL;
	Type_t* V_1 = NULL;
	Type_t* V_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = il2cpp_codegen_array_get_rank(L_1);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0030:
	{
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = il2cpp_codegen_array_get_length(L_6);
		int32_t L_8 = ___1_index;
		int32_t L_9;
		L_9 = ReadOnlyCollection_1_get_Count_mF4F25BF826DF061ED78B82A6595649A22FE54A6A(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, L_8))) >= ((int32_t)L_9)))
		{
			goto IL_0046;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(5, NULL);
	}

IL_0046:
	{
		RuntimeArray* L_10 = ___0_array;
		V_0 = ((UILineInfoU5BU5D_tDD6C8909B58F997A6FB1A17F360E8DBE387204BC*)IsInstSealed((RuntimeObject*)L_10, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)));
		UILineInfoU5BU5D_tDD6C8909B58F997A6FB1A17F360E8DBE387204BC* L_11 = V_0;
		if (!L_11)
		{
			goto IL_005e;
		}
	}
	{
		RuntimeObject* L_12 = __this->___list;
		UILineInfoU5BU5D_tDD6C8909B58F997A6FB1A17F360E8DBE387204BC* L_13 = V_0;
		int32_t L_14 = ___1_index;
		NullCheck(L_12);
		InterfaceActionInvoker2< UILineInfoU5BU5D_tDD6C8909B58F997A6FB1A17F360E8DBE387204BC*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_12, L_13, L_14);
		return;
	}

IL_005e:
	{
		RuntimeArray* L_15 = ___0_array;
		NullCheck(L_15);
		Type_t* L_16;
		L_16 = il2cpp_codegen_object_get_type(L_15);
		NullCheck(L_16);
		Type_t* L_17;
		L_17 = VirtualFuncInvoker0< Type_t* >::Invoke(46, L_16);
		V_1 = L_17;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 12)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		V_2 = L_19;
		Type_t* L_20 = V_1;
		Type_t* L_21 = V_2;
		NullCheck(L_20);
		bool L_22;
		L_22 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_20, L_21);
		if (L_22)
		{
			goto IL_008c;
		}
	}
	{
		Type_t* L_23 = V_2;
		Type_t* L_24 = V_1;
		NullCheck(L_23);
		bool L_25;
		L_25 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_23, L_24);
		if (L_25)
		{
			goto IL_008c;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_008c:
	{
		RuntimeArray* L_26 = ___0_array;
		V_3 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_26, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = V_3;
		if (L_27)
		{
			goto IL_009b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_009b:
	{
		RuntimeObject* L_28 = __this->___list;
		NullCheck(L_28);
		int32_t L_29;
		L_29 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_28);
		V_4 = L_29;
	}
	try
	{
		{
			V_5 = 0;
			goto IL_00cd_1;
		}

IL_00ad_1:
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_30 = V_3;
			int32_t L_31 = ___1_index;
			int32_t L_32 = L_31;
			___1_index = ((int32_t)il2cpp_codegen_add(L_32, 1));
			RuntimeObject* L_33 = __this->___list;
			int32_t L_34 = V_5;
			NullCheck(L_33);
			UILineInfo_tC6FF4F85BD2316FADA2148A1789B3FF0B05A6CAC L_35;
			L_35 = InterfaceFuncInvoker1< UILineInfo_tC6FF4F85BD2316FADA2148A1789B3FF0B05A6CAC, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_33, L_34);
			UILineInfo_tC6FF4F85BD2316FADA2148A1789B3FF0B05A6CAC L_36 = L_35;
			RuntimeObject* L_37 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_36);
			NullCheck(L_30);
			ArrayElementTypeCheck (L_30, L_37);
			(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (RuntimeObject*)L_37);
			int32_t L_38 = V_5;
			V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
		}

IL_00cd_1:
		{
			int32_t L_39 = V_5;
			int32_t L_40 = V_4;
			if ((((int32_t)L_39) < ((int32_t)L_40)))
			{
				goto IL_00ad_1;
			}
		}
		{
			goto IL_00dd;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00d5;
		}
		throw e;
	}

CATCH_00d5:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_41 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_00dd;
	}

IL_00dd:
	{
		return;
	}
}
// Method Definition Index: 10467
// Method Definition Index: 10468
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_System_Collections_IList_get_Item_mA56336BA1075D07797DA64F584A103B36B85B304 (ReadOnlyCollection_1_tAC9F0ECFFCE3DC3797BE610439BF76ACB015D44E* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		UILineInfo_tC6FF4F85BD2316FADA2148A1789B3FF0B05A6CAC L_2;
		L_2 = InterfaceFuncInvoker1< UILineInfo_tC6FF4F85BD2316FADA2148A1789B3FF0B05A6CAC, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		UILineInfo_tC6FF4F85BD2316FADA2148A1789B3FF0B05A6CAC L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_3);
		return L_4;
	}
}
// Method Definition Index: 10469
// Method Definition Index: 10470
// Method Definition Index: 10471
// Method Definition Index: 10472
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m03C42A942F85B4EC168F87B45CA0C1E0B8B991CC (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	UILineInfo_tC6FF4F85BD2316FADA2148A1789B3FF0B05A6CAC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(UILineInfo_tC6FF4F85BD2316FADA2148A1789B3FF0B05A6CAC));
		UILineInfo_tC6FF4F85BD2316FADA2148A1789B3FF0B05A6CAC L_2 = V_0;
		return false;
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
// Method Definition Index: 10473
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_System_Collections_IList_Contains_m3E2E6F719CDF0D4DDA61E3B287A088A9428653D2 (ReadOnlyCollection_1_tAC9F0ECFFCE3DC3797BE610439BF76ACB015D44E* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_m03C42A942F85B4EC168F87B45CA0C1E0B8B991CC(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		bool L_3;
		L_3 = ReadOnlyCollection_1_Contains_mC6D50D96188C20173348A47F5374EBB4820BF7FF(__this, ((*(UILineInfo_tC6FF4F85BD2316FADA2148A1789B3FF0B05A6CAC*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// Method Definition Index: 10474
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_System_Collections_IList_IndexOf_m51305F78C62AB802A873B07A27C7F72FB2760637 (ReadOnlyCollection_1_tAC9F0ECFFCE3DC3797BE610439BF76ACB015D44E* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_m03C42A942F85B4EC168F87B45CA0C1E0B8B991CC(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		int32_t L_3;
		L_3 = ReadOnlyCollection_1_IndexOf_m545FFA46CA3E7EED5B63255AD7A4E091B9ABBF0F(__this, ((*(UILineInfo_tC6FF4F85BD2316FADA2148A1789B3FF0B05A6CAC*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15));
		return L_3;
	}

IL_0015:
	{
		return (-1);
	}
}
// Method Definition Index: 10475
// Method Definition Index: 10476
// Method Definition Index: 10477
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 10449
// Method Definition Index: 10450
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m1D8F54776E65523E2DFD134DD2FBCB07804B23B5 (ReadOnlyCollection_1_t0279BBDF584EF96177DF75FA7A456E4629B2B09E* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0);
		return L_1;
	}
}
// Method Definition Index: 10451
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 ReadOnlyCollection_1_get_Item_mC97E89BC98243E1F49212A54B72BEF69B58CEF7A (ReadOnlyCollection_1_t0279BBDF584EF96177DF75FA7A456E4629B2B09E* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_2;
		L_2 = InterfaceFuncInvoker1< UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10452
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_mAF5A0A69B2F9B8BF257C52A68C9BAA8A29F6CF17 (ReadOnlyCollection_1_t0279BBDF584EF96177DF75FA7A456E4629B2B09E* __this, UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_1 = ___0_value;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 >::Invoke(4, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10453
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_CopyTo_m8259CE3063D27B9FE180B3F7645B22F87D93D390 (ReadOnlyCollection_1_t0279BBDF584EF96177DF75FA7A456E4629B2B09E* __this, UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* L_1 = ___0_array;
		int32_t L_2 = ___1_index;
		NullCheck(L_0);
		InterfaceActionInvoker2< UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1, L_2);
		return;
	}
}
// Method Definition Index: 10454
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_GetEnumerator_m9853ECF358CC916DC672A4F14D4DEDCE4FBD8AC9 (ReadOnlyCollection_1_t0279BBDF584EF96177DF75FA7A456E4629B2B09E* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 7), L_0);
		return L_1;
	}
}
// Method Definition Index: 10455
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m129FB3AE63A51E593B4BAD57B4A2A9E3104812AC (ReadOnlyCollection_1_t0279BBDF584EF96177DF75FA7A456E4629B2B09E* __this, UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_1 = ___0_value;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 >::Invoke(2, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10456
// Method Definition Index: 10457
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m2F6C350CB7F9B556C855533A3A615211262C2950 (ReadOnlyCollection_1_t0279BBDF584EF96177DF75FA7A456E4629B2B09E* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_2;
		L_2 = InterfaceFuncInvoker1< UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10458
// Method Definition Index: 10459
// Method Definition Index: 10460
// Method Definition Index: 10461
// Method Definition Index: 10462
// Method Definition Index: 10463
// Method Definition Index: 10464
// Method Definition Index: 10465
// Method Definition Index: 10466
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m746E58D1AEA3B079E40F6B94E7F1A2691930884C (ReadOnlyCollection_1_t0279BBDF584EF96177DF75FA7A456E4629B2B09E* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* V_0 = NULL;
	Type_t* V_1 = NULL;
	Type_t* V_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = il2cpp_codegen_array_get_rank(L_1);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0030:
	{
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = il2cpp_codegen_array_get_length(L_6);
		int32_t L_8 = ___1_index;
		int32_t L_9;
		L_9 = ReadOnlyCollection_1_get_Count_m1D8F54776E65523E2DFD134DD2FBCB07804B23B5(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, L_8))) >= ((int32_t)L_9)))
		{
			goto IL_0046;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(5, NULL);
	}

IL_0046:
	{
		RuntimeArray* L_10 = ___0_array;
		V_0 = ((UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F*)IsInstSealed((RuntimeObject*)L_10, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)));
		UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* L_11 = V_0;
		if (!L_11)
		{
			goto IL_005e;
		}
	}
	{
		RuntimeObject* L_12 = __this->___list;
		UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* L_13 = V_0;
		int32_t L_14 = ___1_index;
		NullCheck(L_12);
		InterfaceActionInvoker2< UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_12, L_13, L_14);
		return;
	}

IL_005e:
	{
		RuntimeArray* L_15 = ___0_array;
		NullCheck(L_15);
		Type_t* L_16;
		L_16 = il2cpp_codegen_object_get_type(L_15);
		NullCheck(L_16);
		Type_t* L_17;
		L_17 = VirtualFuncInvoker0< Type_t* >::Invoke(46, L_16);
		V_1 = L_17;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 12)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		V_2 = L_19;
		Type_t* L_20 = V_1;
		Type_t* L_21 = V_2;
		NullCheck(L_20);
		bool L_22;
		L_22 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_20, L_21);
		if (L_22)
		{
			goto IL_008c;
		}
	}
	{
		Type_t* L_23 = V_2;
		Type_t* L_24 = V_1;
		NullCheck(L_23);
		bool L_25;
		L_25 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_23, L_24);
		if (L_25)
		{
			goto IL_008c;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_008c:
	{
		RuntimeArray* L_26 = ___0_array;
		V_3 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_26, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = V_3;
		if (L_27)
		{
			goto IL_009b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_009b:
	{
		RuntimeObject* L_28 = __this->___list;
		NullCheck(L_28);
		int32_t L_29;
		L_29 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_28);
		V_4 = L_29;
	}
	try
	{
		{
			V_5 = 0;
			goto IL_00cd_1;
		}

IL_00ad_1:
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_30 = V_3;
			int32_t L_31 = ___1_index;
			int32_t L_32 = L_31;
			___1_index = ((int32_t)il2cpp_codegen_add(L_32, 1));
			RuntimeObject* L_33 = __this->___list;
			int32_t L_34 = V_5;
			NullCheck(L_33);
			UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_35;
			L_35 = InterfaceFuncInvoker1< UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_33, L_34);
			UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_36 = L_35;
			RuntimeObject* L_37 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_36);
			NullCheck(L_30);
			ArrayElementTypeCheck (L_30, L_37);
			(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (RuntimeObject*)L_37);
			int32_t L_38 = V_5;
			V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
		}

IL_00cd_1:
		{
			int32_t L_39 = V_5;
			int32_t L_40 = V_4;
			if ((((int32_t)L_39) < ((int32_t)L_40)))
			{
				goto IL_00ad_1;
			}
		}
		{
			goto IL_00dd;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00d5;
		}
		throw e;
	}

CATCH_00d5:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_41 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_00dd;
	}

IL_00dd:
	{
		return;
	}
}
// Method Definition Index: 10467
// Method Definition Index: 10468
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_System_Collections_IList_get_Item_m21B928A407E2592BF0F388E719B03719FED65295 (ReadOnlyCollection_1_t0279BBDF584EF96177DF75FA7A456E4629B2B09E* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_2;
		L_2 = InterfaceFuncInvoker1< UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_3);
		return L_4;
	}
}
// Method Definition Index: 10469
// Method Definition Index: 10470
// Method Definition Index: 10471
// Method Definition Index: 10472
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m88E1CA111AE23BF4399AA4FFE4FE8867FE94C854 (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207));
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_2 = V_0;
		return false;
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
// Method Definition Index: 10473
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_System_Collections_IList_Contains_m6320576551FAE6467ECF183511D06F21F7301F18 (ReadOnlyCollection_1_t0279BBDF584EF96177DF75FA7A456E4629B2B09E* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_m88E1CA111AE23BF4399AA4FFE4FE8867FE94C854(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		bool L_3;
		L_3 = ReadOnlyCollection_1_Contains_mAF5A0A69B2F9B8BF257C52A68C9BAA8A29F6CF17(__this, ((*(UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// Method Definition Index: 10474
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_System_Collections_IList_IndexOf_mF4A347F03FF2F96A4BF773F3DC32AB4CE25385F4 (ReadOnlyCollection_1_t0279BBDF584EF96177DF75FA7A456E4629B2B09E* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_m88E1CA111AE23BF4399AA4FFE4FE8867FE94C854(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		int32_t L_3;
		L_3 = ReadOnlyCollection_1_IndexOf_m129FB3AE63A51E593B4BAD57B4A2A9E3104812AC(__this, ((*(UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15));
		return L_3;
	}

IL_0015:
	{
		return (-1);
	}
}
// Method Definition Index: 10475
// Method Definition Index: 10476
// Method Definition Index: 10477
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 10449
// Method Definition Index: 10450
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_mDF41F3A59AEF0E185153710405DC66DBA597FC88 (ReadOnlyCollection_1_t068BDAE7D562067D24182EABF4C4C7AA8C7C5812* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0);
		return L_1;
	}
}
// Method Definition Index: 10451
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t ReadOnlyCollection_1_get_Item_mE2DE15D82E0E9198CFC63F382E0DE0E170D5E970 (ReadOnlyCollection_1_t068BDAE7D562067D24182EABF4C4C7AA8C7C5812* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		uint16_t L_2;
		L_2 = InterfaceFuncInvoker1< uint16_t, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10452
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m3F49FD6FEF35A79AA32F604B1CBF711080A80735 (ReadOnlyCollection_1_t068BDAE7D562067D24182EABF4C4C7AA8C7C5812* __this, uint16_t ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		uint16_t L_1 = ___0_value;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, uint16_t >::Invoke(4, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10453
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_CopyTo_m01A181D4BEA0B9B552B1CCEFEA1F4E23F7E91EE9 (ReadOnlyCollection_1_t068BDAE7D562067D24182EABF4C4C7AA8C7C5812* __this, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_1 = ___0_array;
		int32_t L_2 = ___1_index;
		NullCheck(L_0);
		InterfaceActionInvoker2< UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1, L_2);
		return;
	}
}
// Method Definition Index: 10454
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_GetEnumerator_mEFDE3D23044D1F69DE720A264BCEA7063635F195 (ReadOnlyCollection_1_t068BDAE7D562067D24182EABF4C4C7AA8C7C5812* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 7), L_0);
		return L_1;
	}
}
// Method Definition Index: 10455
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_mDF7DBB43B47AD1AA7E526210C9C76BBA642153DF (ReadOnlyCollection_1_t068BDAE7D562067D24182EABF4C4C7AA8C7C5812* __this, uint16_t ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		uint16_t L_1 = ___0_value;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, uint16_t >::Invoke(2, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10456
// Method Definition Index: 10457
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m7AC80FB1D1258354DC1210115F8151F223A1D2CC (ReadOnlyCollection_1_t068BDAE7D562067D24182EABF4C4C7AA8C7C5812* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		uint16_t L_2;
		L_2 = InterfaceFuncInvoker1< uint16_t, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10458
// Method Definition Index: 10459
// Method Definition Index: 10460
// Method Definition Index: 10461
// Method Definition Index: 10462
// Method Definition Index: 10463
// Method Definition Index: 10464
// Method Definition Index: 10465
// Method Definition Index: 10466
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m7FEE6D587262FE73736EB88CC30EC6F6B5ED0732 (ReadOnlyCollection_1_t068BDAE7D562067D24182EABF4C4C7AA8C7C5812* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* V_0 = NULL;
	Type_t* V_1 = NULL;
	Type_t* V_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = il2cpp_codegen_array_get_rank(L_1);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0030:
	{
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = il2cpp_codegen_array_get_length(L_6);
		int32_t L_8 = ___1_index;
		int32_t L_9;
		L_9 = ReadOnlyCollection_1_get_Count_mDF41F3A59AEF0E185153710405DC66DBA597FC88(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, L_8))) >= ((int32_t)L_9)))
		{
			goto IL_0046;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(5, NULL);
	}

IL_0046:
	{
		RuntimeArray* L_10 = ___0_array;
		V_0 = ((UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)IsInst((RuntimeObject*)L_10, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)));
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_11 = V_0;
		if (!L_11)
		{
			goto IL_005e;
		}
	}
	{
		RuntimeObject* L_12 = __this->___list;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_13 = V_0;
		int32_t L_14 = ___1_index;
		NullCheck(L_12);
		InterfaceActionInvoker2< UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_12, L_13, L_14);
		return;
	}

IL_005e:
	{
		RuntimeArray* L_15 = ___0_array;
		NullCheck(L_15);
		Type_t* L_16;
		L_16 = il2cpp_codegen_object_get_type(L_15);
		NullCheck(L_16);
		Type_t* L_17;
		L_17 = VirtualFuncInvoker0< Type_t* >::Invoke(46, L_16);
		V_1 = L_17;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 12)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		V_2 = L_19;
		Type_t* L_20 = V_1;
		Type_t* L_21 = V_2;
		NullCheck(L_20);
		bool L_22;
		L_22 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_20, L_21);
		if (L_22)
		{
			goto IL_008c;
		}
	}
	{
		Type_t* L_23 = V_2;
		Type_t* L_24 = V_1;
		NullCheck(L_23);
		bool L_25;
		L_25 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_23, L_24);
		if (L_25)
		{
			goto IL_008c;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_008c:
	{
		RuntimeArray* L_26 = ___0_array;
		V_3 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_26, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = V_3;
		if (L_27)
		{
			goto IL_009b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_009b:
	{
		RuntimeObject* L_28 = __this->___list;
		NullCheck(L_28);
		int32_t L_29;
		L_29 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_28);
		V_4 = L_29;
	}
	try
	{
		{
			V_5 = 0;
			goto IL_00cd_1;
		}

IL_00ad_1:
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_30 = V_3;
			int32_t L_31 = ___1_index;
			int32_t L_32 = L_31;
			___1_index = ((int32_t)il2cpp_codegen_add(L_32, 1));
			RuntimeObject* L_33 = __this->___list;
			int32_t L_34 = V_5;
			NullCheck(L_33);
			uint16_t L_35;
			L_35 = InterfaceFuncInvoker1< uint16_t, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_33, L_34);
			uint16_t L_36 = L_35;
			RuntimeObject* L_37 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_36);
			NullCheck(L_30);
			ArrayElementTypeCheck (L_30, L_37);
			(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (RuntimeObject*)L_37);
			int32_t L_38 = V_5;
			V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
		}

IL_00cd_1:
		{
			int32_t L_39 = V_5;
			int32_t L_40 = V_4;
			if ((((int32_t)L_39) < ((int32_t)L_40)))
			{
				goto IL_00ad_1;
			}
		}
		{
			goto IL_00dd;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00d5;
		}
		throw e;
	}

CATCH_00d5:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_41 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_00dd;
	}

IL_00dd:
	{
		return;
	}
}
// Method Definition Index: 10467
// Method Definition Index: 10468
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_System_Collections_IList_get_Item_m583AB552F27AC839272CBA713EEA8CB8D26CE936 (ReadOnlyCollection_1_t068BDAE7D562067D24182EABF4C4C7AA8C7C5812* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		uint16_t L_2;
		L_2 = InterfaceFuncInvoker1< uint16_t, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		uint16_t L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_3);
		return L_4;
	}
}
// Method Definition Index: 10469
// Method Definition Index: 10470
// Method Definition Index: 10471
// Method Definition Index: 10472
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m872007057C4E5FFCCB51AE633C44608C4A23189C (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	uint16_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___0_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(uint16_t));
		uint16_t L_2 = V_0;
		return false;
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
// Method Definition Index: 10473
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_System_Collections_IList_Contains_m9A02BC9316B2A825F6E8D0C83A22D59FD04D5F42 (ReadOnlyCollection_1_t068BDAE7D562067D24182EABF4C4C7AA8C7C5812* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_m872007057C4E5FFCCB51AE633C44608C4A23189C(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		bool L_3;
		L_3 = ReadOnlyCollection_1_Contains_m3F49FD6FEF35A79AA32F604B1CBF711080A80735(__this, ((*(uint16_t*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// Method Definition Index: 10474
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_System_Collections_IList_IndexOf_m1175DC67434AB8B095DA91E83938B743C82435DA (ReadOnlyCollection_1_t068BDAE7D562067D24182EABF4C4C7AA8C7C5812* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_m872007057C4E5FFCCB51AE633C44608C4A23189C(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		int32_t L_3;
		L_3 = ReadOnlyCollection_1_IndexOf_mDF7DBB43B47AD1AA7E526210C9C76BBA642153DF(__this, ((*(uint16_t*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15));
		return L_3;
	}

IL_0015:
	{
		return (-1);
	}
}
// Method Definition Index: 10475
// Method Definition Index: 10476
// Method Definition Index: 10477
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 10449
// Method Definition Index: 10450
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_mE5F79F4C569C903ACCF6EA6A986411A6DF3A9CF0 (ReadOnlyCollection_1_tF3F201D52E933A4489A4C06E8B1203099F42FB01* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0);
		return L_1;
	}
}
// Method Definition Index: 10451
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ReadOnlyCollection_1_get_Item_m548364B64CD1B2AB453170381B17662AABD088A5 (ReadOnlyCollection_1_tF3F201D52E933A4489A4C06E8B1203099F42FB01* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		uint32_t L_2;
		L_2 = InterfaceFuncInvoker1< uint32_t, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10452
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m419531A31381A970A871D90935DF22B6CF3EBFBB (ReadOnlyCollection_1_tF3F201D52E933A4489A4C06E8B1203099F42FB01* __this, uint32_t ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		uint32_t L_1 = ___0_value;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, uint32_t >::Invoke(4, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10453
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_CopyTo_m4804E7C3BE191FDA1FEE37CB1E7740E71F2E6F5E (ReadOnlyCollection_1_tF3F201D52E933A4489A4C06E8B1203099F42FB01* __this, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = ___0_array;
		int32_t L_2 = ___1_index;
		NullCheck(L_0);
		InterfaceActionInvoker2< UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1, L_2);
		return;
	}
}
// Method Definition Index: 10454
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_GetEnumerator_m5E672A43AD459BED1FF7A3ECB874DB9341B4D34C (ReadOnlyCollection_1_tF3F201D52E933A4489A4C06E8B1203099F42FB01* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 7), L_0);
		return L_1;
	}
}
// Method Definition Index: 10455
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m9A6405BAF7999DFD7A0398A1E931E107FEA5A1A5 (ReadOnlyCollection_1_tF3F201D52E933A4489A4C06E8B1203099F42FB01* __this, uint32_t ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		uint32_t L_1 = ___0_value;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, uint32_t >::Invoke(2, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10456
// Method Definition Index: 10457
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m8D61A33C276DA945E5FA450F7B0E89FA4B276EC0 (ReadOnlyCollection_1_tF3F201D52E933A4489A4C06E8B1203099F42FB01* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		uint32_t L_2;
		L_2 = InterfaceFuncInvoker1< uint32_t, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10458
// Method Definition Index: 10459
// Method Definition Index: 10460
// Method Definition Index: 10461
// Method Definition Index: 10462
// Method Definition Index: 10463
// Method Definition Index: 10464
// Method Definition Index: 10465
// Method Definition Index: 10466
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m867134AB573986B1120E303807BF3DD4E0FC43C8 (ReadOnlyCollection_1_tF3F201D52E933A4489A4C06E8B1203099F42FB01* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_0 = NULL;
	Type_t* V_1 = NULL;
	Type_t* V_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = il2cpp_codegen_array_get_rank(L_1);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0030:
	{
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = il2cpp_codegen_array_get_length(L_6);
		int32_t L_8 = ___1_index;
		int32_t L_9;
		L_9 = ReadOnlyCollection_1_get_Count_mE5F79F4C569C903ACCF6EA6A986411A6DF3A9CF0(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, L_8))) >= ((int32_t)L_9)))
		{
			goto IL_0046;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(5, NULL);
	}

IL_0046:
	{
		RuntimeArray* L_10 = ___0_array;
		V_0 = ((UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)IsInst((RuntimeObject*)L_10, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_11 = V_0;
		if (!L_11)
		{
			goto IL_005e;
		}
	}
	{
		RuntimeObject* L_12 = __this->___list;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_13 = V_0;
		int32_t L_14 = ___1_index;
		NullCheck(L_12);
		InterfaceActionInvoker2< UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_12, L_13, L_14);
		return;
	}

IL_005e:
	{
		RuntimeArray* L_15 = ___0_array;
		NullCheck(L_15);
		Type_t* L_16;
		L_16 = il2cpp_codegen_object_get_type(L_15);
		NullCheck(L_16);
		Type_t* L_17;
		L_17 = VirtualFuncInvoker0< Type_t* >::Invoke(46, L_16);
		V_1 = L_17;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 12)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		V_2 = L_19;
		Type_t* L_20 = V_1;
		Type_t* L_21 = V_2;
		NullCheck(L_20);
		bool L_22;
		L_22 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_20, L_21);
		if (L_22)
		{
			goto IL_008c;
		}
	}
	{
		Type_t* L_23 = V_2;
		Type_t* L_24 = V_1;
		NullCheck(L_23);
		bool L_25;
		L_25 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_23, L_24);
		if (L_25)
		{
			goto IL_008c;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_008c:
	{
		RuntimeArray* L_26 = ___0_array;
		V_3 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_26, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = V_3;
		if (L_27)
		{
			goto IL_009b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_009b:
	{
		RuntimeObject* L_28 = __this->___list;
		NullCheck(L_28);
		int32_t L_29;
		L_29 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_28);
		V_4 = L_29;
	}
	try
	{
		{
			V_5 = 0;
			goto IL_00cd_1;
		}

IL_00ad_1:
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_30 = V_3;
			int32_t L_31 = ___1_index;
			int32_t L_32 = L_31;
			___1_index = ((int32_t)il2cpp_codegen_add(L_32, 1));
			RuntimeObject* L_33 = __this->___list;
			int32_t L_34 = V_5;
			NullCheck(L_33);
			uint32_t L_35;
			L_35 = InterfaceFuncInvoker1< uint32_t, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_33, L_34);
			uint32_t L_36 = L_35;
			RuntimeObject* L_37 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_36);
			NullCheck(L_30);
			ArrayElementTypeCheck (L_30, L_37);
			(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (RuntimeObject*)L_37);
			int32_t L_38 = V_5;
			V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
		}

IL_00cd_1:
		{
			int32_t L_39 = V_5;
			int32_t L_40 = V_4;
			if ((((int32_t)L_39) < ((int32_t)L_40)))
			{
				goto IL_00ad_1;
			}
		}
		{
			goto IL_00dd;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00d5;
		}
		throw e;
	}

CATCH_00d5:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_41 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_00dd;
	}

IL_00dd:
	{
		return;
	}
}
// Method Definition Index: 10467
// Method Definition Index: 10468
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_System_Collections_IList_get_Item_mADF5CE5C0A6A603A7D901F49B53EAAD35B24AACE (ReadOnlyCollection_1_tF3F201D52E933A4489A4C06E8B1203099F42FB01* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		uint32_t L_2;
		L_2 = InterfaceFuncInvoker1< uint32_t, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		uint32_t L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_3);
		return L_4;
	}
}
// Method Definition Index: 10469
// Method Definition Index: 10470
// Method Definition Index: 10471
// Method Definition Index: 10472
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m1D7518BCBEC6037EB9FF7B400662C83A568F7B26 (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	uint32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___0_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(uint32_t));
		uint32_t L_2 = V_0;
		return false;
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
// Method Definition Index: 10473
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_System_Collections_IList_Contains_m892500E9C0B3AC8F96EF8A1A6786BBAD64635212 (ReadOnlyCollection_1_tF3F201D52E933A4489A4C06E8B1203099F42FB01* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_m1D7518BCBEC6037EB9FF7B400662C83A568F7B26(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		bool L_3;
		L_3 = ReadOnlyCollection_1_Contains_m419531A31381A970A871D90935DF22B6CF3EBFBB(__this, ((*(uint32_t*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// Method Definition Index: 10474
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_System_Collections_IList_IndexOf_m2E0368651BDD3DE9B592E59FE5F16A5A2FD8FF7E (ReadOnlyCollection_1_tF3F201D52E933A4489A4C06E8B1203099F42FB01* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_m1D7518BCBEC6037EB9FF7B400662C83A568F7B26(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		int32_t L_3;
		L_3 = ReadOnlyCollection_1_IndexOf_m9A6405BAF7999DFD7A0398A1E931E107FEA5A1A5(__this, ((*(uint32_t*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15));
		return L_3;
	}

IL_0015:
	{
		return (-1);
	}
}
// Method Definition Index: 10475
// Method Definition Index: 10476
// Method Definition Index: 10477
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 10449
// Method Definition Index: 10450
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m7CADBE80BAAD2AAA5349395B3E442605E0BFEB95 (ReadOnlyCollection_1_tABD6F7BDD581540C8981BBE5012B221D4701AA0A* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0);
		return L_1;
	}
}
// Method Definition Index: 10451
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t ReadOnlyCollection_1_get_Item_m85234A93AA8EC1EB31B291BC93474B1340EFB2A3 (ReadOnlyCollection_1_tABD6F7BDD581540C8981BBE5012B221D4701AA0A* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		uint64_t L_2;
		L_2 = InterfaceFuncInvoker1< uint64_t, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10452
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m785F371F039A4AA57D08627D5B0808885CDEE0AA (ReadOnlyCollection_1_tABD6F7BDD581540C8981BBE5012B221D4701AA0A* __this, uint64_t ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		uint64_t L_1 = ___0_value;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, uint64_t >::Invoke(4, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10453
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_CopyTo_m1B243ADD7B4BB57DF9D767C7BDF99F7F29F67863 (ReadOnlyCollection_1_tABD6F7BDD581540C8981BBE5012B221D4701AA0A* __this, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_1 = ___0_array;
		int32_t L_2 = ___1_index;
		NullCheck(L_0);
		InterfaceActionInvoker2< UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1, L_2);
		return;
	}
}
// Method Definition Index: 10454
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_GetEnumerator_mC851327B7B80286F292607D4D6F64514BE1936AB (ReadOnlyCollection_1_tABD6F7BDD581540C8981BBE5012B221D4701AA0A* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 7), L_0);
		return L_1;
	}
}
// Method Definition Index: 10455
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_mFEF36A399F0FC585064EDABD17E3B3C465AC4F89 (ReadOnlyCollection_1_tABD6F7BDD581540C8981BBE5012B221D4701AA0A* __this, uint64_t ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		uint64_t L_1 = ___0_value;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, uint64_t >::Invoke(2, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10456
// Method Definition Index: 10457
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m8D0EF963749B3F7F1DC61408E19AB10BC52679ED (ReadOnlyCollection_1_tABD6F7BDD581540C8981BBE5012B221D4701AA0A* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		uint64_t L_2;
		L_2 = InterfaceFuncInvoker1< uint64_t, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10458
// Method Definition Index: 10459
// Method Definition Index: 10460
// Method Definition Index: 10461
// Method Definition Index: 10462
// Method Definition Index: 10463
// Method Definition Index: 10464
// Method Definition Index: 10465
// Method Definition Index: 10466
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m50E8CBD89CE9B9464B8291B60DF758B5A8D0630F (ReadOnlyCollection_1_tABD6F7BDD581540C8981BBE5012B221D4701AA0A* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* V_0 = NULL;
	Type_t* V_1 = NULL;
	Type_t* V_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = il2cpp_codegen_array_get_rank(L_1);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0030:
	{
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = il2cpp_codegen_array_get_length(L_6);
		int32_t L_8 = ___1_index;
		int32_t L_9;
		L_9 = ReadOnlyCollection_1_get_Count_m7CADBE80BAAD2AAA5349395B3E442605E0BFEB95(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, L_8))) >= ((int32_t)L_9)))
		{
			goto IL_0046;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(5, NULL);
	}

IL_0046:
	{
		RuntimeArray* L_10 = ___0_array;
		V_0 = ((UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)IsInst((RuntimeObject*)L_10, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_11 = V_0;
		if (!L_11)
		{
			goto IL_005e;
		}
	}
	{
		RuntimeObject* L_12 = __this->___list;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_13 = V_0;
		int32_t L_14 = ___1_index;
		NullCheck(L_12);
		InterfaceActionInvoker2< UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_12, L_13, L_14);
		return;
	}

IL_005e:
	{
		RuntimeArray* L_15 = ___0_array;
		NullCheck(L_15);
		Type_t* L_16;
		L_16 = il2cpp_codegen_object_get_type(L_15);
		NullCheck(L_16);
		Type_t* L_17;
		L_17 = VirtualFuncInvoker0< Type_t* >::Invoke(46, L_16);
		V_1 = L_17;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 12)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		V_2 = L_19;
		Type_t* L_20 = V_1;
		Type_t* L_21 = V_2;
		NullCheck(L_20);
		bool L_22;
		L_22 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_20, L_21);
		if (L_22)
		{
			goto IL_008c;
		}
	}
	{
		Type_t* L_23 = V_2;
		Type_t* L_24 = V_1;
		NullCheck(L_23);
		bool L_25;
		L_25 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_23, L_24);
		if (L_25)
		{
			goto IL_008c;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_008c:
	{
		RuntimeArray* L_26 = ___0_array;
		V_3 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_26, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = V_3;
		if (L_27)
		{
			goto IL_009b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_009b:
	{
		RuntimeObject* L_28 = __this->___list;
		NullCheck(L_28);
		int32_t L_29;
		L_29 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_28);
		V_4 = L_29;
	}
	try
	{
		{
			V_5 = 0;
			goto IL_00cd_1;
		}

IL_00ad_1:
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_30 = V_3;
			int32_t L_31 = ___1_index;
			int32_t L_32 = L_31;
			___1_index = ((int32_t)il2cpp_codegen_add(L_32, 1));
			RuntimeObject* L_33 = __this->___list;
			int32_t L_34 = V_5;
			NullCheck(L_33);
			uint64_t L_35;
			L_35 = InterfaceFuncInvoker1< uint64_t, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_33, L_34);
			uint64_t L_36 = L_35;
			RuntimeObject* L_37 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_36);
			NullCheck(L_30);
			ArrayElementTypeCheck (L_30, L_37);
			(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (RuntimeObject*)L_37);
			int32_t L_38 = V_5;
			V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
		}

IL_00cd_1:
		{
			int32_t L_39 = V_5;
			int32_t L_40 = V_4;
			if ((((int32_t)L_39) < ((int32_t)L_40)))
			{
				goto IL_00ad_1;
			}
		}
		{
			goto IL_00dd;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00d5;
		}
		throw e;
	}

CATCH_00d5:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_41 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_00dd;
	}

IL_00dd:
	{
		return;
	}
}
// Method Definition Index: 10467
// Method Definition Index: 10468
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_System_Collections_IList_get_Item_m659A50353B13163D60CCE95C8B49506A988427C1 (ReadOnlyCollection_1_tABD6F7BDD581540C8981BBE5012B221D4701AA0A* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		uint64_t L_2;
		L_2 = InterfaceFuncInvoker1< uint64_t, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		uint64_t L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_3);
		return L_4;
	}
}
// Method Definition Index: 10469
// Method Definition Index: 10470
// Method Definition Index: 10471
// Method Definition Index: 10472
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_mE726091D2574AA01253129E1832666343C088AA1 (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	uint64_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___0_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(uint64_t));
		uint64_t L_2 = V_0;
		return false;
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
// Method Definition Index: 10473
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_System_Collections_IList_Contains_m4D00B8C10E5C8864BDA33AF6307FDC78EF08F365 (ReadOnlyCollection_1_tABD6F7BDD581540C8981BBE5012B221D4701AA0A* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_mE726091D2574AA01253129E1832666343C088AA1(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		bool L_3;
		L_3 = ReadOnlyCollection_1_Contains_m785F371F039A4AA57D08627D5B0808885CDEE0AA(__this, ((*(uint64_t*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// Method Definition Index: 10474
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_System_Collections_IList_IndexOf_m85DAFDD5A256A78AB26EF7B868A55E4240912C87 (ReadOnlyCollection_1_tABD6F7BDD581540C8981BBE5012B221D4701AA0A* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_mE726091D2574AA01253129E1832666343C088AA1(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		int32_t L_3;
		L_3 = ReadOnlyCollection_1_IndexOf_mFEF36A399F0FC585064EDABD17E3B3C465AC4F89(__this, ((*(uint64_t*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15));
		return L_3;
	}

IL_0015:
	{
		return (-1);
	}
}
// Method Definition Index: 10475
// Method Definition Index: 10476
// Method Definition Index: 10477
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 10449
// Method Definition Index: 10450
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_mD76DB4E2C0BC4110F6110E68DA709BD4A503D2F5 (ReadOnlyCollection_1_tC00260BA5B1BEF55EBEF800DF50485F5D9806E4C* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0);
		return L_1;
	}
}
// Method Definition Index: 10451
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniqueStyleString_tE980AA033ABB00413A3139B42FF22750952DAECF ReadOnlyCollection_1_get_Item_mD69C8B233301943E280F4146FED9A6DE6D9A3643 (ReadOnlyCollection_1_tC00260BA5B1BEF55EBEF800DF50485F5D9806E4C* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		UniqueStyleString_tE980AA033ABB00413A3139B42FF22750952DAECF L_2;
		L_2 = InterfaceFuncInvoker1< UniqueStyleString_tE980AA033ABB00413A3139B42FF22750952DAECF, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10452
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_mFACE0C82F64A6D849DD7A5A9D94592654A6D1011 (ReadOnlyCollection_1_tC00260BA5B1BEF55EBEF800DF50485F5D9806E4C* __this, UniqueStyleString_tE980AA033ABB00413A3139B42FF22750952DAECF ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		UniqueStyleString_tE980AA033ABB00413A3139B42FF22750952DAECF L_1 = ___0_value;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, UniqueStyleString_tE980AA033ABB00413A3139B42FF22750952DAECF >::Invoke(4, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10453
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_CopyTo_m5BD44E836D148FD5F6DDA5EB27BBFB84A0A9EC00 (ReadOnlyCollection_1_tC00260BA5B1BEF55EBEF800DF50485F5D9806E4C* __this, UniqueStyleStringU5BU5D_t47384C749ED152804F196C5613B5145349958ECA* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		UniqueStyleStringU5BU5D_t47384C749ED152804F196C5613B5145349958ECA* L_1 = ___0_array;
		int32_t L_2 = ___1_index;
		NullCheck(L_0);
		InterfaceActionInvoker2< UniqueStyleStringU5BU5D_t47384C749ED152804F196C5613B5145349958ECA*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1, L_2);
		return;
	}
}
// Method Definition Index: 10454
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_GetEnumerator_mFEA2F4DEEAD6A8FDFE656202181CE3CF666EC8AF (ReadOnlyCollection_1_tC00260BA5B1BEF55EBEF800DF50485F5D9806E4C* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 7), L_0);
		return L_1;
	}
}
// Method Definition Index: 10455
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m81F9A69BFD18AC9F3559949FD82DE92A9082B650 (ReadOnlyCollection_1_tC00260BA5B1BEF55EBEF800DF50485F5D9806E4C* __this, UniqueStyleString_tE980AA033ABB00413A3139B42FF22750952DAECF ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		UniqueStyleString_tE980AA033ABB00413A3139B42FF22750952DAECF L_1 = ___0_value;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, UniqueStyleString_tE980AA033ABB00413A3139B42FF22750952DAECF >::Invoke(2, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10456
// Method Definition Index: 10457
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniqueStyleString_tE980AA033ABB00413A3139B42FF22750952DAECF ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_mBAE1F5018D518498A5CDE410D00279693F504507 (ReadOnlyCollection_1_tC00260BA5B1BEF55EBEF800DF50485F5D9806E4C* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		UniqueStyleString_tE980AA033ABB00413A3139B42FF22750952DAECF L_2;
		L_2 = InterfaceFuncInvoker1< UniqueStyleString_tE980AA033ABB00413A3139B42FF22750952DAECF, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10458
// Method Definition Index: 10459
// Method Definition Index: 10460
// Method Definition Index: 10461
// Method Definition Index: 10462
// Method Definition Index: 10463
// Method Definition Index: 10464
// Method Definition Index: 10465
// Method Definition Index: 10466
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m061939FA166E0B6A595E785F47C37432141B875E (ReadOnlyCollection_1_tC00260BA5B1BEF55EBEF800DF50485F5D9806E4C* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	UniqueStyleStringU5BU5D_t47384C749ED152804F196C5613B5145349958ECA* V_0 = NULL;
	Type_t* V_1 = NULL;
	Type_t* V_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = il2cpp_codegen_array_get_rank(L_1);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0030:
	{
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = il2cpp_codegen_array_get_length(L_6);
		int32_t L_8 = ___1_index;
		int32_t L_9;
		L_9 = ReadOnlyCollection_1_get_Count_mD76DB4E2C0BC4110F6110E68DA709BD4A503D2F5(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, L_8))) >= ((int32_t)L_9)))
		{
			goto IL_0046;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(5, NULL);
	}

IL_0046:
	{
		RuntimeArray* L_10 = ___0_array;
		V_0 = ((UniqueStyleStringU5BU5D_t47384C749ED152804F196C5613B5145349958ECA*)IsInstSealed((RuntimeObject*)L_10, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)));
		UniqueStyleStringU5BU5D_t47384C749ED152804F196C5613B5145349958ECA* L_11 = V_0;
		if (!L_11)
		{
			goto IL_005e;
		}
	}
	{
		RuntimeObject* L_12 = __this->___list;
		UniqueStyleStringU5BU5D_t47384C749ED152804F196C5613B5145349958ECA* L_13 = V_0;
		int32_t L_14 = ___1_index;
		NullCheck(L_12);
		InterfaceActionInvoker2< UniqueStyleStringU5BU5D_t47384C749ED152804F196C5613B5145349958ECA*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_12, L_13, L_14);
		return;
	}

IL_005e:
	{
		RuntimeArray* L_15 = ___0_array;
		NullCheck(L_15);
		Type_t* L_16;
		L_16 = il2cpp_codegen_object_get_type(L_15);
		NullCheck(L_16);
		Type_t* L_17;
		L_17 = VirtualFuncInvoker0< Type_t* >::Invoke(46, L_16);
		V_1 = L_17;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 12)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		V_2 = L_19;
		Type_t* L_20 = V_1;
		Type_t* L_21 = V_2;
		NullCheck(L_20);
		bool L_22;
		L_22 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_20, L_21);
		if (L_22)
		{
			goto IL_008c;
		}
	}
	{
		Type_t* L_23 = V_2;
		Type_t* L_24 = V_1;
		NullCheck(L_23);
		bool L_25;
		L_25 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_23, L_24);
		if (L_25)
		{
			goto IL_008c;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_008c:
	{
		RuntimeArray* L_26 = ___0_array;
		V_3 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_26, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = V_3;
		if (L_27)
		{
			goto IL_009b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_009b:
	{
		RuntimeObject* L_28 = __this->___list;
		NullCheck(L_28);
		int32_t L_29;
		L_29 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_28);
		V_4 = L_29;
	}
	try
	{
		{
			V_5 = 0;
			goto IL_00cd_1;
		}

IL_00ad_1:
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_30 = V_3;
			int32_t L_31 = ___1_index;
			int32_t L_32 = L_31;
			___1_index = ((int32_t)il2cpp_codegen_add(L_32, 1));
			RuntimeObject* L_33 = __this->___list;
			int32_t L_34 = V_5;
			NullCheck(L_33);
			UniqueStyleString_tE980AA033ABB00413A3139B42FF22750952DAECF L_35;
			L_35 = InterfaceFuncInvoker1< UniqueStyleString_tE980AA033ABB00413A3139B42FF22750952DAECF, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_33, L_34);
			UniqueStyleString_tE980AA033ABB00413A3139B42FF22750952DAECF L_36 = L_35;
			RuntimeObject* L_37 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_36);
			NullCheck(L_30);
			ArrayElementTypeCheck (L_30, L_37);
			(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (RuntimeObject*)L_37);
			int32_t L_38 = V_5;
			V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
		}

IL_00cd_1:
		{
			int32_t L_39 = V_5;
			int32_t L_40 = V_4;
			if ((((int32_t)L_39) < ((int32_t)L_40)))
			{
				goto IL_00ad_1;
			}
		}
		{
			goto IL_00dd;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00d5;
		}
		throw e;
	}

CATCH_00d5:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_41 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_00dd;
	}

IL_00dd:
	{
		return;
	}
}
// Method Definition Index: 10467
// Method Definition Index: 10468
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_System_Collections_IList_get_Item_m9E738C6C68FEE7CA5B68CD8823191D29C6637C64 (ReadOnlyCollection_1_tC00260BA5B1BEF55EBEF800DF50485F5D9806E4C* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		UniqueStyleString_tE980AA033ABB00413A3139B42FF22750952DAECF L_2;
		L_2 = InterfaceFuncInvoker1< UniqueStyleString_tE980AA033ABB00413A3139B42FF22750952DAECF, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		UniqueStyleString_tE980AA033ABB00413A3139B42FF22750952DAECF L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_3);
		return L_4;
	}
}
// Method Definition Index: 10469
// Method Definition Index: 10470
// Method Definition Index: 10471
// Method Definition Index: 10472
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m10AE9280CDD0885F6AE0CED9BC419A220F9EF82C (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	UniqueStyleString_tE980AA033ABB00413A3139B42FF22750952DAECF V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(UniqueStyleString_tE980AA033ABB00413A3139B42FF22750952DAECF));
		UniqueStyleString_tE980AA033ABB00413A3139B42FF22750952DAECF L_2 = V_0;
		return false;
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
// Method Definition Index: 10473
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_System_Collections_IList_Contains_m084EAA212B97A7222F264DEC63915DDD84328DA8 (ReadOnlyCollection_1_tC00260BA5B1BEF55EBEF800DF50485F5D9806E4C* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_m10AE9280CDD0885F6AE0CED9BC419A220F9EF82C(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		bool L_3;
		L_3 = ReadOnlyCollection_1_Contains_mFACE0C82F64A6D849DD7A5A9D94592654A6D1011(__this, ((*(UniqueStyleString_tE980AA033ABB00413A3139B42FF22750952DAECF*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// Method Definition Index: 10474
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_System_Collections_IList_IndexOf_m8D9242ADD660FEAEEEA8D586062AD3A41FEFA09F (ReadOnlyCollection_1_tC00260BA5B1BEF55EBEF800DF50485F5D9806E4C* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_m10AE9280CDD0885F6AE0CED9BC419A220F9EF82C(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		int32_t L_3;
		L_3 = ReadOnlyCollection_1_IndexOf_m81F9A69BFD18AC9F3559949FD82DE92A9082B650(__this, ((*(UniqueStyleString_tE980AA033ABB00413A3139B42FF22750952DAECF*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15));
		return L_3;
	}

IL_0015:
	{
		return (-1);
	}
}
// Method Definition Index: 10475
// Method Definition Index: 10476
// Method Definition Index: 10477
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 10449
// Method Definition Index: 10450
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m45F7511554AC7932A4E66143EF8772E661046099 (ReadOnlyCollection_1_tDF87C8E26187E1D6C24D2DD02E4716CC5B7ACC34* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0);
		return L_1;
	}
}
// Method Definition Index: 10451
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UsageHint_tFD7259AF9E91500CF1D0CE602394B40FD2397AB1 ReadOnlyCollection_1_get_Item_m6B52C68114487B2E28694C13C39FBB678E0B526A (ReadOnlyCollection_1_tDF87C8E26187E1D6C24D2DD02E4716CC5B7ACC34* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		UsageHint_tFD7259AF9E91500CF1D0CE602394B40FD2397AB1 L_2;
		L_2 = InterfaceFuncInvoker1< UsageHint_tFD7259AF9E91500CF1D0CE602394B40FD2397AB1, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10452
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_mDF0074DD4769F53942460C32C27BDB6A7E6E500C (ReadOnlyCollection_1_tDF87C8E26187E1D6C24D2DD02E4716CC5B7ACC34* __this, UsageHint_tFD7259AF9E91500CF1D0CE602394B40FD2397AB1 ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		UsageHint_tFD7259AF9E91500CF1D0CE602394B40FD2397AB1 L_1 = ___0_value;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, UsageHint_tFD7259AF9E91500CF1D0CE602394B40FD2397AB1 >::Invoke(4, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10453
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_CopyTo_m086D4A48AB4EB1ABAAAAB8365C524A2AF085504D (ReadOnlyCollection_1_tDF87C8E26187E1D6C24D2DD02E4716CC5B7ACC34* __this, UsageHintU5BU5D_t678E554916FB102DB4E2DC2C6CC0976DC145BF23* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		UsageHintU5BU5D_t678E554916FB102DB4E2DC2C6CC0976DC145BF23* L_1 = ___0_array;
		int32_t L_2 = ___1_index;
		NullCheck(L_0);
		InterfaceActionInvoker2< UsageHintU5BU5D_t678E554916FB102DB4E2DC2C6CC0976DC145BF23*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1, L_2);
		return;
	}
}
// Method Definition Index: 10454
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_GetEnumerator_m5DDF50EA3EF76D3A6756EDA0A62E474202071945 (ReadOnlyCollection_1_tDF87C8E26187E1D6C24D2DD02E4716CC5B7ACC34* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 7), L_0);
		return L_1;
	}
}
// Method Definition Index: 10455
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_mD7BBE79F62B90B06912D44DAB47B960B9124DA69 (ReadOnlyCollection_1_tDF87C8E26187E1D6C24D2DD02E4716CC5B7ACC34* __this, UsageHint_tFD7259AF9E91500CF1D0CE602394B40FD2397AB1 ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		UsageHint_tFD7259AF9E91500CF1D0CE602394B40FD2397AB1 L_1 = ___0_value;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, UsageHint_tFD7259AF9E91500CF1D0CE602394B40FD2397AB1 >::Invoke(2, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10456
// Method Definition Index: 10457
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UsageHint_tFD7259AF9E91500CF1D0CE602394B40FD2397AB1 ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m07F30FD8107B3DE2CE0B2FAA61255889F4E5A3FB (ReadOnlyCollection_1_tDF87C8E26187E1D6C24D2DD02E4716CC5B7ACC34* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		UsageHint_tFD7259AF9E91500CF1D0CE602394B40FD2397AB1 L_2;
		L_2 = InterfaceFuncInvoker1< UsageHint_tFD7259AF9E91500CF1D0CE602394B40FD2397AB1, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10458
// Method Definition Index: 10459
// Method Definition Index: 10460
// Method Definition Index: 10461
// Method Definition Index: 10462
// Method Definition Index: 10463
// Method Definition Index: 10464
// Method Definition Index: 10465
// Method Definition Index: 10466
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_mF5E97C9E5265075CA4AA5BE74608079E13000192 (ReadOnlyCollection_1_tDF87C8E26187E1D6C24D2DD02E4716CC5B7ACC34* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	UsageHintU5BU5D_t678E554916FB102DB4E2DC2C6CC0976DC145BF23* V_0 = NULL;
	Type_t* V_1 = NULL;
	Type_t* V_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = il2cpp_codegen_array_get_rank(L_1);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0030:
	{
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = il2cpp_codegen_array_get_length(L_6);
		int32_t L_8 = ___1_index;
		int32_t L_9;
		L_9 = ReadOnlyCollection_1_get_Count_m45F7511554AC7932A4E66143EF8772E661046099(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, L_8))) >= ((int32_t)L_9)))
		{
			goto IL_0046;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(5, NULL);
	}

IL_0046:
	{
		RuntimeArray* L_10 = ___0_array;
		V_0 = ((UsageHintU5BU5D_t678E554916FB102DB4E2DC2C6CC0976DC145BF23*)IsInstSealed((RuntimeObject*)L_10, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)));
		UsageHintU5BU5D_t678E554916FB102DB4E2DC2C6CC0976DC145BF23* L_11 = V_0;
		if (!L_11)
		{
			goto IL_005e;
		}
	}
	{
		RuntimeObject* L_12 = __this->___list;
		UsageHintU5BU5D_t678E554916FB102DB4E2DC2C6CC0976DC145BF23* L_13 = V_0;
		int32_t L_14 = ___1_index;
		NullCheck(L_12);
		InterfaceActionInvoker2< UsageHintU5BU5D_t678E554916FB102DB4E2DC2C6CC0976DC145BF23*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_12, L_13, L_14);
		return;
	}

IL_005e:
	{
		RuntimeArray* L_15 = ___0_array;
		NullCheck(L_15);
		Type_t* L_16;
		L_16 = il2cpp_codegen_object_get_type(L_15);
		NullCheck(L_16);
		Type_t* L_17;
		L_17 = VirtualFuncInvoker0< Type_t* >::Invoke(46, L_16);
		V_1 = L_17;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 12)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		V_2 = L_19;
		Type_t* L_20 = V_1;
		Type_t* L_21 = V_2;
		NullCheck(L_20);
		bool L_22;
		L_22 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_20, L_21);
		if (L_22)
		{
			goto IL_008c;
		}
	}
	{
		Type_t* L_23 = V_2;
		Type_t* L_24 = V_1;
		NullCheck(L_23);
		bool L_25;
		L_25 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_23, L_24);
		if (L_25)
		{
			goto IL_008c;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_008c:
	{
		RuntimeArray* L_26 = ___0_array;
		V_3 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_26, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = V_3;
		if (L_27)
		{
			goto IL_009b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_009b:
	{
		RuntimeObject* L_28 = __this->___list;
		NullCheck(L_28);
		int32_t L_29;
		L_29 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_28);
		V_4 = L_29;
	}
	try
	{
		{
			V_5 = 0;
			goto IL_00cd_1;
		}

IL_00ad_1:
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_30 = V_3;
			int32_t L_31 = ___1_index;
			int32_t L_32 = L_31;
			___1_index = ((int32_t)il2cpp_codegen_add(L_32, 1));
			RuntimeObject* L_33 = __this->___list;
			int32_t L_34 = V_5;
			NullCheck(L_33);
			UsageHint_tFD7259AF9E91500CF1D0CE602394B40FD2397AB1 L_35;
			L_35 = InterfaceFuncInvoker1< UsageHint_tFD7259AF9E91500CF1D0CE602394B40FD2397AB1, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_33, L_34);
			UsageHint_tFD7259AF9E91500CF1D0CE602394B40FD2397AB1 L_36 = L_35;
			RuntimeObject* L_37 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_36);
			NullCheck(L_30);
			ArrayElementTypeCheck (L_30, L_37);
			(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (RuntimeObject*)L_37);
			int32_t L_38 = V_5;
			V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
		}

IL_00cd_1:
		{
			int32_t L_39 = V_5;
			int32_t L_40 = V_4;
			if ((((int32_t)L_39) < ((int32_t)L_40)))
			{
				goto IL_00ad_1;
			}
		}
		{
			goto IL_00dd;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00d5;
		}
		throw e;
	}

CATCH_00d5:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_41 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_00dd;
	}

IL_00dd:
	{
		return;
	}
}
// Method Definition Index: 10467
// Method Definition Index: 10468
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_System_Collections_IList_get_Item_mBA12C29059E121B7AE522851685CA09462B0BB2B (ReadOnlyCollection_1_tDF87C8E26187E1D6C24D2DD02E4716CC5B7ACC34* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		UsageHint_tFD7259AF9E91500CF1D0CE602394B40FD2397AB1 L_2;
		L_2 = InterfaceFuncInvoker1< UsageHint_tFD7259AF9E91500CF1D0CE602394B40FD2397AB1, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		UsageHint_tFD7259AF9E91500CF1D0CE602394B40FD2397AB1 L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_3);
		return L_4;
	}
}
// Method Definition Index: 10469
// Method Definition Index: 10470
// Method Definition Index: 10471
// Method Definition Index: 10472
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m077B2F36B247C4636FFD0370E89515F37F912A64 (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	UsageHint_tFD7259AF9E91500CF1D0CE602394B40FD2397AB1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(UsageHint_tFD7259AF9E91500CF1D0CE602394B40FD2397AB1));
		UsageHint_tFD7259AF9E91500CF1D0CE602394B40FD2397AB1 L_2 = V_0;
		return false;
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
// Method Definition Index: 10473
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_System_Collections_IList_Contains_m406478CC916FF7A9F15BE609364697C3296BB185 (ReadOnlyCollection_1_tDF87C8E26187E1D6C24D2DD02E4716CC5B7ACC34* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_m077B2F36B247C4636FFD0370E89515F37F912A64(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		bool L_3;
		L_3 = ReadOnlyCollection_1_Contains_mDF0074DD4769F53942460C32C27BDB6A7E6E500C(__this, ((*(UsageHint_tFD7259AF9E91500CF1D0CE602394B40FD2397AB1*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// Method Definition Index: 10474
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_System_Collections_IList_IndexOf_mF6168C7F19DCAE3C0EC4B2E547061A347B2BDABC (ReadOnlyCollection_1_tDF87C8E26187E1D6C24D2DD02E4716CC5B7ACC34* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_m077B2F36B247C4636FFD0370E89515F37F912A64(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		int32_t L_3;
		L_3 = ReadOnlyCollection_1_IndexOf_mD7BBE79F62B90B06912D44DAB47B960B9124DA69(__this, ((*(UsageHint_tFD7259AF9E91500CF1D0CE602394B40FD2397AB1*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15));
		return L_3;
	}

IL_0015:
	{
		return (-1);
	}
}
// Method Definition Index: 10475
// Method Definition Index: 10476
// Method Definition Index: 10477
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 10449
// Method Definition Index: 10450
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m531C72497E9FEB4E99E08837AF225D594D2ED741 (ReadOnlyCollection_1_tF64E6ECDE29B9EE2538F5A045045DF7774BB8466* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0);
		return L_1;
	}
}
// Method Definition Index: 10451
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UxmlNamespaceDefinition_t6B70CA125A4C1D5F74F1C901A6F4F72637F6621B ReadOnlyCollection_1_get_Item_m72C066EC0F446F35D438B7F42003B103CCDC3D76 (ReadOnlyCollection_1_tF64E6ECDE29B9EE2538F5A045045DF7774BB8466* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		UxmlNamespaceDefinition_t6B70CA125A4C1D5F74F1C901A6F4F72637F6621B L_2;
		L_2 = InterfaceFuncInvoker1< UxmlNamespaceDefinition_t6B70CA125A4C1D5F74F1C901A6F4F72637F6621B, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10452
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_mFDCA34C8B2D2B075B2F75C43319A5FB2F06EBAB7 (ReadOnlyCollection_1_tF64E6ECDE29B9EE2538F5A045045DF7774BB8466* __this, UxmlNamespaceDefinition_t6B70CA125A4C1D5F74F1C901A6F4F72637F6621B ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		UxmlNamespaceDefinition_t6B70CA125A4C1D5F74F1C901A6F4F72637F6621B L_1 = ___0_value;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, UxmlNamespaceDefinition_t6B70CA125A4C1D5F74F1C901A6F4F72637F6621B >::Invoke(4, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10453
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_CopyTo_m94EF2104EDDD2AC981094E0993F6749DD7D83488 (ReadOnlyCollection_1_tF64E6ECDE29B9EE2538F5A045045DF7774BB8466* __this, UxmlNamespaceDefinitionU5BU5D_t28B781ECD62CAF3666F6920255948A5FA6B3D319* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		UxmlNamespaceDefinitionU5BU5D_t28B781ECD62CAF3666F6920255948A5FA6B3D319* L_1 = ___0_array;
		int32_t L_2 = ___1_index;
		NullCheck(L_0);
		InterfaceActionInvoker2< UxmlNamespaceDefinitionU5BU5D_t28B781ECD62CAF3666F6920255948A5FA6B3D319*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1, L_2);
		return;
	}
}
// Method Definition Index: 10454
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_GetEnumerator_m2EEAA8111A49AD9755B31376B8A1D3B091BDD1F9 (ReadOnlyCollection_1_tF64E6ECDE29B9EE2538F5A045045DF7774BB8466* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 7), L_0);
		return L_1;
	}
}
// Method Definition Index: 10455
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m3C139BA080D9F8D44C2E3F09CDF4AF7AB91BCD06 (ReadOnlyCollection_1_tF64E6ECDE29B9EE2538F5A045045DF7774BB8466* __this, UxmlNamespaceDefinition_t6B70CA125A4C1D5F74F1C901A6F4F72637F6621B ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		UxmlNamespaceDefinition_t6B70CA125A4C1D5F74F1C901A6F4F72637F6621B L_1 = ___0_value;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, UxmlNamespaceDefinition_t6B70CA125A4C1D5F74F1C901A6F4F72637F6621B >::Invoke(2, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10456
// Method Definition Index: 10457
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UxmlNamespaceDefinition_t6B70CA125A4C1D5F74F1C901A6F4F72637F6621B ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_mEF92991DBDF6D6E1025E398A08F1A9DF3D9A6B2D (ReadOnlyCollection_1_tF64E6ECDE29B9EE2538F5A045045DF7774BB8466* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		UxmlNamespaceDefinition_t6B70CA125A4C1D5F74F1C901A6F4F72637F6621B L_2;
		L_2 = InterfaceFuncInvoker1< UxmlNamespaceDefinition_t6B70CA125A4C1D5F74F1C901A6F4F72637F6621B, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10458
// Method Definition Index: 10459
// Method Definition Index: 10460
// Method Definition Index: 10461
// Method Definition Index: 10462
// Method Definition Index: 10463
// Method Definition Index: 10464
// Method Definition Index: 10465
// Method Definition Index: 10466
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m04ED134516CF50219B4255989D9103EE52087D47 (ReadOnlyCollection_1_tF64E6ECDE29B9EE2538F5A045045DF7774BB8466* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	UxmlNamespaceDefinitionU5BU5D_t28B781ECD62CAF3666F6920255948A5FA6B3D319* V_0 = NULL;
	Type_t* V_1 = NULL;
	Type_t* V_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = il2cpp_codegen_array_get_rank(L_1);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0030:
	{
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = il2cpp_codegen_array_get_length(L_6);
		int32_t L_8 = ___1_index;
		int32_t L_9;
		L_9 = ReadOnlyCollection_1_get_Count_m531C72497E9FEB4E99E08837AF225D594D2ED741(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, L_8))) >= ((int32_t)L_9)))
		{
			goto IL_0046;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(5, NULL);
	}

IL_0046:
	{
		RuntimeArray* L_10 = ___0_array;
		V_0 = ((UxmlNamespaceDefinitionU5BU5D_t28B781ECD62CAF3666F6920255948A5FA6B3D319*)IsInstSealed((RuntimeObject*)L_10, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)));
		UxmlNamespaceDefinitionU5BU5D_t28B781ECD62CAF3666F6920255948A5FA6B3D319* L_11 = V_0;
		if (!L_11)
		{
			goto IL_005e;
		}
	}
	{
		RuntimeObject* L_12 = __this->___list;
		UxmlNamespaceDefinitionU5BU5D_t28B781ECD62CAF3666F6920255948A5FA6B3D319* L_13 = V_0;
		int32_t L_14 = ___1_index;
		NullCheck(L_12);
		InterfaceActionInvoker2< UxmlNamespaceDefinitionU5BU5D_t28B781ECD62CAF3666F6920255948A5FA6B3D319*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_12, L_13, L_14);
		return;
	}

IL_005e:
	{
		RuntimeArray* L_15 = ___0_array;
		NullCheck(L_15);
		Type_t* L_16;
		L_16 = il2cpp_codegen_object_get_type(L_15);
		NullCheck(L_16);
		Type_t* L_17;
		L_17 = VirtualFuncInvoker0< Type_t* >::Invoke(46, L_16);
		V_1 = L_17;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 12)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		V_2 = L_19;
		Type_t* L_20 = V_1;
		Type_t* L_21 = V_2;
		NullCheck(L_20);
		bool L_22;
		L_22 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_20, L_21);
		if (L_22)
		{
			goto IL_008c;
		}
	}
	{
		Type_t* L_23 = V_2;
		Type_t* L_24 = V_1;
		NullCheck(L_23);
		bool L_25;
		L_25 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_23, L_24);
		if (L_25)
		{
			goto IL_008c;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_008c:
	{
		RuntimeArray* L_26 = ___0_array;
		V_3 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_26, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = V_3;
		if (L_27)
		{
			goto IL_009b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_009b:
	{
		RuntimeObject* L_28 = __this->___list;
		NullCheck(L_28);
		int32_t L_29;
		L_29 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_28);
		V_4 = L_29;
	}
	try
	{
		{
			V_5 = 0;
			goto IL_00cd_1;
		}

IL_00ad_1:
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_30 = V_3;
			int32_t L_31 = ___1_index;
			int32_t L_32 = L_31;
			___1_index = ((int32_t)il2cpp_codegen_add(L_32, 1));
			RuntimeObject* L_33 = __this->___list;
			int32_t L_34 = V_5;
			NullCheck(L_33);
			UxmlNamespaceDefinition_t6B70CA125A4C1D5F74F1C901A6F4F72637F6621B L_35;
			L_35 = InterfaceFuncInvoker1< UxmlNamespaceDefinition_t6B70CA125A4C1D5F74F1C901A6F4F72637F6621B, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_33, L_34);
			UxmlNamespaceDefinition_t6B70CA125A4C1D5F74F1C901A6F4F72637F6621B L_36 = L_35;
			RuntimeObject* L_37 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_36);
			NullCheck(L_30);
			ArrayElementTypeCheck (L_30, L_37);
			(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (RuntimeObject*)L_37);
			int32_t L_38 = V_5;
			V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
		}

IL_00cd_1:
		{
			int32_t L_39 = V_5;
			int32_t L_40 = V_4;
			if ((((int32_t)L_39) < ((int32_t)L_40)))
			{
				goto IL_00ad_1;
			}
		}
		{
			goto IL_00dd;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00d5;
		}
		throw e;
	}

CATCH_00d5:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_41 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_00dd;
	}

IL_00dd:
	{
		return;
	}
}
// Method Definition Index: 10467
// Method Definition Index: 10468
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_System_Collections_IList_get_Item_mBC5B25525FAE775CE8A9B7730812329A1F6CDFC8 (ReadOnlyCollection_1_tF64E6ECDE29B9EE2538F5A045045DF7774BB8466* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		UxmlNamespaceDefinition_t6B70CA125A4C1D5F74F1C901A6F4F72637F6621B L_2;
		L_2 = InterfaceFuncInvoker1< UxmlNamespaceDefinition_t6B70CA125A4C1D5F74F1C901A6F4F72637F6621B, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		UxmlNamespaceDefinition_t6B70CA125A4C1D5F74F1C901A6F4F72637F6621B L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_3);
		return L_4;
	}
}
// Method Definition Index: 10469
// Method Definition Index: 10470
// Method Definition Index: 10471
// Method Definition Index: 10472
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_mE21DFAB52F1CF90200F86CA74489FE40660D0FA5 (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	UxmlNamespaceDefinition_t6B70CA125A4C1D5F74F1C901A6F4F72637F6621B V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(UxmlNamespaceDefinition_t6B70CA125A4C1D5F74F1C901A6F4F72637F6621B));
		UxmlNamespaceDefinition_t6B70CA125A4C1D5F74F1C901A6F4F72637F6621B L_2 = V_0;
		return false;
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
// Method Definition Index: 10473
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_System_Collections_IList_Contains_m9453D1C22FED83A5C3A227B67B81DD714B532C83 (ReadOnlyCollection_1_tF64E6ECDE29B9EE2538F5A045045DF7774BB8466* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_mE21DFAB52F1CF90200F86CA74489FE40660D0FA5(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		bool L_3;
		L_3 = ReadOnlyCollection_1_Contains_mFDCA34C8B2D2B075B2F75C43319A5FB2F06EBAB7(__this, ((*(UxmlNamespaceDefinition_t6B70CA125A4C1D5F74F1C901A6F4F72637F6621B*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// Method Definition Index: 10474
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_System_Collections_IList_IndexOf_m49840A0E3A24100E7C70A1610DFCB315B71DD20E (ReadOnlyCollection_1_tF64E6ECDE29B9EE2538F5A045045DF7774BB8466* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_mE21DFAB52F1CF90200F86CA74489FE40660D0FA5(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		int32_t L_3;
		L_3 = ReadOnlyCollection_1_IndexOf_m3C139BA080D9F8D44C2E3F09CDF4AF7AB91BCD06(__this, ((*(UxmlNamespaceDefinition_t6B70CA125A4C1D5F74F1C901A6F4F72637F6621B*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15));
		return L_3;
	}

IL_0015:
	{
		return (-1);
	}
}
// Method Definition Index: 10475
// Method Definition Index: 10476
// Method Definition Index: 10477
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 10449
// Method Definition Index: 10450
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_mBFE65873D7F80153840E0C74D836129E3847B9A6 (ReadOnlyCollection_1_tAE114E8C18E180A65629D9DF0D8911860274551C* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0);
		return L_1;
	}
}
// Method Definition Index: 10451
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UxmlProperty_t98965D0AC619F23715A51F072A885C7F07F15FE4 ReadOnlyCollection_1_get_Item_m5141F5B40B8AD635E38FCE8F4107B4B9C587DCC9 (ReadOnlyCollection_1_tAE114E8C18E180A65629D9DF0D8911860274551C* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		UxmlProperty_t98965D0AC619F23715A51F072A885C7F07F15FE4 L_2;
		L_2 = InterfaceFuncInvoker1< UxmlProperty_t98965D0AC619F23715A51F072A885C7F07F15FE4, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10452
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m78939760646E138755B3431CC00567C373C50303 (ReadOnlyCollection_1_tAE114E8C18E180A65629D9DF0D8911860274551C* __this, UxmlProperty_t98965D0AC619F23715A51F072A885C7F07F15FE4 ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		UxmlProperty_t98965D0AC619F23715A51F072A885C7F07F15FE4 L_1 = ___0_value;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, UxmlProperty_t98965D0AC619F23715A51F072A885C7F07F15FE4 >::Invoke(4, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10453
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_CopyTo_mFEC181B83DC42448674475FD9EC56489DDBA548B (ReadOnlyCollection_1_tAE114E8C18E180A65629D9DF0D8911860274551C* __this, UxmlPropertyU5BU5D_tD5BDB1BE0719FB862DB6B3E0CB35022536021BCB* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		UxmlPropertyU5BU5D_tD5BDB1BE0719FB862DB6B3E0CB35022536021BCB* L_1 = ___0_array;
		int32_t L_2 = ___1_index;
		NullCheck(L_0);
		InterfaceActionInvoker2< UxmlPropertyU5BU5D_tD5BDB1BE0719FB862DB6B3E0CB35022536021BCB*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1, L_2);
		return;
	}
}
// Method Definition Index: 10454
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_GetEnumerator_m7F526D3E32905511C90336FA3DCB0F94E23473FA (ReadOnlyCollection_1_tAE114E8C18E180A65629D9DF0D8911860274551C* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 7), L_0);
		return L_1;
	}
}
// Method Definition Index: 10455
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m7523B4A1B54F01EEC15D4503072D2D24F0941740 (ReadOnlyCollection_1_tAE114E8C18E180A65629D9DF0D8911860274551C* __this, UxmlProperty_t98965D0AC619F23715A51F072A885C7F07F15FE4 ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		UxmlProperty_t98965D0AC619F23715A51F072A885C7F07F15FE4 L_1 = ___0_value;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, UxmlProperty_t98965D0AC619F23715A51F072A885C7F07F15FE4 >::Invoke(2, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10456
// Method Definition Index: 10457
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UxmlProperty_t98965D0AC619F23715A51F072A885C7F07F15FE4 ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_mE3643DC87502EC79E4E0FA79FC31344D5749DFDF (ReadOnlyCollection_1_tAE114E8C18E180A65629D9DF0D8911860274551C* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		UxmlProperty_t98965D0AC619F23715A51F072A885C7F07F15FE4 L_2;
		L_2 = InterfaceFuncInvoker1< UxmlProperty_t98965D0AC619F23715A51F072A885C7F07F15FE4, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10458
// Method Definition Index: 10459
// Method Definition Index: 10460
// Method Definition Index: 10461
// Method Definition Index: 10462
// Method Definition Index: 10463
// Method Definition Index: 10464
// Method Definition Index: 10465
// Method Definition Index: 10466
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m48A9B9AF0FF2CA52AFE2E0FC6E1DB5FC83557157 (ReadOnlyCollection_1_tAE114E8C18E180A65629D9DF0D8911860274551C* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	UxmlPropertyU5BU5D_tD5BDB1BE0719FB862DB6B3E0CB35022536021BCB* V_0 = NULL;
	Type_t* V_1 = NULL;
	Type_t* V_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = il2cpp_codegen_array_get_rank(L_1);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0030:
	{
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = il2cpp_codegen_array_get_length(L_6);
		int32_t L_8 = ___1_index;
		int32_t L_9;
		L_9 = ReadOnlyCollection_1_get_Count_mBFE65873D7F80153840E0C74D836129E3847B9A6(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, L_8))) >= ((int32_t)L_9)))
		{
			goto IL_0046;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(5, NULL);
	}

IL_0046:
	{
		RuntimeArray* L_10 = ___0_array;
		V_0 = ((UxmlPropertyU5BU5D_tD5BDB1BE0719FB862DB6B3E0CB35022536021BCB*)IsInstSealed((RuntimeObject*)L_10, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)));
		UxmlPropertyU5BU5D_tD5BDB1BE0719FB862DB6B3E0CB35022536021BCB* L_11 = V_0;
		if (!L_11)
		{
			goto IL_005e;
		}
	}
	{
		RuntimeObject* L_12 = __this->___list;
		UxmlPropertyU5BU5D_tD5BDB1BE0719FB862DB6B3E0CB35022536021BCB* L_13 = V_0;
		int32_t L_14 = ___1_index;
		NullCheck(L_12);
		InterfaceActionInvoker2< UxmlPropertyU5BU5D_tD5BDB1BE0719FB862DB6B3E0CB35022536021BCB*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_12, L_13, L_14);
		return;
	}

IL_005e:
	{
		RuntimeArray* L_15 = ___0_array;
		NullCheck(L_15);
		Type_t* L_16;
		L_16 = il2cpp_codegen_object_get_type(L_15);
		NullCheck(L_16);
		Type_t* L_17;
		L_17 = VirtualFuncInvoker0< Type_t* >::Invoke(46, L_16);
		V_1 = L_17;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 12)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		V_2 = L_19;
		Type_t* L_20 = V_1;
		Type_t* L_21 = V_2;
		NullCheck(L_20);
		bool L_22;
		L_22 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_20, L_21);
		if (L_22)
		{
			goto IL_008c;
		}
	}
	{
		Type_t* L_23 = V_2;
		Type_t* L_24 = V_1;
		NullCheck(L_23);
		bool L_25;
		L_25 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_23, L_24);
		if (L_25)
		{
			goto IL_008c;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_008c:
	{
		RuntimeArray* L_26 = ___0_array;
		V_3 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_26, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = V_3;
		if (L_27)
		{
			goto IL_009b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_009b:
	{
		RuntimeObject* L_28 = __this->___list;
		NullCheck(L_28);
		int32_t L_29;
		L_29 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_28);
		V_4 = L_29;
	}
	try
	{
		{
			V_5 = 0;
			goto IL_00cd_1;
		}

IL_00ad_1:
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_30 = V_3;
			int32_t L_31 = ___1_index;
			int32_t L_32 = L_31;
			___1_index = ((int32_t)il2cpp_codegen_add(L_32, 1));
			RuntimeObject* L_33 = __this->___list;
			int32_t L_34 = V_5;
			NullCheck(L_33);
			UxmlProperty_t98965D0AC619F23715A51F072A885C7F07F15FE4 L_35;
			L_35 = InterfaceFuncInvoker1< UxmlProperty_t98965D0AC619F23715A51F072A885C7F07F15FE4, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_33, L_34);
			UxmlProperty_t98965D0AC619F23715A51F072A885C7F07F15FE4 L_36 = L_35;
			RuntimeObject* L_37 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_36);
			NullCheck(L_30);
			ArrayElementTypeCheck (L_30, L_37);
			(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (RuntimeObject*)L_37);
			int32_t L_38 = V_5;
			V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
		}

IL_00cd_1:
		{
			int32_t L_39 = V_5;
			int32_t L_40 = V_4;
			if ((((int32_t)L_39) < ((int32_t)L_40)))
			{
				goto IL_00ad_1;
			}
		}
		{
			goto IL_00dd;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00d5;
		}
		throw e;
	}

CATCH_00d5:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_41 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_00dd;
	}

IL_00dd:
	{
		return;
	}
}
// Method Definition Index: 10467
// Method Definition Index: 10468
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_System_Collections_IList_get_Item_mD4F9B500BC80A21201CC7C8DBA796D1B64EA1DDA (ReadOnlyCollection_1_tAE114E8C18E180A65629D9DF0D8911860274551C* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		UxmlProperty_t98965D0AC619F23715A51F072A885C7F07F15FE4 L_2;
		L_2 = InterfaceFuncInvoker1< UxmlProperty_t98965D0AC619F23715A51F072A885C7F07F15FE4, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		UxmlProperty_t98965D0AC619F23715A51F072A885C7F07F15FE4 L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_3);
		return L_4;
	}
}
// Method Definition Index: 10469
// Method Definition Index: 10470
// Method Definition Index: 10471
// Method Definition Index: 10472
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m7575D658F2FFB26CF20770C4D9570925DCAE4CBC (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	UxmlProperty_t98965D0AC619F23715A51F072A885C7F07F15FE4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(UxmlProperty_t98965D0AC619F23715A51F072A885C7F07F15FE4));
		UxmlProperty_t98965D0AC619F23715A51F072A885C7F07F15FE4 L_2 = V_0;
		return false;
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
// Method Definition Index: 10473
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_System_Collections_IList_Contains_m8F128AFE6F1BC59D8200B04C5F748CD1D3D48B3E (ReadOnlyCollection_1_tAE114E8C18E180A65629D9DF0D8911860274551C* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_m7575D658F2FFB26CF20770C4D9570925DCAE4CBC(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		bool L_3;
		L_3 = ReadOnlyCollection_1_Contains_m78939760646E138755B3431CC00567C373C50303(__this, ((*(UxmlProperty_t98965D0AC619F23715A51F072A885C7F07F15FE4*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// Method Definition Index: 10474
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_System_Collections_IList_IndexOf_m4FC93C2591D2C6CB8EDB258EE88C918A5EC72031 (ReadOnlyCollection_1_tAE114E8C18E180A65629D9DF0D8911860274551C* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_m7575D658F2FFB26CF20770C4D9570925DCAE4CBC(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		int32_t L_3;
		L_3 = ReadOnlyCollection_1_IndexOf_m7523B4A1B54F01EEC15D4503072D2D24F0941740(__this, ((*(UxmlProperty_t98965D0AC619F23715A51F072A885C7F07F15FE4*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15));
		return L_3;
	}

IL_0015:
	{
		return (-1);
	}
}
// Method Definition Index: 10475
// Method Definition Index: 10476
// Method Definition Index: 10477
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 10449
// Method Definition Index: 10450
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_mAA7CC5A5A5CC07977C0D39FB6F9B5718A6CC44A7 (ReadOnlyCollection_1_tC5795E68B14E438B5B65AF3F4C3F50CA0F951647* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0);
		return L_1;
	}
}
// Method Definition Index: 10451
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ReadOnlyCollection_1_get_Item_mF8DFF8519893E8F4E924975E0CAB4858EA66E644 (ReadOnlyCollection_1_tC5795E68B14E438B5B65AF3F4C3F50CA0F951647* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = InterfaceFuncInvoker1< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10452
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_mE2B1A47E7F72DD933A5A1CBC95D4F517C3236FEE (ReadOnlyCollection_1_tC5795E68B14E438B5B65AF3F4C3F50CA0F951647* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___0_value;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 >::Invoke(4, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10453
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_CopyTo_m099E0064E497143252FC7DC6C77A01C6C551097A (ReadOnlyCollection_1_tC5795E68B14E438B5B65AF3F4C3F50CA0F951647* __this, Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_1 = ___0_array;
		int32_t L_2 = ___1_index;
		NullCheck(L_0);
		InterfaceActionInvoker2< Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1, L_2);
		return;
	}
}
// Method Definition Index: 10454
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_GetEnumerator_mD7DA7DC429D624E8255CCFC0C190006C0061256B (ReadOnlyCollection_1_tC5795E68B14E438B5B65AF3F4C3F50CA0F951647* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 7), L_0);
		return L_1;
	}
}
// Method Definition Index: 10455
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m2C9AF85BBA3C92FF44F5ABAD91CE9CFF5AD52FCC (ReadOnlyCollection_1_tC5795E68B14E438B5B65AF3F4C3F50CA0F951647* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___0_value;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 >::Invoke(2, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10456
// Method Definition Index: 10457
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_mB20048FB8A0E2BCCBA35B49EABC1A75B75523D85 (ReadOnlyCollection_1_tC5795E68B14E438B5B65AF3F4C3F50CA0F951647* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = InterfaceFuncInvoker1< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10458
// Method Definition Index: 10459
// Method Definition Index: 10460
// Method Definition Index: 10461
// Method Definition Index: 10462
// Method Definition Index: 10463
// Method Definition Index: 10464
// Method Definition Index: 10465
// Method Definition Index: 10466
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m45807E0827BF1B68EEEAF67117E0DF17019526C4 (ReadOnlyCollection_1_tC5795E68B14E438B5B65AF3F4C3F50CA0F951647* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* V_0 = NULL;
	Type_t* V_1 = NULL;
	Type_t* V_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = il2cpp_codegen_array_get_rank(L_1);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0030:
	{
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = il2cpp_codegen_array_get_length(L_6);
		int32_t L_8 = ___1_index;
		int32_t L_9;
		L_9 = ReadOnlyCollection_1_get_Count_mAA7CC5A5A5CC07977C0D39FB6F9B5718A6CC44A7(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, L_8))) >= ((int32_t)L_9)))
		{
			goto IL_0046;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(5, NULL);
	}

IL_0046:
	{
		RuntimeArray* L_10 = ___0_array;
		V_0 = ((Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA*)IsInstSealed((RuntimeObject*)L_10, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)));
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_11 = V_0;
		if (!L_11)
		{
			goto IL_005e;
		}
	}
	{
		RuntimeObject* L_12 = __this->___list;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_13 = V_0;
		int32_t L_14 = ___1_index;
		NullCheck(L_12);
		InterfaceActionInvoker2< Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_12, L_13, L_14);
		return;
	}

IL_005e:
	{
		RuntimeArray* L_15 = ___0_array;
		NullCheck(L_15);
		Type_t* L_16;
		L_16 = il2cpp_codegen_object_get_type(L_15);
		NullCheck(L_16);
		Type_t* L_17;
		L_17 = VirtualFuncInvoker0< Type_t* >::Invoke(46, L_16);
		V_1 = L_17;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 12)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		V_2 = L_19;
		Type_t* L_20 = V_1;
		Type_t* L_21 = V_2;
		NullCheck(L_20);
		bool L_22;
		L_22 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_20, L_21);
		if (L_22)
		{
			goto IL_008c;
		}
	}
	{
		Type_t* L_23 = V_2;
		Type_t* L_24 = V_1;
		NullCheck(L_23);
		bool L_25;
		L_25 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_23, L_24);
		if (L_25)
		{
			goto IL_008c;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_008c:
	{
		RuntimeArray* L_26 = ___0_array;
		V_3 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_26, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = V_3;
		if (L_27)
		{
			goto IL_009b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_009b:
	{
		RuntimeObject* L_28 = __this->___list;
		NullCheck(L_28);
		int32_t L_29;
		L_29 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_28);
		V_4 = L_29;
	}
	try
	{
		{
			V_5 = 0;
			goto IL_00cd_1;
		}

IL_00ad_1:
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_30 = V_3;
			int32_t L_31 = ___1_index;
			int32_t L_32 = L_31;
			___1_index = ((int32_t)il2cpp_codegen_add(L_32, 1));
			RuntimeObject* L_33 = __this->___list;
			int32_t L_34 = V_5;
			NullCheck(L_33);
			Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_35;
			L_35 = InterfaceFuncInvoker1< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_33, L_34);
			Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_36 = L_35;
			RuntimeObject* L_37 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_36);
			NullCheck(L_30);
			ArrayElementTypeCheck (L_30, L_37);
			(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (RuntimeObject*)L_37);
			int32_t L_38 = V_5;
			V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
		}

IL_00cd_1:
		{
			int32_t L_39 = V_5;
			int32_t L_40 = V_4;
			if ((((int32_t)L_39) < ((int32_t)L_40)))
			{
				goto IL_00ad_1;
			}
		}
		{
			goto IL_00dd;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00d5;
		}
		throw e;
	}

CATCH_00d5:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_41 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_00dd;
	}

IL_00dd:
	{
		return;
	}
}
// Method Definition Index: 10467
// Method Definition Index: 10468
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_System_Collections_IList_get_Item_mFB51685D52425D82D94306EA3FCF7FBE5B7052CA (ReadOnlyCollection_1_tC5795E68B14E438B5B65AF3F4C3F50CA0F951647* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = InterfaceFuncInvoker1< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_3);
		return L_4;
	}
}
// Method Definition Index: 10469
// Method Definition Index: 10470
// Method Definition Index: 10471
// Method Definition Index: 10472
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_mD05613BFB996238A2515ABAE9DD8DAA1490B499E (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = V_0;
		return false;
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
// Method Definition Index: 10473
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_System_Collections_IList_Contains_mFF78DA4B645C2A03F837F6DFDAEC436EBBF8DC3B (ReadOnlyCollection_1_tC5795E68B14E438B5B65AF3F4C3F50CA0F951647* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_mD05613BFB996238A2515ABAE9DD8DAA1490B499E(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		bool L_3;
		L_3 = ReadOnlyCollection_1_Contains_mE2B1A47E7F72DD933A5A1CBC95D4F517C3236FEE(__this, ((*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// Method Definition Index: 10474
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_System_Collections_IList_IndexOf_m8D949EDB2A066FD037E53F6DE569D7047D0CCF9C (ReadOnlyCollection_1_tC5795E68B14E438B5B65AF3F4C3F50CA0F951647* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_mD05613BFB996238A2515ABAE9DD8DAA1490B499E(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		int32_t L_3;
		L_3 = ReadOnlyCollection_1_IndexOf_m2C9AF85BBA3C92FF44F5ABAD91CE9CFF5AD52FCC(__this, ((*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15));
		return L_3;
	}

IL_0015:
	{
		return (-1);
	}
}
// Method Definition Index: 10475
// Method Definition Index: 10476
// Method Definition Index: 10477
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 10449
// Method Definition Index: 10450
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m986EBFDE8CE6355B85CD8A03AC640405D2A43CE7 (ReadOnlyCollection_1_t9E2776C66EA6797EAB405FB5507CCFDAA18084F6* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0);
		return L_1;
	}
}
// Method Definition Index: 10451
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ReadOnlyCollection_1_get_Item_mB1EB4D76E0FD0618D2789C1D56C5E2765C599340 (ReadOnlyCollection_1_t9E2776C66EA6797EAB405FB5507CCFDAA18084F6* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = InterfaceFuncInvoker1< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10452
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m6BD386DDD80866871280629115122A6313FAE337 (ReadOnlyCollection_1_t9E2776C66EA6797EAB405FB5507CCFDAA18084F6* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___0_value;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(4, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10453
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_CopyTo_m086317F511CAEAACEB88C4FC758D178783299988 (ReadOnlyCollection_1_t9E2776C66EA6797EAB405FB5507CCFDAA18084F6* __this, Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_1 = ___0_array;
		int32_t L_2 = ___1_index;
		NullCheck(L_0);
		InterfaceActionInvoker2< Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1, L_2);
		return;
	}
}
// Method Definition Index: 10454
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_GetEnumerator_mF92897FACB897883C99B3A8CE7971D0B4791D943 (ReadOnlyCollection_1_t9E2776C66EA6797EAB405FB5507CCFDAA18084F6* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 7), L_0);
		return L_1;
	}
}
// Method Definition Index: 10455
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m90B344A9EBAC54E2AA81B15D0FBA3498EE0603A3 (ReadOnlyCollection_1_t9E2776C66EA6797EAB405FB5507CCFDAA18084F6* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___0_value;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(2, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10456
// Method Definition Index: 10457
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m4F91B77D4C5EA025FE884EF898D9FAEC336AA4EE (ReadOnlyCollection_1_t9E2776C66EA6797EAB405FB5507CCFDAA18084F6* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = InterfaceFuncInvoker1< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10458
// Method Definition Index: 10459
// Method Definition Index: 10460
// Method Definition Index: 10461
// Method Definition Index: 10462
// Method Definition Index: 10463
// Method Definition Index: 10464
// Method Definition Index: 10465
// Method Definition Index: 10466
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_mD0C30DC820DA024256DCCBDC5434AC1BEECB0630 (ReadOnlyCollection_1_t9E2776C66EA6797EAB405FB5507CCFDAA18084F6* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* V_0 = NULL;
	Type_t* V_1 = NULL;
	Type_t* V_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = il2cpp_codegen_array_get_rank(L_1);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0030:
	{
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = il2cpp_codegen_array_get_length(L_6);
		int32_t L_8 = ___1_index;
		int32_t L_9;
		L_9 = ReadOnlyCollection_1_get_Count_m986EBFDE8CE6355B85CD8A03AC640405D2A43CE7(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, L_8))) >= ((int32_t)L_9)))
		{
			goto IL_0046;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(5, NULL);
	}

IL_0046:
	{
		RuntimeArray* L_10 = ___0_array;
		V_0 = ((Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)IsInstSealed((RuntimeObject*)L_10, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)));
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_11 = V_0;
		if (!L_11)
		{
			goto IL_005e;
		}
	}
	{
		RuntimeObject* L_12 = __this->___list;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_13 = V_0;
		int32_t L_14 = ___1_index;
		NullCheck(L_12);
		InterfaceActionInvoker2< Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_12, L_13, L_14);
		return;
	}

IL_005e:
	{
		RuntimeArray* L_15 = ___0_array;
		NullCheck(L_15);
		Type_t* L_16;
		L_16 = il2cpp_codegen_object_get_type(L_15);
		NullCheck(L_16);
		Type_t* L_17;
		L_17 = VirtualFuncInvoker0< Type_t* >::Invoke(46, L_16);
		V_1 = L_17;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 12)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		V_2 = L_19;
		Type_t* L_20 = V_1;
		Type_t* L_21 = V_2;
		NullCheck(L_20);
		bool L_22;
		L_22 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_20, L_21);
		if (L_22)
		{
			goto IL_008c;
		}
	}
	{
		Type_t* L_23 = V_2;
		Type_t* L_24 = V_1;
		NullCheck(L_23);
		bool L_25;
		L_25 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_23, L_24);
		if (L_25)
		{
			goto IL_008c;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_008c:
	{
		RuntimeArray* L_26 = ___0_array;
		V_3 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_26, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = V_3;
		if (L_27)
		{
			goto IL_009b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_009b:
	{
		RuntimeObject* L_28 = __this->___list;
		NullCheck(L_28);
		int32_t L_29;
		L_29 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_28);
		V_4 = L_29;
	}
	try
	{
		{
			V_5 = 0;
			goto IL_00cd_1;
		}

IL_00ad_1:
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_30 = V_3;
			int32_t L_31 = ___1_index;
			int32_t L_32 = L_31;
			___1_index = ((int32_t)il2cpp_codegen_add(L_32, 1));
			RuntimeObject* L_33 = __this->___list;
			int32_t L_34 = V_5;
			NullCheck(L_33);
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35;
			L_35 = InterfaceFuncInvoker1< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_33, L_34);
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_36 = L_35;
			RuntimeObject* L_37 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_36);
			NullCheck(L_30);
			ArrayElementTypeCheck (L_30, L_37);
			(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (RuntimeObject*)L_37);
			int32_t L_38 = V_5;
			V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
		}

IL_00cd_1:
		{
			int32_t L_39 = V_5;
			int32_t L_40 = V_4;
			if ((((int32_t)L_39) < ((int32_t)L_40)))
			{
				goto IL_00ad_1;
			}
		}
		{
			goto IL_00dd;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00d5;
		}
		throw e;
	}

CATCH_00d5:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_41 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_00dd;
	}

IL_00dd:
	{
		return;
	}
}
// Method Definition Index: 10467
// Method Definition Index: 10468
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_System_Collections_IList_get_Item_mFE485D90D9C0B99A883FB950FAB14916585FDABC (ReadOnlyCollection_1_t9E2776C66EA6797EAB405FB5507CCFDAA18084F6* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = InterfaceFuncInvoker1< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_3);
		return L_4;
	}
}
// Method Definition Index: 10469
// Method Definition Index: 10470
// Method Definition Index: 10471
// Method Definition Index: 10472
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m9D0C44744D57EEB523A3A4775550761A5F80C9C3 (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = V_0;
		return false;
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
// Method Definition Index: 10473
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_System_Collections_IList_Contains_m28EFD88DB110344E2DD7E8962C1AB7E25E00B0C2 (ReadOnlyCollection_1_t9E2776C66EA6797EAB405FB5507CCFDAA18084F6* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_m9D0C44744D57EEB523A3A4775550761A5F80C9C3(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		bool L_3;
		L_3 = ReadOnlyCollection_1_Contains_m6BD386DDD80866871280629115122A6313FAE337(__this, ((*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// Method Definition Index: 10474
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_System_Collections_IList_IndexOf_m8EB6BC2AE3CF92F980308559D3DA90423CF7A53E (ReadOnlyCollection_1_t9E2776C66EA6797EAB405FB5507CCFDAA18084F6* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_m9D0C44744D57EEB523A3A4775550761A5F80C9C3(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		int32_t L_3;
		L_3 = ReadOnlyCollection_1_IndexOf_m90B344A9EBAC54E2AA81B15D0FBA3498EE0603A3(__this, ((*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15));
		return L_3;
	}

IL_0015:
	{
		return (-1);
	}
}
// Method Definition Index: 10475
// Method Definition Index: 10476
// Method Definition Index: 10477
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 10449
// Method Definition Index: 10450
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m1B55A97A91F66DF4081BC160ACBA11A20C0C3D12 (ReadOnlyCollection_1_tC097ADAD4728DA15D13F639EC263BD398D57B04F* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0);
		return L_1;
	}
}
// Method Definition Index: 10451
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ReadOnlyCollection_1_get_Item_mDD64450B988F10EFA9AAB3A67ACDFA71761BAA7D (ReadOnlyCollection_1_tC097ADAD4728DA15D13F639EC263BD398D57B04F* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_2;
		L_2 = InterfaceFuncInvoker1< Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10452
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m36DC3D6E48A3DBD5B36F8782060E21142784D828 (ReadOnlyCollection_1_tC097ADAD4728DA15D13F639EC263BD398D57B04F* __this, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_1 = ___0_value;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 >::Invoke(4, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10453
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_CopyTo_m7C9323A97421C8D5DC83FA440462ACEAD1E0810E (ReadOnlyCollection_1_tC097ADAD4728DA15D13F639EC263BD398D57B04F* __this, Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_1 = ___0_array;
		int32_t L_2 = ___1_index;
		NullCheck(L_0);
		InterfaceActionInvoker2< Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1, L_2);
		return;
	}
}
// Method Definition Index: 10454
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_GetEnumerator_mD2C007726C9273EE601162DDF7FC69E2F4CC0AFE (ReadOnlyCollection_1_tC097ADAD4728DA15D13F639EC263BD398D57B04F* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 7), L_0);
		return L_1;
	}
}
// Method Definition Index: 10455
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m2765659E739B29A777CECAA80AEDF4D3A21FE0CE (ReadOnlyCollection_1_tC097ADAD4728DA15D13F639EC263BD398D57B04F* __this, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_1 = ___0_value;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 >::Invoke(2, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10456
// Method Definition Index: 10457
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m11E4245E74126B27B4ED19367FE86F0A3C71E60B (ReadOnlyCollection_1_tC097ADAD4728DA15D13F639EC263BD398D57B04F* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_2;
		L_2 = InterfaceFuncInvoker1< Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10458
// Method Definition Index: 10459
// Method Definition Index: 10460
// Method Definition Index: 10461
// Method Definition Index: 10462
// Method Definition Index: 10463
// Method Definition Index: 10464
// Method Definition Index: 10465
// Method Definition Index: 10466
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_mA23614C201E3DBFDC397B685E353FFD37FE29839 (ReadOnlyCollection_1_tC097ADAD4728DA15D13F639EC263BD398D57B04F* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* V_0 = NULL;
	Type_t* V_1 = NULL;
	Type_t* V_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = il2cpp_codegen_array_get_rank(L_1);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0030:
	{
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = il2cpp_codegen_array_get_length(L_6);
		int32_t L_8 = ___1_index;
		int32_t L_9;
		L_9 = ReadOnlyCollection_1_get_Count_m1B55A97A91F66DF4081BC160ACBA11A20C0C3D12(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, L_8))) >= ((int32_t)L_9)))
		{
			goto IL_0046;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(5, NULL);
	}

IL_0046:
	{
		RuntimeArray* L_10 = ___0_array;
		V_0 = ((Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD*)IsInstSealed((RuntimeObject*)L_10, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)));
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_11 = V_0;
		if (!L_11)
		{
			goto IL_005e;
		}
	}
	{
		RuntimeObject* L_12 = __this->___list;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_13 = V_0;
		int32_t L_14 = ___1_index;
		NullCheck(L_12);
		InterfaceActionInvoker2< Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_12, L_13, L_14);
		return;
	}

IL_005e:
	{
		RuntimeArray* L_15 = ___0_array;
		NullCheck(L_15);
		Type_t* L_16;
		L_16 = il2cpp_codegen_object_get_type(L_15);
		NullCheck(L_16);
		Type_t* L_17;
		L_17 = VirtualFuncInvoker0< Type_t* >::Invoke(46, L_16);
		V_1 = L_17;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 12)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		V_2 = L_19;
		Type_t* L_20 = V_1;
		Type_t* L_21 = V_2;
		NullCheck(L_20);
		bool L_22;
		L_22 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_20, L_21);
		if (L_22)
		{
			goto IL_008c;
		}
	}
	{
		Type_t* L_23 = V_2;
		Type_t* L_24 = V_1;
		NullCheck(L_23);
		bool L_25;
		L_25 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_23, L_24);
		if (L_25)
		{
			goto IL_008c;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_008c:
	{
		RuntimeArray* L_26 = ___0_array;
		V_3 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_26, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = V_3;
		if (L_27)
		{
			goto IL_009b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_009b:
	{
		RuntimeObject* L_28 = __this->___list;
		NullCheck(L_28);
		int32_t L_29;
		L_29 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_28);
		V_4 = L_29;
	}
	try
	{
		{
			V_5 = 0;
			goto IL_00cd_1;
		}

IL_00ad_1:
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_30 = V_3;
			int32_t L_31 = ___1_index;
			int32_t L_32 = L_31;
			___1_index = ((int32_t)il2cpp_codegen_add(L_32, 1));
			RuntimeObject* L_33 = __this->___list;
			int32_t L_34 = V_5;
			NullCheck(L_33);
			Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_35;
			L_35 = InterfaceFuncInvoker1< Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_33, L_34);
			Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_36 = L_35;
			RuntimeObject* L_37 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_36);
			NullCheck(L_30);
			ArrayElementTypeCheck (L_30, L_37);
			(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (RuntimeObject*)L_37);
			int32_t L_38 = V_5;
			V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
		}

IL_00cd_1:
		{
			int32_t L_39 = V_5;
			int32_t L_40 = V_4;
			if ((((int32_t)L_39) < ((int32_t)L_40)))
			{
				goto IL_00ad_1;
			}
		}
		{
			goto IL_00dd;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00d5;
		}
		throw e;
	}

CATCH_00d5:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_41 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_00dd;
	}

IL_00dd:
	{
		return;
	}
}
// Method Definition Index: 10467
// Method Definition Index: 10468
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_System_Collections_IList_get_Item_m081C6C784B25FF7A25C3FEB5AC3BFA9545426435 (ReadOnlyCollection_1_tC097ADAD4728DA15D13F639EC263BD398D57B04F* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_2;
		L_2 = InterfaceFuncInvoker1< Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_3);
		return L_4;
	}
}
// Method Definition Index: 10469
// Method Definition Index: 10470
// Method Definition Index: 10471
// Method Definition Index: 10472
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m15FC7DD980CED28245F768674D29D0E3F992837E (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3));
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_2 = V_0;
		return false;
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
// Method Definition Index: 10473
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_System_Collections_IList_Contains_mEF95FCCD41678D6273770888E6056C7BC16D64F1 (ReadOnlyCollection_1_tC097ADAD4728DA15D13F639EC263BD398D57B04F* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_m15FC7DD980CED28245F768674D29D0E3F992837E(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		bool L_3;
		L_3 = ReadOnlyCollection_1_Contains_m36DC3D6E48A3DBD5B36F8782060E21142784D828(__this, ((*(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// Method Definition Index: 10474
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_System_Collections_IList_IndexOf_m540CF46850C0926F454712EB3274BBB19132EAF3 (ReadOnlyCollection_1_tC097ADAD4728DA15D13F639EC263BD398D57B04F* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_m15FC7DD980CED28245F768674D29D0E3F992837E(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		int32_t L_3;
		L_3 = ReadOnlyCollection_1_IndexOf_m2765659E739B29A777CECAA80AEDF4D3A21FE0CE(__this, ((*(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15));
		return L_3;
	}

IL_0015:
	{
		return (-1);
	}
}
// Method Definition Index: 10475
// Method Definition Index: 10476
// Method Definition Index: 10477
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 10449
// Method Definition Index: 10450
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_mBCE75651A133F9CCD9FC4C86CBDE6E6076255728 (ReadOnlyCollection_1_tA87EA4F23BAC952A78BDE9A5B94F3091DB5C7861* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0);
		return L_1;
	}
}
// Method Definition Index: 10451
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76 ReadOnlyCollection_1_get_Item_m31A58C8609F6D252618CE1D89B689D2AE31A7774 (ReadOnlyCollection_1_tA87EA4F23BAC952A78BDE9A5B94F3091DB5C7861* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76 L_2;
		L_2 = InterfaceFuncInvoker1< VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10452
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_mC1DD398028830B9B33CD32417B797F7AD988C1CE (ReadOnlyCollection_1_tA87EA4F23BAC952A78BDE9A5B94F3091DB5C7861* __this, VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76 ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76 L_1 = ___0_value;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76 >::Invoke(4, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10453
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_CopyTo_m99F3B05290FE38FFD3153D103CF3B6AD590BD939 (ReadOnlyCollection_1_tA87EA4F23BAC952A78BDE9A5B94F3091DB5C7861* __this, VertexAttributeDescriptorU5BU5D_t5D10E60612F12777F59B7E33939F9075DB0E02B2* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		VertexAttributeDescriptorU5BU5D_t5D10E60612F12777F59B7E33939F9075DB0E02B2* L_1 = ___0_array;
		int32_t L_2 = ___1_index;
		NullCheck(L_0);
		InterfaceActionInvoker2< VertexAttributeDescriptorU5BU5D_t5D10E60612F12777F59B7E33939F9075DB0E02B2*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1, L_2);
		return;
	}
}
// Method Definition Index: 10454
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_GetEnumerator_m850D92D798A95E1D8049A0B9046737D6D64218FF (ReadOnlyCollection_1_tA87EA4F23BAC952A78BDE9A5B94F3091DB5C7861* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 7), L_0);
		return L_1;
	}
}
// Method Definition Index: 10455
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m1CB37BA54919F404E908CDFE7022CC6D1F0E5954 (ReadOnlyCollection_1_tA87EA4F23BAC952A78BDE9A5B94F3091DB5C7861* __this, VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76 ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76 L_1 = ___0_value;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76 >::Invoke(2, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10456
// Method Definition Index: 10457
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76 ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m958605D96CE6899F89177E10C538F487F175723D (ReadOnlyCollection_1_tA87EA4F23BAC952A78BDE9A5B94F3091DB5C7861* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76 L_2;
		L_2 = InterfaceFuncInvoker1< VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10458
// Method Definition Index: 10459
// Method Definition Index: 10460
// Method Definition Index: 10461
// Method Definition Index: 10462
// Method Definition Index: 10463
// Method Definition Index: 10464
// Method Definition Index: 10465
// Method Definition Index: 10466
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_mBCDC1340700BBB17F424C5932B6C00A6F63BC87E (ReadOnlyCollection_1_tA87EA4F23BAC952A78BDE9A5B94F3091DB5C7861* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	VertexAttributeDescriptorU5BU5D_t5D10E60612F12777F59B7E33939F9075DB0E02B2* V_0 = NULL;
	Type_t* V_1 = NULL;
	Type_t* V_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = il2cpp_codegen_array_get_rank(L_1);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0030:
	{
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = il2cpp_codegen_array_get_length(L_6);
		int32_t L_8 = ___1_index;
		int32_t L_9;
		L_9 = ReadOnlyCollection_1_get_Count_mBCE75651A133F9CCD9FC4C86CBDE6E6076255728(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, L_8))) >= ((int32_t)L_9)))
		{
			goto IL_0046;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(5, NULL);
	}

IL_0046:
	{
		RuntimeArray* L_10 = ___0_array;
		V_0 = ((VertexAttributeDescriptorU5BU5D_t5D10E60612F12777F59B7E33939F9075DB0E02B2*)IsInstSealed((RuntimeObject*)L_10, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)));
		VertexAttributeDescriptorU5BU5D_t5D10E60612F12777F59B7E33939F9075DB0E02B2* L_11 = V_0;
		if (!L_11)
		{
			goto IL_005e;
		}
	}
	{
		RuntimeObject* L_12 = __this->___list;
		VertexAttributeDescriptorU5BU5D_t5D10E60612F12777F59B7E33939F9075DB0E02B2* L_13 = V_0;
		int32_t L_14 = ___1_index;
		NullCheck(L_12);
		InterfaceActionInvoker2< VertexAttributeDescriptorU5BU5D_t5D10E60612F12777F59B7E33939F9075DB0E02B2*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_12, L_13, L_14);
		return;
	}

IL_005e:
	{
		RuntimeArray* L_15 = ___0_array;
		NullCheck(L_15);
		Type_t* L_16;
		L_16 = il2cpp_codegen_object_get_type(L_15);
		NullCheck(L_16);
		Type_t* L_17;
		L_17 = VirtualFuncInvoker0< Type_t* >::Invoke(46, L_16);
		V_1 = L_17;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 12)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		V_2 = L_19;
		Type_t* L_20 = V_1;
		Type_t* L_21 = V_2;
		NullCheck(L_20);
		bool L_22;
		L_22 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_20, L_21);
		if (L_22)
		{
			goto IL_008c;
		}
	}
	{
		Type_t* L_23 = V_2;
		Type_t* L_24 = V_1;
		NullCheck(L_23);
		bool L_25;
		L_25 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_23, L_24);
		if (L_25)
		{
			goto IL_008c;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_008c:
	{
		RuntimeArray* L_26 = ___0_array;
		V_3 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_26, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = V_3;
		if (L_27)
		{
			goto IL_009b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_009b:
	{
		RuntimeObject* L_28 = __this->___list;
		NullCheck(L_28);
		int32_t L_29;
		L_29 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_28);
		V_4 = L_29;
	}
	try
	{
		{
			V_5 = 0;
			goto IL_00cd_1;
		}

IL_00ad_1:
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_30 = V_3;
			int32_t L_31 = ___1_index;
			int32_t L_32 = L_31;
			___1_index = ((int32_t)il2cpp_codegen_add(L_32, 1));
			RuntimeObject* L_33 = __this->___list;
			int32_t L_34 = V_5;
			NullCheck(L_33);
			VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76 L_35;
			L_35 = InterfaceFuncInvoker1< VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_33, L_34);
			VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76 L_36 = L_35;
			RuntimeObject* L_37 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_36);
			NullCheck(L_30);
			ArrayElementTypeCheck (L_30, L_37);
			(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (RuntimeObject*)L_37);
			int32_t L_38 = V_5;
			V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
		}

IL_00cd_1:
		{
			int32_t L_39 = V_5;
			int32_t L_40 = V_4;
			if ((((int32_t)L_39) < ((int32_t)L_40)))
			{
				goto IL_00ad_1;
			}
		}
		{
			goto IL_00dd;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00d5;
		}
		throw e;
	}

CATCH_00d5:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_41 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_00dd;
	}

IL_00dd:
	{
		return;
	}
}
// Method Definition Index: 10467
// Method Definition Index: 10468
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_System_Collections_IList_get_Item_m89F3389F9C174AA0A2FC15A62B47C0D6A6C2765E (ReadOnlyCollection_1_tA87EA4F23BAC952A78BDE9A5B94F3091DB5C7861* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76 L_2;
		L_2 = InterfaceFuncInvoker1< VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76 L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_3);
		return L_4;
	}
}
// Method Definition Index: 10469
// Method Definition Index: 10470
// Method Definition Index: 10471
// Method Definition Index: 10472
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m6E114ABEDEECA9C3CA16E3E503B90E12AD4EF0B7 (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76));
		VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76 L_2 = V_0;
		return false;
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
// Method Definition Index: 10473
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_System_Collections_IList_Contains_m99005858A9CE865F4078D9375EFDCD6DE184BB8C (ReadOnlyCollection_1_tA87EA4F23BAC952A78BDE9A5B94F3091DB5C7861* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_m6E114ABEDEECA9C3CA16E3E503B90E12AD4EF0B7(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		bool L_3;
		L_3 = ReadOnlyCollection_1_Contains_mC1DD398028830B9B33CD32417B797F7AD988C1CE(__this, ((*(VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// Method Definition Index: 10474
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_System_Collections_IList_IndexOf_m9DD98EF20797B7B9392335161EC93887F40D160A (ReadOnlyCollection_1_tA87EA4F23BAC952A78BDE9A5B94F3091DB5C7861* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_m6E114ABEDEECA9C3CA16E3E503B90E12AD4EF0B7(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		int32_t L_3;
		L_3 = ReadOnlyCollection_1_IndexOf_m1CB37BA54919F404E908CDFE7022CC6D1F0E5954(__this, ((*(VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15));
		return L_3;
	}

IL_0015:
	{
		return (-1);
	}
}
// Method Definition Index: 10475
// Method Definition Index: 10476
// Method Definition Index: 10477
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 10449
// Method Definition Index: 10450
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_mE3C5DAF414445B20B6B036B8BFDAB1BDDDC8E206 (ReadOnlyCollection_1_tB6FD6BA75C6F479B6860FCBA235488206BF20E52* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0);
		return L_1;
	}
}
// Method Definition Index: 10451
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D ReadOnlyCollection_1_get_Item_m1C2272A2347A1CF3D61FD581E6720A523C4F3C59 (ReadOnlyCollection_1_tB6FD6BA75C6F479B6860FCBA235488206BF20E52* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D L_2;
		L_2 = InterfaceFuncInvoker1< X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10452
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m6071D5F75047625A3D94C37160C90859A4969B24 (ReadOnlyCollection_1_tB6FD6BA75C6F479B6860FCBA235488206BF20E52* __this, X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D L_1 = ___0_value;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D >::Invoke(4, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10453
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_CopyTo_mBCFB4F4ED329720C9F218B1C7B44AF26C7932154 (ReadOnlyCollection_1_tB6FD6BA75C6F479B6860FCBA235488206BF20E52* __this, X509ChainStatusU5BU5D_tA4CB502E13E6D62B9C824B15F3193FE7EC889299* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		X509ChainStatusU5BU5D_tA4CB502E13E6D62B9C824B15F3193FE7EC889299* L_1 = ___0_array;
		int32_t L_2 = ___1_index;
		NullCheck(L_0);
		InterfaceActionInvoker2< X509ChainStatusU5BU5D_tA4CB502E13E6D62B9C824B15F3193FE7EC889299*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1, L_2);
		return;
	}
}
// Method Definition Index: 10454
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_GetEnumerator_m270B880D914DEC5C49860661613046156448BAC6 (ReadOnlyCollection_1_tB6FD6BA75C6F479B6860FCBA235488206BF20E52* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 7), L_0);
		return L_1;
	}
}
// Method Definition Index: 10455
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m1A4EBD2A29E3D8135601CD299CF5B0B2595BD7E9 (ReadOnlyCollection_1_tB6FD6BA75C6F479B6860FCBA235488206BF20E52* __this, X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D L_1 = ___0_value;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D >::Invoke(2, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10456
// Method Definition Index: 10457
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_mC4F4809EFFF231517090D926CF5309AE4CD7A598 (ReadOnlyCollection_1_tB6FD6BA75C6F479B6860FCBA235488206BF20E52* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D L_2;
		L_2 = InterfaceFuncInvoker1< X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10458
// Method Definition Index: 10459
// Method Definition Index: 10460
// Method Definition Index: 10461
// Method Definition Index: 10462
// Method Definition Index: 10463
// Method Definition Index: 10464
// Method Definition Index: 10465
// Method Definition Index: 10466
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m3BB8507582DFCB354572AD379E8505C9254A9F52 (ReadOnlyCollection_1_tB6FD6BA75C6F479B6860FCBA235488206BF20E52* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	X509ChainStatusU5BU5D_tA4CB502E13E6D62B9C824B15F3193FE7EC889299* V_0 = NULL;
	Type_t* V_1 = NULL;
	Type_t* V_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = il2cpp_codegen_array_get_rank(L_1);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0030:
	{
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = il2cpp_codegen_array_get_length(L_6);
		int32_t L_8 = ___1_index;
		int32_t L_9;
		L_9 = ReadOnlyCollection_1_get_Count_mE3C5DAF414445B20B6B036B8BFDAB1BDDDC8E206(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, L_8))) >= ((int32_t)L_9)))
		{
			goto IL_0046;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(5, NULL);
	}

IL_0046:
	{
		RuntimeArray* L_10 = ___0_array;
		V_0 = ((X509ChainStatusU5BU5D_tA4CB502E13E6D62B9C824B15F3193FE7EC889299*)IsInstSealed((RuntimeObject*)L_10, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)));
		X509ChainStatusU5BU5D_tA4CB502E13E6D62B9C824B15F3193FE7EC889299* L_11 = V_0;
		if (!L_11)
		{
			goto IL_005e;
		}
	}
	{
		RuntimeObject* L_12 = __this->___list;
		X509ChainStatusU5BU5D_tA4CB502E13E6D62B9C824B15F3193FE7EC889299* L_13 = V_0;
		int32_t L_14 = ___1_index;
		NullCheck(L_12);
		InterfaceActionInvoker2< X509ChainStatusU5BU5D_tA4CB502E13E6D62B9C824B15F3193FE7EC889299*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_12, L_13, L_14);
		return;
	}

IL_005e:
	{
		RuntimeArray* L_15 = ___0_array;
		NullCheck(L_15);
		Type_t* L_16;
		L_16 = il2cpp_codegen_object_get_type(L_15);
		NullCheck(L_16);
		Type_t* L_17;
		L_17 = VirtualFuncInvoker0< Type_t* >::Invoke(46, L_16);
		V_1 = L_17;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 12)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		V_2 = L_19;
		Type_t* L_20 = V_1;
		Type_t* L_21 = V_2;
		NullCheck(L_20);
		bool L_22;
		L_22 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_20, L_21);
		if (L_22)
		{
			goto IL_008c;
		}
	}
	{
		Type_t* L_23 = V_2;
		Type_t* L_24 = V_1;
		NullCheck(L_23);
		bool L_25;
		L_25 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_23, L_24);
		if (L_25)
		{
			goto IL_008c;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_008c:
	{
		RuntimeArray* L_26 = ___0_array;
		V_3 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_26, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = V_3;
		if (L_27)
		{
			goto IL_009b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_009b:
	{
		RuntimeObject* L_28 = __this->___list;
		NullCheck(L_28);
		int32_t L_29;
		L_29 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_28);
		V_4 = L_29;
	}
	try
	{
		{
			V_5 = 0;
			goto IL_00cd_1;
		}

IL_00ad_1:
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_30 = V_3;
			int32_t L_31 = ___1_index;
			int32_t L_32 = L_31;
			___1_index = ((int32_t)il2cpp_codegen_add(L_32, 1));
			RuntimeObject* L_33 = __this->___list;
			int32_t L_34 = V_5;
			NullCheck(L_33);
			X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D L_35;
			L_35 = InterfaceFuncInvoker1< X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_33, L_34);
			X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D L_36 = L_35;
			RuntimeObject* L_37 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_36);
			NullCheck(L_30);
			ArrayElementTypeCheck (L_30, L_37);
			(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (RuntimeObject*)L_37);
			int32_t L_38 = V_5;
			V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
		}

IL_00cd_1:
		{
			int32_t L_39 = V_5;
			int32_t L_40 = V_4;
			if ((((int32_t)L_39) < ((int32_t)L_40)))
			{
				goto IL_00ad_1;
			}
		}
		{
			goto IL_00dd;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00d5;
		}
		throw e;
	}

CATCH_00d5:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_41 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_00dd;
	}

IL_00dd:
	{
		return;
	}
}
// Method Definition Index: 10467
// Method Definition Index: 10468
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_System_Collections_IList_get_Item_mBCA2B6FEECD40F4819CF3E04271BEFB79FA728C7 (ReadOnlyCollection_1_tB6FD6BA75C6F479B6860FCBA235488206BF20E52* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D L_2;
		L_2 = InterfaceFuncInvoker1< X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_3);
		return L_4;
	}
}
// Method Definition Index: 10469
// Method Definition Index: 10470
// Method Definition Index: 10471
// Method Definition Index: 10472
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m733A0F976869D4EB1A0B40A0CCCD60B582572C4A (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D));
		X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D L_2 = V_0;
		return false;
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
// Method Definition Index: 10473
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_System_Collections_IList_Contains_m6990C5137CC928241210F44598450122F979B7D9 (ReadOnlyCollection_1_tB6FD6BA75C6F479B6860FCBA235488206BF20E52* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_m733A0F976869D4EB1A0B40A0CCCD60B582572C4A(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		bool L_3;
		L_3 = ReadOnlyCollection_1_Contains_m6071D5F75047625A3D94C37160C90859A4969B24(__this, ((*(X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// Method Definition Index: 10474
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_System_Collections_IList_IndexOf_m92FEC9D06A4812AA4F37EDDAE1D6D3F59A32D917 (ReadOnlyCollection_1_tB6FD6BA75C6F479B6860FCBA235488206BF20E52* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_m733A0F976869D4EB1A0B40A0CCCD60B582572C4A(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		int32_t L_3;
		L_3 = ReadOnlyCollection_1_IndexOf_m1A4EBD2A29E3D8135601CD299CF5B0B2595BD7E9(__this, ((*(X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15));
		return L_3;
	}

IL_0015:
	{
		return (-1);
	}
}
// Method Definition Index: 10475
// Method Definition Index: 10476
// Method Definition Index: 10477
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 10449
// Method Definition Index: 10450
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m32DA3B360C59EA0ACEB0CFE11E2942D2BD5B7749 (ReadOnlyCollection_1_tCE850EF6D2887B695661E22343E54F58D576C0E3* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0);
		return L_1;
	}
}
// Method Definition Index: 10451
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XREraseAnchorResult_t2B44248D283942660C5CE02ECEE6843F60055B2E ReadOnlyCollection_1_get_Item_mB5806642B314BD97DE766AB884B4DBA1E5E67B82 (ReadOnlyCollection_1_tCE850EF6D2887B695661E22343E54F58D576C0E3* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		XREraseAnchorResult_t2B44248D283942660C5CE02ECEE6843F60055B2E L_2;
		L_2 = InterfaceFuncInvoker1< XREraseAnchorResult_t2B44248D283942660C5CE02ECEE6843F60055B2E, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10452
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_mADAB79033289718AA2279820CBCE19BC4CEFFC9C (ReadOnlyCollection_1_tCE850EF6D2887B695661E22343E54F58D576C0E3* __this, XREraseAnchorResult_t2B44248D283942660C5CE02ECEE6843F60055B2E ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		XREraseAnchorResult_t2B44248D283942660C5CE02ECEE6843F60055B2E L_1 = ___0_value;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, XREraseAnchorResult_t2B44248D283942660C5CE02ECEE6843F60055B2E >::Invoke(4, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10453
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_CopyTo_m18D5F3AA3309CB6F77599EB6F039AFEBF14E825D (ReadOnlyCollection_1_tCE850EF6D2887B695661E22343E54F58D576C0E3* __this, XREraseAnchorResultU5BU5D_t07FAB42E00B6A49C5112764825A8A944F8E68140* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		XREraseAnchorResultU5BU5D_t07FAB42E00B6A49C5112764825A8A944F8E68140* L_1 = ___0_array;
		int32_t L_2 = ___1_index;
		NullCheck(L_0);
		InterfaceActionInvoker2< XREraseAnchorResultU5BU5D_t07FAB42E00B6A49C5112764825A8A944F8E68140*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1, L_2);
		return;
	}
}
// Method Definition Index: 10454
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_GetEnumerator_m3B6DC8B23098D0CA788F7F0CCABE7B1DE644297F (ReadOnlyCollection_1_tCE850EF6D2887B695661E22343E54F58D576C0E3* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 7), L_0);
		return L_1;
	}
}
// Method Definition Index: 10455
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m3283306131A18B452A59628C57FF392860005F1D (ReadOnlyCollection_1_tCE850EF6D2887B695661E22343E54F58D576C0E3* __this, XREraseAnchorResult_t2B44248D283942660C5CE02ECEE6843F60055B2E ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		XREraseAnchorResult_t2B44248D283942660C5CE02ECEE6843F60055B2E L_1 = ___0_value;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, XREraseAnchorResult_t2B44248D283942660C5CE02ECEE6843F60055B2E >::Invoke(2, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10456
// Method Definition Index: 10457
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XREraseAnchorResult_t2B44248D283942660C5CE02ECEE6843F60055B2E ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m48494264711B2388DC8AA173BFDA23044A82DE40 (ReadOnlyCollection_1_tCE850EF6D2887B695661E22343E54F58D576C0E3* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		XREraseAnchorResult_t2B44248D283942660C5CE02ECEE6843F60055B2E L_2;
		L_2 = InterfaceFuncInvoker1< XREraseAnchorResult_t2B44248D283942660C5CE02ECEE6843F60055B2E, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10458
// Method Definition Index: 10459
// Method Definition Index: 10460
// Method Definition Index: 10461
// Method Definition Index: 10462
// Method Definition Index: 10463
// Method Definition Index: 10464
// Method Definition Index: 10465
// Method Definition Index: 10466
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_mB0588077E9C44024EE18C8C3C00938072E320F6B (ReadOnlyCollection_1_tCE850EF6D2887B695661E22343E54F58D576C0E3* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	XREraseAnchorResultU5BU5D_t07FAB42E00B6A49C5112764825A8A944F8E68140* V_0 = NULL;
	Type_t* V_1 = NULL;
	Type_t* V_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = il2cpp_codegen_array_get_rank(L_1);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0030:
	{
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = il2cpp_codegen_array_get_length(L_6);
		int32_t L_8 = ___1_index;
		int32_t L_9;
		L_9 = ReadOnlyCollection_1_get_Count_m32DA3B360C59EA0ACEB0CFE11E2942D2BD5B7749(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, L_8))) >= ((int32_t)L_9)))
		{
			goto IL_0046;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(5, NULL);
	}

IL_0046:
	{
		RuntimeArray* L_10 = ___0_array;
		V_0 = ((XREraseAnchorResultU5BU5D_t07FAB42E00B6A49C5112764825A8A944F8E68140*)IsInstSealed((RuntimeObject*)L_10, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)));
		XREraseAnchorResultU5BU5D_t07FAB42E00B6A49C5112764825A8A944F8E68140* L_11 = V_0;
		if (!L_11)
		{
			goto IL_005e;
		}
	}
	{
		RuntimeObject* L_12 = __this->___list;
		XREraseAnchorResultU5BU5D_t07FAB42E00B6A49C5112764825A8A944F8E68140* L_13 = V_0;
		int32_t L_14 = ___1_index;
		NullCheck(L_12);
		InterfaceActionInvoker2< XREraseAnchorResultU5BU5D_t07FAB42E00B6A49C5112764825A8A944F8E68140*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_12, L_13, L_14);
		return;
	}

IL_005e:
	{
		RuntimeArray* L_15 = ___0_array;
		NullCheck(L_15);
		Type_t* L_16;
		L_16 = il2cpp_codegen_object_get_type(L_15);
		NullCheck(L_16);
		Type_t* L_17;
		L_17 = VirtualFuncInvoker0< Type_t* >::Invoke(46, L_16);
		V_1 = L_17;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 12)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		V_2 = L_19;
		Type_t* L_20 = V_1;
		Type_t* L_21 = V_2;
		NullCheck(L_20);
		bool L_22;
		L_22 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_20, L_21);
		if (L_22)
		{
			goto IL_008c;
		}
	}
	{
		Type_t* L_23 = V_2;
		Type_t* L_24 = V_1;
		NullCheck(L_23);
		bool L_25;
		L_25 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_23, L_24);
		if (L_25)
		{
			goto IL_008c;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_008c:
	{
		RuntimeArray* L_26 = ___0_array;
		V_3 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_26, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = V_3;
		if (L_27)
		{
			goto IL_009b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_009b:
	{
		RuntimeObject* L_28 = __this->___list;
		NullCheck(L_28);
		int32_t L_29;
		L_29 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_28);
		V_4 = L_29;
	}
	try
	{
		{
			V_5 = 0;
			goto IL_00cd_1;
		}

IL_00ad_1:
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_30 = V_3;
			int32_t L_31 = ___1_index;
			int32_t L_32 = L_31;
			___1_index = ((int32_t)il2cpp_codegen_add(L_32, 1));
			RuntimeObject* L_33 = __this->___list;
			int32_t L_34 = V_5;
			NullCheck(L_33);
			XREraseAnchorResult_t2B44248D283942660C5CE02ECEE6843F60055B2E L_35;
			L_35 = InterfaceFuncInvoker1< XREraseAnchorResult_t2B44248D283942660C5CE02ECEE6843F60055B2E, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_33, L_34);
			XREraseAnchorResult_t2B44248D283942660C5CE02ECEE6843F60055B2E L_36 = L_35;
			RuntimeObject* L_37 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_36);
			NullCheck(L_30);
			ArrayElementTypeCheck (L_30, L_37);
			(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (RuntimeObject*)L_37);
			int32_t L_38 = V_5;
			V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
		}

IL_00cd_1:
		{
			int32_t L_39 = V_5;
			int32_t L_40 = V_4;
			if ((((int32_t)L_39) < ((int32_t)L_40)))
			{
				goto IL_00ad_1;
			}
		}
		{
			goto IL_00dd;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00d5;
		}
		throw e;
	}

CATCH_00d5:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_41 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_00dd;
	}

IL_00dd:
	{
		return;
	}
}
// Method Definition Index: 10467
// Method Definition Index: 10468
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_System_Collections_IList_get_Item_mA9371ED7B74D48AA5C0203559F7BA709E57CEB58 (ReadOnlyCollection_1_tCE850EF6D2887B695661E22343E54F58D576C0E3* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		XREraseAnchorResult_t2B44248D283942660C5CE02ECEE6843F60055B2E L_2;
		L_2 = InterfaceFuncInvoker1< XREraseAnchorResult_t2B44248D283942660C5CE02ECEE6843F60055B2E, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		XREraseAnchorResult_t2B44248D283942660C5CE02ECEE6843F60055B2E L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_3);
		return L_4;
	}
}
// Method Definition Index: 10469
// Method Definition Index: 10470
// Method Definition Index: 10471
// Method Definition Index: 10472
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m60A18ED6B809F36A8838776C9E2036303D89F82C (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	XREraseAnchorResult_t2B44248D283942660C5CE02ECEE6843F60055B2E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(XREraseAnchorResult_t2B44248D283942660C5CE02ECEE6843F60055B2E));
		XREraseAnchorResult_t2B44248D283942660C5CE02ECEE6843F60055B2E L_2 = V_0;
		return false;
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
// Method Definition Index: 10473
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_System_Collections_IList_Contains_mCDAB28123B78E5311125ECAAFCDF62A7665C8E92 (ReadOnlyCollection_1_tCE850EF6D2887B695661E22343E54F58D576C0E3* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_m60A18ED6B809F36A8838776C9E2036303D89F82C(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		bool L_3;
		L_3 = ReadOnlyCollection_1_Contains_mADAB79033289718AA2279820CBCE19BC4CEFFC9C(__this, ((*(XREraseAnchorResult_t2B44248D283942660C5CE02ECEE6843F60055B2E*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// Method Definition Index: 10474
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_System_Collections_IList_IndexOf_mFD457B2CECEA6B98975C1C616E5035443E9A5DFD (ReadOnlyCollection_1_tCE850EF6D2887B695661E22343E54F58D576C0E3* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_m60A18ED6B809F36A8838776C9E2036303D89F82C(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		int32_t L_3;
		L_3 = ReadOnlyCollection_1_IndexOf_m3283306131A18B452A59628C57FF392860005F1D(__this, ((*(XREraseAnchorResult_t2B44248D283942660C5CE02ECEE6843F60055B2E*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15));
		return L_3;
	}

IL_0015:
	{
		return (-1);
	}
}
// Method Definition Index: 10475
// Method Definition Index: 10476
// Method Definition Index: 10477
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 10449
// Method Definition Index: 10450
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m21CADB99DB74429FF3CAF70BAB078191A03241E3 (ReadOnlyCollection_1_t803A81BE343B15275BCD30A219ACAC97F0B9A1C8* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0);
		return L_1;
	}
}
// Method Definition Index: 10451
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRFeatureDescriptor_t690E672A6BBBEFBB8AF221485C1884507EAFB5B2 ReadOnlyCollection_1_get_Item_m111A5F4DD371F2AD501E83319FD0DD9FD57A646B (ReadOnlyCollection_1_t803A81BE343B15275BCD30A219ACAC97F0B9A1C8* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		XRFeatureDescriptor_t690E672A6BBBEFBB8AF221485C1884507EAFB5B2 L_2;
		L_2 = InterfaceFuncInvoker1< XRFeatureDescriptor_t690E672A6BBBEFBB8AF221485C1884507EAFB5B2, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10452
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m7F9F1C288B16CFD896954561CBA914AB70CA3C42 (ReadOnlyCollection_1_t803A81BE343B15275BCD30A219ACAC97F0B9A1C8* __this, XRFeatureDescriptor_t690E672A6BBBEFBB8AF221485C1884507EAFB5B2 ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		XRFeatureDescriptor_t690E672A6BBBEFBB8AF221485C1884507EAFB5B2 L_1 = ___0_value;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, XRFeatureDescriptor_t690E672A6BBBEFBB8AF221485C1884507EAFB5B2 >::Invoke(4, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10453
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_CopyTo_m4A87AFDE28973CA42FBAA07BCA03E7F9A511BF31 (ReadOnlyCollection_1_t803A81BE343B15275BCD30A219ACAC97F0B9A1C8* __this, XRFeatureDescriptorU5BU5D_tBB735747E74DA05050B124BFE3525E40EC4114A7* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		XRFeatureDescriptorU5BU5D_tBB735747E74DA05050B124BFE3525E40EC4114A7* L_1 = ___0_array;
		int32_t L_2 = ___1_index;
		NullCheck(L_0);
		InterfaceActionInvoker2< XRFeatureDescriptorU5BU5D_tBB735747E74DA05050B124BFE3525E40EC4114A7*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1, L_2);
		return;
	}
}
// Method Definition Index: 10454
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_GetEnumerator_mEFA3C7B5E0D654937EA0FD4DCDB9A3B075AF5B77 (ReadOnlyCollection_1_t803A81BE343B15275BCD30A219ACAC97F0B9A1C8* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 7), L_0);
		return L_1;
	}
}
// Method Definition Index: 10455
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m12E94AAF0808183AA148780A69482224EAE1EACF (ReadOnlyCollection_1_t803A81BE343B15275BCD30A219ACAC97F0B9A1C8* __this, XRFeatureDescriptor_t690E672A6BBBEFBB8AF221485C1884507EAFB5B2 ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		XRFeatureDescriptor_t690E672A6BBBEFBB8AF221485C1884507EAFB5B2 L_1 = ___0_value;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, XRFeatureDescriptor_t690E672A6BBBEFBB8AF221485C1884507EAFB5B2 >::Invoke(2, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10456
// Method Definition Index: 10457
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRFeatureDescriptor_t690E672A6BBBEFBB8AF221485C1884507EAFB5B2 ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_mE7A2D9C13FDC29760DF759B9845B427A620E4322 (ReadOnlyCollection_1_t803A81BE343B15275BCD30A219ACAC97F0B9A1C8* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		XRFeatureDescriptor_t690E672A6BBBEFBB8AF221485C1884507EAFB5B2 L_2;
		L_2 = InterfaceFuncInvoker1< XRFeatureDescriptor_t690E672A6BBBEFBB8AF221485C1884507EAFB5B2, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10458
// Method Definition Index: 10459
// Method Definition Index: 10460
// Method Definition Index: 10461
// Method Definition Index: 10462
// Method Definition Index: 10463
// Method Definition Index: 10464
// Method Definition Index: 10465
// Method Definition Index: 10466
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m2F3F6A5464789C54A0E41B9B562773D4702CEDD0 (ReadOnlyCollection_1_t803A81BE343B15275BCD30A219ACAC97F0B9A1C8* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	XRFeatureDescriptorU5BU5D_tBB735747E74DA05050B124BFE3525E40EC4114A7* V_0 = NULL;
	Type_t* V_1 = NULL;
	Type_t* V_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = il2cpp_codegen_array_get_rank(L_1);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0030:
	{
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = il2cpp_codegen_array_get_length(L_6);
		int32_t L_8 = ___1_index;
		int32_t L_9;
		L_9 = ReadOnlyCollection_1_get_Count_m21CADB99DB74429FF3CAF70BAB078191A03241E3(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, L_8))) >= ((int32_t)L_9)))
		{
			goto IL_0046;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(5, NULL);
	}

IL_0046:
	{
		RuntimeArray* L_10 = ___0_array;
		V_0 = ((XRFeatureDescriptorU5BU5D_tBB735747E74DA05050B124BFE3525E40EC4114A7*)IsInstSealed((RuntimeObject*)L_10, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)));
		XRFeatureDescriptorU5BU5D_tBB735747E74DA05050B124BFE3525E40EC4114A7* L_11 = V_0;
		if (!L_11)
		{
			goto IL_005e;
		}
	}
	{
		RuntimeObject* L_12 = __this->___list;
		XRFeatureDescriptorU5BU5D_tBB735747E74DA05050B124BFE3525E40EC4114A7* L_13 = V_0;
		int32_t L_14 = ___1_index;
		NullCheck(L_12);
		InterfaceActionInvoker2< XRFeatureDescriptorU5BU5D_tBB735747E74DA05050B124BFE3525E40EC4114A7*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_12, L_13, L_14);
		return;
	}

IL_005e:
	{
		RuntimeArray* L_15 = ___0_array;
		NullCheck(L_15);
		Type_t* L_16;
		L_16 = il2cpp_codegen_object_get_type(L_15);
		NullCheck(L_16);
		Type_t* L_17;
		L_17 = VirtualFuncInvoker0< Type_t* >::Invoke(46, L_16);
		V_1 = L_17;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 12)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		V_2 = L_19;
		Type_t* L_20 = V_1;
		Type_t* L_21 = V_2;
		NullCheck(L_20);
		bool L_22;
		L_22 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_20, L_21);
		if (L_22)
		{
			goto IL_008c;
		}
	}
	{
		Type_t* L_23 = V_2;
		Type_t* L_24 = V_1;
		NullCheck(L_23);
		bool L_25;
		L_25 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_23, L_24);
		if (L_25)
		{
			goto IL_008c;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_008c:
	{
		RuntimeArray* L_26 = ___0_array;
		V_3 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_26, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = V_3;
		if (L_27)
		{
			goto IL_009b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_009b:
	{
		RuntimeObject* L_28 = __this->___list;
		NullCheck(L_28);
		int32_t L_29;
		L_29 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_28);
		V_4 = L_29;
	}
	try
	{
		{
			V_5 = 0;
			goto IL_00cd_1;
		}

IL_00ad_1:
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_30 = V_3;
			int32_t L_31 = ___1_index;
			int32_t L_32 = L_31;
			___1_index = ((int32_t)il2cpp_codegen_add(L_32, 1));
			RuntimeObject* L_33 = __this->___list;
			int32_t L_34 = V_5;
			NullCheck(L_33);
			XRFeatureDescriptor_t690E672A6BBBEFBB8AF221485C1884507EAFB5B2 L_35;
			L_35 = InterfaceFuncInvoker1< XRFeatureDescriptor_t690E672A6BBBEFBB8AF221485C1884507EAFB5B2, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_33, L_34);
			XRFeatureDescriptor_t690E672A6BBBEFBB8AF221485C1884507EAFB5B2 L_36 = L_35;
			RuntimeObject* L_37 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_36);
			NullCheck(L_30);
			ArrayElementTypeCheck (L_30, L_37);
			(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (RuntimeObject*)L_37);
			int32_t L_38 = V_5;
			V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
		}

IL_00cd_1:
		{
			int32_t L_39 = V_5;
			int32_t L_40 = V_4;
			if ((((int32_t)L_39) < ((int32_t)L_40)))
			{
				goto IL_00ad_1;
			}
		}
		{
			goto IL_00dd;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00d5;
		}
		throw e;
	}

CATCH_00d5:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_41 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_00dd;
	}

IL_00dd:
	{
		return;
	}
}
// Method Definition Index: 10467
// Method Definition Index: 10468
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_System_Collections_IList_get_Item_mE37F6BAAB9EECA8A1EB9BFDB480EAF511BEDBC71 (ReadOnlyCollection_1_t803A81BE343B15275BCD30A219ACAC97F0B9A1C8* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		XRFeatureDescriptor_t690E672A6BBBEFBB8AF221485C1884507EAFB5B2 L_2;
		L_2 = InterfaceFuncInvoker1< XRFeatureDescriptor_t690E672A6BBBEFBB8AF221485C1884507EAFB5B2, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		XRFeatureDescriptor_t690E672A6BBBEFBB8AF221485C1884507EAFB5B2 L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_3);
		return L_4;
	}
}
// Method Definition Index: 10469
// Method Definition Index: 10470
// Method Definition Index: 10471
// Method Definition Index: 10472
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_mB8637EFA6E7DC55A186C227F3D362EEF524D9FAD (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	XRFeatureDescriptor_t690E672A6BBBEFBB8AF221485C1884507EAFB5B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(XRFeatureDescriptor_t690E672A6BBBEFBB8AF221485C1884507EAFB5B2));
		XRFeatureDescriptor_t690E672A6BBBEFBB8AF221485C1884507EAFB5B2 L_2 = V_0;
		return false;
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
// Method Definition Index: 10473
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_System_Collections_IList_Contains_m5B9EEF6A592DE8CE9A807B6DB1862178D627E9E3 (ReadOnlyCollection_1_t803A81BE343B15275BCD30A219ACAC97F0B9A1C8* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_mB8637EFA6E7DC55A186C227F3D362EEF524D9FAD(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		bool L_3;
		L_3 = ReadOnlyCollection_1_Contains_m7F9F1C288B16CFD896954561CBA914AB70CA3C42(__this, ((*(XRFeatureDescriptor_t690E672A6BBBEFBB8AF221485C1884507EAFB5B2*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// Method Definition Index: 10474
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_System_Collections_IList_IndexOf_m2884047F088D6AD6D819F7785BC0DA13E10A2D87 (ReadOnlyCollection_1_t803A81BE343B15275BCD30A219ACAC97F0B9A1C8* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_mB8637EFA6E7DC55A186C227F3D362EEF524D9FAD(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		int32_t L_3;
		L_3 = ReadOnlyCollection_1_IndexOf_m12E94AAF0808183AA148780A69482224EAE1EACF(__this, ((*(XRFeatureDescriptor_t690E672A6BBBEFBB8AF221485C1884507EAFB5B2*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15));
		return L_3;
	}

IL_0015:
	{
		return (-1);
	}
}
// Method Definition Index: 10475
// Method Definition Index: 10476
// Method Definition Index: 10477
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 10449
// Method Definition Index: 10450
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m0E756C8233737C98226C39BAD3A614485ECF7891 (ReadOnlyCollection_1_t90B1C0D935E236955963E2FEDC049B30EB5DFA1E* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0);
		return L_1;
	}
}
// Method Definition Index: 10451
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRFov_t51E4BB7B76304E61CF064687586D096CE585817A ReadOnlyCollection_1_get_Item_mCB3F8C574E2377CBF77279979E8F60EE92A24908 (ReadOnlyCollection_1_t90B1C0D935E236955963E2FEDC049B30EB5DFA1E* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		XRFov_t51E4BB7B76304E61CF064687586D096CE585817A L_2;
		L_2 = InterfaceFuncInvoker1< XRFov_t51E4BB7B76304E61CF064687586D096CE585817A, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10452
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_mE9129466044C35992F92CCF5C5728DCEAEE825FD (ReadOnlyCollection_1_t90B1C0D935E236955963E2FEDC049B30EB5DFA1E* __this, XRFov_t51E4BB7B76304E61CF064687586D096CE585817A ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		XRFov_t51E4BB7B76304E61CF064687586D096CE585817A L_1 = ___0_value;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, XRFov_t51E4BB7B76304E61CF064687586D096CE585817A >::Invoke(4, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10453
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_CopyTo_m4FEEE9CCB6CC268754553333F07D0EE63C7C025B (ReadOnlyCollection_1_t90B1C0D935E236955963E2FEDC049B30EB5DFA1E* __this, XRFovU5BU5D_tA4BD9240E5BF2E9F7CA7FC9DDA13F00246326FCA* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		XRFovU5BU5D_tA4BD9240E5BF2E9F7CA7FC9DDA13F00246326FCA* L_1 = ___0_array;
		int32_t L_2 = ___1_index;
		NullCheck(L_0);
		InterfaceActionInvoker2< XRFovU5BU5D_tA4BD9240E5BF2E9F7CA7FC9DDA13F00246326FCA*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1, L_2);
		return;
	}
}
// Method Definition Index: 10454
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_GetEnumerator_m9D8E8DE2EAA69AB02DBE26FB055F27DDB48700EC (ReadOnlyCollection_1_t90B1C0D935E236955963E2FEDC049B30EB5DFA1E* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 7), L_0);
		return L_1;
	}
}
// Method Definition Index: 10455
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_mD77043243BC47E4A0BE97DED2733EAC403026401 (ReadOnlyCollection_1_t90B1C0D935E236955963E2FEDC049B30EB5DFA1E* __this, XRFov_t51E4BB7B76304E61CF064687586D096CE585817A ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		XRFov_t51E4BB7B76304E61CF064687586D096CE585817A L_1 = ___0_value;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, XRFov_t51E4BB7B76304E61CF064687586D096CE585817A >::Invoke(2, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10456
// Method Definition Index: 10457
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRFov_t51E4BB7B76304E61CF064687586D096CE585817A ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m1DF14F01E724CC972CFCD668BCFD65D0795482BF (ReadOnlyCollection_1_t90B1C0D935E236955963E2FEDC049B30EB5DFA1E* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		XRFov_t51E4BB7B76304E61CF064687586D096CE585817A L_2;
		L_2 = InterfaceFuncInvoker1< XRFov_t51E4BB7B76304E61CF064687586D096CE585817A, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10458
// Method Definition Index: 10459
// Method Definition Index: 10460
// Method Definition Index: 10461
// Method Definition Index: 10462
// Method Definition Index: 10463
// Method Definition Index: 10464
// Method Definition Index: 10465
// Method Definition Index: 10466
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m4DEC2FBF68C729262F3873EDDE312F79230C64BB (ReadOnlyCollection_1_t90B1C0D935E236955963E2FEDC049B30EB5DFA1E* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	XRFovU5BU5D_tA4BD9240E5BF2E9F7CA7FC9DDA13F00246326FCA* V_0 = NULL;
	Type_t* V_1 = NULL;
	Type_t* V_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = il2cpp_codegen_array_get_rank(L_1);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0030:
	{
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = il2cpp_codegen_array_get_length(L_6);
		int32_t L_8 = ___1_index;
		int32_t L_9;
		L_9 = ReadOnlyCollection_1_get_Count_m0E756C8233737C98226C39BAD3A614485ECF7891(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, L_8))) >= ((int32_t)L_9)))
		{
			goto IL_0046;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(5, NULL);
	}

IL_0046:
	{
		RuntimeArray* L_10 = ___0_array;
		V_0 = ((XRFovU5BU5D_tA4BD9240E5BF2E9F7CA7FC9DDA13F00246326FCA*)IsInstSealed((RuntimeObject*)L_10, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)));
		XRFovU5BU5D_tA4BD9240E5BF2E9F7CA7FC9DDA13F00246326FCA* L_11 = V_0;
		if (!L_11)
		{
			goto IL_005e;
		}
	}
	{
		RuntimeObject* L_12 = __this->___list;
		XRFovU5BU5D_tA4BD9240E5BF2E9F7CA7FC9DDA13F00246326FCA* L_13 = V_0;
		int32_t L_14 = ___1_index;
		NullCheck(L_12);
		InterfaceActionInvoker2< XRFovU5BU5D_tA4BD9240E5BF2E9F7CA7FC9DDA13F00246326FCA*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_12, L_13, L_14);
		return;
	}

IL_005e:
	{
		RuntimeArray* L_15 = ___0_array;
		NullCheck(L_15);
		Type_t* L_16;
		L_16 = il2cpp_codegen_object_get_type(L_15);
		NullCheck(L_16);
		Type_t* L_17;
		L_17 = VirtualFuncInvoker0< Type_t* >::Invoke(46, L_16);
		V_1 = L_17;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 12)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		V_2 = L_19;
		Type_t* L_20 = V_1;
		Type_t* L_21 = V_2;
		NullCheck(L_20);
		bool L_22;
		L_22 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_20, L_21);
		if (L_22)
		{
			goto IL_008c;
		}
	}
	{
		Type_t* L_23 = V_2;
		Type_t* L_24 = V_1;
		NullCheck(L_23);
		bool L_25;
		L_25 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_23, L_24);
		if (L_25)
		{
			goto IL_008c;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_008c:
	{
		RuntimeArray* L_26 = ___0_array;
		V_3 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_26, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = V_3;
		if (L_27)
		{
			goto IL_009b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_009b:
	{
		RuntimeObject* L_28 = __this->___list;
		NullCheck(L_28);
		int32_t L_29;
		L_29 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_28);
		V_4 = L_29;
	}
	try
	{
		{
			V_5 = 0;
			goto IL_00cd_1;
		}

IL_00ad_1:
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_30 = V_3;
			int32_t L_31 = ___1_index;
			int32_t L_32 = L_31;
			___1_index = ((int32_t)il2cpp_codegen_add(L_32, 1));
			RuntimeObject* L_33 = __this->___list;
			int32_t L_34 = V_5;
			NullCheck(L_33);
			XRFov_t51E4BB7B76304E61CF064687586D096CE585817A L_35;
			L_35 = InterfaceFuncInvoker1< XRFov_t51E4BB7B76304E61CF064687586D096CE585817A, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_33, L_34);
			XRFov_t51E4BB7B76304E61CF064687586D096CE585817A L_36 = L_35;
			RuntimeObject* L_37 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_36);
			NullCheck(L_30);
			ArrayElementTypeCheck (L_30, L_37);
			(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (RuntimeObject*)L_37);
			int32_t L_38 = V_5;
			V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
		}

IL_00cd_1:
		{
			int32_t L_39 = V_5;
			int32_t L_40 = V_4;
			if ((((int32_t)L_39) < ((int32_t)L_40)))
			{
				goto IL_00ad_1;
			}
		}
		{
			goto IL_00dd;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00d5;
		}
		throw e;
	}

CATCH_00d5:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_41 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_00dd;
	}

IL_00dd:
	{
		return;
	}
}
// Method Definition Index: 10467
// Method Definition Index: 10468
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_System_Collections_IList_get_Item_mCC3EE271708DD031C5D1C343E6FF0B9A5960EECF (ReadOnlyCollection_1_t90B1C0D935E236955963E2FEDC049B30EB5DFA1E* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		XRFov_t51E4BB7B76304E61CF064687586D096CE585817A L_2;
		L_2 = InterfaceFuncInvoker1< XRFov_t51E4BB7B76304E61CF064687586D096CE585817A, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		XRFov_t51E4BB7B76304E61CF064687586D096CE585817A L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_3);
		return L_4;
	}
}
// Method Definition Index: 10469
// Method Definition Index: 10470
// Method Definition Index: 10471
// Method Definition Index: 10472
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m02EF1E7C52E7F257498AE25CB4A906EFB29DFA86 (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	XRFov_t51E4BB7B76304E61CF064687586D096CE585817A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(XRFov_t51E4BB7B76304E61CF064687586D096CE585817A));
		XRFov_t51E4BB7B76304E61CF064687586D096CE585817A L_2 = V_0;
		return false;
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
// Method Definition Index: 10473
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_System_Collections_IList_Contains_m549B1DAB8145361117C0BF891B94F4F96F8900A9 (ReadOnlyCollection_1_t90B1C0D935E236955963E2FEDC049B30EB5DFA1E* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_m02EF1E7C52E7F257498AE25CB4A906EFB29DFA86(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		bool L_3;
		L_3 = ReadOnlyCollection_1_Contains_mE9129466044C35992F92CCF5C5728DCEAEE825FD(__this, ((*(XRFov_t51E4BB7B76304E61CF064687586D096CE585817A*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// Method Definition Index: 10474
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_System_Collections_IList_IndexOf_mE7AA039A8685896B3D61355C1590801BCF12ABE6 (ReadOnlyCollection_1_t90B1C0D935E236955963E2FEDC049B30EB5DFA1E* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_m02EF1E7C52E7F257498AE25CB4A906EFB29DFA86(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		int32_t L_3;
		L_3 = ReadOnlyCollection_1_IndexOf_mD77043243BC47E4A0BE97DED2733EAC403026401(__this, ((*(XRFov_t51E4BB7B76304E61CF064687586D096CE585817A*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15));
		return L_3;
	}

IL_0015:
	{
		return (-1);
	}
}
// Method Definition Index: 10475
// Method Definition Index: 10476
// Method Definition Index: 10477
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 10449
// Method Definition Index: 10450
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m5B74FE4C19661ED5BF7BE1E4FA9D2BD299C927DD (ReadOnlyCollection_1_t283D5D7D9E3DE9783937ADBA3BF6BEE67BCBFDCE* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0);
		return L_1;
	}
}
// Method Definition Index: 10451
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRLoadAnchorResult_t56374A5E6B313EC113CCA50D43ACFC75B66E95B5 ReadOnlyCollection_1_get_Item_m5CC6697E44E1180C00EAB86AD75AA768E2738DC7 (ReadOnlyCollection_1_t283D5D7D9E3DE9783937ADBA3BF6BEE67BCBFDCE* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		XRLoadAnchorResult_t56374A5E6B313EC113CCA50D43ACFC75B66E95B5 L_2;
		L_2 = InterfaceFuncInvoker1< XRLoadAnchorResult_t56374A5E6B313EC113CCA50D43ACFC75B66E95B5, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10452
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m542B07DF3DDF2E3C5AD80A17CF9648688198D0BD (ReadOnlyCollection_1_t283D5D7D9E3DE9783937ADBA3BF6BEE67BCBFDCE* __this, XRLoadAnchorResult_t56374A5E6B313EC113CCA50D43ACFC75B66E95B5 ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		XRLoadAnchorResult_t56374A5E6B313EC113CCA50D43ACFC75B66E95B5 L_1 = ___0_value;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, XRLoadAnchorResult_t56374A5E6B313EC113CCA50D43ACFC75B66E95B5 >::Invoke(4, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10453
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_CopyTo_m4E5346629B13D699DCBE43284A077D393C4E4ACA (ReadOnlyCollection_1_t283D5D7D9E3DE9783937ADBA3BF6BEE67BCBFDCE* __this, XRLoadAnchorResultU5BU5D_tB8B8C38BD5343704EC2AF30B5FB7BBDAA3662E3A* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		XRLoadAnchorResultU5BU5D_tB8B8C38BD5343704EC2AF30B5FB7BBDAA3662E3A* L_1 = ___0_array;
		int32_t L_2 = ___1_index;
		NullCheck(L_0);
		InterfaceActionInvoker2< XRLoadAnchorResultU5BU5D_tB8B8C38BD5343704EC2AF30B5FB7BBDAA3662E3A*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1, L_2);
		return;
	}
}
// Method Definition Index: 10454
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_GetEnumerator_mA4E5DDDCE57EF14984783622D05F82E092D3979C (ReadOnlyCollection_1_t283D5D7D9E3DE9783937ADBA3BF6BEE67BCBFDCE* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 7), L_0);
		return L_1;
	}
}
// Method Definition Index: 10455
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m28C666EB07406A9369183E50C9391C95C9F284F9 (ReadOnlyCollection_1_t283D5D7D9E3DE9783937ADBA3BF6BEE67BCBFDCE* __this, XRLoadAnchorResult_t56374A5E6B313EC113CCA50D43ACFC75B66E95B5 ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		XRLoadAnchorResult_t56374A5E6B313EC113CCA50D43ACFC75B66E95B5 L_1 = ___0_value;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, XRLoadAnchorResult_t56374A5E6B313EC113CCA50D43ACFC75B66E95B5 >::Invoke(2, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10456
// Method Definition Index: 10457
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRLoadAnchorResult_t56374A5E6B313EC113CCA50D43ACFC75B66E95B5 ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_mC927CDC8E68F2F72EA4395E39D86008177444010 (ReadOnlyCollection_1_t283D5D7D9E3DE9783937ADBA3BF6BEE67BCBFDCE* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		XRLoadAnchorResult_t56374A5E6B313EC113CCA50D43ACFC75B66E95B5 L_2;
		L_2 = InterfaceFuncInvoker1< XRLoadAnchorResult_t56374A5E6B313EC113CCA50D43ACFC75B66E95B5, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10458
// Method Definition Index: 10459
// Method Definition Index: 10460
// Method Definition Index: 10461
// Method Definition Index: 10462
// Method Definition Index: 10463
// Method Definition Index: 10464
// Method Definition Index: 10465
// Method Definition Index: 10466
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_mE0387DE31A2BE37FD402CE924F62C3F6383E5530 (ReadOnlyCollection_1_t283D5D7D9E3DE9783937ADBA3BF6BEE67BCBFDCE* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	XRLoadAnchorResultU5BU5D_tB8B8C38BD5343704EC2AF30B5FB7BBDAA3662E3A* V_0 = NULL;
	Type_t* V_1 = NULL;
	Type_t* V_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = il2cpp_codegen_array_get_rank(L_1);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0030:
	{
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = il2cpp_codegen_array_get_length(L_6);
		int32_t L_8 = ___1_index;
		int32_t L_9;
		L_9 = ReadOnlyCollection_1_get_Count_m5B74FE4C19661ED5BF7BE1E4FA9D2BD299C927DD(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, L_8))) >= ((int32_t)L_9)))
		{
			goto IL_0046;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(5, NULL);
	}

IL_0046:
	{
		RuntimeArray* L_10 = ___0_array;
		V_0 = ((XRLoadAnchorResultU5BU5D_tB8B8C38BD5343704EC2AF30B5FB7BBDAA3662E3A*)IsInstSealed((RuntimeObject*)L_10, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)));
		XRLoadAnchorResultU5BU5D_tB8B8C38BD5343704EC2AF30B5FB7BBDAA3662E3A* L_11 = V_0;
		if (!L_11)
		{
			goto IL_005e;
		}
	}
	{
		RuntimeObject* L_12 = __this->___list;
		XRLoadAnchorResultU5BU5D_tB8B8C38BD5343704EC2AF30B5FB7BBDAA3662E3A* L_13 = V_0;
		int32_t L_14 = ___1_index;
		NullCheck(L_12);
		InterfaceActionInvoker2< XRLoadAnchorResultU5BU5D_tB8B8C38BD5343704EC2AF30B5FB7BBDAA3662E3A*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_12, L_13, L_14);
		return;
	}

IL_005e:
	{
		RuntimeArray* L_15 = ___0_array;
		NullCheck(L_15);
		Type_t* L_16;
		L_16 = il2cpp_codegen_object_get_type(L_15);
		NullCheck(L_16);
		Type_t* L_17;
		L_17 = VirtualFuncInvoker0< Type_t* >::Invoke(46, L_16);
		V_1 = L_17;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 12)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		V_2 = L_19;
		Type_t* L_20 = V_1;
		Type_t* L_21 = V_2;
		NullCheck(L_20);
		bool L_22;
		L_22 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_20, L_21);
		if (L_22)
		{
			goto IL_008c;
		}
	}
	{
		Type_t* L_23 = V_2;
		Type_t* L_24 = V_1;
		NullCheck(L_23);
		bool L_25;
		L_25 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_23, L_24);
		if (L_25)
		{
			goto IL_008c;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_008c:
	{
		RuntimeArray* L_26 = ___0_array;
		V_3 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_26, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = V_3;
		if (L_27)
		{
			goto IL_009b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_009b:
	{
		RuntimeObject* L_28 = __this->___list;
		NullCheck(L_28);
		int32_t L_29;
		L_29 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_28);
		V_4 = L_29;
	}
	try
	{
		{
			V_5 = 0;
			goto IL_00cd_1;
		}

IL_00ad_1:
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_30 = V_3;
			int32_t L_31 = ___1_index;
			int32_t L_32 = L_31;
			___1_index = ((int32_t)il2cpp_codegen_add(L_32, 1));
			RuntimeObject* L_33 = __this->___list;
			int32_t L_34 = V_5;
			NullCheck(L_33);
			XRLoadAnchorResult_t56374A5E6B313EC113CCA50D43ACFC75B66E95B5 L_35;
			L_35 = InterfaceFuncInvoker1< XRLoadAnchorResult_t56374A5E6B313EC113CCA50D43ACFC75B66E95B5, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_33, L_34);
			XRLoadAnchorResult_t56374A5E6B313EC113CCA50D43ACFC75B66E95B5 L_36 = L_35;
			RuntimeObject* L_37 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_36);
			NullCheck(L_30);
			ArrayElementTypeCheck (L_30, L_37);
			(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (RuntimeObject*)L_37);
			int32_t L_38 = V_5;
			V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
		}

IL_00cd_1:
		{
			int32_t L_39 = V_5;
			int32_t L_40 = V_4;
			if ((((int32_t)L_39) < ((int32_t)L_40)))
			{
				goto IL_00ad_1;
			}
		}
		{
			goto IL_00dd;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00d5;
		}
		throw e;
	}

CATCH_00d5:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_41 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_00dd;
	}

IL_00dd:
	{
		return;
	}
}
// Method Definition Index: 10467
// Method Definition Index: 10468
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_System_Collections_IList_get_Item_m94A86E07DBAFB044E7BAC0D41CBAF0CE755ADCE2 (ReadOnlyCollection_1_t283D5D7D9E3DE9783937ADBA3BF6BEE67BCBFDCE* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		XRLoadAnchorResult_t56374A5E6B313EC113CCA50D43ACFC75B66E95B5 L_2;
		L_2 = InterfaceFuncInvoker1< XRLoadAnchorResult_t56374A5E6B313EC113CCA50D43ACFC75B66E95B5, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		XRLoadAnchorResult_t56374A5E6B313EC113CCA50D43ACFC75B66E95B5 L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_3);
		return L_4;
	}
}
// Method Definition Index: 10469
// Method Definition Index: 10470
// Method Definition Index: 10471
// Method Definition Index: 10472
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_mE5091EB4D5EC7DFEB477CDCC6E0A475DF43CCE4C (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	XRLoadAnchorResult_t56374A5E6B313EC113CCA50D43ACFC75B66E95B5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(XRLoadAnchorResult_t56374A5E6B313EC113CCA50D43ACFC75B66E95B5));
		XRLoadAnchorResult_t56374A5E6B313EC113CCA50D43ACFC75B66E95B5 L_2 = V_0;
		return false;
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
// Method Definition Index: 10473
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_System_Collections_IList_Contains_m2002AE2B875AFCF82FDE8E64E4E18CC120969764 (ReadOnlyCollection_1_t283D5D7D9E3DE9783937ADBA3BF6BEE67BCBFDCE* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_mE5091EB4D5EC7DFEB477CDCC6E0A475DF43CCE4C(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		bool L_3;
		L_3 = ReadOnlyCollection_1_Contains_m542B07DF3DDF2E3C5AD80A17CF9648688198D0BD(__this, ((*(XRLoadAnchorResult_t56374A5E6B313EC113CCA50D43ACFC75B66E95B5*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// Method Definition Index: 10474
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_System_Collections_IList_IndexOf_m9C084B076EC81902B81D1F1F51CE6DA44A2785C6 (ReadOnlyCollection_1_t283D5D7D9E3DE9783937ADBA3BF6BEE67BCBFDCE* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_mE5091EB4D5EC7DFEB477CDCC6E0A475DF43CCE4C(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		int32_t L_3;
		L_3 = ReadOnlyCollection_1_IndexOf_m28C666EB07406A9369183E50C9391C95C9F284F9(__this, ((*(XRLoadAnchorResult_t56374A5E6B313EC113CCA50D43ACFC75B66E95B5*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15));
		return L_3;
	}

IL_0015:
	{
		return (-1);
	}
}
// Method Definition Index: 10475
// Method Definition Index: 10476
// Method Definition Index: 10477
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 10449
// Method Definition Index: 10450
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m0BCE304E7E37CC4177CC1E19A982FDBB3624BB11 (ReadOnlyCollection_1_t9ED77C33BF650F562B350CE0279E194D11C3611C* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0);
		return L_1;
	}
}
// Method Definition Index: 10451
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A ReadOnlyCollection_1_get_Item_m558AEDFC0106DCEFBCB7CB94D38FB68AF192388D (ReadOnlyCollection_1_t9ED77C33BF650F562B350CE0279E194D11C3611C* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A L_2;
		L_2 = InterfaceFuncInvoker1< XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10452
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_mE23598B242FA77FE8C32C4E003738CF735083998 (ReadOnlyCollection_1_t9ED77C33BF650F562B350CE0279E194D11C3611C* __this, XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A L_1 = ___0_value;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A >::Invoke(4, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10453
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_CopyTo_mDD9C328DA2FD88F276318FE642A5A9DAE91C4CB2 (ReadOnlyCollection_1_t9ED77C33BF650F562B350CE0279E194D11C3611C* __this, XRNodeStateU5BU5D_tEC64805398059D44C2FBA68AABAEFFB262B93845* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		XRNodeStateU5BU5D_tEC64805398059D44C2FBA68AABAEFFB262B93845* L_1 = ___0_array;
		int32_t L_2 = ___1_index;
		NullCheck(L_0);
		InterfaceActionInvoker2< XRNodeStateU5BU5D_tEC64805398059D44C2FBA68AABAEFFB262B93845*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1, L_2);
		return;
	}
}
// Method Definition Index: 10454
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_GetEnumerator_mF958790502D89D2107E4E3EF64EE4D7E5AD7D2F4 (ReadOnlyCollection_1_t9ED77C33BF650F562B350CE0279E194D11C3611C* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 7), L_0);
		return L_1;
	}
}
// Method Definition Index: 10455
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m009EB6D087F95648DB4B1C4CA56C750BBCE6254A (ReadOnlyCollection_1_t9ED77C33BF650F562B350CE0279E194D11C3611C* __this, XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A L_1 = ___0_value;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A >::Invoke(2, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10456
// Method Definition Index: 10457
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_mC33C6B16C5C491214B2FF80136D9FB55A1A2C322 (ReadOnlyCollection_1_t9ED77C33BF650F562B350CE0279E194D11C3611C* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A L_2;
		L_2 = InterfaceFuncInvoker1< XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10458
// Method Definition Index: 10459
// Method Definition Index: 10460
// Method Definition Index: 10461
// Method Definition Index: 10462
// Method Definition Index: 10463
// Method Definition Index: 10464
// Method Definition Index: 10465
// Method Definition Index: 10466
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_mFE76C70680B6331128166E3D896F25F6520125ED (ReadOnlyCollection_1_t9ED77C33BF650F562B350CE0279E194D11C3611C* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	XRNodeStateU5BU5D_tEC64805398059D44C2FBA68AABAEFFB262B93845* V_0 = NULL;
	Type_t* V_1 = NULL;
	Type_t* V_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = il2cpp_codegen_array_get_rank(L_1);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0030:
	{
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = il2cpp_codegen_array_get_length(L_6);
		int32_t L_8 = ___1_index;
		int32_t L_9;
		L_9 = ReadOnlyCollection_1_get_Count_m0BCE304E7E37CC4177CC1E19A982FDBB3624BB11(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, L_8))) >= ((int32_t)L_9)))
		{
			goto IL_0046;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(5, NULL);
	}

IL_0046:
	{
		RuntimeArray* L_10 = ___0_array;
		V_0 = ((XRNodeStateU5BU5D_tEC64805398059D44C2FBA68AABAEFFB262B93845*)IsInstSealed((RuntimeObject*)L_10, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)));
		XRNodeStateU5BU5D_tEC64805398059D44C2FBA68AABAEFFB262B93845* L_11 = V_0;
		if (!L_11)
		{
			goto IL_005e;
		}
	}
	{
		RuntimeObject* L_12 = __this->___list;
		XRNodeStateU5BU5D_tEC64805398059D44C2FBA68AABAEFFB262B93845* L_13 = V_0;
		int32_t L_14 = ___1_index;
		NullCheck(L_12);
		InterfaceActionInvoker2< XRNodeStateU5BU5D_tEC64805398059D44C2FBA68AABAEFFB262B93845*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_12, L_13, L_14);
		return;
	}

IL_005e:
	{
		RuntimeArray* L_15 = ___0_array;
		NullCheck(L_15);
		Type_t* L_16;
		L_16 = il2cpp_codegen_object_get_type(L_15);
		NullCheck(L_16);
		Type_t* L_17;
		L_17 = VirtualFuncInvoker0< Type_t* >::Invoke(46, L_16);
		V_1 = L_17;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 12)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		V_2 = L_19;
		Type_t* L_20 = V_1;
		Type_t* L_21 = V_2;
		NullCheck(L_20);
		bool L_22;
		L_22 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_20, L_21);
		if (L_22)
		{
			goto IL_008c;
		}
	}
	{
		Type_t* L_23 = V_2;
		Type_t* L_24 = V_1;
		NullCheck(L_23);
		bool L_25;
		L_25 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_23, L_24);
		if (L_25)
		{
			goto IL_008c;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_008c:
	{
		RuntimeArray* L_26 = ___0_array;
		V_3 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_26, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = V_3;
		if (L_27)
		{
			goto IL_009b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_009b:
	{
		RuntimeObject* L_28 = __this->___list;
		NullCheck(L_28);
		int32_t L_29;
		L_29 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_28);
		V_4 = L_29;
	}
	try
	{
		{
			V_5 = 0;
			goto IL_00cd_1;
		}

IL_00ad_1:
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_30 = V_3;
			int32_t L_31 = ___1_index;
			int32_t L_32 = L_31;
			___1_index = ((int32_t)il2cpp_codegen_add(L_32, 1));
			RuntimeObject* L_33 = __this->___list;
			int32_t L_34 = V_5;
			NullCheck(L_33);
			XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A L_35;
			L_35 = InterfaceFuncInvoker1< XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_33, L_34);
			XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A L_36 = L_35;
			RuntimeObject* L_37 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_36);
			NullCheck(L_30);
			ArrayElementTypeCheck (L_30, L_37);
			(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (RuntimeObject*)L_37);
			int32_t L_38 = V_5;
			V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
		}

IL_00cd_1:
		{
			int32_t L_39 = V_5;
			int32_t L_40 = V_4;
			if ((((int32_t)L_39) < ((int32_t)L_40)))
			{
				goto IL_00ad_1;
			}
		}
		{
			goto IL_00dd;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00d5;
		}
		throw e;
	}

CATCH_00d5:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_41 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_00dd;
	}

IL_00dd:
	{
		return;
	}
}
// Method Definition Index: 10467
// Method Definition Index: 10468
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_System_Collections_IList_get_Item_mC40E7C36ECA97D4B5CEC96F80D90607964EA9A4E (ReadOnlyCollection_1_t9ED77C33BF650F562B350CE0279E194D11C3611C* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A L_2;
		L_2 = InterfaceFuncInvoker1< XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_3);
		return L_4;
	}
}
// Method Definition Index: 10469
// Method Definition Index: 10470
// Method Definition Index: 10471
// Method Definition Index: 10472
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_mDEF86102A0BBAFA934465B6A13BEFCA585BA3086 (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A));
		XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A L_2 = V_0;
		return false;
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
// Method Definition Index: 10473
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_System_Collections_IList_Contains_m263C475FA8529F3424B6F67C511DDC84CC525904 (ReadOnlyCollection_1_t9ED77C33BF650F562B350CE0279E194D11C3611C* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_mDEF86102A0BBAFA934465B6A13BEFCA585BA3086(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		bool L_3;
		L_3 = ReadOnlyCollection_1_Contains_mE23598B242FA77FE8C32C4E003738CF735083998(__this, ((*(XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// Method Definition Index: 10474
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_System_Collections_IList_IndexOf_mF4A5EB45244CCD105BC8FA011774197CF4E4B2D3 (ReadOnlyCollection_1_t9ED77C33BF650F562B350CE0279E194D11C3611C* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_mDEF86102A0BBAFA934465B6A13BEFCA585BA3086(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		int32_t L_3;
		L_3 = ReadOnlyCollection_1_IndexOf_m009EB6D087F95648DB4B1C4CA56C750BBCE6254A(__this, ((*(XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15));
		return L_3;
	}

IL_0015:
	{
		return (-1);
	}
}
// Method Definition Index: 10475
// Method Definition Index: 10476
// Method Definition Index: 10477
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 10449
// Method Definition Index: 10450
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m4DC34510C1965128569E730B346F3717C0DDD487 (ReadOnlyCollection_1_t64CE92B3FF66059503B90BF1A065847EB7B4D4E1* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0);
		return L_1;
	}
}
// Method Definition Index: 10451
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F ReadOnlyCollection_1_get_Item_m2C22680732B093C7BA1E683FD30E8343630D919A (ReadOnlyCollection_1_t64CE92B3FF66059503B90BF1A065847EB7B4D4E1* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F L_2;
		L_2 = InterfaceFuncInvoker1< XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10452
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m3F38B033A85A1348781A404A2A5725AAEBB9A31D (ReadOnlyCollection_1_t64CE92B3FF66059503B90BF1A065847EB7B4D4E1* __this, XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F L_1 = ___0_value;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F >::Invoke(4, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10453
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_CopyTo_m7E72151952983B46BEFD0197CFD357AA06B4E208 (ReadOnlyCollection_1_t64CE92B3FF66059503B90BF1A065847EB7B4D4E1* __this, XRReferenceImageU5BU5D_t4D170E9A3F892011ACE006CDECE1F5D50720F65D* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		XRReferenceImageU5BU5D_t4D170E9A3F892011ACE006CDECE1F5D50720F65D* L_1 = ___0_array;
		int32_t L_2 = ___1_index;
		NullCheck(L_0);
		InterfaceActionInvoker2< XRReferenceImageU5BU5D_t4D170E9A3F892011ACE006CDECE1F5D50720F65D*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1, L_2);
		return;
	}
}
// Method Definition Index: 10454
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_GetEnumerator_m5C52C0EDE19575CD5D32024FB62213330BD77850 (ReadOnlyCollection_1_t64CE92B3FF66059503B90BF1A065847EB7B4D4E1* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 7), L_0);
		return L_1;
	}
}
// Method Definition Index: 10455
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m3C5C29E8F20E663C99E22DCFBBE32C9963982021 (ReadOnlyCollection_1_t64CE92B3FF66059503B90BF1A065847EB7B4D4E1* __this, XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F L_1 = ___0_value;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F >::Invoke(2, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10456
// Method Definition Index: 10457
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_mBF713630D0A4487451E0A2BF43290E01CE30B8C1 (ReadOnlyCollection_1_t64CE92B3FF66059503B90BF1A065847EB7B4D4E1* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F L_2;
		L_2 = InterfaceFuncInvoker1< XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10458
// Method Definition Index: 10459
// Method Definition Index: 10460
// Method Definition Index: 10461
// Method Definition Index: 10462
// Method Definition Index: 10463
// Method Definition Index: 10464
// Method Definition Index: 10465
// Method Definition Index: 10466
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m8316368B3A1BBE0B8798A56C0662A1DD37D9D517 (ReadOnlyCollection_1_t64CE92B3FF66059503B90BF1A065847EB7B4D4E1* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	XRReferenceImageU5BU5D_t4D170E9A3F892011ACE006CDECE1F5D50720F65D* V_0 = NULL;
	Type_t* V_1 = NULL;
	Type_t* V_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = il2cpp_codegen_array_get_rank(L_1);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0030:
	{
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = il2cpp_codegen_array_get_length(L_6);
		int32_t L_8 = ___1_index;
		int32_t L_9;
		L_9 = ReadOnlyCollection_1_get_Count_m4DC34510C1965128569E730B346F3717C0DDD487(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, L_8))) >= ((int32_t)L_9)))
		{
			goto IL_0046;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(5, NULL);
	}

IL_0046:
	{
		RuntimeArray* L_10 = ___0_array;
		V_0 = ((XRReferenceImageU5BU5D_t4D170E9A3F892011ACE006CDECE1F5D50720F65D*)IsInstSealed((RuntimeObject*)L_10, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)));
		XRReferenceImageU5BU5D_t4D170E9A3F892011ACE006CDECE1F5D50720F65D* L_11 = V_0;
		if (!L_11)
		{
			goto IL_005e;
		}
	}
	{
		RuntimeObject* L_12 = __this->___list;
		XRReferenceImageU5BU5D_t4D170E9A3F892011ACE006CDECE1F5D50720F65D* L_13 = V_0;
		int32_t L_14 = ___1_index;
		NullCheck(L_12);
		InterfaceActionInvoker2< XRReferenceImageU5BU5D_t4D170E9A3F892011ACE006CDECE1F5D50720F65D*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_12, L_13, L_14);
		return;
	}

IL_005e:
	{
		RuntimeArray* L_15 = ___0_array;
		NullCheck(L_15);
		Type_t* L_16;
		L_16 = il2cpp_codegen_object_get_type(L_15);
		NullCheck(L_16);
		Type_t* L_17;
		L_17 = VirtualFuncInvoker0< Type_t* >::Invoke(46, L_16);
		V_1 = L_17;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 12)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		V_2 = L_19;
		Type_t* L_20 = V_1;
		Type_t* L_21 = V_2;
		NullCheck(L_20);
		bool L_22;
		L_22 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_20, L_21);
		if (L_22)
		{
			goto IL_008c;
		}
	}
	{
		Type_t* L_23 = V_2;
		Type_t* L_24 = V_1;
		NullCheck(L_23);
		bool L_25;
		L_25 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_23, L_24);
		if (L_25)
		{
			goto IL_008c;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_008c:
	{
		RuntimeArray* L_26 = ___0_array;
		V_3 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_26, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = V_3;
		if (L_27)
		{
			goto IL_009b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_009b:
	{
		RuntimeObject* L_28 = __this->___list;
		NullCheck(L_28);
		int32_t L_29;
		L_29 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_28);
		V_4 = L_29;
	}
	try
	{
		{
			V_5 = 0;
			goto IL_00cd_1;
		}

IL_00ad_1:
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_30 = V_3;
			int32_t L_31 = ___1_index;
			int32_t L_32 = L_31;
			___1_index = ((int32_t)il2cpp_codegen_add(L_32, 1));
			RuntimeObject* L_33 = __this->___list;
			int32_t L_34 = V_5;
			NullCheck(L_33);
			XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F L_35;
			L_35 = InterfaceFuncInvoker1< XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_33, L_34);
			XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F L_36 = L_35;
			RuntimeObject* L_37 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_36);
			NullCheck(L_30);
			ArrayElementTypeCheck (L_30, L_37);
			(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (RuntimeObject*)L_37);
			int32_t L_38 = V_5;
			V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
		}

IL_00cd_1:
		{
			int32_t L_39 = V_5;
			int32_t L_40 = V_4;
			if ((((int32_t)L_39) < ((int32_t)L_40)))
			{
				goto IL_00ad_1;
			}
		}
		{
			goto IL_00dd;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00d5;
		}
		throw e;
	}

CATCH_00d5:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_41 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_00dd;
	}

IL_00dd:
	{
		return;
	}
}
// Method Definition Index: 10467
// Method Definition Index: 10468
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_System_Collections_IList_get_Item_mF58174DB1D129046A3474DD015FC1F06E9A9D193 (ReadOnlyCollection_1_t64CE92B3FF66059503B90BF1A065847EB7B4D4E1* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F L_2;
		L_2 = InterfaceFuncInvoker1< XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_3);
		return L_4;
	}
}
// Method Definition Index: 10469
// Method Definition Index: 10470
// Method Definition Index: 10471
// Method Definition Index: 10472
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m6C3133FA5DFBF42DE147E8ABCB12FBAACDF49A48 (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F));
		XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F L_2 = V_0;
		return false;
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
// Method Definition Index: 10473
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_System_Collections_IList_Contains_mB300C0AE13A5EFD5DB4831C4698725178BADD1F2 (ReadOnlyCollection_1_t64CE92B3FF66059503B90BF1A065847EB7B4D4E1* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_m6C3133FA5DFBF42DE147E8ABCB12FBAACDF49A48(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		bool L_3;
		L_3 = ReadOnlyCollection_1_Contains_m3F38B033A85A1348781A404A2A5725AAEBB9A31D(__this, ((*(XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// Method Definition Index: 10474
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_System_Collections_IList_IndexOf_mB8BB8D995A39346618F9AD6BF0368CC2AC6C2EDB (ReadOnlyCollection_1_t64CE92B3FF66059503B90BF1A065847EB7B4D4E1* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_m6C3133FA5DFBF42DE147E8ABCB12FBAACDF49A48(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		int32_t L_3;
		L_3 = ReadOnlyCollection_1_IndexOf_m3C5C29E8F20E663C99E22DCFBBE32C9963982021(__this, ((*(XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15));
		return L_3;
	}

IL_0015:
	{
		return (-1);
	}
}
// Method Definition Index: 10475
// Method Definition Index: 10476
// Method Definition Index: 10477
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 10449
// Method Definition Index: 10450
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_mA6D4CD7E6EED6D81DF06E4CA2A3FAACCB4158CB8 (ReadOnlyCollection_1_t3BF272D45B9E5E8E67E09C9D4C9A00BF19EE2852* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0);
		return L_1;
	}
}
// Method Definition Index: 10451
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRReferenceObject_tDC04E77BBDCC6428C8B852A7CF1208DD2AF9AE14 ReadOnlyCollection_1_get_Item_m95FA99732013D4A84BC18FF9A20A78EB34861EBA (ReadOnlyCollection_1_t3BF272D45B9E5E8E67E09C9D4C9A00BF19EE2852* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		XRReferenceObject_tDC04E77BBDCC6428C8B852A7CF1208DD2AF9AE14 L_2;
		L_2 = InterfaceFuncInvoker1< XRReferenceObject_tDC04E77BBDCC6428C8B852A7CF1208DD2AF9AE14, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10452
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m5BBF32CB6EEA7058D840EF833F1F5CDA5154AC1A (ReadOnlyCollection_1_t3BF272D45B9E5E8E67E09C9D4C9A00BF19EE2852* __this, XRReferenceObject_tDC04E77BBDCC6428C8B852A7CF1208DD2AF9AE14 ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		XRReferenceObject_tDC04E77BBDCC6428C8B852A7CF1208DD2AF9AE14 L_1 = ___0_value;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, XRReferenceObject_tDC04E77BBDCC6428C8B852A7CF1208DD2AF9AE14 >::Invoke(4, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10453
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_CopyTo_m8DF426C4C14A836FBAF1013404F93AA439B08AB7 (ReadOnlyCollection_1_t3BF272D45B9E5E8E67E09C9D4C9A00BF19EE2852* __this, XRReferenceObjectU5BU5D_t61D00BD3A99E533B703D4F2FFF3C2C80F358DBA4* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		XRReferenceObjectU5BU5D_t61D00BD3A99E533B703D4F2FFF3C2C80F358DBA4* L_1 = ___0_array;
		int32_t L_2 = ___1_index;
		NullCheck(L_0);
		InterfaceActionInvoker2< XRReferenceObjectU5BU5D_t61D00BD3A99E533B703D4F2FFF3C2C80F358DBA4*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1, L_2);
		return;
	}
}
// Method Definition Index: 10454
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_GetEnumerator_m1061D1929F41124D88DDAC5CA48D8F9F2D50F156 (ReadOnlyCollection_1_t3BF272D45B9E5E8E67E09C9D4C9A00BF19EE2852* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 7), L_0);
		return L_1;
	}
}
// Method Definition Index: 10455
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m3476C31355B13FC61F4EDEBC1CC1267BB56EF6F6 (ReadOnlyCollection_1_t3BF272D45B9E5E8E67E09C9D4C9A00BF19EE2852* __this, XRReferenceObject_tDC04E77BBDCC6428C8B852A7CF1208DD2AF9AE14 ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		XRReferenceObject_tDC04E77BBDCC6428C8B852A7CF1208DD2AF9AE14 L_1 = ___0_value;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, XRReferenceObject_tDC04E77BBDCC6428C8B852A7CF1208DD2AF9AE14 >::Invoke(2, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10456
// Method Definition Index: 10457
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRReferenceObject_tDC04E77BBDCC6428C8B852A7CF1208DD2AF9AE14 ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m20C618970D00A87F61D6D4FB78CCE3F4F67552C7 (ReadOnlyCollection_1_t3BF272D45B9E5E8E67E09C9D4C9A00BF19EE2852* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		XRReferenceObject_tDC04E77BBDCC6428C8B852A7CF1208DD2AF9AE14 L_2;
		L_2 = InterfaceFuncInvoker1< XRReferenceObject_tDC04E77BBDCC6428C8B852A7CF1208DD2AF9AE14, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10458
// Method Definition Index: 10459
// Method Definition Index: 10460
// Method Definition Index: 10461
// Method Definition Index: 10462
// Method Definition Index: 10463
// Method Definition Index: 10464
// Method Definition Index: 10465
// Method Definition Index: 10466
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_mF3176E9AE0ED075DDD412B891A5EC28AD85AECD6 (ReadOnlyCollection_1_t3BF272D45B9E5E8E67E09C9D4C9A00BF19EE2852* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	XRReferenceObjectU5BU5D_t61D00BD3A99E533B703D4F2FFF3C2C80F358DBA4* V_0 = NULL;
	Type_t* V_1 = NULL;
	Type_t* V_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = il2cpp_codegen_array_get_rank(L_1);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0030:
	{
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = il2cpp_codegen_array_get_length(L_6);
		int32_t L_8 = ___1_index;
		int32_t L_9;
		L_9 = ReadOnlyCollection_1_get_Count_mA6D4CD7E6EED6D81DF06E4CA2A3FAACCB4158CB8(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, L_8))) >= ((int32_t)L_9)))
		{
			goto IL_0046;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(5, NULL);
	}

IL_0046:
	{
		RuntimeArray* L_10 = ___0_array;
		V_0 = ((XRReferenceObjectU5BU5D_t61D00BD3A99E533B703D4F2FFF3C2C80F358DBA4*)IsInstSealed((RuntimeObject*)L_10, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)));
		XRReferenceObjectU5BU5D_t61D00BD3A99E533B703D4F2FFF3C2C80F358DBA4* L_11 = V_0;
		if (!L_11)
		{
			goto IL_005e;
		}
	}
	{
		RuntimeObject* L_12 = __this->___list;
		XRReferenceObjectU5BU5D_t61D00BD3A99E533B703D4F2FFF3C2C80F358DBA4* L_13 = V_0;
		int32_t L_14 = ___1_index;
		NullCheck(L_12);
		InterfaceActionInvoker2< XRReferenceObjectU5BU5D_t61D00BD3A99E533B703D4F2FFF3C2C80F358DBA4*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_12, L_13, L_14);
		return;
	}

IL_005e:
	{
		RuntimeArray* L_15 = ___0_array;
		NullCheck(L_15);
		Type_t* L_16;
		L_16 = il2cpp_codegen_object_get_type(L_15);
		NullCheck(L_16);
		Type_t* L_17;
		L_17 = VirtualFuncInvoker0< Type_t* >::Invoke(46, L_16);
		V_1 = L_17;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 12)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		V_2 = L_19;
		Type_t* L_20 = V_1;
		Type_t* L_21 = V_2;
		NullCheck(L_20);
		bool L_22;
		L_22 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_20, L_21);
		if (L_22)
		{
			goto IL_008c;
		}
	}
	{
		Type_t* L_23 = V_2;
		Type_t* L_24 = V_1;
		NullCheck(L_23);
		bool L_25;
		L_25 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_23, L_24);
		if (L_25)
		{
			goto IL_008c;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_008c:
	{
		RuntimeArray* L_26 = ___0_array;
		V_3 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_26, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = V_3;
		if (L_27)
		{
			goto IL_009b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_009b:
	{
		RuntimeObject* L_28 = __this->___list;
		NullCheck(L_28);
		int32_t L_29;
		L_29 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_28);
		V_4 = L_29;
	}
	try
	{
		{
			V_5 = 0;
			goto IL_00cd_1;
		}

IL_00ad_1:
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_30 = V_3;
			int32_t L_31 = ___1_index;
			int32_t L_32 = L_31;
			___1_index = ((int32_t)il2cpp_codegen_add(L_32, 1));
			RuntimeObject* L_33 = __this->___list;
			int32_t L_34 = V_5;
			NullCheck(L_33);
			XRReferenceObject_tDC04E77BBDCC6428C8B852A7CF1208DD2AF9AE14 L_35;
			L_35 = InterfaceFuncInvoker1< XRReferenceObject_tDC04E77BBDCC6428C8B852A7CF1208DD2AF9AE14, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_33, L_34);
			XRReferenceObject_tDC04E77BBDCC6428C8B852A7CF1208DD2AF9AE14 L_36 = L_35;
			RuntimeObject* L_37 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_36);
			NullCheck(L_30);
			ArrayElementTypeCheck (L_30, L_37);
			(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (RuntimeObject*)L_37);
			int32_t L_38 = V_5;
			V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
		}

IL_00cd_1:
		{
			int32_t L_39 = V_5;
			int32_t L_40 = V_4;
			if ((((int32_t)L_39) < ((int32_t)L_40)))
			{
				goto IL_00ad_1;
			}
		}
		{
			goto IL_00dd;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00d5;
		}
		throw e;
	}

CATCH_00d5:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_41 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_00dd;
	}

IL_00dd:
	{
		return;
	}
}
// Method Definition Index: 10467
// Method Definition Index: 10468
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_System_Collections_IList_get_Item_m26C10A19E4D0C8BA8C1643CA6A21B68F717FFCE2 (ReadOnlyCollection_1_t3BF272D45B9E5E8E67E09C9D4C9A00BF19EE2852* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		XRReferenceObject_tDC04E77BBDCC6428C8B852A7CF1208DD2AF9AE14 L_2;
		L_2 = InterfaceFuncInvoker1< XRReferenceObject_tDC04E77BBDCC6428C8B852A7CF1208DD2AF9AE14, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		XRReferenceObject_tDC04E77BBDCC6428C8B852A7CF1208DD2AF9AE14 L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_3);
		return L_4;
	}
}
// Method Definition Index: 10469
// Method Definition Index: 10470
// Method Definition Index: 10471
// Method Definition Index: 10472
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m72E09B9C156358D3F491FD14203C869DED2917BC (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	XRReferenceObject_tDC04E77BBDCC6428C8B852A7CF1208DD2AF9AE14 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(XRReferenceObject_tDC04E77BBDCC6428C8B852A7CF1208DD2AF9AE14));
		XRReferenceObject_tDC04E77BBDCC6428C8B852A7CF1208DD2AF9AE14 L_2 = V_0;
		return false;
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
// Method Definition Index: 10473
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_System_Collections_IList_Contains_mA29E8ED85C510AB3B5C72639F30B25AC5951F8C2 (ReadOnlyCollection_1_t3BF272D45B9E5E8E67E09C9D4C9A00BF19EE2852* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_m72E09B9C156358D3F491FD14203C869DED2917BC(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		bool L_3;
		L_3 = ReadOnlyCollection_1_Contains_m5BBF32CB6EEA7058D840EF833F1F5CDA5154AC1A(__this, ((*(XRReferenceObject_tDC04E77BBDCC6428C8B852A7CF1208DD2AF9AE14*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// Method Definition Index: 10474
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_System_Collections_IList_IndexOf_m1662F92EAB3CFE755A0F993FD025BA5E4C783588 (ReadOnlyCollection_1_t3BF272D45B9E5E8E67E09C9D4C9A00BF19EE2852* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_m72E09B9C156358D3F491FD14203C869DED2917BC(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		int32_t L_3;
		L_3 = ReadOnlyCollection_1_IndexOf_m3476C31355B13FC61F4EDEBC1CC1267BB56EF6F6(__this, ((*(XRReferenceObject_tDC04E77BBDCC6428C8B852A7CF1208DD2AF9AE14*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15));
		return L_3;
	}

IL_0015:
	{
		return (-1);
	}
}
// Method Definition Index: 10475
// Method Definition Index: 10476
// Method Definition Index: 10477
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 10449
// Method Definition Index: 10450
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_mB98C38D2E69C0937FA2F0C8494D7EFDECDA1992D (ReadOnlyCollection_1_t95C4CE7A3281F650247DAD055168AC75CA2E0D94* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0);
		return L_1;
	}
}
// Method Definition Index: 10451
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRView_t70E23918C68E24DB22A8614AA8717B3BA213FAB5 ReadOnlyCollection_1_get_Item_m87088EF741EB61E52C6384588FB1205AA6860C00 (ReadOnlyCollection_1_t95C4CE7A3281F650247DAD055168AC75CA2E0D94* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		XRView_t70E23918C68E24DB22A8614AA8717B3BA213FAB5 L_2;
		L_2 = InterfaceFuncInvoker1< XRView_t70E23918C68E24DB22A8614AA8717B3BA213FAB5, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10452
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m332A74A4BF707ACE74A3A01578A1D5781F7A9F6C (ReadOnlyCollection_1_t95C4CE7A3281F650247DAD055168AC75CA2E0D94* __this, XRView_t70E23918C68E24DB22A8614AA8717B3BA213FAB5 ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		XRView_t70E23918C68E24DB22A8614AA8717B3BA213FAB5 L_1 = ___0_value;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, XRView_t70E23918C68E24DB22A8614AA8717B3BA213FAB5 >::Invoke(4, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10453
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_CopyTo_m370E2D571586AA9BB0C1C32CA66160D27B203EE7 (ReadOnlyCollection_1_t95C4CE7A3281F650247DAD055168AC75CA2E0D94* __this, XRViewU5BU5D_t46B2B3C0D45A670846E736AFB362448972CB513D* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		XRViewU5BU5D_t46B2B3C0D45A670846E736AFB362448972CB513D* L_1 = ___0_array;
		int32_t L_2 = ___1_index;
		NullCheck(L_0);
		InterfaceActionInvoker2< XRViewU5BU5D_t46B2B3C0D45A670846E736AFB362448972CB513D*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1, L_2);
		return;
	}
}
// Method Definition Index: 10454
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_GetEnumerator_m6ACA6F02AB7E142398BCB9BBD71D50FF8B33441F (ReadOnlyCollection_1_t95C4CE7A3281F650247DAD055168AC75CA2E0D94* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 7), L_0);
		return L_1;
	}
}
// Method Definition Index: 10455
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_mBBC67B329E7A47849082B0A54D1039AB99E5B231 (ReadOnlyCollection_1_t95C4CE7A3281F650247DAD055168AC75CA2E0D94* __this, XRView_t70E23918C68E24DB22A8614AA8717B3BA213FAB5 ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		XRView_t70E23918C68E24DB22A8614AA8717B3BA213FAB5 L_1 = ___0_value;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, XRView_t70E23918C68E24DB22A8614AA8717B3BA213FAB5 >::Invoke(2, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10456
// Method Definition Index: 10457
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRView_t70E23918C68E24DB22A8614AA8717B3BA213FAB5 ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m26FAC87F6DD689E2EE5976B900C19ADBCD310B74 (ReadOnlyCollection_1_t95C4CE7A3281F650247DAD055168AC75CA2E0D94* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		XRView_t70E23918C68E24DB22A8614AA8717B3BA213FAB5 L_2;
		L_2 = InterfaceFuncInvoker1< XRView_t70E23918C68E24DB22A8614AA8717B3BA213FAB5, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10458
// Method Definition Index: 10459
// Method Definition Index: 10460
// Method Definition Index: 10461
// Method Definition Index: 10462
// Method Definition Index: 10463
// Method Definition Index: 10464
// Method Definition Index: 10465
// Method Definition Index: 10466
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m263CC09162902C66BE08F314A2DECB51BEC1B153 (ReadOnlyCollection_1_t95C4CE7A3281F650247DAD055168AC75CA2E0D94* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	XRViewU5BU5D_t46B2B3C0D45A670846E736AFB362448972CB513D* V_0 = NULL;
	Type_t* V_1 = NULL;
	Type_t* V_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = il2cpp_codegen_array_get_rank(L_1);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0030:
	{
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = il2cpp_codegen_array_get_length(L_6);
		int32_t L_8 = ___1_index;
		int32_t L_9;
		L_9 = ReadOnlyCollection_1_get_Count_mB98C38D2E69C0937FA2F0C8494D7EFDECDA1992D(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, L_8))) >= ((int32_t)L_9)))
		{
			goto IL_0046;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(5, NULL);
	}

IL_0046:
	{
		RuntimeArray* L_10 = ___0_array;
		V_0 = ((XRViewU5BU5D_t46B2B3C0D45A670846E736AFB362448972CB513D*)IsInstSealed((RuntimeObject*)L_10, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)));
		XRViewU5BU5D_t46B2B3C0D45A670846E736AFB362448972CB513D* L_11 = V_0;
		if (!L_11)
		{
			goto IL_005e;
		}
	}
	{
		RuntimeObject* L_12 = __this->___list;
		XRViewU5BU5D_t46B2B3C0D45A670846E736AFB362448972CB513D* L_13 = V_0;
		int32_t L_14 = ___1_index;
		NullCheck(L_12);
		InterfaceActionInvoker2< XRViewU5BU5D_t46B2B3C0D45A670846E736AFB362448972CB513D*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_12, L_13, L_14);
		return;
	}

IL_005e:
	{
		RuntimeArray* L_15 = ___0_array;
		NullCheck(L_15);
		Type_t* L_16;
		L_16 = il2cpp_codegen_object_get_type(L_15);
		NullCheck(L_16);
		Type_t* L_17;
		L_17 = VirtualFuncInvoker0< Type_t* >::Invoke(46, L_16);
		V_1 = L_17;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 12)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		V_2 = L_19;
		Type_t* L_20 = V_1;
		Type_t* L_21 = V_2;
		NullCheck(L_20);
		bool L_22;
		L_22 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_20, L_21);
		if (L_22)
		{
			goto IL_008c;
		}
	}
	{
		Type_t* L_23 = V_2;
		Type_t* L_24 = V_1;
		NullCheck(L_23);
		bool L_25;
		L_25 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_23, L_24);
		if (L_25)
		{
			goto IL_008c;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_008c:
	{
		RuntimeArray* L_26 = ___0_array;
		V_3 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_26, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = V_3;
		if (L_27)
		{
			goto IL_009b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_009b:
	{
		RuntimeObject* L_28 = __this->___list;
		NullCheck(L_28);
		int32_t L_29;
		L_29 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_28);
		V_4 = L_29;
	}
	try
	{
		{
			V_5 = 0;
			goto IL_00cd_1;
		}

IL_00ad_1:
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_30 = V_3;
			int32_t L_31 = ___1_index;
			int32_t L_32 = L_31;
			___1_index = ((int32_t)il2cpp_codegen_add(L_32, 1));
			RuntimeObject* L_33 = __this->___list;
			int32_t L_34 = V_5;
			NullCheck(L_33);
			XRView_t70E23918C68E24DB22A8614AA8717B3BA213FAB5 L_35;
			L_35 = InterfaceFuncInvoker1< XRView_t70E23918C68E24DB22A8614AA8717B3BA213FAB5, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_33, L_34);
			XRView_t70E23918C68E24DB22A8614AA8717B3BA213FAB5 L_36 = L_35;
			RuntimeObject* L_37 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_36);
			NullCheck(L_30);
			ArrayElementTypeCheck (L_30, L_37);
			(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (RuntimeObject*)L_37);
			int32_t L_38 = V_5;
			V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
		}

IL_00cd_1:
		{
			int32_t L_39 = V_5;
			int32_t L_40 = V_4;
			if ((((int32_t)L_39) < ((int32_t)L_40)))
			{
				goto IL_00ad_1;
			}
		}
		{
			goto IL_00dd;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00d5;
		}
		throw e;
	}

CATCH_00d5:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_41 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_00dd;
	}

IL_00dd:
	{
		return;
	}
}
// Method Definition Index: 10467
// Method Definition Index: 10468
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_System_Collections_IList_get_Item_mD818F5036E578A39D8EADB0EE282B1D4BDE97D94 (ReadOnlyCollection_1_t95C4CE7A3281F650247DAD055168AC75CA2E0D94* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		XRView_t70E23918C68E24DB22A8614AA8717B3BA213FAB5 L_2;
		L_2 = InterfaceFuncInvoker1< XRView_t70E23918C68E24DB22A8614AA8717B3BA213FAB5, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		XRView_t70E23918C68E24DB22A8614AA8717B3BA213FAB5 L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_3);
		return L_4;
	}
}
// Method Definition Index: 10469
// Method Definition Index: 10470
// Method Definition Index: 10471
// Method Definition Index: 10472
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_mBBF52CC85D738F114987C654B0B3E2F4C1AE696A (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	XRView_t70E23918C68E24DB22A8614AA8717B3BA213FAB5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(XRView_t70E23918C68E24DB22A8614AA8717B3BA213FAB5));
		XRView_t70E23918C68E24DB22A8614AA8717B3BA213FAB5 L_2 = V_0;
		return false;
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
// Method Definition Index: 10473
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_System_Collections_IList_Contains_mA66538AB42953377E4B816FBCAEB36A866CF949E (ReadOnlyCollection_1_t95C4CE7A3281F650247DAD055168AC75CA2E0D94* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_mBBF52CC85D738F114987C654B0B3E2F4C1AE696A(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		bool L_3;
		L_3 = ReadOnlyCollection_1_Contains_m332A74A4BF707ACE74A3A01578A1D5781F7A9F6C(__this, ((*(XRView_t70E23918C68E24DB22A8614AA8717B3BA213FAB5*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// Method Definition Index: 10474
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_System_Collections_IList_IndexOf_m5A9205AD632B40D73D44324A2CD475BEBC030CEB (ReadOnlyCollection_1_t95C4CE7A3281F650247DAD055168AC75CA2E0D94* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_mBBF52CC85D738F114987C654B0B3E2F4C1AE696A(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		int32_t L_3;
		L_3 = ReadOnlyCollection_1_IndexOf_mBBC67B329E7A47849082B0A54D1039AB99E5B231(__this, ((*(XRView_t70E23918C68E24DB22A8614AA8717B3BA213FAB5*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15));
		return L_3;
	}

IL_0015:
	{
		return (-1);
	}
}
// Method Definition Index: 10475
// Method Definition Index: 10476
// Method Definition Index: 10477
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 10449
// Method Definition Index: 10450
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m9AF1774FE249CFF994683344F3395D6C45BA74EB_gshared (ReadOnlyCollection_1_t06F71F2F3EBC6E0A34714E0A7EB3367B6D248263* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck((RuntimeObject*)L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), (RuntimeObject*)L_0);
		return L_1;
	}
}
// Method Definition Index: 10451
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* ReadOnlyCollection_1_get_Item_m23FB0C503360A616B4AB2D24C802A792FB262012_gshared (ReadOnlyCollection_1_t06F71F2F3EBC6E0A34714E0A7EB3367B6D248263* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		Il2CppSharedGenericObject* L_2;
		L_2 = InterfaceFuncInvoker1< Il2CppSharedGenericObject*, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10452
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_mCA382B62077A4FA1B0D0F387651E41770EC39690_gshared (ReadOnlyCollection_1_t06F71F2F3EBC6E0A34714E0A7EB3367B6D248263* __this, Il2CppSharedGenericObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		Il2CppSharedGenericObject* L_1 = ___0_value;
		NullCheck((RuntimeObject*)L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, Il2CppSharedGenericObject* >::Invoke(4, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), (RuntimeObject*)L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10453
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_CopyTo_m67E89EFDBC85B76754A39349FFFD92A938142387_gshared (ReadOnlyCollection_1_t06F71F2F3EBC6E0A34714E0A7EB3367B6D248263* __this, __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_1 = ___0_array;
		int32_t L_2 = ___1_index;
		NullCheck((RuntimeObject*)L_0);
		InterfaceActionInvoker2< __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), (RuntimeObject*)L_0, L_1, L_2);
		return;
	}
}
// Method Definition Index: 10454
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_GetEnumerator_m4550DD869199B6BB5004D0EC5F84EAD608E5D0BD_gshared (ReadOnlyCollection_1_t06F71F2F3EBC6E0A34714E0A7EB3367B6D248263* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck((RuntimeObject*)L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 7), (RuntimeObject*)L_0);
		return L_1;
	}
}
// Method Definition Index: 10455
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_mFC9BAC0925D44B0206E5F9250E502C86E0FE33EC_gshared (ReadOnlyCollection_1_t06F71F2F3EBC6E0A34714E0A7EB3367B6D248263* __this, Il2CppSharedGenericObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		Il2CppSharedGenericObject* L_1 = ___0_value;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, Il2CppSharedGenericObject* >::Invoke(2, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10456
// Method Definition Index: 10457
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_mD59DAB2A22CDE2C16A3DF78BA60C5B779C9DC94D_gshared (ReadOnlyCollection_1_t06F71F2F3EBC6E0A34714E0A7EB3367B6D248263* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		Il2CppSharedGenericObject* L_2;
		L_2 = InterfaceFuncInvoker1< Il2CppSharedGenericObject*, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10458
// Method Definition Index: 10459
// Method Definition Index: 10460
// Method Definition Index: 10461
// Method Definition Index: 10462
// Method Definition Index: 10463
// Method Definition Index: 10464
// Method Definition Index: 10465
// Method Definition Index: 10466
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m478432D44E3926112CDE5DFEFA58C16EBB9EBDF5_gshared (ReadOnlyCollection_1_t06F71F2F3EBC6E0A34714E0A7EB3367B6D248263* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* V_0 = NULL;
	Type_t* V_1 = NULL;
	Type_t* V_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = il2cpp_codegen_array_get_rank(L_1);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0030:
	{
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = il2cpp_codegen_array_get_length(L_6);
		int32_t L_8 = ___1_index;
		int32_t L_9;
		L_9 = ReadOnlyCollection_1_get_Count_m9AF1774FE249CFF994683344F3395D6C45BA74EB(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, L_8))) >= ((int32_t)L_9)))
		{
			goto IL_0046;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(5, NULL);
	}

IL_0046:
	{
		RuntimeArray* L_10 = ___0_array;
		V_0 = ((__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979*)IsInst((RuntimeObject*)L_10, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)));
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_11 = V_0;
		if (!L_11)
		{
			goto IL_005e;
		}
	}
	{
		RuntimeObject* L_12 = __this->___list;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_13 = V_0;
		int32_t L_14 = ___1_index;
		NullCheck((RuntimeObject*)L_12);
		InterfaceActionInvoker2< __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), (RuntimeObject*)L_12, L_13, L_14);
		return;
	}

IL_005e:
	{
		RuntimeArray* L_15 = ___0_array;
		NullCheck(L_15);
		Type_t* L_16;
		L_16 = il2cpp_codegen_object_get_type(L_15);
		NullCheck(L_16);
		Type_t* L_17;
		L_17 = VirtualFuncInvoker0< Type_t* >::Invoke(46, L_16);
		V_1 = L_17;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 12)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		V_2 = L_19;
		Type_t* L_20 = V_1;
		Type_t* L_21 = V_2;
		NullCheck(L_20);
		bool L_22;
		L_22 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_20, L_21);
		if (L_22)
		{
			goto IL_008c;
		}
	}
	{
		Type_t* L_23 = V_2;
		Type_t* L_24 = V_1;
		NullCheck(L_23);
		bool L_25;
		L_25 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_23, L_24);
		if (L_25)
		{
			goto IL_008c;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_008c:
	{
		RuntimeArray* L_26 = ___0_array;
		V_3 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_26, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = V_3;
		if (L_27)
		{
			goto IL_009b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_009b:
	{
		RuntimeObject* L_28 = __this->___list;
		NullCheck((RuntimeObject*)L_28);
		int32_t L_29;
		L_29 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), (RuntimeObject*)L_28);
		V_4 = L_29;
	}
	try
	{
		{
			V_5 = 0;
			goto IL_00cd_1;
		}

IL_00ad_1:
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_30 = V_3;
			int32_t L_31 = ___1_index;
			int32_t L_32 = L_31;
			___1_index = ((int32_t)il2cpp_codegen_add(L_32, 1));
			RuntimeObject* L_33 = __this->___list;
			int32_t L_34 = V_5;
			NullCheck(L_33);
			Il2CppSharedGenericObject* L_35;
			L_35 = InterfaceFuncInvoker1< Il2CppSharedGenericObject*, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_33, L_34);
			NullCheck(L_30);
			ArrayElementTypeCheck (L_30, L_35);
			(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (RuntimeObject*)L_35);
			int32_t L_36 = V_5;
			V_5 = ((int32_t)il2cpp_codegen_add(L_36, 1));
		}

IL_00cd_1:
		{
			int32_t L_37 = V_5;
			int32_t L_38 = V_4;
			if ((((int32_t)L_37) < ((int32_t)L_38)))
			{
				goto IL_00ad_1;
			}
		}
		{
			goto IL_00dd;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00d5;
		}
		throw e;
	}

CATCH_00d5:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_39 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_00dd;
	}

IL_00dd:
	{
		return;
	}
}
// Method Definition Index: 10467
// Method Definition Index: 10468
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_System_Collections_IList_get_Item_mE82D2072F182EAAB44C5F8B96BE8E93033451549_gshared (ReadOnlyCollection_1_t06F71F2F3EBC6E0A34714E0A7EB3367B6D248263* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		Il2CppSharedGenericObject* L_2;
		L_2 = InterfaceFuncInvoker1< Il2CppSharedGenericObject*, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return (RuntimeObject*)L_2;
	}
}
// Method Definition Index: 10469
// Method Definition Index: 10470
// Method Definition Index: 10471
// Method Definition Index: 10472
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m6524BB7810330224C17351742769CA098CC80929_gshared (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	Il2CppSharedGenericObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___0_value;
		if (((Il2CppSharedGenericObject*)IsInst((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Il2CppSharedGenericObject*));
		Il2CppSharedGenericObject* L_2 = V_0;
		return (bool)((((RuntimeObject*)(Il2CppSharedGenericObject*)L_2) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
// Method Definition Index: 10473
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_System_Collections_IList_Contains_m5E9D87468D2864798886B51D064CBDEEEACAE7BC_gshared (ReadOnlyCollection_1_t06F71F2F3EBC6E0A34714E0A7EB3367B6D248263* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_m6524BB7810330224C17351742769CA098CC80929(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		bool L_3;
		L_3 = ReadOnlyCollection_1_Contains_mCA382B62077A4FA1B0D0F387651E41770EC39690(__this, ((Il2CppSharedGenericObject*)Castclass((RuntimeObject*)L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// Method Definition Index: 10474
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_System_Collections_IList_IndexOf_m81BF68B6CDB189B7801593C1AF869A9750788642_gshared (ReadOnlyCollection_1_t06F71F2F3EBC6E0A34714E0A7EB3367B6D248263* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_m6524BB7810330224C17351742769CA098CC80929(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		int32_t L_3;
		L_3 = ReadOnlyCollection_1_IndexOf_mFC9BAC0925D44B0206E5F9250E502C86E0FE33EC(__this, ((Il2CppSharedGenericObject*)Castclass((RuntimeObject*)L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15));
		return L_3;
	}

IL_0015:
	{
		return (-1);
	}
}
// Method Definition Index: 10475
// Method Definition Index: 10476
// Method Definition Index: 10477
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 10449
// Method Definition Index: 10450
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m42EA0DCED53E60AEB0F8E87B85BAAFF7E3339250_gshared (ReadOnlyCollection_1_tD86E076A19D3DF6CFD1AC3FEE937BD0FB0B39AF7* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck((RuntimeObject*)L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), (RuntimeObject*)L_0);
		return L_1;
	}
}
// Method Definition Index: 10451
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t ReadOnlyCollection_1_get_Item_mE4A20DEA92A7746521144E669D9BF4246B2B6357_gshared (ReadOnlyCollection_1_tD86E076A19D3DF6CFD1AC3FEE937BD0FB0B39AF7* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		uint8_t L_2;
		L_2 = InterfaceFuncInvoker1< uint8_t, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10452
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m5942EC87898E487139915D67666E73C2C5720BBE_gshared (ReadOnlyCollection_1_tD86E076A19D3DF6CFD1AC3FEE937BD0FB0B39AF7* __this, uint8_t ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		uint8_t L_1 = ___0_value;
		NullCheck((RuntimeObject*)L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, uint8_t >::Invoke(4, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), (RuntimeObject*)L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10453
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_CopyTo_mA6900E3B2B7CF4ACF50BB10D02A013860F512B0F_gshared (ReadOnlyCollection_1_tD86E076A19D3DF6CFD1AC3FEE937BD0FB0B39AF7* __this, __Il2CppByteEnumU5BU5D_t4D02DF3357DB0BD78CB7064114CAFFD248D6999A* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		__Il2CppByteEnumU5BU5D_t4D02DF3357DB0BD78CB7064114CAFFD248D6999A* L_1 = ___0_array;
		int32_t L_2 = ___1_index;
		NullCheck((RuntimeObject*)L_0);
		InterfaceActionInvoker2< __Il2CppByteEnumU5BU5D_t4D02DF3357DB0BD78CB7064114CAFFD248D6999A*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), (RuntimeObject*)L_0, L_1, L_2);
		return;
	}
}
// Method Definition Index: 10454
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_GetEnumerator_mFFDDC15442EE04E2CB8D7CB429188249072C7C29_gshared (ReadOnlyCollection_1_tD86E076A19D3DF6CFD1AC3FEE937BD0FB0B39AF7* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck((RuntimeObject*)L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 7), (RuntimeObject*)L_0);
		return L_1;
	}
}
// Method Definition Index: 10455
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m086BD8A3EC781D359798BDF4EFCB669640D8669B_gshared (ReadOnlyCollection_1_tD86E076A19D3DF6CFD1AC3FEE937BD0FB0B39AF7* __this, uint8_t ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		uint8_t L_1 = ___0_value;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, uint8_t >::Invoke(2, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10456
// Method Definition Index: 10457
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_mE4D7A860D839D25B74A2011BC82D389C6BB17EB1_gshared (ReadOnlyCollection_1_tD86E076A19D3DF6CFD1AC3FEE937BD0FB0B39AF7* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		uint8_t L_2;
		L_2 = InterfaceFuncInvoker1< uint8_t, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10458
// Method Definition Index: 10459
// Method Definition Index: 10460
// Method Definition Index: 10461
// Method Definition Index: 10462
// Method Definition Index: 10463
// Method Definition Index: 10464
// Method Definition Index: 10465
// Method Definition Index: 10466
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m759F24D952A4D124215CD91055E088400A73D467_gshared (ReadOnlyCollection_1_tD86E076A19D3DF6CFD1AC3FEE937BD0FB0B39AF7* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	__Il2CppByteEnumU5BU5D_t4D02DF3357DB0BD78CB7064114CAFFD248D6999A* V_0 = NULL;
	Type_t* V_1 = NULL;
	Type_t* V_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = il2cpp_codegen_array_get_rank(L_1);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0030:
	{
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = il2cpp_codegen_array_get_length(L_6);
		int32_t L_8 = ___1_index;
		int32_t L_9;
		L_9 = ReadOnlyCollection_1_get_Count_m42EA0DCED53E60AEB0F8E87B85BAAFF7E3339250(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, L_8))) >= ((int32_t)L_9)))
		{
			goto IL_0046;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(5, NULL);
	}

IL_0046:
	{
		RuntimeArray* L_10 = ___0_array;
		V_0 = ((__Il2CppByteEnumU5BU5D_t4D02DF3357DB0BD78CB7064114CAFFD248D6999A*)IsInstSealed((RuntimeObject*)L_10, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)));
		__Il2CppByteEnumU5BU5D_t4D02DF3357DB0BD78CB7064114CAFFD248D6999A* L_11 = V_0;
		if (!L_11)
		{
			goto IL_005e;
		}
	}
	{
		RuntimeObject* L_12 = __this->___list;
		__Il2CppByteEnumU5BU5D_t4D02DF3357DB0BD78CB7064114CAFFD248D6999A* L_13 = V_0;
		int32_t L_14 = ___1_index;
		NullCheck((RuntimeObject*)L_12);
		InterfaceActionInvoker2< __Il2CppByteEnumU5BU5D_t4D02DF3357DB0BD78CB7064114CAFFD248D6999A*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), (RuntimeObject*)L_12, L_13, L_14);
		return;
	}

IL_005e:
	{
		RuntimeArray* L_15 = ___0_array;
		NullCheck(L_15);
		Type_t* L_16;
		L_16 = il2cpp_codegen_object_get_type(L_15);
		NullCheck(L_16);
		Type_t* L_17;
		L_17 = VirtualFuncInvoker0< Type_t* >::Invoke(46, L_16);
		V_1 = L_17;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 12)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		V_2 = L_19;
		Type_t* L_20 = V_1;
		Type_t* L_21 = V_2;
		NullCheck(L_20);
		bool L_22;
		L_22 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_20, L_21);
		if (L_22)
		{
			goto IL_008c;
		}
	}
	{
		Type_t* L_23 = V_2;
		Type_t* L_24 = V_1;
		NullCheck(L_23);
		bool L_25;
		L_25 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_23, L_24);
		if (L_25)
		{
			goto IL_008c;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_008c:
	{
		RuntimeArray* L_26 = ___0_array;
		V_3 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_26, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = V_3;
		if (L_27)
		{
			goto IL_009b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_009b:
	{
		RuntimeObject* L_28 = __this->___list;
		NullCheck((RuntimeObject*)L_28);
		int32_t L_29;
		L_29 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), (RuntimeObject*)L_28);
		V_4 = L_29;
	}
	try
	{
		{
			V_5 = 0;
			goto IL_00cd_1;
		}

IL_00ad_1:
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_30 = V_3;
			int32_t L_31 = ___1_index;
			int32_t L_32 = L_31;
			___1_index = ((int32_t)il2cpp_codegen_add(L_32, 1));
			RuntimeObject* L_33 = __this->___list;
			int32_t L_34 = V_5;
			NullCheck(L_33);
			uint8_t L_35;
			L_35 = InterfaceFuncInvoker1< uint8_t, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_33, L_34);
			uint8_t L_36 = L_35;
			RuntimeObject* L_37 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_36);
			NullCheck(L_30);
			ArrayElementTypeCheck (L_30, L_37);
			(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (RuntimeObject*)L_37);
			int32_t L_38 = V_5;
			V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
		}

IL_00cd_1:
		{
			int32_t L_39 = V_5;
			int32_t L_40 = V_4;
			if ((((int32_t)L_39) < ((int32_t)L_40)))
			{
				goto IL_00ad_1;
			}
		}
		{
			goto IL_00dd;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00d5;
		}
		throw e;
	}

CATCH_00d5:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_41 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_00dd;
	}

IL_00dd:
	{
		return;
	}
}
// Method Definition Index: 10467
// Method Definition Index: 10468
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_System_Collections_IList_get_Item_m7A299DFE2CAF9E3E4A51E28A9DC60DEF2312D7C2_gshared (ReadOnlyCollection_1_tD86E076A19D3DF6CFD1AC3FEE937BD0FB0B39AF7* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		uint8_t L_2;
		L_2 = InterfaceFuncInvoker1< uint8_t, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		uint8_t L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_3);
		return L_4;
	}
}
// Method Definition Index: 10469
// Method Definition Index: 10470
// Method Definition Index: 10471
// Method Definition Index: 10472
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m0B1D25730B9DD494FCA9E772786682534DB20B70_gshared (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	uint8_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___0_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(uint8_t));
		uint8_t L_2 = V_0;
		return false;
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
// Method Definition Index: 10473
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_System_Collections_IList_Contains_m8D3536179DCBD318E317046F9F5F7D76BA9D14FA_gshared (ReadOnlyCollection_1_tD86E076A19D3DF6CFD1AC3FEE937BD0FB0B39AF7* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_m0B1D25730B9DD494FCA9E772786682534DB20B70(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		bool L_3;
		L_3 = ReadOnlyCollection_1_Contains_m5942EC87898E487139915D67666E73C2C5720BBE(__this, ((*(uint8_t*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// Method Definition Index: 10474
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_System_Collections_IList_IndexOf_m1C79B4C294DF7B05D13C4CBBD31EED511347AE39_gshared (ReadOnlyCollection_1_tD86E076A19D3DF6CFD1AC3FEE937BD0FB0B39AF7* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_m0B1D25730B9DD494FCA9E772786682534DB20B70(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		int32_t L_3;
		L_3 = ReadOnlyCollection_1_IndexOf_m086BD8A3EC781D359798BDF4EFCB669640D8669B(__this, ((*(uint8_t*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15));
		return L_3;
	}

IL_0015:
	{
		return (-1);
	}
}
// Method Definition Index: 10475
// Method Definition Index: 10476
// Method Definition Index: 10477
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 10449
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1__ctor_m903CF4492D6E4F6EE0D865BB7AA36A0DDB888355_fshared (ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8* __this, RuntimeObject* ___0_list, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		RuntimeObject* L_0 = ___0_list;
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(7, NULL);
	}

IL_000f:
	{
		RuntimeObject* L_1 = ___0_list;
		__this->___list = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___list), (void*)L_1);
		return;
	}
}
// Method Definition Index: 10450
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_mCDFBED2827141480BC213F53AEEDACC6213A3B66_fshared (ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck((RuntimeObject*)L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), (RuntimeObject*)L_0);
		return L_1;
	}
}
// Method Definition Index: 10451
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_get_Item_mA8D896F68E301ACA5A341DC5A225583D8ED2A255_fshared (ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8* __this, int32_t ___0_index, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t8D48BFC25EA68A42A94BF65BB9E3A632E9BCB783 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_T_t8D48BFC25EA68A42A94BF65BB9E3A632E9BCB783);
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		InterfaceActionInvoker2Invoker< int32_t, Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1, (Il2CppFullySharedGenericAny*)L_2);
		il2cpp_codegen_memcpy(il2cppRetVal, L_2, SizeOf_T_t8D48BFC25EA68A42A94BF65BB9E3A632E9BCB783);
		return;
	}
}
// Method Definition Index: 10452
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m3E09B940962F12FD034CC8486ED4168D4721DBBE_fshared (ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8* __this, Il2CppFullySharedGenericAny ___0_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t8D48BFC25EA68A42A94BF65BB9E3A632E9BCB783 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T_t8D48BFC25EA68A42A94BF65BB9E3A632E9BCB783);
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)) ? ___0_value : &___0_value), SizeOf_T_t8D48BFC25EA68A42A94BF65BB9E3A632E9BCB783);
		NullCheck((RuntimeObject*)L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1Invoker< bool, Il2CppFullySharedGenericAny >::Invoke(4, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), (RuntimeObject*)L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)) ? L_1: *(void**)L_1));
		return L_2;
	}
}
// Method Definition Index: 10453
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_CopyTo_mB416E0A1DB85A7CADD8262857E64FB0ADC00A1EA_fshared (ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = ___0_array;
		int32_t L_2 = ___1_index;
		NullCheck((RuntimeObject*)L_0);
		InterfaceActionInvoker2< __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), (RuntimeObject*)L_0, L_1, L_2);
		return;
	}
}
// Method Definition Index: 10454
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_GetEnumerator_mCFEF0F9FA49B2179E5E911F9D1152340A92DB3F3_fshared (ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck((RuntimeObject*)L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 7), (RuntimeObject*)L_0);
		return L_1;
	}
}
// Method Definition Index: 10455
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_mD82DC91F5E57226382BAF1401C40E957F7DA2387_fshared (ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8* __this, Il2CppFullySharedGenericAny ___0_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t8D48BFC25EA68A42A94BF65BB9E3A632E9BCB783 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T_t8D48BFC25EA68A42A94BF65BB9E3A632E9BCB783);
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)) ? ___0_value : &___0_value), SizeOf_T_t8D48BFC25EA68A42A94BF65BB9E3A632E9BCB783);
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1Invoker< int32_t, Il2CppFullySharedGenericAny >::Invoke(2, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)) ? L_1: *(void**)L_1));
		return L_2;
	}
}
// Method Definition Index: 10456
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_mC4F2329D15060977CE2267B4D0E87EDB561CF595_fshared (ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		return (bool)1;
	}
}
// Method Definition Index: 10457
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_mF4ED844686904AEE780D507416D7E7A51DFF202D_fshared (ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8* __this, int32_t ___0_index, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t8D48BFC25EA68A42A94BF65BB9E3A632E9BCB783 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_T_t8D48BFC25EA68A42A94BF65BB9E3A632E9BCB783);
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		InterfaceActionInvoker2Invoker< int32_t, Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1, (Il2CppFullySharedGenericAny*)L_2);
		il2cpp_codegen_memcpy(il2cppRetVal, L_2, SizeOf_T_t8D48BFC25EA68A42A94BF65BB9E3A632E9BCB783);
		return;
	}
}
// Method Definition Index: 10458
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_set_Item_m35A745E63BFF1D589351CE60CF9E340E75C14998_fshared (ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8* __this, int32_t ___0_index, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		ThrowHelper_ThrowNotSupportedException_mB51B0F3A42F31B455852E713F424D47333326023(((int32_t)28), NULL);
		return;
	}
}
// Method Definition Index: 10459
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Add_mF006EAEF6D337E8B834711F6905D3ADE4FA0D987_fshared (ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8* __this, Il2CppFullySharedGenericAny ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		ThrowHelper_ThrowNotSupportedException_mB51B0F3A42F31B455852E713F424D47333326023(((int32_t)28), NULL);
		return;
	}
}
// Method Definition Index: 10460
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Clear_mFD6E4EDD6B7F30038EFD8F9C0FE3AC221626D95F_fshared (ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		ThrowHelper_ThrowNotSupportedException_mB51B0F3A42F31B455852E713F424D47333326023(((int32_t)28), NULL);
		return;
	}
}
// Method Definition Index: 10461
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_Insert_m9F3566194F9D272B71951511DA8312C8B4ACA259_fshared (ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8* __this, int32_t ___0_index, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		ThrowHelper_ThrowNotSupportedException_mB51B0F3A42F31B455852E713F424D47333326023(((int32_t)28), NULL);
		return;
	}
}
// Method Definition Index: 10462
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Remove_m4F9FB8AF81AAA7BF937DC85004CA9F1F7E6ED280_fshared (ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8* __this, Il2CppFullySharedGenericAny ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		ThrowHelper_ThrowNotSupportedException_mB51B0F3A42F31B455852E713F424D47333326023(((int32_t)28), NULL);
		return (bool)0;
	}
}
// Method Definition Index: 10463
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_RemoveAt_m02FCD7570EC5BAE9CD2BA0B6EF0227B6C253E006_fshared (ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		ThrowHelper_ThrowNotSupportedException_mB51B0F3A42F31B455852E713F424D47333326023(((int32_t)28), NULL);
		return;
	}
}
// Method Definition Index: 10464
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_System_Collections_IEnumerable_GetEnumerator_mA6AF1223843F4580FD3FEB8E35845661982E0B32_fshared (ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck((RuntimeObject*)L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var, (RuntimeObject*)L_0);
		return L_1;
	}
}
// Method Definition Index: 10465
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_System_Collections_ICollection_get_SyncRoot_mE2403F1271152A240384F722DBC2F51B2FE474F9_fshared (ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = __this->____syncRoot;
		if (L_0)
		{
			goto IL_0037;
		}
	}
	{
		RuntimeObject* L_1 = __this->___list;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_1, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var));
		RuntimeObject* L_2 = V_0;
		if (!L_2)
		{
			goto IL_0025;
		}
	}
	{
		RuntimeObject* L_3 = V_0;
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(2, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, L_3);
		__this->____syncRoot = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____syncRoot), (void*)L_4);
		goto IL_0037;
	}

IL_0025:
	{
		RuntimeObject** L_5 = (RuntimeObject**)(&__this->____syncRoot);
		RuntimeObject* L_6 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_6, NULL);
		RuntimeObject* L_7;
		L_7 = il2cpp_intrinsic_interlocked_compare_exchange(L_5, L_6, NULL);
	}

IL_0037:
	{
		RuntimeObject* L_8 = __this->____syncRoot;
		return L_8;
	}
}
// Method Definition Index: 10466
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m70FC2A97390955247B150E4BD8DD8B18237430F4_fshared (ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	const uint32_t SizeOf_T_t8D48BFC25EA68A42A94BF65BB9E3A632E9BCB783 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4));
	const Il2CppFullySharedGenericAny L_35 = alloca(SizeOf_T_t8D48BFC25EA68A42A94BF65BB9E3A632E9BCB783);
	//<source_info:<no-source>:1>
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_0 = NULL;
	Type_t* V_1 = NULL;
	Type_t* V_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = il2cpp_codegen_array_get_rank(L_1);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0030:
	{
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = il2cpp_codegen_array_get_length(L_6);
		int32_t L_8 = ___1_index;
		int32_t L_9;
		L_9 = ((  int32_t (*) (ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10)))(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, L_8))) >= ((int32_t)L_9)))
		{
			goto IL_0046;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(5, NULL);
	}

IL_0046:
	{
		RuntimeArray* L_10 = ___0_array;
		V_0 = ((__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)IsInst((RuntimeObject*)L_10, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_11 = V_0;
		if (!L_11)
		{
			goto IL_005e;
		}
	}
	{
		RuntimeObject* L_12 = __this->___list;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_13 = V_0;
		int32_t L_14 = ___1_index;
		NullCheck((RuntimeObject*)L_12);
		InterfaceActionInvoker2< __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), (RuntimeObject*)L_12, L_13, L_14);
		return;
	}

IL_005e:
	{
		RuntimeArray* L_15 = ___0_array;
		NullCheck(L_15);
		Type_t* L_16;
		L_16 = il2cpp_codegen_object_get_type(L_15);
		NullCheck(L_16);
		Type_t* L_17;
		L_17 = VirtualFuncInvoker0< Type_t* >::Invoke(46, L_16);
		V_1 = L_17;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 12)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		V_2 = L_19;
		Type_t* L_20 = V_1;
		Type_t* L_21 = V_2;
		NullCheck(L_20);
		bool L_22;
		L_22 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_20, L_21);
		if (L_22)
		{
			goto IL_008c;
		}
	}
	{
		Type_t* L_23 = V_2;
		Type_t* L_24 = V_1;
		NullCheck(L_23);
		bool L_25;
		L_25 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_23, L_24);
		if (L_25)
		{
			goto IL_008c;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_008c:
	{
		RuntimeArray* L_26 = ___0_array;
		V_3 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_26, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = V_3;
		if (L_27)
		{
			goto IL_009b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_009b:
	{
		RuntimeObject* L_28 = __this->___list;
		NullCheck((RuntimeObject*)L_28);
		int32_t L_29;
		L_29 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), (RuntimeObject*)L_28);
		V_4 = L_29;
	}
	try
	{
		{
			V_5 = 0;
			goto IL_00cd_1;
		}

IL_00ad_1:
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_30 = V_3;
			int32_t L_31 = ___1_index;
			int32_t L_32 = L_31;
			___1_index = ((int32_t)il2cpp_codegen_add(L_32, 1));
			RuntimeObject* L_33 = __this->___list;
			int32_t L_34 = V_5;
			NullCheck(L_33);
			InterfaceActionInvoker2Invoker< int32_t, Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_33, L_34, (Il2CppFullySharedGenericAny*)L_35);
			RuntimeObject* L_36 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), L_35);
			NullCheck(L_30);
			ArrayElementTypeCheck (L_30, L_36);
			(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (RuntimeObject*)L_36);
			int32_t L_37 = V_5;
			V_5 = ((int32_t)il2cpp_codegen_add(L_37, 1));
		}

IL_00cd_1:
		{
			int32_t L_38 = V_5;
			int32_t L_39 = V_4;
			if ((((int32_t)L_38) < ((int32_t)L_39)))
			{
				goto IL_00ad_1;
			}
		}
		{
			goto IL_00dd;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00d5;
		}
		throw e;
	}

CATCH_00d5:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_40 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_00dd;
	}

IL_00dd:
	{
		return;
	}
}
// Method Definition Index: 10467
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_System_Collections_IList_get_IsReadOnly_m08C282A2A98D3C947E83CBC9890A8E0E709A397B_fshared (ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		return (bool)1;
	}
}
// Method Definition Index: 10468
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_System_Collections_IList_get_Item_m861331F448865761DF230F9645DB5EBC1BCE886F_fshared (ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t8D48BFC25EA68A42A94BF65BB9E3A632E9BCB783 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_T_t8D48BFC25EA68A42A94BF65BB9E3A632E9BCB783);
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		InterfaceActionInvoker2Invoker< int32_t, Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1, (Il2CppFullySharedGenericAny*)L_2);
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), L_2);
		return L_3;
	}
}
// Method Definition Index: 10469
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_IList_set_Item_m08B0FB302612A3978ED68B2A5B11FE2184ECEA19_fshared (ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8* __this, int32_t ___0_index, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		ThrowHelper_ThrowNotSupportedException_mB51B0F3A42F31B455852E713F424D47333326023(((int32_t)28), NULL);
		return;
	}
}
// Method Definition Index: 10470
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_System_Collections_IList_Add_mE7A580FD2427E3D62C85553215B06F340F19C021_fshared (ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		ThrowHelper_ThrowNotSupportedException_mB51B0F3A42F31B455852E713F424D47333326023(((int32_t)28), NULL);
		return (-1);
	}
}
// Method Definition Index: 10471
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_IList_Clear_mE23431676D7E7A313D7D013AA7D53134389E1F65_fshared (ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		ThrowHelper_ThrowNotSupportedException_mB51B0F3A42F31B455852E713F424D47333326023(((int32_t)28), NULL);
		return;
	}
}
// Method Definition Index: 10472
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_mB26BF0A4B6CF73028651EA8BC0D5DB450683A405_fshared (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_T_t8D48BFC25EA68A42A94BF65BB9E3A632E9BCB783 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_T_t8D48BFC25EA68A42A94BF65BB9E3A632E9BCB783);
	//<source_info:<no-source>:1>
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_T_t8D48BFC25EA68A42A94BF65BB9E3A632E9BCB783);
	memset(V_0, 0, SizeOf_T_t8D48BFC25EA68A42A94BF65BB9E3A632E9BCB783);
	{
		RuntimeObject* L_0 = ___0_value;
		if (((RuntimeObject*)IsInst((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_0, SizeOf_T_t8D48BFC25EA68A42A94BF65BB9E3A632E9BCB783);
		il2cpp_codegen_memcpy(L_2, V_0, SizeOf_T_t8D48BFC25EA68A42A94BF65BB9E3A632E9BCB783);
		bool L_3 = !il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4), L_2);
		bool L_4 = L_3;
		return L_4;
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
// Method Definition Index: 10473
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_System_Collections_IList_Contains_mFD48FDEA769B42DD057189EF0893C37CB3E425A0_fshared (ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t8D48BFC25EA68A42A94BF65BB9E3A632E9BCB783 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T_t8D48BFC25EA68A42A94BF65BB9E3A632E9BCB783);
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13)))(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		void* L_4 = UnBox_Any(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), L_3);
		bool L_5;
		L_5 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)) ? (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_4)): *(void**)(((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_4))));
		return L_5;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// Method Definition Index: 10474
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_System_Collections_IList_IndexOf_m99568215E4F7BA5BFC1D5EA185C16A603A96EDE4_fshared (ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t8D48BFC25EA68A42A94BF65BB9E3A632E9BCB783 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T_t8D48BFC25EA68A42A94BF65BB9E3A632E9BCB783);
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13)))(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		void* L_4 = UnBox_Any(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), L_3);
		int32_t L_5;
		L_5 = InvokerFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)) ? (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_4)): *(void**)(((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_4))));
		return L_5;
	}

IL_0015:
	{
		return (-1);
	}
}
// Method Definition Index: 10475
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_IList_Insert_m6E7A22F971B6F49F7A4A13748B924C5B8CD3AF69_fshared (ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8* __this, int32_t ___0_index, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		ThrowHelper_ThrowNotSupportedException_mB51B0F3A42F31B455852E713F424D47333326023(((int32_t)28), NULL);
		return;
	}
}
// Method Definition Index: 10476
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_IList_Remove_m772802A30F60DA8C4025283105DD3D5162CD9A40_fshared (ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		ThrowHelper_ThrowNotSupportedException_mB51B0F3A42F31B455852E713F424D47333326023(((int32_t)28), NULL);
		return;
	}
}
// Method Definition Index: 10477
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_IList_RemoveAt_m8BAA6793E056F7C7F5D3EFC32F9F5D57DF86881C_fshared (ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		ThrowHelper_ThrowNotSupportedException_mB51B0F3A42F31B455852E713F424D47333326023(((int32_t)28), NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 10449
// Method Definition Index: 10450
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_mE688C15AB77A4844B3FE1700E2713247F0B0DF9D_gshared (ReadOnlyCollection_1_tA097AD399F1ED95CBDEFC0663790A10C4A43DFB8* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck((RuntimeObject*)L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), (RuntimeObject*)L_0);
		return L_1;
	}
}
// Method Definition Index: 10451
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Item_m2AB134E377DBCED2DDCC55195EA789695F956B1F_gshared (ReadOnlyCollection_1_tA097AD399F1ED95CBDEFC0663790A10C4A43DFB8* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10452
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m735114B46C15E226E1ACA6FCFFCB0AB14ADBFC87_gshared (ReadOnlyCollection_1_tA097AD399F1ED95CBDEFC0663790A10C4A43DFB8* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_value;
		NullCheck((RuntimeObject*)L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, int32_t >::Invoke(4, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), (RuntimeObject*)L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10453
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_CopyTo_m9946462FB2F4FFD3C42F1A2B145776155E3BA44C_gshared (ReadOnlyCollection_1_tA097AD399F1ED95CBDEFC0663790A10C4A43DFB8* __this, __Il2CppInt32EnumU5BU5D_t8FBDB13799B3615AA893F06F601FF09189B04297* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		__Il2CppInt32EnumU5BU5D_t8FBDB13799B3615AA893F06F601FF09189B04297* L_1 = ___0_array;
		int32_t L_2 = ___1_index;
		NullCheck((RuntimeObject*)L_0);
		InterfaceActionInvoker2< __Il2CppInt32EnumU5BU5D_t8FBDB13799B3615AA893F06F601FF09189B04297*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), (RuntimeObject*)L_0, L_1, L_2);
		return;
	}
}
// Method Definition Index: 10454
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_GetEnumerator_m76FE21246B92BA6E87E8E4C83900A08CD45352C3_gshared (ReadOnlyCollection_1_tA097AD399F1ED95CBDEFC0663790A10C4A43DFB8* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck((RuntimeObject*)L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 7), (RuntimeObject*)L_0);
		return L_1;
	}
}
// Method Definition Index: 10455
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m961F572B556854820B626EDF68D43EB20197152F_gshared (ReadOnlyCollection_1_tA097AD399F1ED95CBDEFC0663790A10C4A43DFB8* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_value;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(2, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10456
// Method Definition Index: 10457
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m2912E4FF6596A0B6D3B935BBA71F6C35CE0201B6_gshared (ReadOnlyCollection_1_tA097AD399F1ED95CBDEFC0663790A10C4A43DFB8* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10458
// Method Definition Index: 10459
// Method Definition Index: 10460
// Method Definition Index: 10461
// Method Definition Index: 10462
// Method Definition Index: 10463
// Method Definition Index: 10464
// Method Definition Index: 10465
// Method Definition Index: 10466
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m089CA6EA1954E1294EBAB5A5AC34EE88D435A777_gshared (ReadOnlyCollection_1_tA097AD399F1ED95CBDEFC0663790A10C4A43DFB8* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	__Il2CppInt32EnumU5BU5D_t8FBDB13799B3615AA893F06F601FF09189B04297* V_0 = NULL;
	Type_t* V_1 = NULL;
	Type_t* V_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = il2cpp_codegen_array_get_rank(L_1);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0030:
	{
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = il2cpp_codegen_array_get_length(L_6);
		int32_t L_8 = ___1_index;
		int32_t L_9;
		L_9 = ReadOnlyCollection_1_get_Count_mE688C15AB77A4844B3FE1700E2713247F0B0DF9D(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, L_8))) >= ((int32_t)L_9)))
		{
			goto IL_0046;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(5, NULL);
	}

IL_0046:
	{
		RuntimeArray* L_10 = ___0_array;
		V_0 = ((__Il2CppInt32EnumU5BU5D_t8FBDB13799B3615AA893F06F601FF09189B04297*)IsInstSealed((RuntimeObject*)L_10, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)));
		__Il2CppInt32EnumU5BU5D_t8FBDB13799B3615AA893F06F601FF09189B04297* L_11 = V_0;
		if (!L_11)
		{
			goto IL_005e;
		}
	}
	{
		RuntimeObject* L_12 = __this->___list;
		__Il2CppInt32EnumU5BU5D_t8FBDB13799B3615AA893F06F601FF09189B04297* L_13 = V_0;
		int32_t L_14 = ___1_index;
		NullCheck((RuntimeObject*)L_12);
		InterfaceActionInvoker2< __Il2CppInt32EnumU5BU5D_t8FBDB13799B3615AA893F06F601FF09189B04297*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), (RuntimeObject*)L_12, L_13, L_14);
		return;
	}

IL_005e:
	{
		RuntimeArray* L_15 = ___0_array;
		NullCheck(L_15);
		Type_t* L_16;
		L_16 = il2cpp_codegen_object_get_type(L_15);
		NullCheck(L_16);
		Type_t* L_17;
		L_17 = VirtualFuncInvoker0< Type_t* >::Invoke(46, L_16);
		V_1 = L_17;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 12)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		V_2 = L_19;
		Type_t* L_20 = V_1;
		Type_t* L_21 = V_2;
		NullCheck(L_20);
		bool L_22;
		L_22 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_20, L_21);
		if (L_22)
		{
			goto IL_008c;
		}
	}
	{
		Type_t* L_23 = V_2;
		Type_t* L_24 = V_1;
		NullCheck(L_23);
		bool L_25;
		L_25 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_23, L_24);
		if (L_25)
		{
			goto IL_008c;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_008c:
	{
		RuntimeArray* L_26 = ___0_array;
		V_3 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_26, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = V_3;
		if (L_27)
		{
			goto IL_009b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_009b:
	{
		RuntimeObject* L_28 = __this->___list;
		NullCheck((RuntimeObject*)L_28);
		int32_t L_29;
		L_29 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), (RuntimeObject*)L_28);
		V_4 = L_29;
	}
	try
	{
		{
			V_5 = 0;
			goto IL_00cd_1;
		}

IL_00ad_1:
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_30 = V_3;
			int32_t L_31 = ___1_index;
			int32_t L_32 = L_31;
			___1_index = ((int32_t)il2cpp_codegen_add(L_32, 1));
			RuntimeObject* L_33 = __this->___list;
			int32_t L_34 = V_5;
			NullCheck(L_33);
			int32_t L_35;
			L_35 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_33, L_34);
			int32_t L_36 = L_35;
			RuntimeObject* L_37 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_36);
			NullCheck(L_30);
			ArrayElementTypeCheck (L_30, L_37);
			(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (RuntimeObject*)L_37);
			int32_t L_38 = V_5;
			V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
		}

IL_00cd_1:
		{
			int32_t L_39 = V_5;
			int32_t L_40 = V_4;
			if ((((int32_t)L_39) < ((int32_t)L_40)))
			{
				goto IL_00ad_1;
			}
		}
		{
			goto IL_00dd;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00d5;
		}
		throw e;
	}

CATCH_00d5:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_41 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_00dd;
	}

IL_00dd:
	{
		return;
	}
}
// Method Definition Index: 10467
// Method Definition Index: 10468
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_System_Collections_IList_get_Item_m5FCD309B54A2523B12ED765E5A75052E1E9D1EA4_gshared (ReadOnlyCollection_1_tA097AD399F1ED95CBDEFC0663790A10C4A43DFB8* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		int32_t L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_3);
		return L_4;
	}
}
// Method Definition Index: 10469
// Method Definition Index: 10470
// Method Definition Index: 10471
// Method Definition Index: 10472
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_mCA01E7A251A192A7B0A1CBC8613CCCFE6CCDBDD0_gshared (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___0_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(int32_t));
		int32_t L_2 = V_0;
		return false;
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
// Method Definition Index: 10473
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_System_Collections_IList_Contains_mB482D38A89FCA844368E5849A4902D304A2DBE13_gshared (ReadOnlyCollection_1_tA097AD399F1ED95CBDEFC0663790A10C4A43DFB8* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_mCA01E7A251A192A7B0A1CBC8613CCCFE6CCDBDD0(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		bool L_3;
		L_3 = ReadOnlyCollection_1_Contains_m735114B46C15E226E1ACA6FCFFCB0AB14ADBFC87(__this, ((*(int32_t*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// Method Definition Index: 10474
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_System_Collections_IList_IndexOf_m05E201DC4B178B303D10F826088FA344474E5310_gshared (ReadOnlyCollection_1_tA097AD399F1ED95CBDEFC0663790A10C4A43DFB8* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_mCA01E7A251A192A7B0A1CBC8613CCCFE6CCDBDD0(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		int32_t L_3;
		L_3 = ReadOnlyCollection_1_IndexOf_m961F572B556854820B626EDF68D43EB20197152F(__this, ((*(int32_t*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15));
		return L_3;
	}

IL_0015:
	{
		return (-1);
	}
}
// Method Definition Index: 10475
// Method Definition Index: 10476
// Method Definition Index: 10477
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 10449
// Method Definition Index: 10450
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_mA8EA6EA02972D7BF8CB6FA0098132350D435F55A_gshared (ReadOnlyCollection_1_t57A9EA1D0B6B2A5908DD58EA8C84F29F53D509A1* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck((RuntimeObject*)L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), (RuntimeObject*)L_0);
		return L_1;
	}
}
// Method Definition Index: 10451
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ReadOnlyCollection_1_get_Item_m5E6270A15B2DFB045FFCBBAE2EAB9E59249BA751_gshared (ReadOnlyCollection_1_t57A9EA1D0B6B2A5908DD58EA8C84F29F53D509A1* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		uint32_t L_2;
		L_2 = InterfaceFuncInvoker1< uint32_t, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10452
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_mE1C0EA44DEB639FE3F1ED4D33CDDC26D71844898_gshared (ReadOnlyCollection_1_t57A9EA1D0B6B2A5908DD58EA8C84F29F53D509A1* __this, uint32_t ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		uint32_t L_1 = ___0_value;
		NullCheck((RuntimeObject*)L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, uint32_t >::Invoke(4, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), (RuntimeObject*)L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10453
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_CopyTo_m382032E92E73EDD512B805880D9A2AAF5AE46AAC_gshared (ReadOnlyCollection_1_t57A9EA1D0B6B2A5908DD58EA8C84F29F53D509A1* __this, __Il2CppUInt32EnumU5BU5D_t59DD627323F45C05F28FE49E0DEA327606079F43* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		__Il2CppUInt32EnumU5BU5D_t59DD627323F45C05F28FE49E0DEA327606079F43* L_1 = ___0_array;
		int32_t L_2 = ___1_index;
		NullCheck((RuntimeObject*)L_0);
		InterfaceActionInvoker2< __Il2CppUInt32EnumU5BU5D_t59DD627323F45C05F28FE49E0DEA327606079F43*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), (RuntimeObject*)L_0, L_1, L_2);
		return;
	}
}
// Method Definition Index: 10454
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_GetEnumerator_mFDC6AD9EFE0C94DA5522EC95A51EF6660F016DFC_gshared (ReadOnlyCollection_1_t57A9EA1D0B6B2A5908DD58EA8C84F29F53D509A1* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck((RuntimeObject*)L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 7), (RuntimeObject*)L_0);
		return L_1;
	}
}
// Method Definition Index: 10455
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m1FD6AD4EBF448B0138CA00EE76420826A1285714_gshared (ReadOnlyCollection_1_t57A9EA1D0B6B2A5908DD58EA8C84F29F53D509A1* __this, uint32_t ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		uint32_t L_1 = ___0_value;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, uint32_t >::Invoke(2, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10456
// Method Definition Index: 10457
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m594C0FF74788FD238398808234FD60F36DE09448_gshared (ReadOnlyCollection_1_t57A9EA1D0B6B2A5908DD58EA8C84F29F53D509A1* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		uint32_t L_2;
		L_2 = InterfaceFuncInvoker1< uint32_t, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10458
// Method Definition Index: 10459
// Method Definition Index: 10460
// Method Definition Index: 10461
// Method Definition Index: 10462
// Method Definition Index: 10463
// Method Definition Index: 10464
// Method Definition Index: 10465
// Method Definition Index: 10466
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m5B65D982A5CF8F98F32FA4D531DF2D6E63E58BE7_gshared (ReadOnlyCollection_1_t57A9EA1D0B6B2A5908DD58EA8C84F29F53D509A1* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	__Il2CppUInt32EnumU5BU5D_t59DD627323F45C05F28FE49E0DEA327606079F43* V_0 = NULL;
	Type_t* V_1 = NULL;
	Type_t* V_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = il2cpp_codegen_array_get_rank(L_1);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0030:
	{
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = il2cpp_codegen_array_get_length(L_6);
		int32_t L_8 = ___1_index;
		int32_t L_9;
		L_9 = ReadOnlyCollection_1_get_Count_mA8EA6EA02972D7BF8CB6FA0098132350D435F55A(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, L_8))) >= ((int32_t)L_9)))
		{
			goto IL_0046;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(5, NULL);
	}

IL_0046:
	{
		RuntimeArray* L_10 = ___0_array;
		V_0 = ((__Il2CppUInt32EnumU5BU5D_t59DD627323F45C05F28FE49E0DEA327606079F43*)IsInstSealed((RuntimeObject*)L_10, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)));
		__Il2CppUInt32EnumU5BU5D_t59DD627323F45C05F28FE49E0DEA327606079F43* L_11 = V_0;
		if (!L_11)
		{
			goto IL_005e;
		}
	}
	{
		RuntimeObject* L_12 = __this->___list;
		__Il2CppUInt32EnumU5BU5D_t59DD627323F45C05F28FE49E0DEA327606079F43* L_13 = V_0;
		int32_t L_14 = ___1_index;
		NullCheck((RuntimeObject*)L_12);
		InterfaceActionInvoker2< __Il2CppUInt32EnumU5BU5D_t59DD627323F45C05F28FE49E0DEA327606079F43*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), (RuntimeObject*)L_12, L_13, L_14);
		return;
	}

IL_005e:
	{
		RuntimeArray* L_15 = ___0_array;
		NullCheck(L_15);
		Type_t* L_16;
		L_16 = il2cpp_codegen_object_get_type(L_15);
		NullCheck(L_16);
		Type_t* L_17;
		L_17 = VirtualFuncInvoker0< Type_t* >::Invoke(46, L_16);
		V_1 = L_17;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 12)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		V_2 = L_19;
		Type_t* L_20 = V_1;
		Type_t* L_21 = V_2;
		NullCheck(L_20);
		bool L_22;
		L_22 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_20, L_21);
		if (L_22)
		{
			goto IL_008c;
		}
	}
	{
		Type_t* L_23 = V_2;
		Type_t* L_24 = V_1;
		NullCheck(L_23);
		bool L_25;
		L_25 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_23, L_24);
		if (L_25)
		{
			goto IL_008c;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_008c:
	{
		RuntimeArray* L_26 = ___0_array;
		V_3 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_26, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = V_3;
		if (L_27)
		{
			goto IL_009b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_009b:
	{
		RuntimeObject* L_28 = __this->___list;
		NullCheck((RuntimeObject*)L_28);
		int32_t L_29;
		L_29 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), (RuntimeObject*)L_28);
		V_4 = L_29;
	}
	try
	{
		{
			V_5 = 0;
			goto IL_00cd_1;
		}

IL_00ad_1:
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_30 = V_3;
			int32_t L_31 = ___1_index;
			int32_t L_32 = L_31;
			___1_index = ((int32_t)il2cpp_codegen_add(L_32, 1));
			RuntimeObject* L_33 = __this->___list;
			int32_t L_34 = V_5;
			NullCheck(L_33);
			uint32_t L_35;
			L_35 = InterfaceFuncInvoker1< uint32_t, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_33, L_34);
			uint32_t L_36 = L_35;
			RuntimeObject* L_37 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_36);
			NullCheck(L_30);
			ArrayElementTypeCheck (L_30, L_37);
			(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (RuntimeObject*)L_37);
			int32_t L_38 = V_5;
			V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
		}

IL_00cd_1:
		{
			int32_t L_39 = V_5;
			int32_t L_40 = V_4;
			if ((((int32_t)L_39) < ((int32_t)L_40)))
			{
				goto IL_00ad_1;
			}
		}
		{
			goto IL_00dd;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00d5;
		}
		throw e;
	}

CATCH_00d5:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_41 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_00dd;
	}

IL_00dd:
	{
		return;
	}
}
// Method Definition Index: 10467
// Method Definition Index: 10468
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_System_Collections_IList_get_Item_mF1B467BED3EC723FEC450FA5E2C193D7F8E232C8_gshared (ReadOnlyCollection_1_t57A9EA1D0B6B2A5908DD58EA8C84F29F53D509A1* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		uint32_t L_2;
		L_2 = InterfaceFuncInvoker1< uint32_t, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		uint32_t L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_3);
		return L_4;
	}
}
// Method Definition Index: 10469
// Method Definition Index: 10470
// Method Definition Index: 10471
// Method Definition Index: 10472
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m0004547519D968FF5DA50C0A87FC7BC11E04578A_gshared (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	uint32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___0_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(uint32_t));
		uint32_t L_2 = V_0;
		return false;
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
// Method Definition Index: 10473
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_System_Collections_IList_Contains_m4D74E2920CA27A98DC0317544D57D4FECB07C2C2_gshared (ReadOnlyCollection_1_t57A9EA1D0B6B2A5908DD58EA8C84F29F53D509A1* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_m0004547519D968FF5DA50C0A87FC7BC11E04578A(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		bool L_3;
		L_3 = ReadOnlyCollection_1_Contains_mE1C0EA44DEB639FE3F1ED4D33CDDC26D71844898(__this, ((*(uint32_t*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// Method Definition Index: 10474
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_System_Collections_IList_IndexOf_m95E55C3CCB39EAAF62F6DDA5AF09A33B8F4D660F_gshared (ReadOnlyCollection_1_t57A9EA1D0B6B2A5908DD58EA8C84F29F53D509A1* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_m0004547519D968FF5DA50C0A87FC7BC11E04578A(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		int32_t L_3;
		L_3 = ReadOnlyCollection_1_IndexOf_m1FD6AD4EBF448B0138CA00EE76420826A1285714(__this, ((*(uint32_t*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15));
		return L_3;
	}

IL_0015:
	{
		return (-1);
	}
}
// Method Definition Index: 10475
// Method Definition Index: 10476
// Method Definition Index: 10477
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 10449
// Method Definition Index: 10450
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m6C0A093B331DA8B9A784CF3C61AFBB1006D6BB6E (ReadOnlyCollection_1_tDA9EBC2C2934508604BBB2BA544E97C8DA1907BF* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0);
		return L_1;
	}
}
// Method Definition Index: 10451
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5 ReadOnlyCollection_1_get_Item_mF36A61169A48FD08A7BABAFFD1EE3581C2EB4A66 (ReadOnlyCollection_1_tDA9EBC2C2934508604BBB2BA544E97C8DA1907BF* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5 L_2;
		L_2 = InterfaceFuncInvoker1< float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10452
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_mA2E681DDC1D0CB4B3A55B8895EDF2B7F073A417C (ReadOnlyCollection_1_tDA9EBC2C2934508604BBB2BA544E97C8DA1907BF* __this, float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5 ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5 L_1 = ___0_value;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5 >::Invoke(4, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10453
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_CopyTo_mBFA6DF19A6C068CC698F75755AD9ED5EE6539BF9 (ReadOnlyCollection_1_tDA9EBC2C2934508604BBB2BA544E97C8DA1907BF* __this, float2U5BU5D_t7F04848FC796653244477DC40830B0A39D67D350* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		float2U5BU5D_t7F04848FC796653244477DC40830B0A39D67D350* L_1 = ___0_array;
		int32_t L_2 = ___1_index;
		NullCheck(L_0);
		InterfaceActionInvoker2< float2U5BU5D_t7F04848FC796653244477DC40830B0A39D67D350*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1, L_2);
		return;
	}
}
// Method Definition Index: 10454
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_GetEnumerator_mA57780FF97A58192205B474E9ABD37A2C7ED9CC7 (ReadOnlyCollection_1_tDA9EBC2C2934508604BBB2BA544E97C8DA1907BF* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 7), L_0);
		return L_1;
	}
}
// Method Definition Index: 10455
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_mDC6A3B52E8647FB457B77CF3CCF4B133C84B646B (ReadOnlyCollection_1_tDA9EBC2C2934508604BBB2BA544E97C8DA1907BF* __this, float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5 ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5 L_1 = ___0_value;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5 >::Invoke(2, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10456
// Method Definition Index: 10457
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5 ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m054BC3D764E8B9DA6B14B22E09B1C8C3D02C2331 (ReadOnlyCollection_1_tDA9EBC2C2934508604BBB2BA544E97C8DA1907BF* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5 L_2;
		L_2 = InterfaceFuncInvoker1< float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10458
// Method Definition Index: 10459
// Method Definition Index: 10460
// Method Definition Index: 10461
// Method Definition Index: 10462
// Method Definition Index: 10463
// Method Definition Index: 10464
// Method Definition Index: 10465
// Method Definition Index: 10466
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_mE6615386D1304F63E64DDAA185404615AA07D44D (ReadOnlyCollection_1_tDA9EBC2C2934508604BBB2BA544E97C8DA1907BF* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	float2U5BU5D_t7F04848FC796653244477DC40830B0A39D67D350* V_0 = NULL;
	Type_t* V_1 = NULL;
	Type_t* V_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = il2cpp_codegen_array_get_rank(L_1);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0030:
	{
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = il2cpp_codegen_array_get_length(L_6);
		int32_t L_8 = ___1_index;
		int32_t L_9;
		L_9 = ReadOnlyCollection_1_get_Count_m6C0A093B331DA8B9A784CF3C61AFBB1006D6BB6E(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, L_8))) >= ((int32_t)L_9)))
		{
			goto IL_0046;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(5, NULL);
	}

IL_0046:
	{
		RuntimeArray* L_10 = ___0_array;
		V_0 = ((float2U5BU5D_t7F04848FC796653244477DC40830B0A39D67D350*)IsInstSealed((RuntimeObject*)L_10, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)));
		float2U5BU5D_t7F04848FC796653244477DC40830B0A39D67D350* L_11 = V_0;
		if (!L_11)
		{
			goto IL_005e;
		}
	}
	{
		RuntimeObject* L_12 = __this->___list;
		float2U5BU5D_t7F04848FC796653244477DC40830B0A39D67D350* L_13 = V_0;
		int32_t L_14 = ___1_index;
		NullCheck(L_12);
		InterfaceActionInvoker2< float2U5BU5D_t7F04848FC796653244477DC40830B0A39D67D350*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_12, L_13, L_14);
		return;
	}

IL_005e:
	{
		RuntimeArray* L_15 = ___0_array;
		NullCheck(L_15);
		Type_t* L_16;
		L_16 = il2cpp_codegen_object_get_type(L_15);
		NullCheck(L_16);
		Type_t* L_17;
		L_17 = VirtualFuncInvoker0< Type_t* >::Invoke(46, L_16);
		V_1 = L_17;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 12)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		V_2 = L_19;
		Type_t* L_20 = V_1;
		Type_t* L_21 = V_2;
		NullCheck(L_20);
		bool L_22;
		L_22 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_20, L_21);
		if (L_22)
		{
			goto IL_008c;
		}
	}
	{
		Type_t* L_23 = V_2;
		Type_t* L_24 = V_1;
		NullCheck(L_23);
		bool L_25;
		L_25 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_23, L_24);
		if (L_25)
		{
			goto IL_008c;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_008c:
	{
		RuntimeArray* L_26 = ___0_array;
		V_3 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_26, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = V_3;
		if (L_27)
		{
			goto IL_009b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_009b:
	{
		RuntimeObject* L_28 = __this->___list;
		NullCheck(L_28);
		int32_t L_29;
		L_29 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_28);
		V_4 = L_29;
	}
	try
	{
		{
			V_5 = 0;
			goto IL_00cd_1;
		}

IL_00ad_1:
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_30 = V_3;
			int32_t L_31 = ___1_index;
			int32_t L_32 = L_31;
			___1_index = ((int32_t)il2cpp_codegen_add(L_32, 1));
			RuntimeObject* L_33 = __this->___list;
			int32_t L_34 = V_5;
			NullCheck(L_33);
			float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5 L_35;
			L_35 = InterfaceFuncInvoker1< float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_33, L_34);
			float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5 L_36 = L_35;
			RuntimeObject* L_37 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_36);
			NullCheck(L_30);
			ArrayElementTypeCheck (L_30, L_37);
			(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (RuntimeObject*)L_37);
			int32_t L_38 = V_5;
			V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
		}

IL_00cd_1:
		{
			int32_t L_39 = V_5;
			int32_t L_40 = V_4;
			if ((((int32_t)L_39) < ((int32_t)L_40)))
			{
				goto IL_00ad_1;
			}
		}
		{
			goto IL_00dd;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00d5;
		}
		throw e;
	}

CATCH_00d5:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_41 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_00dd;
	}

IL_00dd:
	{
		return;
	}
}
// Method Definition Index: 10467
// Method Definition Index: 10468
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_System_Collections_IList_get_Item_m4F705E0EB6894FB6A443D80B113389DBD8108AED (ReadOnlyCollection_1_tDA9EBC2C2934508604BBB2BA544E97C8DA1907BF* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5 L_2;
		L_2 = InterfaceFuncInvoker1< float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5 L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_3);
		return L_4;
	}
}
// Method Definition Index: 10469
// Method Definition Index: 10470
// Method Definition Index: 10471
// Method Definition Index: 10472
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m2B66B388A947DDA65092ACB0015716D7B55E6504 (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5));
		float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5 L_2 = V_0;
		return false;
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
// Method Definition Index: 10473
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_System_Collections_IList_Contains_m7D13DE72F57F8D3039EBB53EC5CEE698F8F7E7F1 (ReadOnlyCollection_1_tDA9EBC2C2934508604BBB2BA544E97C8DA1907BF* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_m2B66B388A947DDA65092ACB0015716D7B55E6504(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		bool L_3;
		L_3 = ReadOnlyCollection_1_Contains_mA2E681DDC1D0CB4B3A55B8895EDF2B7F073A417C(__this, ((*(float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// Method Definition Index: 10474
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_System_Collections_IList_IndexOf_m06D8F2AD1C53DEA339406491C5F73993CB470091 (ReadOnlyCollection_1_tDA9EBC2C2934508604BBB2BA544E97C8DA1907BF* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_m2B66B388A947DDA65092ACB0015716D7B55E6504(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		int32_t L_3;
		L_3 = ReadOnlyCollection_1_IndexOf_mDC6A3B52E8647FB457B77CF3CCF4B133C84B646B(__this, ((*(float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15));
		return L_3;
	}

IL_0015:
	{
		return (-1);
	}
}
// Method Definition Index: 10475
// Method Definition Index: 10476
// Method Definition Index: 10477
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 10449
// Method Definition Index: 10450
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_mA1936FD531DD97BDB2429883FCC9C9D00CBEA932 (ReadOnlyCollection_1_t502D44622D39E2DFE6DABEFCEA766AC61E338C30* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0);
		return L_1;
	}
}
// Method Definition Index: 10451
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IdsOfInstances_t4412C0FA3A4CE4CBFCB20E15BAB081BAC990B350 ReadOnlyCollection_1_get_Item_mF8A4DC4CE863AC97C778B6107F809A2EC2374216 (ReadOnlyCollection_1_t502D44622D39E2DFE6DABEFCEA766AC61E338C30* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		IdsOfInstances_t4412C0FA3A4CE4CBFCB20E15BAB081BAC990B350 L_2;
		L_2 = InterfaceFuncInvoker1< IdsOfInstances_t4412C0FA3A4CE4CBFCB20E15BAB081BAC990B350, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10452
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m61F61AD9BAE1A26C4A745A9C53C30BD2CD4D2725 (ReadOnlyCollection_1_t502D44622D39E2DFE6DABEFCEA766AC61E338C30* __this, IdsOfInstances_t4412C0FA3A4CE4CBFCB20E15BAB081BAC990B350 ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		IdsOfInstances_t4412C0FA3A4CE4CBFCB20E15BAB081BAC990B350 L_1 = ___0_value;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, IdsOfInstances_t4412C0FA3A4CE4CBFCB20E15BAB081BAC990B350 >::Invoke(4, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10453
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_CopyTo_m907254B9D409A343FD5B4DFEE9CB444BAC4E6BC7 (ReadOnlyCollection_1_t502D44622D39E2DFE6DABEFCEA766AC61E338C30* __this, IdsOfInstancesU5BU5D_t6627296D68BD3B37D56902FC2586A0C05853E3BF* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		IdsOfInstancesU5BU5D_t6627296D68BD3B37D56902FC2586A0C05853E3BF* L_1 = ___0_array;
		int32_t L_2 = ___1_index;
		NullCheck(L_0);
		InterfaceActionInvoker2< IdsOfInstancesU5BU5D_t6627296D68BD3B37D56902FC2586A0C05853E3BF*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1, L_2);
		return;
	}
}
// Method Definition Index: 10454
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_GetEnumerator_mEDA811E79DF206A71ED6DBD7B8DE86D41FA5A5EB (ReadOnlyCollection_1_t502D44622D39E2DFE6DABEFCEA766AC61E338C30* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 7), L_0);
		return L_1;
	}
}
// Method Definition Index: 10455
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_mC70C67627A847C94D99F61E69307F6115DB32AC3 (ReadOnlyCollection_1_t502D44622D39E2DFE6DABEFCEA766AC61E338C30* __this, IdsOfInstances_t4412C0FA3A4CE4CBFCB20E15BAB081BAC990B350 ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		IdsOfInstances_t4412C0FA3A4CE4CBFCB20E15BAB081BAC990B350 L_1 = ___0_value;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, IdsOfInstances_t4412C0FA3A4CE4CBFCB20E15BAB081BAC990B350 >::Invoke(2, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10456
// Method Definition Index: 10457
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IdsOfInstances_t4412C0FA3A4CE4CBFCB20E15BAB081BAC990B350 ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m1C90439B36E80481143CC988BE98C9385C74B32F (ReadOnlyCollection_1_t502D44622D39E2DFE6DABEFCEA766AC61E338C30* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		IdsOfInstances_t4412C0FA3A4CE4CBFCB20E15BAB081BAC990B350 L_2;
		L_2 = InterfaceFuncInvoker1< IdsOfInstances_t4412C0FA3A4CE4CBFCB20E15BAB081BAC990B350, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10458
// Method Definition Index: 10459
// Method Definition Index: 10460
// Method Definition Index: 10461
// Method Definition Index: 10462
// Method Definition Index: 10463
// Method Definition Index: 10464
// Method Definition Index: 10465
// Method Definition Index: 10466
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m66D7D91096B7C5D1A375797C1EBE91282BECED4E (ReadOnlyCollection_1_t502D44622D39E2DFE6DABEFCEA766AC61E338C30* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	IdsOfInstancesU5BU5D_t6627296D68BD3B37D56902FC2586A0C05853E3BF* V_0 = NULL;
	Type_t* V_1 = NULL;
	Type_t* V_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = il2cpp_codegen_array_get_rank(L_1);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0030:
	{
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = il2cpp_codegen_array_get_length(L_6);
		int32_t L_8 = ___1_index;
		int32_t L_9;
		L_9 = ReadOnlyCollection_1_get_Count_mA1936FD531DD97BDB2429883FCC9C9D00CBEA932(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, L_8))) >= ((int32_t)L_9)))
		{
			goto IL_0046;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(5, NULL);
	}

IL_0046:
	{
		RuntimeArray* L_10 = ___0_array;
		V_0 = ((IdsOfInstancesU5BU5D_t6627296D68BD3B37D56902FC2586A0C05853E3BF*)IsInstSealed((RuntimeObject*)L_10, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)));
		IdsOfInstancesU5BU5D_t6627296D68BD3B37D56902FC2586A0C05853E3BF* L_11 = V_0;
		if (!L_11)
		{
			goto IL_005e;
		}
	}
	{
		RuntimeObject* L_12 = __this->___list;
		IdsOfInstancesU5BU5D_t6627296D68BD3B37D56902FC2586A0C05853E3BF* L_13 = V_0;
		int32_t L_14 = ___1_index;
		NullCheck(L_12);
		InterfaceActionInvoker2< IdsOfInstancesU5BU5D_t6627296D68BD3B37D56902FC2586A0C05853E3BF*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_12, L_13, L_14);
		return;
	}

IL_005e:
	{
		RuntimeArray* L_15 = ___0_array;
		NullCheck(L_15);
		Type_t* L_16;
		L_16 = il2cpp_codegen_object_get_type(L_15);
		NullCheck(L_16);
		Type_t* L_17;
		L_17 = VirtualFuncInvoker0< Type_t* >::Invoke(46, L_16);
		V_1 = L_17;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 12)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		V_2 = L_19;
		Type_t* L_20 = V_1;
		Type_t* L_21 = V_2;
		NullCheck(L_20);
		bool L_22;
		L_22 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_20, L_21);
		if (L_22)
		{
			goto IL_008c;
		}
	}
	{
		Type_t* L_23 = V_2;
		Type_t* L_24 = V_1;
		NullCheck(L_23);
		bool L_25;
		L_25 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_23, L_24);
		if (L_25)
		{
			goto IL_008c;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_008c:
	{
		RuntimeArray* L_26 = ___0_array;
		V_3 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_26, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = V_3;
		if (L_27)
		{
			goto IL_009b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_009b:
	{
		RuntimeObject* L_28 = __this->___list;
		NullCheck(L_28);
		int32_t L_29;
		L_29 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_28);
		V_4 = L_29;
	}
	try
	{
		{
			V_5 = 0;
			goto IL_00cd_1;
		}

IL_00ad_1:
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_30 = V_3;
			int32_t L_31 = ___1_index;
			int32_t L_32 = L_31;
			___1_index = ((int32_t)il2cpp_codegen_add(L_32, 1));
			RuntimeObject* L_33 = __this->___list;
			int32_t L_34 = V_5;
			NullCheck(L_33);
			IdsOfInstances_t4412C0FA3A4CE4CBFCB20E15BAB081BAC990B350 L_35;
			L_35 = InterfaceFuncInvoker1< IdsOfInstances_t4412C0FA3A4CE4CBFCB20E15BAB081BAC990B350, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_33, L_34);
			IdsOfInstances_t4412C0FA3A4CE4CBFCB20E15BAB081BAC990B350 L_36 = L_35;
			RuntimeObject* L_37 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_36);
			NullCheck(L_30);
			ArrayElementTypeCheck (L_30, L_37);
			(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (RuntimeObject*)L_37);
			int32_t L_38 = V_5;
			V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
		}

IL_00cd_1:
		{
			int32_t L_39 = V_5;
			int32_t L_40 = V_4;
			if ((((int32_t)L_39) < ((int32_t)L_40)))
			{
				goto IL_00ad_1;
			}
		}
		{
			goto IL_00dd;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00d5;
		}
		throw e;
	}

CATCH_00d5:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_41 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_00dd;
	}

IL_00dd:
	{
		return;
	}
}
// Method Definition Index: 10467
// Method Definition Index: 10468
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_System_Collections_IList_get_Item_m17AB8AD0B6D93E359BF524A764FBF306002B5F8A (ReadOnlyCollection_1_t502D44622D39E2DFE6DABEFCEA766AC61E338C30* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		IdsOfInstances_t4412C0FA3A4CE4CBFCB20E15BAB081BAC990B350 L_2;
		L_2 = InterfaceFuncInvoker1< IdsOfInstances_t4412C0FA3A4CE4CBFCB20E15BAB081BAC990B350, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		IdsOfInstances_t4412C0FA3A4CE4CBFCB20E15BAB081BAC990B350 L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_3);
		return L_4;
	}
}
// Method Definition Index: 10469
// Method Definition Index: 10470
// Method Definition Index: 10471
// Method Definition Index: 10472
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m86717E0B268FC5F5BE5EEA037F882F913717BC36 (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	IdsOfInstances_t4412C0FA3A4CE4CBFCB20E15BAB081BAC990B350 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(IdsOfInstances_t4412C0FA3A4CE4CBFCB20E15BAB081BAC990B350));
		IdsOfInstances_t4412C0FA3A4CE4CBFCB20E15BAB081BAC990B350 L_2 = V_0;
		return false;
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
// Method Definition Index: 10473
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_System_Collections_IList_Contains_m280293D105FDE547D373AC5B631ED06574B72AB1 (ReadOnlyCollection_1_t502D44622D39E2DFE6DABEFCEA766AC61E338C30* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_m86717E0B268FC5F5BE5EEA037F882F913717BC36(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		bool L_3;
		L_3 = ReadOnlyCollection_1_Contains_m61F61AD9BAE1A26C4A745A9C53C30BD2CD4D2725(__this, ((*(IdsOfInstances_t4412C0FA3A4CE4CBFCB20E15BAB081BAC990B350*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// Method Definition Index: 10474
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_System_Collections_IList_IndexOf_mA3242ADDB388E3026759856A22D6BE98CB745BDB (ReadOnlyCollection_1_t502D44622D39E2DFE6DABEFCEA766AC61E338C30* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_m86717E0B268FC5F5BE5EEA037F882F913717BC36(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		int32_t L_3;
		L_3 = ReadOnlyCollection_1_IndexOf_mC70C67627A847C94D99F61E69307F6115DB32AC3(__this, ((*(IdsOfInstances_t4412C0FA3A4CE4CBFCB20E15BAB081BAC990B350*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15));
		return L_3;
	}

IL_0015:
	{
		return (-1);
	}
}
// Method Definition Index: 10475
// Method Definition Index: 10476
// Method Definition Index: 10477
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 10449
// Method Definition Index: 10450
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m8BBBA71F7E653FD881BAB6DBA0B7491E201F4A1A (ReadOnlyCollection_1_t6902277BA0F804A3B22466CBEF4B07E1FB12E479* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0);
		return L_1;
	}
}
// Method Definition Index: 10451
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE ReadOnlyCollection_1_get_Item_m381AA141D251B4C5712DC3EA53805239B69258C1 (ReadOnlyCollection_1_t6902277BA0F804A3B22466CBEF4B07E1FB12E479* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		ShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE L_2;
		L_2 = InterfaceFuncInvoker1< ShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10452
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_mE965B78D4C7A68816A24B72AAB973616BE9D18E0 (ReadOnlyCollection_1_t6902277BA0F804A3B22466CBEF4B07E1FB12E479* __this, ShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		ShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE L_1 = ___0_value;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, ShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE >::Invoke(4, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10453
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_CopyTo_mAC5AD734BBFB53DD97840785B2A536E9D2416DDA (ReadOnlyCollection_1_t6902277BA0F804A3B22466CBEF4B07E1FB12E479* __this, ShadowResolutionRequestU5BU5D_tC33A2E5E2712B8688E21C80BB2350155D029B334* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		ShadowResolutionRequestU5BU5D_tC33A2E5E2712B8688E21C80BB2350155D029B334* L_1 = ___0_array;
		int32_t L_2 = ___1_index;
		NullCheck(L_0);
		InterfaceActionInvoker2< ShadowResolutionRequestU5BU5D_tC33A2E5E2712B8688E21C80BB2350155D029B334*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1, L_2);
		return;
	}
}
// Method Definition Index: 10454
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_GetEnumerator_mC312BA1F1180BBBD75ADC5FA63E91CCF206426E5 (ReadOnlyCollection_1_t6902277BA0F804A3B22466CBEF4B07E1FB12E479* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 7), L_0);
		return L_1;
	}
}
// Method Definition Index: 10455
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m9C7502E77592EEE40AFD08845CBA291A2EA1DE24 (ReadOnlyCollection_1_t6902277BA0F804A3B22466CBEF4B07E1FB12E479* __this, ShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		ShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE L_1 = ___0_value;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, ShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE >::Invoke(2, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10456
// Method Definition Index: 10457
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m6DF12D9661A109A05B4505917B2FB789C1C26FF2 (ReadOnlyCollection_1_t6902277BA0F804A3B22466CBEF4B07E1FB12E479* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		ShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE L_2;
		L_2 = InterfaceFuncInvoker1< ShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10458
// Method Definition Index: 10459
// Method Definition Index: 10460
// Method Definition Index: 10461
// Method Definition Index: 10462
// Method Definition Index: 10463
// Method Definition Index: 10464
// Method Definition Index: 10465
// Method Definition Index: 10466
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_mC94C2584A0188636DAD0B565337EAA3C22F30A21 (ReadOnlyCollection_1_t6902277BA0F804A3B22466CBEF4B07E1FB12E479* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	ShadowResolutionRequestU5BU5D_tC33A2E5E2712B8688E21C80BB2350155D029B334* V_0 = NULL;
	Type_t* V_1 = NULL;
	Type_t* V_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = il2cpp_codegen_array_get_rank(L_1);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0030:
	{
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = il2cpp_codegen_array_get_length(L_6);
		int32_t L_8 = ___1_index;
		int32_t L_9;
		L_9 = ReadOnlyCollection_1_get_Count_m8BBBA71F7E653FD881BAB6DBA0B7491E201F4A1A(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, L_8))) >= ((int32_t)L_9)))
		{
			goto IL_0046;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(5, NULL);
	}

IL_0046:
	{
		RuntimeArray* L_10 = ___0_array;
		V_0 = ((ShadowResolutionRequestU5BU5D_tC33A2E5E2712B8688E21C80BB2350155D029B334*)IsInstSealed((RuntimeObject*)L_10, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)));
		ShadowResolutionRequestU5BU5D_tC33A2E5E2712B8688E21C80BB2350155D029B334* L_11 = V_0;
		if (!L_11)
		{
			goto IL_005e;
		}
	}
	{
		RuntimeObject* L_12 = __this->___list;
		ShadowResolutionRequestU5BU5D_tC33A2E5E2712B8688E21C80BB2350155D029B334* L_13 = V_0;
		int32_t L_14 = ___1_index;
		NullCheck(L_12);
		InterfaceActionInvoker2< ShadowResolutionRequestU5BU5D_tC33A2E5E2712B8688E21C80BB2350155D029B334*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_12, L_13, L_14);
		return;
	}

IL_005e:
	{
		RuntimeArray* L_15 = ___0_array;
		NullCheck(L_15);
		Type_t* L_16;
		L_16 = il2cpp_codegen_object_get_type(L_15);
		NullCheck(L_16);
		Type_t* L_17;
		L_17 = VirtualFuncInvoker0< Type_t* >::Invoke(46, L_16);
		V_1 = L_17;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 12)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		V_2 = L_19;
		Type_t* L_20 = V_1;
		Type_t* L_21 = V_2;
		NullCheck(L_20);
		bool L_22;
		L_22 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_20, L_21);
		if (L_22)
		{
			goto IL_008c;
		}
	}
	{
		Type_t* L_23 = V_2;
		Type_t* L_24 = V_1;
		NullCheck(L_23);
		bool L_25;
		L_25 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_23, L_24);
		if (L_25)
		{
			goto IL_008c;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_008c:
	{
		RuntimeArray* L_26 = ___0_array;
		V_3 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_26, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = V_3;
		if (L_27)
		{
			goto IL_009b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_009b:
	{
		RuntimeObject* L_28 = __this->___list;
		NullCheck(L_28);
		int32_t L_29;
		L_29 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_28);
		V_4 = L_29;
	}
	try
	{
		{
			V_5 = 0;
			goto IL_00cd_1;
		}

IL_00ad_1:
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_30 = V_3;
			int32_t L_31 = ___1_index;
			int32_t L_32 = L_31;
			___1_index = ((int32_t)il2cpp_codegen_add(L_32, 1));
			RuntimeObject* L_33 = __this->___list;
			int32_t L_34 = V_5;
			NullCheck(L_33);
			ShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE L_35;
			L_35 = InterfaceFuncInvoker1< ShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_33, L_34);
			ShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE L_36 = L_35;
			RuntimeObject* L_37 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_36);
			NullCheck(L_30);
			ArrayElementTypeCheck (L_30, L_37);
			(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (RuntimeObject*)L_37);
			int32_t L_38 = V_5;
			V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
		}

IL_00cd_1:
		{
			int32_t L_39 = V_5;
			int32_t L_40 = V_4;
			if ((((int32_t)L_39) < ((int32_t)L_40)))
			{
				goto IL_00ad_1;
			}
		}
		{
			goto IL_00dd;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00d5;
		}
		throw e;
	}

CATCH_00d5:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_41 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_00dd;
	}

IL_00dd:
	{
		return;
	}
}
// Method Definition Index: 10467
// Method Definition Index: 10468
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_System_Collections_IList_get_Item_m758C54D116582C43EED05F6196CED2D430B5C744 (ReadOnlyCollection_1_t6902277BA0F804A3B22466CBEF4B07E1FB12E479* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		ShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE L_2;
		L_2 = InterfaceFuncInvoker1< ShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		ShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_3);
		return L_4;
	}
}
// Method Definition Index: 10469
// Method Definition Index: 10470
// Method Definition Index: 10471
// Method Definition Index: 10472
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m2C114C70F2EA92C114400CDE3FC98781109BFFE2 (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	ShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE));
		ShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE L_2 = V_0;
		return false;
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
// Method Definition Index: 10473
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_System_Collections_IList_Contains_mCCE18D91E9118ACE39DA394762358A60225CD3E6 (ReadOnlyCollection_1_t6902277BA0F804A3B22466CBEF4B07E1FB12E479* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_m2C114C70F2EA92C114400CDE3FC98781109BFFE2(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		bool L_3;
		L_3 = ReadOnlyCollection_1_Contains_mE965B78D4C7A68816A24B72AAB973616BE9D18E0(__this, ((*(ShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// Method Definition Index: 10474
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_System_Collections_IList_IndexOf_m44693667E31730A86EF38871B9D891602D9B52F9 (ReadOnlyCollection_1_t6902277BA0F804A3B22466CBEF4B07E1FB12E479* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_m2C114C70F2EA92C114400CDE3FC98781109BFFE2(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		int32_t L_3;
		L_3 = ReadOnlyCollection_1_IndexOf_m9C7502E77592EEE40AFD08845CBA291A2EA1DE24(__this, ((*(ShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15));
		return L_3;
	}

IL_0015:
	{
		return (-1);
	}
}
// Method Definition Index: 10475
// Method Definition Index: 10476
// Method Definition Index: 10477
#ifdef __clang__
#pragma clang diagnostic pop
#endif
