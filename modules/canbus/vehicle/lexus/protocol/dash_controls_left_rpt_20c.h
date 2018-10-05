/******************************************************************************
 * Copyright 2018 The Apollo Authors. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *****************************************************************************/

#ifndef MODULES_CANBUS_VEHICLE_LEXUS_PROTOCOL_DASH_CONTROLS_LEFT_RPT_20C_H_
#define MODULES_CANBUS_VEHICLE_LEXUS_PROTOCOL_DASH_CONTROLS_LEFT_RPT_20C_H_

#include "modules/canbus/proto/chassis_detail.pb.h"
#include "modules/drivers/canbus/can_comm/protocol_data.h"

namespace apollo {
namespace canbus {
namespace lexus {

class Dashcontrolsleftrpt20c : public ::apollo::drivers::canbus::ProtocolData<
                                   ::apollo::canbus::ChassisDetail> {
 public:
  static const int32_t ID;
  Dashcontrolsleftrpt20c();
  void Parse(const std::uint8_t* bytes, int32_t length,
             ChassisDetail* chassis) const override;

 private:
  // config detail: {'name': 'OUTPUT_VALUE', 'enum': {0:
  // 'OUTPUT_VALUE_DASH_CONTROL_NONE', 1: 'OUTPUT_VALUE_DASH_CONTROL_OK', 2:
  // 'OUTPUT_VALUE_DASH_CONTROL_LEFT', 3: 'OUTPUT_VALUE_DASH_CONTROL_RIGHT', 4:
  // 'OUTPUT_VALUE_DASH_CONTROL_UP', 5: 'OUTPUT_VALUE_DASH_CONTROL_DOWN'},
  // 'precision': 1.0, 'len': 8, 'is_signed_var': False, 'offset': 0.0,
  // 'physical_range': '[0|255]', 'bit': 31, 'type': 'enum', 'order':
  // 'motorola', 'physical_unit': ''}
  Dash_controls_left_rpt_20c::Output_valueType output_value(
      const std::uint8_t* bytes, const int32_t length) const;

  // config detail: {'name': 'COMMANDED_VALUE', 'enum': {0:
  // 'COMMANDED_VALUE_DASH_CONTROL_NONE', 1: 'COMMANDED_VALUE_DASH_CONTROL_OK',
  // 2: 'COMMANDED_VALUE_DASH_CONTROL_LEFT', 3:
  // 'COMMANDED_VALUE_DASH_CONTROL_RIGHT', 4: 'COMMANDED_VALUE_DASH_CONTROL_UP',
  // 5: 'COMMANDED_VALUE_DASH_CONTROL_DOWN'}, 'precision': 1.0, 'len': 8,
  // 'is_signed_var': False, 'offset': 0.0, 'physical_range': '[0|255]', 'bit':
  // 23, 'type': 'enum', 'order': 'motorola', 'physical_unit': ''}
  Dash_controls_left_rpt_20c::Commanded_valueType commanded_value(
      const std::uint8_t* bytes, const int32_t length) const;

  // config detail: {'name': 'MANUAL_INPUT', 'enum': {0:
  // 'MANUAL_INPUT_DASH_CONTROL_NONE', 1: 'MANUAL_INPUT_DASH_CONTROL_OK', 2:
  // 'MANUAL_INPUT_DASH_CONTROL_LEFT', 3: 'MANUAL_INPUT_DASH_CONTROL_RIGHT', 4:
  // 'MANUAL_INPUT_DASH_CONTROL_UP', 5: 'MANUAL_INPUT_DASH_CONTROL_DOWN'},
  // 'precision': 1.0, 'len': 8, 'is_signed_var': False, 'offset': 0.0,
  // 'physical_range': '[0|255]', 'bit': 15, 'type': 'enum', 'order':
  // 'motorola', 'physical_unit': ''}
  Dash_controls_left_rpt_20c::Manual_inputType manual_input(
      const std::uint8_t* bytes, const int32_t length) const;

  // config detail: {'name': 'VEHICLE_FAULT', 'offset': 0.0, 'precision': 1.0,
  // 'len': 1, 'is_signed_var': False, 'physical_range': '[0|1]', 'bit': 6,
  // 'type': 'bool', 'order': 'motorola', 'physical_unit': ''}
  bool vehicle_fault(const std::uint8_t* bytes, const int32_t length) const;

  // config detail: {'name': 'PACMOD_FAULT', 'offset': 0.0, 'precision': 1.0,
  // 'len': 1, 'is_signed_var': False, 'physical_range': '[0|1]', 'bit': 5,
  // 'type': 'bool', 'order': 'motorola', 'physical_unit': ''}
  bool pacmod_fault(const std::uint8_t* bytes, const int32_t length) const;

  // config detail: {'name': 'OVERRIDE_ACTIVE', 'offset': 0.0, 'precision': 1.0,
  // 'len': 1, 'is_signed_var': False, 'physical_range': '[0|1]', 'bit': 1,
  // 'type': 'bool', 'order': 'motorola', 'physical_unit': ''}
  bool override_active(const std::uint8_t* bytes, const int32_t length) const;

  // config detail: {'name': 'OUTPUT_REPORTED_FAULT', 'offset': 0.0,
  // 'precision': 1.0, 'len': 1, 'is_signed_var': False, 'physical_range':
  // '[0|1]', 'bit': 4, 'type': 'bool', 'order': 'motorola', 'physical_unit':
  // ''}
  bool output_reported_fault(const std::uint8_t* bytes,
                             const int32_t length) const;

  // config detail: {'name': 'INPUT_OUTPUT_FAULT', 'offset': 0.0,
  // 'precision': 1.0, 'len': 1, 'is_signed_var': False, 'physical_range':
  // '[0|1]', 'bit': 3, 'type': 'bool', 'order': 'motorola', 'physical_unit':
  // ''}
  bool input_output_fault(const std::uint8_t* bytes,
                          const int32_t length) const;

  // config detail: {'name': 'ENABLED', 'offset': 0.0, 'precision': 1.0, 'len':
  // 1, 'is_signed_var': False, 'physical_range': '[0|1]', 'bit': 0, 'type':
  // 'bool', 'order': 'motorola', 'physical_unit': ''}
  bool enabled(const std::uint8_t* bytes, const int32_t length) const;

  // config detail: {'name': 'COMMAND_OUTPUT_FAULT', 'offset': 0.0,
  // 'precision': 1.0, 'len': 1, 'is_signed_var': False, 'physical_range':
  // '[0|1]', 'bit': 2, 'type': 'bool', 'order': 'motorola', 'physical_unit':
  // ''}
  bool command_output_fault(const std::uint8_t* bytes,
                            const int32_t length) const;
};

}  // namespace lexus
}  // namespace canbus
}  // namespace apollo

#endif  // MODULES_CANBUS_VEHICL_LEXUS_PROTOCOL_DASH_CONTROLS_LEFT_RPT_20C_H_
