//
// Created by RUPC on 2023/11/30.
//

#ifndef UV_K5_FIRMWARE_CUSTOM_0_17_CHINESE_H
#define UV_K5_FIRMWARE_CUSTOM_0_17_CHINESE_H
#include "font.h"
#if ENABLE_CHINESE_FULL!=4
#define 步进频率  "\x01\x02\x03\x04"
#define 接收数字亚音  "\x05\x06\x07\x08\x09\x0B"
#define 接收模拟亚音  "\x05\x06\x0C\x0D\x09\x0B"
#define 发送数字亚音  "\x0E\x0F\x07\x08\x09\x0B"
#define 发送模拟亚音  "\x0E\x0F\x0C\x0D\x09\x0B"
#define 频差方向  "\x03\x10\x11\x12"
#define 频差频率  "\x03\x10\x03\x04"
#define 加密  "\x13\x14"
#define 遇忙禁发  "\x15\x16\x17\x0E"
#define 压扩  "\x18\x19"
#define 存置信道  "\x1A\x1B\x1C\x1D"
#define 删除信道  "\x1E\x1F\x1C\x1D"
#define 命名信道  "\x7F\x80\x1C\x1D"
#define 信道扫描列表  "\x1C\x1D\x81\x82\x83\x84"
#define 扫描列表1  "\x81\x82\x83\x84\x31"
#define 扫描列表2  "\x81\x82\x83\x84\x32"
#define 搜索恢复模式  "\x85\x86\x87\x88\x0C\x89"
#define 发送超时  "\x0E\x0F\x8A\x8B"
#define 省电模式  "\x8C\x8D\x0C\x89"
#define 麦克风增益  "\x8E\x8F\x90\x91\x92"
#define 信道显示模式  "\x1C\x1D\x93\x94\x0C\x89"
#define 自动背光  "\x95\x96\x97\x98"
#define 背光亮度  "\x97\x98\x99\x9A"
#define 首尾音  "\x9B\x9C\x0B"
#define MDC_ID  "\x4D\x44\x43\x20\x49\x44"
#define 尾音消除  "\x9C\x0B\x9D\x1F"
#define 过中继尾音消除  "\x9E\x9F\xA0\x9C\x0B\x9D\x1F"
#define 按键即呼  "\xA1\xA2\xA3\xA4"
#define DTMF_ID  "\x44\x54\x4D\x46\x20\x49\x44"
#define DTMF上线码  "\x44\x54\x4D\x46\xA5\xA6\xA7"
#define DTMF下线码  "\x44\x54\x4D\x46\xA8\xA6\xA7"
#define DTMF发送  "\x44\x54\x4D\x46\x0E\x0F"
#define DTMF侧音  "\x44\x54\x4D\x46\xA9\x0B"
#define DTMF响应  "\x44\x54\x4D\x46\xAA\xAB"
#define DTMF复位  "\x44\x54\x4D\x46\x88\xAC"
#define DTMF预载波  "\x44\x54\x4D\x46\xAD\xAE\xAF"
#define DTMF联系人  "\x44\x54\x4D\x46\xB0\xB1\xB2"
#define DTMF显示  "\x44\x54\x4D\x46\x93\x94"
#define AM自动增益  "\x41\x4D\x95\x96\x91\x92"
#define 收发模式  "\x06\x0E\x0C\x89"
#define 静噪等级  "\xB3\xB4\xB5\xB6"
#define 频段解锁  "\x03\xB7\xB8\xB9"
#define 电池调压  "\x8D\xBA\xBB\x18"
#define 电池大小  "\x8D\xBA\xBC\xBD"
#define 参数复位  "\xBE\x07\x88\xAC"
#define 关闭  "\xC1\xC2"
#define 上差  "\xA5\x10"
#define 下差  "\xA8\x10"
#define 关闭  "\xC1\xC2"
#define 开启  "\xC3\xC4"
#define 一级  "\x31\x20\xB6"
#define 二级  "\x32\x20\xB6"
#define 三级  "\x33\x20\xB6"
#define 四级  "\x34\x20\xB6"
#define 三十秒  "\x33\x30\x20\xC5"
#define 一分  "\x31\x20\xC6"
#define 两分  "\x32\x20\xC6"
#define 三分  "\x33\x20\xC6"
#define 四分  "\x34\x20\xC6"
#define 五分  "\x35\x20\xC6"
#define 六分  "\x36\x20\xC6"
#define 七分  "\x37\x20\xC6"
#define 八分  "\x38\x20\xC6"
#define 九分  "\x39\x20\xC6"
#define 十五分  "\x31\x35\x20\xC6"
#define 主信道接收发射  "\xC7\x1C\x1D\n\x05\x06\x0E\xC8"
#define 双信道接收  "\xC9\x1C\x1D\n\x05\x06"
#define 主信道发射副信道接收  "\xC7\x1C\x1D\x0E\xC8\n\xCA\x1C\x1D\x05\x06"
#define 主信道发射双信道接收  "\xC7\x1C\x1D\x0E\xC8\n\xC9\x1C\x1D\x05\x06"
#define 遇信号5秒后搜索  "\x15\x1C\xCB\n\x35\xC5\xCC\x85\x86"
#define 信号停止后搜索  "\x1C\xCB\xCD\xCE\xCC\n\x85\x86"
#define 遇信号后停止搜索  "\x15\x1C\xCB\xCC\n\xCD\xCE\x85\x86"
#define 频率  "\x03\x04"
#define 信道号  "\x1C\x1D\xCB"
#define 名称  "\x80\xCF"
#define 名称加频率  "\x80\xCF\x2B\n\x03\x04"
#define 不响应  "\xD0\xAA\xAB"
#define 本地响铃  "\xD1\xD2\xAA\xD3"
#define 回复响应  "\xD4\x88\xAA\xAB"
#define 本地响铃回复响应  "\xD1\xD2\xAA\xD3\n\xD4\x88\xAA\xAB"
#define 不发送  "\xD0\x0E\x0F"
#define 上线码  "\xA5\xA6\xA7"
#define 下线码  "\xA8\xA6\xA7"
#define 上线加下线码  "\xA5\xA6\x2B\xA8\xA6\xA7"
#define Quindar码  "\x51\x75\x69\x6E\x64\x61\x72\xA7"
#define 关闭  "\xC1\xC2"
#define ROGER尾音  "\x52\x4F\x47\x45\x52\x9C\x0B"
#define MDC尾音  "\x4D\x44\x43\x9C\x0B"
#define MDC首音  "\x4D\x44\x43\x9B\x0B"
#define MDC首尾音  "\x4D\x44\x43\x9B\x9C\x0B"
#define MDC首音加ROGER  "\x4D\x44\x43\x9B\x0B\x2B\n\x52\x4F\x47\x45\x52"
#define 除信道参数  "\x1F\x1C\x1D\xBE\x07"
#define 全部参数  "\xD5\xD6\xBE\x07"
#define 禁用全部  "\x17\xD7\xD5\xD6"
#define 解锁全部  "\xB8\xB9\xD5\xD6"
#define 五秒  "\x35\x20\xC5"
#define 十秒  "\x31\x30\x20\xC5"
#define 二十秒  "\x32\x30\x20\xC5"
#define 发送时  "\x0E\x0F\x8B"
#define 接收时  "\x05\x06\x8B"
#define 发送接收时  "\x0E\x0F\x2F\x05\x06\x8B"
#define 列表  "\x83\x84"
#define 全部  "\xD5\xD6"
#define 扫描  "\x81\x82"
#define 低电压  "\xD8\x8D\x18"
#define 长按井键解锁  "\xD9\xA1\x20\x23\x20\xA2\xB8\xB9"
#define 遇忙  "\x15\x16"
#define 禁止发射  "\x17\xCE\x0E\xC8"
#define 发送超时  "\x0E\x0F\x8A\x8B"
#define 高电压  "\xDA\x8D\x18"
#define 按EXIT键  "\xA1\x20\x45\x58\x49\x54\x20\xA2"
#define 全部按键  "\xD5\xD6\xA1\xA2"
#define 解锁  "\xB8\xB9"
#define 模拟亚音  "\x0C\x0D\x09\x0B"
#define 数字亚音  "\x07\x08\x09\x0B"
#define 频率  "\x03\x04"
#define 存置问  "\x1A\x1B\x3F"
#define 存置了  "\x1A\x1B\x3A"
#define 扫描  "\x81\x82"
#define 删除问  "\x1E\x1F\x3F"
#ifdef ENABLE_CUSTOM_SIDEFUNCTIONS

