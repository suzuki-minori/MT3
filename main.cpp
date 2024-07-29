#include <Novice.h>
#include<string>
#include "Matrix4x4.h"
#include "MatrixMath.h"
#include"MyMath.h"
#include"Vector3.h"

const char kWindowTitle[] = "LC1A_16_スズキ_ミノリ_タイトル";


//Vector3の表示関数
static const int kRowHeight = 20;
static const int kColumnWidth = 60;

void MatrixScreenPrintf(int x, int y, const Matrix4x4& matrix, const char* label) {

	Novice::ScreenPrintf(x, y, label);
	for (int row = 0; row < 4; ++row) {
		for (int column = 0; column < 4; ++column) {
			Novice::ScreenPrintf(x + column * kColumnWidth, y + row * kRowHeight + kRowHeight, "%6.02f", matrix.m[row][column]);
		}
	}
}


// Windowsアプリでのエントリーポイント(main関数)
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {

	// ライブラリの初期化
	Novice::Initialize(kWindowTitle, 1280, 720);

	// キー入力結果を受け取る箱

	char keys[256] = { 0 };
	char preKeys[256] = { 0 };



	//Matrix4x4 m1 = {
	//	3.2f,0.7f,9.6f,4.4f,
	//	5.5f,1.3f,7.8f,2.1f,
	//	6.9f,8.0f,2.6f,1.0f,
	//	0.5f,7.2f,5.1f,3.3f
	//};

	//Matrix4x4 m2 = {
	//	4.1f,6.5f,3.3f,2.2f,
	//	8.8f,0.6f,9.9f,7.7f,
	//	1.1f,5.5f,6.6f,0.0f,
	//	3.3f,9.9f,8.8f,2.2f
	//};


	//Matrix4x4 resultAdd = MatrixMath::Add(m1, m2);
	//Matrix4x4 resultMultiply = MatrixMath::Multiply(m1, m2);
	//Matrix4x4 resultSubtract = MatrixMath::Subtract(m1, m2);
	//Matrix4x4 inverseM1 = MatrixMath::Inverse(m1);
	//Matrix4x4 inverseM2 = MatrixMath::Inverse(m2);
	//Matrix4x4 transposeM1 = MatrixMath::Transpose(m1);
	//Matrix4x4 transposeM2 = MatrixMath::Transpose(m2);
	//Matrix4x4 identity = MatrixMath::MakeIdentity4x4();

	//Vector3 translate{ 4.1f,2.6f,0.8f };
	//Vector3 scale{ 1.5f,5.2f,7.3f };
	//Matrix4x4 translateMatrix = MatrixMath::MakeTranslateMatrix(translate);
	//Matrix4x4 scaleMatrix = MatrixMath::MakeScaleMatrix(scale);
	//Vector3 point{ 2.3f,3.8f,1.4f };
	//Matrix4x4 transformMatrix = {
	//	1.0f,2.0f,3.0f,4.0f,
	//	3.0f,1.0f,1.0f,2.0f,
	//	1.0f,4.0f,2.0f,3.0f,
	//	2.0f,2.0f,1.0f,3.0f
	//};
	//Vector3 transformed = MyMath::Transform(point, transformMatrix);
	//Vector3 rotate{ 0.4f,1.43f,-0.8f };
	//Matrix4x4 rotateXMatrix = MatrixMath::MakeRotateXMatrix(rotate.x);
	//Matrix4x4 rotateYMatrix = MatrixMath::MakeRotateYMatrix(rotate.y);
	//Matrix4x4 rotateZMatrix = MatrixMath::MakeRotateZMatrix(rotate.z);
	//Matrix4x4 rotateXYZMatrix = MatrixMath::Multiply(rotateXMatrix, MatrixMath::Multiply(rotateYMatrix, rotateZMatrix));

	//Vector3 scale{ 1.2f,0.79f,-2.1f };
	//Vector3 rotate{ 0.4f,1.43f,-0.8f };
	//Vector3 translate{ 2.7f,-4.15f,1.57f };
	//Matrix4x4 worldMatrix = MatrixMath::MakeAffineMatrix(scale, rotate, translate);


	Matrix4x4 orthographicMatrix = MatrixMath::MakeOrthographicMatrix(-160.0f, 160.0f, 200.0f, 300.0f, 0.0f, 1000.0f);
	Matrix4x4 perspectiveFovMatrix = MatrixMath::MakePerspectiveFovMatrix(0.63f, 1.33f, 0.1f, 1000.0f);
	Matrix4x4 viewportMatrix = MatrixMath::MakeViewportMatrix(100.0f, 200.0f, 600.0f, 300.0f, 0.0f, 1.0f);


	// ウィンドウの×ボタンが押されるまでループ
	while (Novice::ProcessMessage() == 0) {
		// フレームの開始
		Novice::BeginFrame();

		// キー入力を受け取る
		memcpy(preKeys, keys, 256);
		Novice::GetHitKeyStateAll(keys);

		///
		/// ↓更新処理ここから
		///


		/*MatrixScreenPrintf(0, 0, resultAdd, "Add");
		MatrixScreenPrintf(0, kRowHeight * 5, resultSubtract, "Subtract");
		MatrixScreenPrintf(0, kRowHeight * 5 * 2, resultMultiply, "Multiply");
		MatrixScreenPrintf(0, kRowHeight * 5 * 3, inverseM1, "inverseM1");
		MatrixScreenPrintf(0, kRowHeight * 5 * 4, inverseM2, "inverseM2");
		MatrixScreenPrintf(kColumnWidth * 5, 0, transposeM1, "transposeM1");
		MatrixScreenPrintf(kColumnWidth * 5,kRowHeight*5,transposeM2,"transposeM2");
		MatrixScreenPrintf(kColumnWidth * 5, kRowHeight * 5 * 2, identity, "identity");*/

	/*	MyMath::VectorScreenPrintf(0, 0, transformed, "transformed");
		MatrixScreenPrintf(0, 15, translateMatrix, "translateMatrix");
		MatrixScreenPrintf(0, 15 + kRowHeight * 5, scaleMatrix, "scaleMatrix");*/


		/*MatrixScreenPrintf(0, 0, rotateXMatrix, "rotateXMatrix");
		MatrixScreenPrintf(0, kRowHeight * 5, rotateYMatrix, "rotateYMatrix");
		MatrixScreenPrintf(0, kRowHeight * 5 * 2, rotateZMatrix, "rotateZMatrix");
		MatrixScreenPrintf(0, kRowHeight * 5 * 3, rotateXYZMatrix, "rotateXYZMatrix");*/

		//MatrixScreenPrintf(0, 0, worldMatrix, "worldMatrix");

		MatrixScreenPrintf(0, 0, orthographicMatrix, "orthographicMatrix");
		MatrixScreenPrintf(0, kRowHeight * 5, perspectiveFovMatrix, "perspectiveFovMatrix");
		MatrixScreenPrintf(0, kRowHeight * 10, viewportMatrix, "viewportMatrix") ;


		///
		/// ↑更新処理ここまで
		///

		///
		/// ↓描画処理ここから
		///



		///
		/// ↑描画処理ここまで
		///

		// フレームの終了
		Novice::EndFrame();

		// ESCキーが押されたらループを抜ける
		if (preKeys[DIK_ESCAPE] == 0 && keys[DIK_ESCAPE] != 0) {
			break;
		}
	}

	// ライブラリの終了
	Novice::Finalize();
	return 0;

}

