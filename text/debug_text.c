#include "global.h"
#include "text.h"
#include "debug_text.h"


/* Debug Menu */


const char D_08059668[] = "�Q";

// (Lots of stuff from here on isn't translated, but it's mostly game names anyway)
const char D_0805966c[] = "�V�[�P���X�@�e�X�g";

const char D_08059680[] = "��";

const char D_08059684[] = "�P�^�P";

// Data Clear
const char D_0805968c[] = "�f�[�^�N���A";

const char D_0805969c[] = "�G���f�B���O�i���܂�����j";

const char D_080596b8[] = "�G���f�B���O�i�N���A���j";

const char D_080596d4[] = "�q�|�h�p�@�i��������j";

const char D_080596ec[] = "�q�|�h�p�@�i�h�������b�X���j";

const char D_0805970c[] = "�q�|�h�p�@�i�~�j�Q�[���j";

const char D_08059728[] = "�q�|�h�p�@�i�J�E���Z���[�j";

const char D_08059744[] = "�q�|�h�p�@�i�p�[�t�F�N�g�j";

const char D_08059760[] = "�q�|�h�p�@�i�ɂイ���j";

const char D_08059778[] = "�q�|�h�p�@�i���U���g�S�j";

const char D_08059794[] = "�q�|�h�p�@�i���U���g�R�j";

const char D_080597b0[] = "�q�|�h�p�@�i���U���g�Q�j";

const char D_080597cc[] = "�q�|�h�p�@�i���U���g�j";

const char D_080597e4[] = "�q�|�h�p�@�i�I�v�V�����j";

const char D_08059800[] = "�q�|�h�p�@�i�X�^�W�I�j";

const char D_08059818[] = "�q�|�h�p�@�i����傤���j";

const char D_08059834[] = "�q�|�h�p�@�i�Q�[���j";

const char D_0805984c[] = "�q�|�h�p�@�i���j���[�j";

const char D_08059864[] = "�q�|�h�p�@�i�^�C�g���j";

// Karate Man 2
const char D_0805987c[] = "�J���e�J�@�Q";

// Karate Man
const char D_0805988c[] = "�J���e�J";

// The Snappy Trio
const char D_08059898[] = "�o���o���R�ɂ񂵂イ";

// The Clappy Trio
const char D_080598b0[] = "�p�`�p�`�R�ɂ񂵂イ";

const char D_080598c8[] = "�|�����Y���@�Q";

const char D_080598d8[] = "�|�����Y��";

const char D_080598e4[] = "�i�C�g�@�E�H�[�N�@�Q";

const char D_080598fc[] = "�i�C�g�@�E�H�[�N";

const char D_08059910[] = "���Y���������@�Q";

const char D_08059924[] = "���Y��������";

const char D_08059934[] = "�o�C�L���@�͂���";

const char D_08059948[] = "�z�b�s���O���[�h�@�Q";

const char D_08059960[] = "�z�b�s���O���[�h";

const char D_08059974[] = "�j���W���@�Q";

const char D_08059984[] = "�j���W��";

const char D_08059990[] = "���낢���΂��@�Q";

const char D_080599a4[] = "���낢���΂�";

const char D_080599b4[] = "�G�A�[�o�b�^�[�Q";

const char D_080599c8[] = "�G�A�[�o�b�^�[";

const char D_080599d8[] = "����������";

const char D_080599e4[] = "�X�[�p�[�^�b�v";

const char D_080599f4[] = "�^�b�v�_���Y";

const char D_08059a04[] = "���܁i�X�s�[�h�j";

const char D_08059a18[] = "�}�[�`���@�Q";

const char D_08059a28[] = "�}�[�`��";

const char D_08059a34[] = "�܂ق�����";

const char D_08059a44[] = "�_���X���b�X���@�P";

const char D_08059a58[] = "�E�T�M�Ƃ�";

const char D_08059a64[] = "���g���m�[��";

const char D_08059a74[] = "�n�i�r";

const char D_08059a7c[] = "�t���b�V���������e�X�g";

const char D_08059a94[] = "�������胉�b�g";

const char D_08059aa4[] = "���Y���@�����イ��";

const char D_08059ab8[] = "�h�����K�[���Y";

const char D_08059ac8[] = "�g�X�{�[�C�Y�@�Q";