#define 侧键1短按 "\xA9\xA2\x31\xDB\xA1"
#define 侧键1长按 "\xA9\xA2\x31\xD9\xA1"
#define 侧键2短按 "\xA9\xA2\x32\xDB\xA1"
#define 侧键2长按 "\xA9\xA2\x32\xD9\xA1"
#define M键长按 "\x4D\xA2\xD9\xA1"
#define 手电 "\xDC\x8D"
#define 切换发射功率 "\xDD\xDE\x0E\xC8\xDF\x04"
#define 监听 "\xE0\xE1"
#define 声控发射 "\xE2\xE3\x0E\xC8"
#define FM收音机 "\x46\x4D\x06\x0B\xE4"
#define 锁定按键 "\xB9\xE5\xA1\xA2"
#define 切换信道 "\xDD\xDE\x1C\x1D"
#define 切换信道模式 "\xDD\xDE\x1C\x1D\x0C\x89"
#define 切换调制模式 "\xDD\xDE\xBB\xE6\x0C\x89"
#define DTMF解码 "\x44\x54\x4D\x46\xB8\xA7"
#define 切换宽窄带 "\xDD\xDE\xE7\xE8\xE9"
#define 宽窄带 "\xE7\xE8\xE9"
#define 宽带 "\xE7\xE9"
#define 窄带 "\xE8\xE9"
#ifdef ENABLE_SIDEFUNCTIONS_SEND
#define A信道发射 "A\x1C\x1D\x0E\xC8"
#define B信道发射 "B\x1C\x1D\x0E\xC8"
#define 副信道发射 "\xCA\x1C\x1D\x0E\xC8"
#endif

