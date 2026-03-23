#include "stubs.h"

// KINECT / NUI STUBS
// Do NOT return fake skeleton data (that was the Xenia dead end)
// Wire these to libfreenect when ready
// Each call prints [KINECT-REVIEW] so you can track which are hit

// xenia ref: xam_nui.cc
PPC_EXTERN_FUNC(__imp__PsCamDeviceRequest) {
    fprintf(stderr, "[KINECT-REVIEW] PsCamDeviceRequest\n");
    ctx.r3.u64 = 0;
}

// xenia ref: xam_nui.cc
PPC_EXTERN_FUNC(__imp__XamNuiCameraElevationGetAngle) {
    fprintf(stderr, "[KINECT-REVIEW] XamNuiCameraElevationGetAngle\n");
    ctx.r3.u64 = 0;
}

PPC_EXTERN_FUNC(__imp__XamNuiCameraElevationSetAngle) {
    fprintf(stderr, "[KINECT-REVIEW] XamNuiCameraElevationSetAngle\n");
    ctx.r3.u64 = 0;
}

PPC_EXTERN_FUNC(__imp__XamNuiCameraElevationStopMovement) {
    fprintf(stderr, "[KINECT-REVIEW] XamNuiCameraElevationStopMovement\n");
    ctx.r3.u64 = 0;
}

PPC_EXTERN_FUNC(__imp__XamNuiCameraRememberFloor) {
    fprintf(stderr, "[KINECT-REVIEW] XamNuiCameraRememberFloor\n");
    ctx.r3.u64 = 0;
}

// xenia ref: xam_nui.cc
PPC_EXTERN_FUNC(__imp__XamNuiCameraTiltGetStatus) {
    fprintf(stderr, "[KINECT-REVIEW] XamNuiCameraTiltGetStatus\n");
    ctx.r3.u64 = 0;
}

PPC_EXTERN_FUNC(__imp__XamNuiCameraTiltReportStatus) {
    fprintf(stderr, "[KINECT-REVIEW] XamNuiCameraTiltReportStatus\n");
    ctx.r3.u64 = 0;
}

PPC_EXTERN_FUNC(__imp__XamNuiCameraTiltSetCallback) {
    fprintf(stderr, "[KINECT-REVIEW] XamNuiCameraTiltSetCallback\n");
    ctx.r3.u64 = 0;
}

// xenia ref: xam_nui.cc
PPC_EXTERN_FUNC(__imp__XamNuiIdentityGetSessionId) {
    fprintf(stderr, "[KINECT-REVIEW] XamNuiIdentityGetSessionId\n");
    ctx.r3.u64 = 0;
}

PPC_EXTERN_FUNC(__imp__XamReadBiometricData) {
    fprintf(stderr, "[KINECT-REVIEW] XamReadBiometricData\n");
    ctx.r3.u64 = 0;
}

PPC_EXTERN_FUNC(__imp__XamShowNuiControllerRequiredUI) {
    fprintf(stderr, "[KINECT-REVIEW] XamShowNuiControllerRequiredUI\n");
    ctx.r3.u64 = 0;
}

PPC_EXTERN_FUNC(__imp__XamShowNuiDeviceSelectorUI) {
    fprintf(stderr, "[KINECT-REVIEW] XamShowNuiDeviceSelectorUI\n");
    ctx.r3.u64 = 0;
}

PPC_EXTERN_FUNC(__imp__XamShowNuiGamerCardUIForXUID) {
    fprintf(stderr, "[KINECT-REVIEW] XamShowNuiGamerCardUIForXUID\n");
    ctx.r3.u64 = 0;
}

// xenia ref: xam_nui.cc
PPC_EXTERN_FUNC(__imp__XamShowNuiGuideUI) {
    fprintf(stderr, "[KINECT-REVIEW] XamShowNuiGuideUI\n");
    ctx.r3.u64 = 0;
}

PPC_EXTERN_FUNC(__imp__XamShowNuiMarketplaceUI) {
    fprintf(stderr, "[KINECT-REVIEW] XamShowNuiMarketplaceUI\n");
    ctx.r3.u64 = 0;
}

// xenia ref: xam_ui.cc
PPC_EXTERN_FUNC(__imp__XamShowNuiSigninUI) {
    fprintf(stderr, "[KINECT-REVIEW] XamShowNuiSigninUI\n");
    ctx.r3.u64 = 0;
}

// xenia ref: xam_nui.cc
PPC_EXTERN_FUNC(__imp__XamShowNuiTroubleshooterUI) {
    fprintf(stderr, "[KINECT-REVIEW] XamShowNuiTroubleshooterUI\n");
    ctx.r3.u64 = 0;
}

// xenia ref: xam_nui.cc
PPC_EXTERN_FUNC(__imp__XamUserNuiEnableBiometric) {
    fprintf(stderr, "[KINECT-REVIEW] XamUserNuiEnableBiometric\n");
    ctx.r3.u64 = 0;
}

PPC_EXTERN_FUNC(__imp__XamUserNuiGetEnrollmentIndex) {
    fprintf(stderr, "[KINECT-REVIEW] XamUserNuiGetEnrollmentIndex\n");
    ctx.r3.u64 = 0;
}

// xenia ref: xam_nui.cc
PPC_EXTERN_FUNC(__imp__XamUserNuiGetUserIndex) {
    fprintf(stderr, "[KINECT-REVIEW] XamUserNuiGetUserIndex\n");
    ctx.r3.u64 = 0;
}

PPC_EXTERN_FUNC(__imp__XamWriteBiometricData) {
    fprintf(stderr, "[KINECT-REVIEW] XamWriteBiometricData\n");
    ctx.r3.u64 = 0;
}

