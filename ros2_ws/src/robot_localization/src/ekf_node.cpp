/*
 * Copyright (c) 2018, Locus Robotics
 * Copyright (c) 2019, Steve Macenski
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * 1. Redistributions of source code must retain the above copyright
 * notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above
 * copyright notice, this list of conditions and the following
 * disclaimer in the documentation and/or other materials provided
 * with the distribution.
 * 3. Neither the name of the copyright holder nor the names of its
 * contributors may be used to endorse or promote products derived
 * from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
 * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 */
#include <memory>

#include "rclcpp/rclcpp.hpp"
#include "robot_localization/ros_filter_types.hpp"

int main(int argc, char **argv) {
  rclcpp::init(argc, argv);
  rclcpp::NodeOptions options;
  options.arguments({"ekf_filter_node"});
  /*
  std::shared_ptr
  포인터, 스마트 포인터 둘다 힙 영역에 위치, 하지만 일반 포인터는 직접 delete 해줘야하지만 스마트 포인터는 자동으로 해제(RAII)
  가비지 컬렉션이 없기때문, c++ 11이상부터는 스마트 포인터를 적극 권장
  여기서 표준 라이브러리의 스마트 포인터가 3가지 있음
  unique_ptr: 한명의 소유자만 허용
  shared_ptr: 참조 횟수가 계산 되는 스마트 포인터, 원시 포인터 하나를 여러 소유자에게 할당할 경우 사용 => 참조수가 0이 되면 파괴
  weak_ptr: shared_ptr과 같이 사용할 수 있는 포인터, 참조수 계산에 포함되지 않음, 순환 참조를 막기 이해서 주로 사용
  */
  std::shared_ptr<robot_localization::RosEkf> filter =
      std::make_shared<robot_localization::RosEkf>(options);
  filter->initialize();
  rclcpp::spin(filter->get_node_base_interface());
  rclcpp::shutdown();
  return 0;
}
