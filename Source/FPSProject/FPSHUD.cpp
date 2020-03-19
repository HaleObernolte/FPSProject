// Fill out your copyright notice in the Description page of Project Settings.

#include "FPSProject.h"
#include "FPSHUD.h"

void AFPSHUD::DrawHUD() {
	if (CrosshairTexture != NULL) {
		// Find the center of our canvas
		FVector2D Center(Canvas->ClipX * 0.5f, Canvas->ClipY * 0.5f);

		// Offset by half of the texture's dimensions
		FVector2D CrossHairDrawPosition(Center.X - (CrosshairTexture->GetSurfaceWidth() * 0.5f), Center.Y - (CrosshairTexture->GetSurfaceHeight() * 0.5f));

		// Draw the crosshair at the centerpoint
		FCanvasTileItem TileItem(CrossHairDrawPosition, CrosshairTexture->Resource, FLinearColor::Red);
		TileItem.BlendMode = SE_BLEND_Translucent;
		Canvas->DrawItem(TileItem);
	}
}