#endif




#elif ENABLE_CHINESE_FULL==4
#define 步进频率 "\x83\xA8\x83\x0A\x94\x10\x8F\xEC"
#define 接收数字亚音 "\x8E\x25\x82\xDD\x95\x19\x82\xBB\x81\xD2\x8A\x01"
#define 接收模拟亚音 "\x8E\x25\x82\xDD\x95\xE1\x83\x48\x81\xD2\x8A\x01"
#define 发送数字亚音 "\x81\x9A\x8A\x16\x95\x19\x82\xBB\x81\xD2\x8A\x01"
#define 发送模拟亚音 "\x81\x9A\x8A\x16\x95\xE1\x83\x48\x81\xD2\x8A\x01"
#define 频差方向 "\x94\x10\x8A\x0F\x80\xBA\x82\x5E"
#define 频差频率 "\x94\x10\x8A\x0F\x94\x10\x8F\xEC"
#define 加密 "\x81\x95\x90\x61"
#define 遇忙禁发 "\x91\xAB\x82\xB6\x93\xCF\x81\x9A"
#define 压扩 "\x81\xE2\x81\xC0"
#define 存置信道 "\x89\x80\x81\xE9\x89\x89\x92\xC8"
#define 删除信道 "\x84\x47\x8A\xB7\x89\x89\x92\xC8"
#define 命名信道 "\x86\xA4\x82\x84\x89\x89\x92\xC8"
#define 信道扫描列表 "\x89\x89\x92\xC8\x81\xC3\x8D\xFA\x81\xF4\x85\x31"
#define 扫描列表1 "\x81\xC3\x8D\xFA\x81\xF4\x85\x31\x31"
#define 扫描列表2 "\x81\xC3\x8D\xFA\x81\xF4\x85\x31\x32"
#define 搜索恢复模式 "\x90\xFB\x8B\x8C\x8A\x67\x89\x6B\x95\xE1\x81\xAA"
#define 发送超时 "\x81\x9A\x8A\x16\x90\xEB\x83\xB2"
#define 省电模式 "\x88\xD1\x81\x1C\x95\xE1\x81\xAA"
#define 麦克风增益 "\x83\x05\x83\x70\x80\xAE\x97\x51\x8D\x26"
#define 信道显示模式 "\x89\x89\x92\xC8\x88\xE5\x80\xDF\x95\xE1\x81\xAA"
#define 开机显示 "\x80\x56\x81\xD9\x88\xE5\x80\xDF"
#define 自动背光 "\x82\x5B\x81\xAF\x88\xC8\x82\x08"
#define 背光亮度 "\x88\xC8\x82\x08\x89\xEA\x89\xEC"
#define 首尾音 "\x8A\x1E\x84\xE1\x8A\x01"
#define MDC_ID "\x4D\x44\x43\x20\x49\x44"
#define 尾音消除 "\x84\xE1\x8A\x01\x8D\x45\x8A\xB7"
#define 过中继尾音消除 "\x81\xDB\x80\x80\x8D\xE2\x84\xE1\x8A\x01\x8D\x45\x8A\xB7"
#define 按键即呼 "\x88\x24\x94\x8E\x84\xDC\x86\x20"
#define DTMF_ID "\x44\x54\x4D\x46\x20\x49\x44"
#define DTMF上线码 "\x44\x54\x4D\x46\x80\x29\x87\xBB\x85\xCF"
#define DTMF下线码 "\x44\x54\x4D\x46\x80\x21\x87\xBB\x85\xCF"
#define DTMF发送 "\x44\x54\x4D\x46\x81\x9A\x8A\x16"
#define DTMF侧音 "\x44\x54\x4D\x46\x86\x80\x8A\x01"
#define DTMF响应 "\x44\x54\x4D\x46\x89\x18\x84\x6A"
#define DTMF复位 "\x44\x54\x4D\x46\x89\x6B\x84\x1B"
#define DTMF预载波 "\x44\x54\x4D\x46\x8D\xD4\x8B\x13\x87\x3C"
#define DTMF联系人 "\x44\x54\x4D\x46\x91\x1A\x84\x5A\x80\x0A"
#define DTMF显示 "\x44\x54\x4D\x46\x88\xE5\x80\xDF"
#define AM自动增益 "\x41\x4D\x82\x5B\x81\xAF\x97\x51\x8D\x26"
#define 收发模式 "\x82\xDD\x81\x9A\x95\xE1\x81\xAA"
#define 静噪等级 "\x95\x92\x98\xF7\x92\x3D\x82\xFA"
#define 频段解锁 "\x94\x10\x89\x71\x94\xEA\x92\x0C"
#define 两百M发射 "\x32\x30\x30\x4D\x81\x9A\x8C\x89"
#define 三百五十M发射 "\x33\x35\x30\x4D\x81\x9A\x8C\x89"
#define 五百M发射 "\x35\x30\x30\x4D\x81\x9A\x8C\x89"
#define 三百五十M接收 "\x33\x35\x30\x4D\x8E\x25\x82\xDD"
#define 电池调压 "\x81\x1C\x82\xB0\x8D\xA0\x81\xE2"
#define 电池大小 "\x81\x1C\x82\xB0\x80\x24\x80\x2A"
#define 参数复位 "\x87\xB8\x95\x19\x89\x6B\x84\x1B"
#define 关闭 "\x82\xA3\x82\x9E"
#define 上差 "\xA5\x10"
#define 下差 "\xA8\x10"
#define 关闭 "\x82\xA3\x82\x9E"
#define 开启 "\x80\x56\x84\xC5"
#define 一级 "\x31\x20\x82\xFA"
#define 二级 "\x32\x20\x82\xFA"
#define 三级 "\x33\x20\x82\xFA"
#define 四级 "\x34\x20\x82\xFA"
#define 三十秒 "\x33\x30\x20\x89\x64"
#define 一分 "\x31\x20\x80\xA7"
#define 两分 "\x32\x20\x80\xA7"
#define 三分 "\x33\x20\x80\xA7"
#define 四分 "\x34\x20\x80\xA7"
#define 五分 "\x35\x20\x80\xA7"
#define 六分 "\x36\x20\x80\xA7"
#define 七分 "\x37\x20\x80\xA7"
#define 八分 "\x38\x20\x80\xA7"
#define 九分 "\x39\x20\x80\xA7"
#define 十五分 "\x31\x35\x20\x80\xA7"
#define 主信道接收发射 "\x81\x64\x89\x89\x92\xC8\n\x8E\x25\x82\xDD\x81\x9A\x8C\x89"
#define 双信道接收 "\x80\xD7\x89\x89\x92\xC8\n\x8E\x25\x82\xDD"
#define 主信道发射副信道接收 "\x81\x64\x89\x89\x92\xC8\x81\x9A\x8C\x89\n\x8E\x8D\x89\x89\x92\xC8\x8E\x25\x82\xDD"
#define 主信道发射双信道接收 "\x81\x64\x89\x89\x92\xC8\x81\x9A\x8C\x89\n\x80\xD7\x89\x89\x92\xC8\x8E\x25\x82\xDD"
#define 遇信号5秒后搜索 "\x91\xAB\x89\x89\x81\x1B\n\x35\x89\x64\x82\x61\x90\xFB\x8B\x8C"
#define 信号停止后搜索 "\x89\x89\x81\x1B\x8F\x7F\x80\x7C\x82\x61\n\x90\xFB\x8B\x8C"
#define 遇信号后停止搜索 "\x91\xAB\x89\x89\x81\x1B\x82\x61\n\x8F\x7F\x80\x7C\x90\xFB\x8B\x8C"
#define 频率 "\x94\x10\x8F\xEC"
#define 信道号 "\x89\x89\x92\xC8\x81\x1B"
#define 名称 "\x82\x84\x8C\x57"
#define 名称加频率 "\x82\x84\x8C\x57\x2B\n\x94\x10\x8F\xEC"
#define 不响应 "\x80\x68\x89\x18\x84\x6A"
#define 本地响铃 "\x80\xF4\x81\xC6\x89\x18\x8C\x36"
#define 回复响应 "\x82\x20\x89\x6B\x89\x18\x84\x6A"
#define 本地响铃回复响应 "\x80\xF4\x81\xC6\x89\x18\x8C\x36\n\x82\x20\x89\x6B\x89\x18\x84\x6A"
#define 不发送 "\x80\x68\x81\x9A\x8A\x16"
#define 上线码 "\x80\x29\x87\xBB\x85\xCF"
#define 下线码 "\x80\x21\x87\xBB\x85\xCF"
#define 上线加下线码 "\x80\x29\x87\xBB\x2B\x80\x21\x87\xBB\x85\xCF"
#define Quindar码 "\x51\x75\x69\x6E\x64\x61\x72\x85\xCF"
#define 关闭 "\x82\xA3\x82\x9E"
#define ROGER尾音 "\x52\x4F\x47\x45\x52\x84\xE1\x8A\x01"
#define MDC尾音 "\x4D\x44\x43\x84\xE1\x8A\x01"
#define MDC首音 "\x4D\x44\x43\x8A\x1E\x8A\x01"
#define MDC首尾音 "\x4D\x44\x43\x8A\x1E\x84\xE1\x8A\x01"
#define MDC首音加ROGER "\x4D\x44\x43\x8A\x1E\x8A\x01\x2B\n\x52\x4F\x47\x45\x52"
#define 除信道参数 "\x8A\xB7\x89\x89\x92\xC8\x87\xB8\x95\x19"
#define 全部参数 "\x82\x65\x8D\x11\x87\xB8\x95\x19"
#define 禁用全部 "\x93\xCF\x81\x50\x82\x65\x8D\x11"
#define 解锁全部 "\x94\xEA\x92\x0C\x82\x65\x8D\x11"
#define 五秒 "\x35\x20\x89\x64"
#define 十秒 "\x31\x30\x20\x89\x64"
#define 二十秒 "\x32\x30\x20\x89\x64"
#define 发送时 "\x81\x9A\x8A\x16\x83\xB2"
#define 接收时 "\x8E\x25\x82\xDD\x83\xB2"
#define 发送接收时 "\x81\x9A\x8A\x16\x2F\x8E\x25\x82\xDD\x83\xB2"
#define 全部 "\x82\x65\x8D\x11"
#define 扫描 "\x81\xC3\x8D\xFA"
#define 低电压 "\x84\x16\x81\x1C\x81\xE2"
#define 长按井键解锁 "\x80\x8E\x88\x24\x20\x23\x20\x94\x8E\x94\xEA\x92\x0C"
#define 遇忙 "\x91\xAB\x82\xB6"
#define 禁止发射 "\x93\xCF\x80\x7C\x81\x9A\x8C\x89"
#define 发送超时 "\x81\x9A\x8A\x16\x90\xEB\x83\xB2"
#define 高电压 "\x8C\xE9\x81\x1C\x81\xE2"
#define 按EXIT键 "\x88\x24\x20\x45\x58\x49\x54\x20\x94\x8E"
#define 全部按键 "\x82\x65\x8D\x11\x88\x24\x94\x8E"
#define 解锁 "\x94\xEA\x92\x0C"
#define 存置问 "\x89\x80\x81\xE9\x3F"
#define 存置了 "\x89\x80\x81\xE9\x3A"
#define 扫描 "\x81\xC3\x8D\xFA"
#define 删除问 "\x84\x47\x8A\xB7\x3F"
#define 列表 "\x81\xF4\x85\x31"
#define 模拟亚音 "\x95\xE1\x83\x48\x81\xD2\x8A\x01"
#define 数字亚音 "\x95\x19\x82\xBB\x81\xD2\x8A\x01"