const char D_08059adc[] = "�g�X�{�[�C�Y";

// Tram and Pauline
const char D_08059aec[] = "�g�����ƃ|����";

// Opening (A Type)
const char D_08059afc[] = "�I�[�v�j���O�@�i�`�@�s�������j";

// Opening (B Type)
const char D_08059b1c[] = "�I�[�v�j���O�@�i�a�@�s�������j";

const char D_08059b3c[] = "�q�h�p�f�[�^�`�F�b�N";

// Showtime
const char D_08059b54[] = "�V���[�^�C��";

const char D_08059b64[] = "�R�X���_���X";

const char D_08059b74[] = "�X�y�[�X�_���X";

const char D_08059b84[] = "���b�v�@�E�B�����i�����@�j�`�y�t�j";

const char D_08059ba8[] = "���b�v�@�E�B�����i�����@�x�n�m�d�j";

// Rap Men
const char D_08059bcc[] = "���b�v����";

// Quiz Show
const char D_08059bd8[] = "�N�C�Y";

// Text
const char D_08059be0[] = "�e�L�X�g";

// Check Machine (Total)
const char D_08059bec[] = "�`�F�b�N�}�V���@�i�g�[�^���j";

const char D_08059c0c[] = "�`�F�b�N�}�V���@�i�g���b�L�[�j";

const char D_08059c2c[] = "�`�F�b�N�}�V���@�i�L���[�t�j";

// Check Machine (Click)
const char D_08059c4c[] = "�`�F�b�N�}�V���@�i�N���b�N�j";

const char D_08059c6c[] = "�X�^�W�I�h���}�[";

const char D_08059c80[] = "���b�X���i��������W�j";

const char D_08059c98[] = "���b�X���i��������V�j";

const char D_08059cb0[] = "���b�X���i��������U�j";

const char D_08059cc8[] = "���b�X���i��������T�j";

const char D_08059ce0[] = "���b�X���i��������S�j";

const char D_08059cf8[] = "���b�X���i��������R�j";

const char D_08059d10[] = "���b�X���i��������Q�j";

const char D_08059d28[] = "���b�X���i��������P�j";

const char D_08059d40[] = "���b�X���i�X�l�A�e�N�j�b�N�j";

const char D_08059d60[] = "���b�X���i�͂₢�W�r�[�g�j";

const char D_08059d7c[] = "���b�X���i�o�X�ƃX�l�A�j";

const char D_08059d98[] = "���b�X���i�X�l�A�j";

const char D_08059dac[] = "���b�X���i�{�b�T�j";

const char D_08059dc0[] = "���b�X���i�f�X�R�r�[�g�j";

const char D_08059ddc[] = "���b�X���i�L���p�^�[���Q�j";

const char D_08059df8[] = "���b�X���i�L���p�^�[���P�j";

const char D_08059e14[] = "���b�X���i�n�[�h�Q�j";

const char D_08059e2c[] = "���b�X���i�n�[�h�P�j";

const char D_08059e44[] = "���b�X���i�C�[�W�[�j";

const char D_08059e5c[] = "�����}�V���i���b�v�j";

const char D_08059e74[] = "�����}�V���i���u�j";

const char D_08059e88[] = "�����}�V���i�l�R�j";

const char D_08059e9c[] = "�{���_���X";

const char D_08059ea8[] = "�ڂ񂨂ǂ�";

const char D_08059eb4[] = "���~�b�N�X�@�P";

const char D_08059ec4[] = "���~�b�N�X�@�Q";

const char D_08059ed4[] = "���~�b�N�X�@�R";

const char D_08059ee4[] = "���~�b�N�X�@�S";

const char D_08059ef4[] = "���~�b�N�X�@�T";

const char D_08059f04[] = "���~�b�N�X�@�U";

const char D_08059f14[] = "���~�b�N�X�@�V";

const char D_08059f24[] = "���~�b�N�X�@�W";

const char D_08059f34[] = "�E�����Ƃ�";

const char D_08059f40[] = "�}�l�L���������傤";

const char D_08059f54[] = "�N�C�Y�i�X�y�V�����j";

const char D_08059f6c[] = "�o�C�L���@�͂����@�r�o";

const char D_08059f84[] = "���C�u";

const char D_08059f8c[] = "�^";
