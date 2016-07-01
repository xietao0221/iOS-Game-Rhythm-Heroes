struct ClassRegistrationContext;
void InvokeRegisterStaticallyLinkedModuleClasses(ClassRegistrationContext& context)
{
	// Do nothing (we're in stripping mode)
}

void RegisterStaticallyLinkedModulesGranular()
{
	void RegisterModule_Animation();
	RegisterModule_Animation();

	void RegisterModule_Audio();
	RegisterModule_Audio();

	void RegisterModule_ParticleSystem();
	RegisterModule_ParticleSystem();

	void RegisterModule_Physics();
	RegisterModule_Physics();

	void RegisterModule_Physics2D();
	RegisterModule_Physics2D();

	void RegisterModule_TextRendering();
	RegisterModule_TextRendering();

	void RegisterModule_UI();
	RegisterModule_UI();

	void RegisterModule_IMGUI();
	RegisterModule_IMGUI();

}

void RegisterAllClasses()
{
	//Total: 75 classes
	//0. MeshFilter
	void RegisterClass_MeshFilter();
	RegisterClass_MeshFilter();

	//1. Component
	void RegisterClass_Component();
	RegisterClass_Component();

	//2. EditorExtension
	void RegisterClass_EditorExtension();
	RegisterClass_EditorExtension();

	//3. Mesh
	void RegisterClass_Mesh();
	RegisterClass_Mesh();

	//4. NamedObject
	void RegisterClass_NamedObject();
	RegisterClass_NamedObject();

	//5. Renderer
	void RegisterClass_Renderer();
	RegisterClass_Renderer();

	//6. LineRenderer
	void RegisterClass_LineRenderer();
	RegisterClass_LineRenderer();

	//7. GUILayer
	void RegisterClass_GUILayer();
	RegisterClass_GUILayer();

	//8. Behaviour
	void RegisterClass_Behaviour();
	RegisterClass_Behaviour();

	//9. Texture
	void RegisterClass_Texture();
	RegisterClass_Texture();

	//10. Texture2D
	void RegisterClass_Texture2D();
	RegisterClass_Texture2D();

	//11. RenderTexture
	void RegisterClass_RenderTexture();
	RegisterClass_RenderTexture();

	//12. NetworkView
	void RegisterClass_NetworkView();
	RegisterClass_NetworkView();

	//13. RectTransform
	void RegisterClass_RectTransform();
	RegisterClass_RectTransform();

	//14. Transform
	void RegisterClass_Transform();
	RegisterClass_Transform();

	//15. Shader
	void RegisterClass_Shader();
	RegisterClass_Shader();

	//16. TextAsset
	void RegisterClass_TextAsset();
	RegisterClass_TextAsset();

	//17. Material
	void RegisterClass_Material();
	RegisterClass_Material();

	//18. Sprite
	void RegisterClass_Sprite();
	RegisterClass_Sprite();

	//19. Camera
	void RegisterClass_Camera();
	RegisterClass_Camera();

	//20. MonoBehaviour
	void RegisterClass_MonoBehaviour();
	RegisterClass_MonoBehaviour();

	//21. GameObject
	void RegisterClass_GameObject();
	RegisterClass_GameObject();

	//22. Collider
	void RegisterClass_Collider();
	RegisterClass_Collider();

	//23. MeshCollider
	void RegisterClass_MeshCollider();
	RegisterClass_MeshCollider();

	//24. Collider2D
	void RegisterClass_Collider2D();
	RegisterClass_Collider2D();

	//25. AudioClip
	void RegisterClass_AudioClip();
	RegisterClass_AudioClip();

	//26. SampleClip
	void RegisterClass_SampleClip();
	RegisterClass_SampleClip();

	//27. AudioSource
	void RegisterClass_AudioSource();
	RegisterClass_AudioSource();

	//28. AudioBehaviour
	void RegisterClass_AudioBehaviour();
	RegisterClass_AudioBehaviour();

	//29. Animation
	void RegisterClass_Animation();
	RegisterClass_Animation();

	//30. Animator
	void RegisterClass_Animator();
	RegisterClass_Animator();

	//31. DirectorPlayer
	void RegisterClass_DirectorPlayer();
	RegisterClass_DirectorPlayer();

	//32. Font
	void RegisterClass_Font();
	RegisterClass_Font();

	//33. Canvas
	void RegisterClass_Canvas();
	RegisterClass_Canvas();

	//34. CanvasGroup
	void RegisterClass_CanvasGroup();
	RegisterClass_CanvasGroup();

	//35. CanvasRenderer
	void RegisterClass_CanvasRenderer();
	RegisterClass_CanvasRenderer();

	//36. SpriteRenderer
	void RegisterClass_SpriteRenderer();
	RegisterClass_SpriteRenderer();

	//37. RuntimeAnimatorController
	void RegisterClass_RuntimeAnimatorController();
	RegisterClass_RuntimeAnimatorController();

	//38. PreloadData
	void RegisterClass_PreloadData();
	RegisterClass_PreloadData();

	//39. Cubemap
	void RegisterClass_Cubemap();
	RegisterClass_Cubemap();

	//40. Texture3D
	void RegisterClass_Texture3D();
	RegisterClass_Texture3D();

	//41. LevelGameManager
	void RegisterClass_LevelGameManager();
	RegisterClass_LevelGameManager();

	//42. GameManager
	void RegisterClass_GameManager();
	RegisterClass_GameManager();

	//43. TimeManager
	void RegisterClass_TimeManager();
	RegisterClass_TimeManager();

	//44. GlobalGameManager
	void RegisterClass_GlobalGameManager();
	RegisterClass_GlobalGameManager();

	//45. AudioManager
	void RegisterClass_AudioManager();
	RegisterClass_AudioManager();

	//46. InputManager
	void RegisterClass_InputManager();
	RegisterClass_InputManager();

	//47. Physics2DSettings
	void RegisterClass_Physics2DSettings();
	RegisterClass_Physics2DSettings();

	//48. MeshRenderer
	void RegisterClass_MeshRenderer();
	RegisterClass_MeshRenderer();

	//49. GraphicsSettings
	void RegisterClass_GraphicsSettings();
	RegisterClass_GraphicsSettings();

	//50. QualitySettings
	void RegisterClass_QualitySettings();
	RegisterClass_QualitySettings();

	//51. PhysicsManager
	void RegisterClass_PhysicsManager();
	RegisterClass_PhysicsManager();

	//52. AnimationClip
	void RegisterClass_AnimationClip();
	RegisterClass_AnimationClip();

	//53. Motion
	void RegisterClass_Motion();
	RegisterClass_Motion();

	//54. TagManager
	void RegisterClass_TagManager();
	RegisterClass_TagManager();

	//55. AudioListener
	void RegisterClass_AudioListener();
	RegisterClass_AudioListener();

	//56. AnimatorController
	void RegisterClass_AnimatorController();
	RegisterClass_AnimatorController();

	//57. ScriptMapper
	void RegisterClass_ScriptMapper();
	RegisterClass_ScriptMapper();

	//58. DelayedCallManager
	void RegisterClass_DelayedCallManager();
	RegisterClass_DelayedCallManager();

	//59. RenderSettings
	void RegisterClass_RenderSettings();
	RegisterClass_RenderSettings();

	//60. Light
	void RegisterClass_Light();
	RegisterClass_Light();

	//61. MonoScript
	void RegisterClass_MonoScript();
	RegisterClass_MonoScript();

	//62. MonoManager
	void RegisterClass_MonoManager();
	RegisterClass_MonoManager();

	//63. FlareLayer
	void RegisterClass_FlareLayer();
	RegisterClass_FlareLayer();

	//64. PlayerSettings
	void RegisterClass_PlayerSettings();
	RegisterClass_PlayerSettings();

	//65. CapsuleCollider
	void RegisterClass_CapsuleCollider();
	RegisterClass_CapsuleCollider();

	//66. BuildSettings
	void RegisterClass_BuildSettings();
	RegisterClass_BuildSettings();

	//67. ResourceManager
	void RegisterClass_ResourceManager();
	RegisterClass_ResourceManager();

	//68. NetworkManager
	void RegisterClass_NetworkManager();
	RegisterClass_NetworkManager();

	//69. MasterServerInterface
	void RegisterClass_MasterServerInterface();
	RegisterClass_MasterServerInterface();

	//70. LightmapSettings
	void RegisterClass_LightmapSettings();
	RegisterClass_LightmapSettings();

	//71. ParticleSystem
	void RegisterClass_ParticleSystem();
	RegisterClass_ParticleSystem();

	//72. ParticleSystemRenderer
	void RegisterClass_ParticleSystemRenderer();
	RegisterClass_ParticleSystemRenderer();

	//73. LightProbes
	void RegisterClass_LightProbes();
	RegisterClass_LightProbes();

	//74. RuntimeInitializeOnLoadManager
	void RegisterClass_RuntimeInitializeOnLoadManager();
	RegisterClass_RuntimeInitializeOnLoadManager();

}