#define 图片 "\x86\x4C\x80\x92"
#define 信息 "\x89\x89\x8C\x8C"

#ifdef ENABLE_CUSTOM_SIDEFUNCTIONS
#define 侧键1短按 "\x86\x80\x94\x8E\x80\x01\x92\x23\x88\x24"
#define 侧键1长按 "\x86\x80\x94\x8E\x80\x01\x80\x8E\x88\x24"
#define 侧键2短按 "\x86\x80\x94\x8E\x80\x03\x92\x23\x88\x24"
#define 侧键2长按 "\x86\x80\x94\x8E\x80\x03\x80\x8E\x88\x24"
#define M键长按 "\x4D\x94\x8E\x80\x8E\x88\x24"
#define 手电 "\x80\x86\x81\x1C\x92\x44"
#define 切换发射功率 "\x82\xCB\x94\x6D\x81\x9A\x8C\x89\x80\xEA\x8F\xEC"
#define 监听 "\x8B\xCE\x83\xD3"
#define 声控发射 "\x83\x45\x8E\x29\x81\x9A\x8C\x89"
#define FM收音机 "\x46\x4D\x82\xDD\x8A\x01\x81\xD9"
#define 锁定按键 "\x92\x0C\x87\x56\x88\x24\x94\x8E"
#define 切换信道 "\x80\x7A\x8B\x2F\x89\x89\x92\xC8"
#define 切换信道模式 "\x80\x7A\x8B\x2F\x89\x89\x92\xC8\x95\xE1\x81\xAA"
#define 切换调制模式 "\x80\x7A\x8B\x2F\x8D\xA0\x86\x58\x95\xE1\x81\xAA"
#define DTMF解码 "\x44\x54\x4D\x46\x94\xEA\x85\xCF"
#define 切换宽窄带 "\x80\x7A\x8B\x2F\x8D\x75\x8D\x7D\x88\x3B"
#define 宽窄带 "\x8D\x75\x8D\x7D\x88\x3B"
#define 宽带 "\x8D\x75\x88\x3B"
#define 窄带 "\x8D\x7D\x88\x3B"

#ifdef ENABLE_SIDEFUNCTIONS_SEND
#define A信道发射 "A\x89\x89\x92\xC8\x81\x9A\x8C\x89"
#define B信道发射 "B\x89\x89\x92\xC8\x81\x9A\x8C\x89"
#define 副信道发射 "\x8E\x8D\x89\x89\x92\xC8\x81\x9A\x8C\x89"
#endif
#endif

#endif
#endif //UV_K5_FIRMWARE_CUSTOM_0_17_CHINESE_H
