#include "menu_items.hpp"
#include "menu_functions.hpp"

const mmh::MenuItem mmh::DATA_BASE = {
    "1 - ���� ������", mmh::data_base, &mmh::STUDY };
const mmh::MenuItem mmh::MULTISTREAM_PROG = {
    "2 - ������������� ����������������", mmh::multistream_prog, &mmh::STUDY };
const mmh::MenuItem mmh::WEB_TECH = {
    "3 - ������� ����������", mmh::web_tech, &mmh::STUDY };
const mmh::MenuItem mmh::OTHER_GO_BACK = {
    "0 - ����� � ���������� ����", mmh::other_go_back, &mmh::STUDY };

namespace
{
    const mmh::MenuItem* other_children[] = {
        &mmh::OTHER_GO_BACK,
        &mmh::DATA_BASE,
        &mmh::MULTISTREAM_PROG,
        &mmh::WEB_TECH };
    const int other_size = sizeof(other_children) / sizeof(other_children[0]);
}

const mmh::MenuItem mmh::STUDY_PROG_LANG = {
    "1 - ������� ����� ����������������", mmh::study_prog_lang, &mmh::STUDY };
const mmh::MenuItem mmh::STUDY_ALGORITHMS = {
    "2 - ��������� � ���������", mmh::study_algorithms, &mmh::STUDY };
const mmh::MenuItem mmh::STUDY_OTHER_TECHNOLOGIES = {
    "3 - ������ ����������", mmh::study_other_technologies, &mmh::STUDY, other_children, other_size};
const mmh::MenuItem mmh::STUDY_GO_BACK = {
    "0 - ����� � ������� ����", mmh::study_go_back, &mmh::STUDY };

namespace
{
    const mmh::MenuItem* study_children[] = {
        &mmh::STUDY_GO_BACK,
        &mmh::STUDY_PROG_LANG,
        &mmh::STUDY_ALGORITHMS,
        &mmh::STUDY_OTHER_TECHNOLOGIES };
    const int study_size = sizeof(study_children) / sizeof(study_children[0]);
}

const mmh::MenuItem mmh::STUDY = {
    "1 - ������� ����������������", mmh::show_menu, &mmh::MAIN, study_children, study_size };
const mmh::MenuItem mmh::EXIT = {
    "0 - ����� ������ � ������", mmh::exit, &mmh::MAIN };

namespace
{
    const mmh::MenuItem* main_children[] = {
        &mmh::EXIT,
        &mmh::STUDY };
    const int main_size = sizeof(main_children) / sizeof(main_children[0]);
}

const mmh::MenuItem mmh::MAIN = {
    nullptr, mmh::show_menu, nullptr, main_children, main_size };
