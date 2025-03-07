#ifndef TARGETMODEL_H
#define TARGETMODEL_H

#include "videoSource/videoSource.h"
#include "serialPort/pmbcbspkeeper.h"
#ifndef TEAMCOLOR
#define TEAMCOLOR
enum teamColor{teamColor_red = 0,teamColor_blue = 1};
#endif

class targetModel
{
public:
    targetModel();
    virtual void amend(const ImageData* imageData) = 0;//修正预测模型
    //virtual void amend(const axisData* AxisData) = 0;//修正预测模型
    void setEnemyColor(teamColor EnemyColor);
    virtual cv::Point2f getFuturePosition(const float offset) = 0;//获得预测点
protected:
    teamColor EnemyColor;
};

#endif // TARGETMODEL_H
