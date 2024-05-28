/// @file
/// Copyright (C) 2019 cadwork informatik AG
///
/// This file is part of the CwAPI3D module for cadwork 3d.
///
/// @ingroup       CwAPI3D
/// @since         26.0
/// @author        Paquet
/// @date          2019-03-04

#pragma once

#include <string>

namespace CwAPI3D
{
  namespace Interfaces
  {
    /// \brief
    class ICwAPI3DBimController
    {
    public:
      /// @brief Gets the last error message.
      /// @param aErrorCode A pointer to an integer where the error code will be stored.
      /// @return A string containing the last error message.
      virtual std::string getLastError(int aErrorCode) = 0;
    };
  }
}