#pragma once

#include "Audio.h"
#include "DirectXCommon.h"
#include "Input.h"
#include "Model.h"
#include "SafeDelete.h"
#include "Sprite.h"
#include "ViewProjection.h"
#include "WorldTransform.h"
#include"DebugCamera.h"

/// <summary>
/// ゲームシーン
/// </summary>
class GameScene {
	// テキストハンドル
	uint32_t textureHandole_ = 0;
	Sprite* sprite_ = nullptr;
	Model* model_ = nullptr;
	// デバックカメラ
	DebugCamera* debgCamera_ = nullptr;
	WorldTransform worldTransform_;
	ViewProjection viewProjection_;

	//サウンドデータハンドル
	uint32_t soundDataHandle_ = 0;
	uint32_t voiceHandle_ = 0;
	//ImGuiで値を入力する変数
	float inputFloat3[3] = {0, 0, 0};

	

public: // メンバ関数
	/// <summary>
	/// コンストクラタ
	/// </summary>
	
	
	GameScene();

	/// <summary>
	/// デストラクタ
	/// </summary>
	~GameScene();

	/// <summary>
	/// 初期化
	/// </summary>
	void Initialize();

	/// <summary>
	/// 毎フレーム処理
	/// </summary>
	void Update();

	/// <summary>
	/// 描画
	/// </summary>
	void Draw();

private: // メンバ変数
	DirectXCommon* dxCommon_ = nullptr;
	Input* input_ = nullptr;
	Audio* audio_ = nullptr;

	/// <summary>
	/// ゲームシーン用
	/// </summary>
};
